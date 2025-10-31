/*******************************************************************************
  PHY Utils file

  File Name:
    phy_utils.c

  Summary:
    This file contains utility functions

  Description:
    None
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE_END

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "phy_utils.h"
#include "ieee_phy_const.h"


static ie_arrays_t ackIe;

static struct fpb_shrtaddr saArray[IEEE802154_FBP_SHORTADDR_LIST_SIZE];
static struct fpb_extaddr eaArray[IEEE802154_FBP_EXTADDR_LIST_SIZE];

bool isACkRequested(uint16_t aFcf)
{
    return (aFcf & FCF_ACK_REQUEST);
}

bool is2015FrameVersion(uint16_t aFcf)
{
    return ((aFcf & FCF_FRAME_VER_MASK) == FCF_FRAME_VER_2);
}

bool isDstAddrPresent(uint16_t aFcf) 
{ 
    return (aFcf & FCF_DST_ADDR_MASK) != FCF_DST_ADDR_NONE; 
}

bool isSrcAddrPresent(uint16_t aFcf) 
{ 
    return (aFcf & FCF_SRC_ADDR_MASK) != FCF_SRC_ADDR_NONE; 
}

bool isSrcPanIdPresent(uint16_t fcf)
{
    bool present = isSrcAddrPresent(fcf) && ((fcf & FCF_PAN_ID_COMPRESSION) == 0);
    // Special case for a IEEE 802.15.4-2015 frame: When both
    // addresses are extended, then the source PAN iD is not present
    // independent of PAN ID Compression. In this case, if the PAN ID
    // compression is set, it indicates that no PAN ID is in the
    // frame, while if the PAN ID Compression is zero, it indicates
    // the presence of the destination PAN ID in the frame.

    if ((is2015FrameVersion(fcf)) && ((fcf & (FCF_SRC_ADDR_MASK | FCF_DST_ADDR_MASK)) == (FCF_DST_ADDR_EXT | FCF_SRC_ADDR_EXT)))
    {
        present = false;
    }

    return present;
}

bool isDestPanIdPresent(uint16_t fcf)
{
   bool present = true;

    if ((is2015FrameVersion(fcf)))
    {
        switch (fcf & (FCF_DST_ADDR_MASK | FCF_SRC_ADDR_MASK | FCF_PAN_ID_COMPRESSION))
        {
        case (FCF_DST_ADDR_NONE | FCF_SRC_ADDR_NONE):
        case (FCF_DST_ADDR_EXT | FCF_DST_ADDR_NONE | FCF_PAN_ID_COMPRESSION):
        case (FCF_DST_ADDR_SHORT | FCF_DST_ADDR_NONE | FCF_PAN_ID_COMPRESSION):
        case (FCF_DST_ADDR_NONE | FCF_SRC_ADDR_EXT):
        case (FCF_DST_ADDR_NONE | FCF_SRC_ADDR_SHORT):
        case (FCF_DST_ADDR_NONE | FCF_SRC_ADDR_EXT | FCF_PAN_ID_COMPRESSION):
        case (FCF_DST_ADDR_NONE | FCF_SRC_ADDR_SHORT | FCF_PAN_ID_COMPRESSION):
        case (FCF_DST_ADDR_EXT | FCF_SRC_ADDR_EXT | FCF_PAN_ID_COMPRESSION):
            present = false;
            break;
        default:
            break;
        }
    }
    else
    {
        present = isDstAddrPresent(fcf);
    }

    return present; 
}

uint8_t parseFrame(uint8_t *rxFrame, frameInfo_t *frameInfo)
{
	uint8_t frameIdx = 2;
    uint8_t *rxFrameMpdu = rxFrame;
    uint16_t fcf = 0;
    uint8_t keyIdMode, keyIdLen = 0;
    frameInfo->frameLen = *rxFrameMpdu;

	fcf = (uint16_t)( (*(rxFrameMpdu + 1)) | ( ((uint16_t)*(rxFrameMpdu + 2)) << 8 ) );

    if(!(fcf & FCF_SEQ_NO_COMPRESSION))
    {
        frameIdx++;
    }

    frameInfo->fcf.value = fcf;
	frameInfo->seqNum_offset = frameIdx;

    frameInfo->seqNum = rxFrameMpdu[frameIdx++];
	
	frameInfo->destPanId_offset = frameIdx;
    // Destination PAN ID
    frameInfo->dstPanid = rxFrameMpdu[frameIdx] | (rxFrameMpdu[frameIdx+1] << 8);
    frameIdx += 2;
	
	frameInfo->destAddr_offset = frameIdx;
    // Destination Address
    switch(fcf & FCF_DST_ADDR_MASK)
    {
        case FCF_DST_ADDR_SHORT:
            frameInfo->dstAddr.dstShAddr = rxFrameMpdu[frameIdx] | (rxFrameMpdu[frameIdx+1] << 8);
            frameIdx += 2;
            break;

        case FCF_DST_ADDR_EXT:
            memcpy(frameInfo->dstAddr.dstExtAddr, (uint8_t *)&rxFrameMpdu[frameIdx], 8);
            frameIdx += 8;
            break;

        default:
            break;
    }

	frameInfo->srcPanid_offset = frameIdx;

    // Source PAN ID (if not compressed)
    if(isSrcPanIdPresent(fcf))
    {
        frameInfo->srcPanid = rxFrameMpdu[frameIdx] | (rxFrameMpdu[frameIdx+1] << 8);
        frameIdx += 2;
    }
	frameInfo->srcAddr_offset = frameIdx;
    // Source Address
    switch(fcf & FCF_SRC_ADDR_MASK)
    {
        case FCF_SRC_ADDR_SHORT:
            frameInfo->srcAddr.srcShAddr = rxFrameMpdu[frameIdx] | (rxFrameMpdu[frameIdx+1] << 8);
            frameIdx += 2;
            break;

        case FCF_SRC_ADDR_EXT:
            memcpy(frameInfo->srcAddr.srcExtAddr, (uint8_t *)&rxFrameMpdu[frameIdx], 8);
            frameIdx += 8;
            break;

        default:
            break;
    }

	frameInfo->secCtrl_offset = frameIdx;

    // Security fields
    if(frameInfo->fcf.security_enabled)
    {
		frameInfo->secCtrl_offset = frameIdx;
        frameInfo->securityControl.value = rxFrameMpdu[frameIdx++];

		frameInfo->frameCounter_offset = frameIdx;
        memcpy((uint8_t *)&frameInfo->frameCounter, &(rxFrameMpdu[frameIdx]), sizeof(frameInfo->frameCounter));
        frameIdx += 4;

        keyIdMode = frameInfo->securityControl.keyIdMode;
        if (keyIdMode == 0)
        {
            keyIdLen = 0;
        }
        else if (keyIdMode == 1)
        {
            keyIdLen = 1;
            frameInfo->keyId.keyIndex = rxFrameMpdu[frameIdx];
        }
        else if (keyIdMode == 2)
        {
            keyIdLen = 5;
            memcpy(frameInfo->keyId.keySource_5, (uint8_t *)&rxFrameMpdu[frameIdx], keyIdLen);
        }
        else if (keyIdMode == 3)
        {
            keyIdLen = 9;
            memcpy(frameInfo->keyId.keySource_9, (uint8_t *)&rxFrameMpdu[frameIdx], keyIdLen);
        }
		frameInfo->keyId_offset = frameIdx;
        frameIdx += keyIdLen;
    }
	if((uint8_t)(frameInfo->fcf.frame_type) == 0x03 && !(is2015FrameVersion(frameInfo->fcf.value)))
	{
		frameIdx += 1;
	}

	return frameIdx - 1;
    
}

uint8_t buildEnhancedAckFrame( frameInfo_t *recFrameInfo, uint8_t *ackPtr, bool isIePresent, uint8_t ie_len, const uint8_t *ie_data_ptr, bool fpb, uint32_t fc)
{
	uint8_t  *ackFrame = ackPtr;
    uint16_t rxFcf = recFrameInfo->fcf.value;
    uint8_t frameLen = 0;

    uint16_t ack_fcf = 0x0002; // Frame Type ACK
    if(recFrameInfo->fcf.security_enabled)
    {
        ack_fcf |= (1 << 3);
    }

    if(recFrameInfo->fcf.pan_id_compression)
    {
        ack_fcf |= (1 << 6);
    }

	if(fpb == true)
    {
		ack_fcf |= FCF_FRAME_PENDING;
    }

	if (isIePresent)
	{
		ack_fcf |= FCF_IE_PRESENT;
	}

    ack_fcf |= recFrameInfo->fcf.src_addr_mode << 10;

    ack_fcf |= (0x02 << 12); // Frame version 0b10

    ackFrame[frameLen++] = (uint8_t)ack_fcf;
    ackFrame[frameLen++] = (uint8_t)(ack_fcf >> 8);

    ackFrame[frameLen++] = recFrameInfo->seqNum;

	// Destination Addressing
    if(isDstAddrPresent(rxFcf))
    {
		if(!(ack_fcf & FCF_PAN_ID_COMPRESSION))
		{
        	memcpy((uint8_t *)&ackFrame[frameLen], &recFrameInfo->dstPanid, sizeof(recFrameInfo->srcPanid));
        	frameLen += 2;
		}

        if((rxFcf & FCF_SRC_ADDR_MASK) == FCF_SRC_ADDR_SHORT)
        {
            memcpy((uint8_t *)&ackFrame[frameLen], (uint8_t *)&recFrameInfo->srcAddr.srcShAddr, sizeof(recFrameInfo->srcAddr.srcShAddr));
            frameLen += 2;
        }
        else if((rxFcf & FCF_SRC_ADDR_MASK) == FCF_SRC_ADDR_EXT)
        {
            memcpy((uint8_t *)&ackFrame[frameLen], (uint8_t *)&recFrameInfo->srcAddr.srcExtAddr, sizeof(recFrameInfo->srcAddr.srcExtAddr));
            frameLen += 8;
        }
    }


	if(rxFcf & FCF_SECURITY_ENABLED)
	{
		ackFrame[frameLen++] = recFrameInfo->securityControl.value;
		uint32_t fc_now = fc;
        memcpy(&ackFrame[frameLen],&(fc_now), sizeof(recFrameInfo->frameCounter));
        frameLen += 4;

        uint8_t keyIdMode = recFrameInfo->securityControl.keyIdMode;
        if (keyIdMode == 1)
        {
            ackFrame[frameLen++] = recFrameInfo->keyId.keyIndex;
        }
        else if (keyIdMode == 2)
        {
            memcpy(&ackFrame[frameLen], recFrameInfo->keyId.keySource_5, 5);
            frameLen += 5;
        }
        else if (keyIdMode == 3)
        {
            memcpy(&ackFrame[frameLen], recFrameInfo->keyId.keySource_9, 9);
            frameLen += 9;
        }
        // keyIdMode == 0: nothing to add
	}

	 if (ie_len > 0 && ie_data_ptr != NULL)
    {
        memcpy(&ackFrame[frameLen], ie_data_ptr, ie_len);
        frameLen += ie_len;
    }
	
	return frameLen;
}

//1. Function to add element to ackIe
//2. Function to remove element from ackIe
//3. Function to search an element in ackIe

// Function to add or update IE data for a short address
bool add_or_update_short_ie(uint8_t addr[2], uint8_t *data, uint8_t len)
{
 	if (len == 0)
        return false;

    // Search for existing address
    for (uint32_t i = 0; i < ackIe.num_of_short_data; i++)
    {
        if (memcmp(ackIe.short_data[i].addr, addr, 2) == 0)
        {
            uint8_t curr_len = ackIe.short_data[i].ie_data.len;
            if (curr_len + len > 16)
                len = 16 - curr_len; // Only append up to max size

            if (len == 0)
                return false; // No space left

            memcpy(&ackIe.short_data[i].ie_data.p_data[curr_len], data, len);
            ackIe.short_data[i].ie_data.len += len;
            return true;
        }
    }

    // If not found, add as new if space available
    if (ackIe.num_of_short_data < 10 && len <= 16)
    {
        memcpy(ackIe.short_data[ackIe.num_of_short_data].addr, addr, 2);
        memcpy(ackIe.short_data[ackIe.num_of_short_data].ie_data.p_data, data, len);
        ackIe.short_data[ackIe.num_of_short_data].ie_data.len = len;
        ackIe.num_of_short_data++;
        return true;
    }

    return false;
}

// Function to add or update IE data for an extended address
bool add_or_update_ext_ie(uint8_t addr[8], uint8_t *data, uint8_t len)
{
    if (len == 0)
        return false;

    // Search for existing address
    for (uint32_t i = 0; i < ackIe.num_of_ext_data; i++)
    {
        if (memcmp(ackIe.ext_data[i].addr, addr, 8) == 0)
        {
            uint8_t curr_len = ackIe.ext_data[i].ie_data.len;
            if (curr_len + len > 16)
                len = 16 - curr_len; // Only append up to max size

            if (len == 0)
                return false; // No space left

            memcpy(&ackIe.ext_data[i].ie_data.p_data[curr_len], data, len);
            ackIe.ext_data[i].ie_data.len += len;
            return true;
        }
    }

    // If not found, add as new if space available
    if (ackIe.num_of_ext_data < 10 && len <= 16)
    {
        memcpy(ackIe.ext_data[ackIe.num_of_ext_data].addr, addr, 8);
        memcpy(ackIe.ext_data[ackIe.num_of_ext_data].ie_data.p_data, data, len);
        ackIe.ext_data[ackIe.num_of_ext_data].ie_data.len = len;
        ackIe.num_of_ext_data++;
        return true;
    }

    return false;
}

// Function to retrieve IE data for a short address
const ie_data_t* get_short_ie(uint8_t addr[2])
{
    for (uint32_t i = 0; i < ackIe.num_of_short_data; i++)
    {
        if (memcmp(ackIe.short_data[i].addr, addr, 2) == 0)
        {
            return &ackIe.short_data[i].ie_data;
        }
    }
    return NULL;
}

// Function to retrieve IE data for an extended address
const ie_data_t* get_ext_ie(uint8_t *addr)
{
    for (uint32_t i = 0; i < ackIe.num_of_ext_data; i++)
    {
        if (memcmp(ackIe.ext_data[i].addr, addr, 8) == 0)
        {
            return &ackIe.ext_data[i].ie_data;
        }
    }
    return NULL;
}

bool clear_short_ie(uint8_t addr[2])
{
    uint32_t idx;
    // Use binary search if your array is sorted, otherwise use linear search
    for (idx = 0; idx < ackIe.num_of_short_data; idx++)
    {
        if (memcmp(ackIe.short_data[idx].addr, addr, 2) == 0)
        {
            // Shift all subsequent entries left to fill the gap
            for (uint32_t j = idx; j < ackIe.num_of_short_data - 1; j++)
            {
                ackIe.short_data[j] = ackIe.short_data[j + 1];
            }
            // Clear the last entry (optional, for cleanliness)
            memset(&ackIe.short_data[ackIe.num_of_short_data - 1], 0, sizeof(ack_short_ie_data_t));
            ackIe.num_of_short_data--;
            return true; // Successfully removed
        }
    }
    return false; // Not found
}

// Function to clear (remove) a particular extended IE entry by address
bool clear_ext_ie(uint8_t *addr)
{
    uint32_t idx;
    // Use binary search if your array is sorted, otherwise use linear search
    for (idx = 0; idx < ackIe.num_of_ext_data; idx++)
    {
        if (memcmp(ackIe.ext_data[idx].addr, addr, 8) == 0)
        {
            // Shift all subsequent entries left to fill the gap
            for (uint32_t j = idx; j < ackIe.num_of_ext_data - 1; j++)
            {
                ackIe.ext_data[j] = ackIe.ext_data[j + 1];
            }
            // Clear the last entry (optional, for cleanliness)
            memset(&ackIe.ext_data[ackIe.num_of_ext_data - 1], 0, sizeof(ack_ext_ie_data_t));
            ackIe.num_of_ext_data--;
            return true; // Successfully removed
        }
    }
    return false; // Not found
}

// Function to clear all IE data
void clear_all_ie_data(void)
{
    ackIe.num_of_short_data = 0;
    ackIe.num_of_ext_data = 0;
    memset(ackIe.short_data, 0, sizeof(ackIe.short_data));
    memset(ackIe.ext_data, 0, sizeof(ackIe.ext_data));
}

uint8_t get_short_ack_ie_entry(void)
{
    return ackIe.num_of_short_data;
}

uint8_t get_ext_ack_ie_entry(void)
{
    return ackIe.num_of_ext_data;
}


uint8_t findShrtAddrEntry()
{
    for (uint8_t i = 0; i <= IEEE802154_FBP_SHORTADDR_LIST_SIZE;i++)
    {
        if(!(saArray[i].inUse))
        {
            return i;
        }
    }
    return IEEE802154_FBP_INVALID_INDEX;
}

uint8_t findExtAddrEntry()
{
    for (uint8_t i = 0; i <= IEEE802154_FBP_EXTADDR_LIST_SIZE;i++)
    {
        if(!(eaArray[i].inUse))
        {
            return i;
        }
    }
    return IEEE802154_FBP_INVALID_INDEX;
}

int addShrtAddrEntry (uint16_t addr)
{
    uint8_t index = IEEE802154_FBP_INVALID_INDEX;
    if(IEEE802154_FBP_INVALID_SHORT_ADDR == addr)
        return -1;
    index = findShrtAddrEntry();
    if (IEEE802154_FBP_INVALID_INDEX != index)
    {
        saArray[index].inUse = true;
        saArray[index].addr = addr;
        return 0;
    }
    return -1;

}
int addExtAddrEntry (uint8_t * addr)
{
    uint8_t index = IEEE802154_FBP_INVALID_INDEX;
    index = findExtAddrEntry();
    if (IEEE802154_FBP_INVALID_INDEX != index)
    {
        eaArray[index].inUse = true;
        memcpy(&(eaArray[index].m8),addr, 8);
        return 0;
    }
    return -1;

}

int rmvExtEntry(uint8_t * addr)
{
    for (uint8_t i = 0; i <= IEEE802154_FBP_EXTADDR_LIST_SIZE;i++)
    {
        if((!(memcmp(&(eaArray[i].m8),addr,8))) && ((eaArray[i].inUse)))
        {
            eaArray[i].inUse = false;
        }
    }
    return 0;
}

int rmvShrtEntry(uint16_t addr)
{
    for (uint8_t i = 0; i < IEEE802154_FBP_SHORTADDR_LIST_SIZE;i++)
    {
        if(((saArray[i].addr) == addr) && ((saArray[i].inUse)))
        {
            saArray[i].inUse = false;
        }
    }
    return 0;
}

bool __attribute__((optimize("O0"))) searchShrtEntry(uint16_t addr)
{
    for (uint8_t i = 0; i <= IEEE802154_FBP_SHORTADDR_LIST_SIZE;i++)
    {
        if(((saArray[i].addr) == addr) && ((saArray[i].inUse)))
        {
            return true;
        }
    }
    return false;
}

bool searchExtEntry(uint8_t * addr)
{
    for (uint8_t i = 0; i <= IEEE802154_FBP_EXTADDR_LIST_SIZE;i++)
    {
        if((!(memcmp(&(eaArray[i].m8),addr,8))) && ((eaArray[i].inUse)))
        {
            return true;
        }
    }
    return false;
}

    


