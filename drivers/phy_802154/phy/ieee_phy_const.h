/*******************************************************************************
    IEEE PHY Constants

  File Name:
    ieee_phy_constants.h

  Summary:
    IEEE PHY constants and Attributes definitions
  Description:
    This header holds all IEEE 802.15.4-2015 constants and attribute
    identifiers.

 *******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END


#ifndef IEEE_PHY_CONST_H
#define IEEE_PHY_CONST_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Data Types
// *****************************************************************************
// *****************************************************************************
/* CCA Modes of the transceiver
 
   Summary:
    CCA Modes  supported by transceiver
 
   Description:
    Following are the list of configuration parameters which can be read from the 
    transceiver
 
   Remarks:
    None
 */
#if !defined(DOXYGEN)
typedef enum trx_cca_mode_tag {
	TRX_CCA_MODE0 = 0, /** Carrier sense OR energy above threshold */
	TRX_CCA_MODE1 = 1, /** Energy above threshold */
	TRX_CCA_MODE2 = 2, /** Carrier sense only */
	TRX_CCA_MODE3 = 3 /** Carrier sense AND energy above threshold */
} trx_cca_mode_t;
#endif

// *****************************************************************************
/* CCA mode enumeration
 
   Summary:
    CCA Modes supported by transceiver
    
   Description:
    Following are CCA mode enumeration which can be read from the transceiver
    
   Remarks:
    None 
 */
typedef enum cca_mode_tag {
	CCA_MODE_0_CS_OR_ED = 0,
	CCA_MODE_1_ED = 1, /** To be conform to IEEE 15.4 and TRX register */
	CCA_MODE_2_CS,
	CCA_MODE_3_CS_ED,
	CCA_MODE_4_ALOHA
} cca_mode_t;

// *****************************************************************************
/* ch_pg enumeration
 
   Summary:
    ch_pg_t holds ch_pg enumeration which can be read from the transceiver. 
 
   Description:
    None
 
   Remarks:
    None 
 */

typedef enum ch_pg_tag {
	CH_PG_2003 = 0,
	CH_PG_2006 = 2,
	CH_PG_CHINA = 5,
	CH_PG_JAPAN = 6,
	CH_PG_MSK = 7,
	CH_PG_LRP_UWB = 8,
	CH_PG_SUN = 9,
	CH_PG_GENERIC_PHY = 10,
	CH_PG_16 = 16,
	CH_PG_18 = 18,
	CH_PG_INVALID = 0xFF
} ch_pg_t;

// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Min Frame Length
 
   Summary:
    This macro holds the Minimum size of a valid frame other than an Ack frame
   Description:
	None
   Remarks:
    None 
 */
 
#define MIN_FRAME_LENGTH                (8U)

// *****************************************************************************
/* Max MGMT Frame Length
 
   Summary:
    This macro holds the Maximum size of the management frame(Association Response frame)
   Description:
	None
   Remarks:
    None 
 */
 
#define MAX_MGMT_FRAME_LENGTH           (30U)

// *****************************************************************************
// *****************************************************************************
// Section: MAC Constants
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Max size of PHY packet
 
   Summary:
    This macro holds the Maximum size of PHY packet
   Description:
	None
   Remarks:
    None 
 */
 
#define aMaxPHYPacketSize               (127U)

// *****************************************************************************
/* Maximum turnaround Time
 
   Summary:
    This macro holds Maximum turnaround Time of the radio to switch from Rx to Tx or 
    Tx to Rx in symbols
   Description:
	None
   Remarks:
    None 
 */

#define aTurnaroundTime                 (12U)

// *****************************************************************************
/* maximum size of an MPDU
 
   Summary:
    This macro holds The maximum size of an MPDU, in octets, that can be followed by 
    a SIFS period
   Description:
	None
   Remarks:
    None 
 */

#define aMaxSIFSFrameSize               (18U)

// *****************************************************************************
/* 

   Summary:
    This macro holds The minimum number of octets added by the MAC sublayer to the PSDU
   Description:
	None
   Remarks:
    None 
 */

#define aMinMPDUOverhead                 (9U)

// *****************************************************************************
/* 

   Summary:
    This macro holds The number of slots contained in any superframe
   Description:
	None
   Remarks:
    None 
 */

#define aNumSuperframeSlots             (16U)

// *****************************************************************************
/* 

   Summary:
    This macro holds The number of symbols forming the basic time period used by 
    the CSMA-CA algorithm
   Description:
	None
   Remarks:
    None 
 */

#define aUnitBackoffPeriod              (20U)


// *****************************************************************************
/* 

   Summary:
    This macro holds The number of symbols forming a superframe slot when the superframe 
    order is equal to 0
   Description:
	None
   Remarks:
    None 
 */

#define aBaseSlotDuration               (60U)

// *****************************************************************************
/* 

   Summary:
    This macro holds The number of symbols forming a superframe when the superframe 
    order is equal to 0
   Description:
	None
   Remarks:
    None 
 */
 
#define aBaseSuperframeDuration         (aBaseSlotDuration * \
	aNumSuperframeSlots)

// *****************************************************************************
// *****************************************************************************
// Section: Standard PHY PIB attributes
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* phyCurrentChannel

   Summary:
    This macro holds The RF channel to use for all following transmissions and receptions
   Description:
	None
   Remarks:
    None 
 */

#define phyCurrentChannel               (0x00)

// *****************************************************************************
/* phyChannelsSupported

   Summary:
    This macro holds The 5 most significant bits (MSBs) (b27, ..., b31) of phyChannelsSupported 
    shall be reserved and set to 0, and the 27 LSBs (b0, b1, ..., b26) shall indicate 
    the status (1 = available, 0 = unavailable) for each of the 27 valid channels 
    (bk shall indicate the status of channel k).
   Description:
	None
   Remarks:
    None 
 */

#define phyChannelsSupported            (0x01)

// *****************************************************************************
/* phyTransmitPower

   Summary:
    This macro holds The 2 MSBs represent the tolerance on the transmit power: 
    00 = 1 dB 01 = 3 dB 10 = 6 dB The 6 LSBs represent a signed integer in 
    twos-complement format, corresponding to the nominal transmit power of the 
    device in decibels relative to 1 mW. The lowest value of phyTransmitPower 
    shall be interpreted as less than or equal to 32 dBm.
   Description:
	None
   Remarks:
    None 
 */

#define phyTransmitPower                (0x02)

// *****************************************************************************
/* phyCCAMode

   Summary:
    This macro holds The CCA mode 
    - CCA Mode 1: Energy above threshold. CCA shall report a busy medium 
    upon detecting any energy above the ED threshold.
    - CCA Mode 2: Carrier sense only. CCA shall report a busy medium only upon 
    the detection of a signal with the modulation and spreading characteristics 
    of IEEE 802.15.4. This signal may be above or below the ED threshold.
    - CCA Mode 3: Carrier sense with energy above threshold. CCA shall report a 
    busy medium only upon the detection of a signal with the modulation and 
    spreading characteristics of IEEE 802.15.4 with energy above the ED threshold.
   Description:
	None
   Remarks:
    None 
 */

#define phyCCAMode                      (0x03)

// *****************************************************************************
/* phyCurrentPage

   Summary:
    This macro holds current PHY channel page. This is used in conjunction with 
    phyCurrentChannel to uniquely identify the channel currently being used
   Description:
	None
   Remarks:
    None 
 */

#define phyCurrentPage                  (0x04)

// *****************************************************************************
/* phyMaxFrameDuration

   Summary:
    This macro holds The maximum number of symbols in a frame:
    = phySHRDuration + ceiling([aMaxPHYPacketSize + 1] x phySymbolsPerOctet)
   Description:
	None
   Remarks:
    None 
 */

#define phyMaxFrameDuration             (0x05)

// *****************************************************************************
/* phySHRDuration

   Summary:
    This macro holds The duration of the synchronization header (SHR) in symbols 
    for the current PHY
   Description:
	None
   Remarks:
    None 
 */

#define phySHRDuration                  (0x06)

// *****************************************************************************
/* phySymbolsPerOctet

   Summary:
    This macro holds The number of symbols per octet for the current PHY
   Description:
	None
   Remarks:
    None 
 */

#define phySymbolsPerOctet              (0x07U)

// *****************************************************************************
/* PHY_OVERHEAD

   Summary:
    This macro holds Number of octets added by the PHY: 4 sync octets + SFD octet
   Description:
	None
   Remarks:
    None 
 */

#define PHY_OVERHEAD                    (5U)

// *****************************************************************************
// *****************************************************************************
// Section: MAC PIB Attributes
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* macAckWaitDuration

   Summary:
    This macro holds The maximum number of symbols to wait for an acknowledgment frame 
    to arrive following a transmitted data frame. This value is dependent on the currently 
    selected logical channel. For 0 <= phyCurrentChannel <= 10, this value is equal to 120. 
    For 11 <= phyCurrentChannel <= 26, this  value is equal to 54.
   Description:
	None
   Remarks:
    None 
 */

#define macAckWaitDuration              (0x40U)

// *****************************************************************************
/* macMaxCSMABackoffs

   Summary:
    This macro holds The maximum number of backoffs the CSMA-CA algorithm will attempt 
    before declaring a channel access failure.
   Description:
	None
   Remarks:
    None 
 */

#define macMaxCSMABackoffs              (0x4EU)

// *****************************************************************************
/* macMaxCSMABackoffs_def

   Summary:
    This macro holds The Default value for PIB macMaxCSMABackoffs
   Description:
	None
   Remarks:
    None 
 */

#define macMaxCSMABackoffs_def          (4U)

// *****************************************************************************
/* macMinBE

   Summary:
    This macro holds The minimum value of the backoff exponent in the CSMA-CA 
    algorithm.Note that if this value is set to 0, collision avoidance is disabled 
    during the first iteration of the algorithm. Also note that for the slotted 
    version of the CSMACA algorithm with the battery life extension enabled, the 
    minimum value of the backoff exponent will be the lesser of 2 and the value of 
    macMinBE.
   Description:
	None
   Remarks:
    None 
 */

#define macMinBE                        (0x4F)

// *****************************************************************************
/* macPANId

   Summary:
    This macro holds The 16 bit identifier of the PAN on which the device is operating. 
    If this value is 0xffff, the device is not associated.
   Description:
	None
   Remarks:
    None 
 */

#define macPANId                        (0x50)

// *****************************************************************************
/* macPANId_def

   Summary:
    This macro holds The Default value for PIB macPANId
   Description:
	None
   Remarks:
    None 
 */

#define macPANId_def                    (0xFFFF)

// *****************************************************************************
/* macPromiscuousMode

   Summary:
    This indicates whether the MAC sublayer is in a promiscuous (receive all) 
    mode. A value of true indicates that the MAC sublayer accepts all frames 
    received from the PHY.
   Description:
	None
   Remarks:
    None 
 */

#define macPromiscuousMode              (0x51)

// *****************************************************************************
/* macShortAddress

   Summary:
    This macro holds The 16 bit address that the device uses to communicate in 
    the PAN.If the device is a PAN coordinator, this value shall be chosen before 
    a PAN is started. Otherwise, the address is allocated by a coordinator during 
    association. A value of 0xfffe indicates that the device has associated but 
    has not been allocated an address. A value of 0xffff indicates that the device 
    does not have a short address.
   Description:
	None
   Remarks:
    None 
 */

#define macShortAddress                 (0x53)

// *****************************************************************************
/* macShortAddress_def

   Summary:
    This macro holds Default value for PIB macShortAddress
   Description:
	None
   Remarks:
    None 
 */

#define macShortAddress_def             (0xFFFFU)

// *****************************************************************************
/* macMaxBE

   Summary:
    This macro holds The maximum value of the backoff exponent, BE, in the CSMA-CA algorithm
   Description:
	None
   Remarks:
    None 
 */

#define macMaxBE                        (0x57U)

// *****************************************************************************
/* macMaxFrameRetries

   Summary:
    This macro holds The maximum number of retries allowed after a transmission failure
   Description:
	None
   Remarks:
    None 
 */

#define macMaxFrameRetries              (0x59U)

// *****************************************************************************
/* macMaxFrameRetries

   Summary:
    This macro holds PIB attribute without relevant index, i.e. PIB attribute not 
    contained in 802.15.4-2006 table 88.
   Description:
	None
   Remarks:
    None 
 */

#define NO_PIB_INDEX                    (0U)

// *****************************************************************************
/* macMinLIFSPeriod

   Summary:
    This macro holds The minimum number of symbols forming a LIFS period.
   Description:
	None
   Remarks:
    None 
 */

#define macMinLIFSPeriod                (0x5EU)

// *****************************************************************************
/* macMinLIFSPeriod_def

   Summary:
    This macro holds The Default value for PIB macMinLIFSPeriod.
   Description:
	None
   Remarks:
    None 
 */

#define macMinLIFSPeriod_def            (40U)

// *****************************************************************************
/* macMinSIFSPeriod

   Summary:
    This macro holds The minimum number of symbols forming a SIFS period.
   Description:
	None
   Remarks:
    None 
 */

#define macMinSIFSPeriod                (0x5FU)

// *****************************************************************************
/* macMinSIFSPeriod_def

   Summary:
    This macro holds Default value for PIB macMinSIFSPeriod
   Description:
	None
   Remarks:
    None 
 */

#define macMinSIFSPeriod_def            (12U)

// *****************************************************************************
/* macMinSIFSPeriod_def

   Summary:
    This macro holds Private MAC PIB attribute to allow setting the MAC address 
    in test mode
   Description:
	None
   Remarks:
    None 
 */

#define macIeeeAddress                  (0xF0U)

// *****************************************************************************
// *****************************************************************************
// Section: Non-standard values / extensions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* PHY_SUCCESS_DATA_PENDING

   Summary:
    This macro holds PHY_SUCCESS in phyAutoCSMACA when received ACK frame had the 
    pending bit set
   Description:
	None
   Remarks:
    None 
 */

#define PHY_SUCCESS_DATA_PENDING        (0x10U)

// *****************************************************************************
/* ED_SAMPLE_DURATION_SYM

   Summary:
    This macro holds ED scan/sampling duration
   Description:
	None
   Remarks:
    None 
 */

#define ED_SAMPLE_DURATION_SYM          (8U)

// *****************************************************************************
/* FCF_FRAMETYPE_BEACON

   Summary:
    This macro holds Defines the beacon frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_BEACON            (0x00U)

// *****************************************************************************
/* FCF_FRAMETYPE_DATA

   Summary:
    This macro holds Define the data frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_DATA              (0x01U)

// *****************************************************************************
/* FCF_FRAMETYPE_ACK

   Summary:
    This macro holds Define the ACK frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_ACK               (0x02U)

// *****************************************************************************
/* FCF_FRAMETYPE_ACK

   Summary:
    This macro holds Define the command frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_MAC_CMD           (0x03U)

// *****************************************************************************
/* FCF_FRAMETYPE_LLDN

   Summary:
    This macro holds Define the LLDN frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_LLDN              (0x04U)

// *****************************************************************************
/* FCF_FRAMETYPE_MP

   Summary:
    This macro holds Define the multipurpose frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_MP                (0x05U)

// *****************************************************************************
/* FCF_SET_FRAMETYPE

   Summary:
    This macro holds to set the frame type.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SET_FRAMETYPE(x)            (x)

// *****************************************************************************
/* FCF_SECURITY_ENABLED

   Summary:
    This macro holds The mask for the security enable bit of the FCF.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SECURITY_ENABLED            (1U << 3U)

// *****************************************************************************
/* FCF_FRAME_PENDING

   Summary:
    This macro holds The mask for the frame pending bit of the FCF.
   Description:
	None
   Remarks:
    None 
 */
 
#define FCF_FRAME_PENDING               (1U << 4U)

// *****************************************************************************
/* FCF_ACK_REQUEST

   Summary:
    This macro holds The mask for the ACK request bit of the FCF.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_ACK_REQUEST                 (1U << 5U)

// *****************************************************************************
/* FCF_PAN_ID_COMPRESSION

   Summary:
    This macro holds The mask for the PAN ID compression bit of the FCF.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_PAN_ID_COMPRESSION          (1U << 6U)

// *****************************************************************************
/* FCF_FRAME_VERSION_2003

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2003 compatible frame in the 
    frame version subfield.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAME_VERSION_2003          (0U << 12U)

// *****************************************************************************
/* FCF_FRAME_VERSION_2006

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2006 compatible frame in the 
    frame version subfield.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAME_VERSION_2006          (1U << 12U)

// *****************************************************************************
/* FCF_FRAME_VERSION_2012

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2012 compatible frame in the 
    frame version subfield.
   Description:
	None
   Remarks:
    None 
 */
 
#define FCF_FRAME_VERSION_2012          (2U << 12U)

// *****************************************************************************
/* FCF1_FV_SHIFT

   Summary:
    This macro holds Shift value for the frame version subfield fcf1
   Description:
	None
   Remarks:
    None 
 */

#define FCF1_FV_SHIFT                   (4U)

// *****************************************************************************
/* FCF1_FV_MASK

   Summary:
    This macro holds The mask for the frame version subfield fcf1
   Description:
	None
   Remarks:
    None 
 */

#define FCF1_FV_MASK                    (3U << FCF1_FV_SHIFT)

// *****************************************************************************
/* FCF1_FV_2003

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2003 compatible frame in the 
    frame version subfield fcf1
   Description:
	None
   Remarks:
    None 
 */

#define FCF1_FV_2003                    (0U)

// *****************************************************************************
/* FCF1_FV_2006

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2006 compatible frame in the 
    frame version subfield fcf1
   Description:
	None
   Remarks:
    None 
 */

#define FCF1_FV_2006                    (1U)

// *****************************************************************************
/* FCF1_FV_2012

   Summary:
    This macro holds The mask for a IEEE 802.15.4-2012 compatible frame in the 
    frame version subfield fcf1
   Description:
	None
   Remarks:
    None 
 */

#define FCF1_FV_2012                    (2U)

// *****************************************************************************
/* FCF_NO_ADDR

   Summary:
    This macro holds Address Mode: NO ADDRESS
   Description:
	None
   Remarks:
    None 
 */

#define FCF_NO_ADDR                     (0x00U)

// *****************************************************************************
/* FCF_RESERVED_ADDR

   Summary:
    This macro holds Address Mode: RESERVED
   Description:
	None
   Remarks:
    None 
 */

#define FCF_RESERVED_ADDR               (0x01U)

// *****************************************************************************
/* FCF_SHORT_ADDR

   Summary:
    This macro holds Address Mode: SHORT
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SHORT_ADDR                  (0x02U)

// *****************************************************************************
/* FCF_LONG_ADDR

   Summary:
    This macro holds Address Mode: LONG
   Description:
	None
   Remarks:
    None 
 */
 
#define FCF_LONG_ADDR                   (0x03U)

// *****************************************************************************
/* FCF_DEST_ADDR_OFFSET

   Summary:
    This macro holds Defines the offset of the destination address
   Description:
	None
   Remarks:
    None 
 */

#define FCF_DEST_ADDR_OFFSET            (10U)

// *****************************************************************************
/* FCF_SOURCE_ADDR_OFFSET

   Summary:
    This macro holds Defines the offset of the source address
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SOURCE_ADDR_OFFSET          (14U)

// *****************************************************************************
/* FCF_SET_SOURCE_ADDR_MODE

   Summary:
    This macro holds to set the source address mode
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SET_SOURCE_ADDR_MODE(x)     ((uint16_t)(((uint16_t)x) << \
	(uint16_t)FCF_SOURCE_ADDR_OFFSET))

// *****************************************************************************
/* FCF_SET_DEST_ADDR_MODE

   Summary:
    This macro holds to set the destination address mode
   Description:
	None
   Remarks:
    None 
 */

#define FCF_SET_DEST_ADDR_MODE(x)       ((uint16_t)(((uint16_t)x) << \
	(uint16_t)FCF_DEST_ADDR_OFFSET))

// *****************************************************************************
/* FCF_FRAMETYPE_MASK

   Summary:
    This macro holds Defines a mask for the frame type
   Description:
	None
   Remarks:
    None 
 */

#define FCF_FRAMETYPE_MASK              (0x07U)

// *****************************************************************************
/* FCF_GET_FRAMETYPE

   Summary:
    This macro holds to get the frame type
   Description:
	None
   Remarks:
    None 
 */

#define FCF_GET_FRAMETYPE(x)            ((x) & FCF_FRAMETYPE_MASK)

// *****************************************************************************
/* BROADCAST

   Summary:
    This macro holds Generic 16 bit broadcast address
   Description:
	None
   Remarks:
    None 
 */

#define BROADCAST                       (0xFFFFU)

// *****************************************************************************
/* FCF_2_DEST_ADDR_OFFSET

   Summary:
    This macro holds Offset of Destination Addressing Mode of octet two of MHR.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_2_DEST_ADDR_OFFSET              (2U)

// *****************************************************************************
/* FCF_2_SOURCE_ADDR_OFFSET

   Summary:
    This macro holds Offset of Source Addressing Mode of octet two of MHR.
   Description:
	None
   Remarks:
    None 
 */

#define FCF_2_SOURCE_ADDR_OFFSET            (6U)


// *****************************************************************************
// Octet position within PHY_FrameInfo_t->payload array 
// *****************************************************************************

// *****************************************************************************
/* PL_POS_FCF_1

   Summary:
    This macro holds Octet position of FCF octet one within payload array of PHY_FrameInfo_t.
   Description:
	None
   Remarks:
    None 
 */

#define PL_POS_FCF_1                        (1U)

// *****************************************************************************
/* PL_POS_FCF_2

   Summary:
    This macro holds Octet position of FCF octet two within payload array of PHY_FrameInfo_t.
   Description:
	None
   Remarks:
    None 
 */

#define PL_POS_FCF_2                        (2U)

// *****************************************************************************
/* PL_POS_SEQ_NUM

   Summary:
    This macro holds Octet position of Sequence Number octet within payload array of 
    PHY_FrameInfo_t.
   Description:
	None
   Remarks:
    None 
 */

#define PL_POS_SEQ_NUM                      (3U)

// *****************************************************************************
/* PL_POS_DST_PAN_ID_START

   Summary:
    This macro holds Octet start position of Destination PAN-Id field within payload array of 
    PHY_FrameInfo_t.
   Description:
	None
   Remarks:
    None 
 */

#define PL_POS_DST_PAN_ID_START             (4U)

// *****************************************************************************
/* PL_POS_DST_ADDR_START

   Summary:
    This macro holds Octet start position of Destination Address field within payload array of 
    PHY_FrameInfo_t.
   Description:
	None
   Remarks:
    None 
 */

#define PL_POS_DST_ADDR_START               (6U)

// *****************************************************************************
/* LENGTH_FIELD_LEN

   Summary:
    This macro holds Size of the length parameter
   Description:
	None
   Remarks:
    None 
 */

#define LENGTH_FIELD_LEN                    (1U)

// *****************************************************************************
/* LQI_LEN

   Summary:
    This macro holds Length of the LQI number field
   Description:
	None
   Remarks:
    None 
 */

#define LQI_LEN                             (1U)

// *****************************************************************************
/* ED_VAL_LEN

   Summary:
    This macro holds Length of the ED value parameter number field
   Description:
	None
   Remarks:
    None 
 */

#define ED_VAL_LEN                          (1U)

// *****************************************************************************
/* FCF_LEN

   Summary:
    This macro holds Length (in octets) of FCF
   Description:
	None
   Remarks:
    None 
 */

#define FCF_LEN                             (2U)

// *****************************************************************************
/* FCS_LEN

   Summary:
    This macro holds Length (in octets) of FCS
   Description:
	None
   Remarks:
    None 
 */

#define FCS_LEN                             (2U)

// *****************************************************************************
/* SEQ_NUM_LEN

   Summary:
    This macro holds Length of the sequence number field
   Description:
	None
   Remarks:
    None 
 */

#define SEQ_NUM_LEN                         (1U)

// *****************************************************************************
/* EXT_ADDR_LEN

   Summary:
    This macro holds Length (in octets) of extended address
   Description:
	None
   Remarks:
    None 
 */

#define EXT_ADDR_LEN                        (8U)

// *****************************************************************************
/* SHORT_ADDR_LEN

   Summary:
    This macro holds Length (in octets) of short address
   Description:
	None
   Remarks:
    None 
 */

#define SHORT_ADDR_LEN                      (2U)

// *****************************************************************************
/* PAN_ID_LEN

   Summary:
    This macro holds Length (in octets) of PAN ID
   Description:
	None
   Remarks:
    None 
 */

#define PAN_ID_LEN                          (2U)

// *****************************************************************************
/* ACK_PAYLOAD_LEN

   Summary:
    This macro holds Length (in octets) of ACK payload
   Description:
	None
   Remarks:
    None 
 */

#define ACK_PAYLOAD_LEN                     (0x03U)

// *****************************************************************************
/* CONV_phyTransmitPower_TO_DBM

   Summary:
    This macro holds Converts a phyTransmitPower value to a dBm value 
    return dBm using signed integer format
   Description:
	None
   Remarks:
    None 
 */

#define CONV_phyTransmitPower_TO_DBM(phyTransmitPower_value) \
   ( \
		(((phyTransmitPower_value) & 0x20U) == 0x00U) ? \
		((int8_t)((phyTransmitPower_value) & 0x3FU)) : \
		((-1) *	\
		(int8_t)((~(((phyTransmitPower_value) & \
		0x1FU) - 1)) & 0x1FU)) \
	)

// *****************************************************************************
/* CONV_DBM_TO_phyTransmitPower

   Summary:
    This macro  Converts a dBm value to a phyTransmitPower value 
    and return phyTransmitPower_value using IEEE-defined format
   Description:
	None
   Remarks:
    None 
 */

#define CONV_DBM_TO_phyTransmitPower(dbm_value)   \
	( \
		(dbm_value) < -32 ? \
		0x20U : \
		(\
			(dbm_value) > 31 ? \
			0x1FU : \
			( \
				(dbm_value) < 0 ? \
				((uint8_t)(((~(((uint8_t)((uint8_t)(-1) * \
				(uint8_t)(dbm_value))) - 1U)) & 0x1FU) | 0x20U)) : \
				(uint8_t)(dbm_value) \
			)\
		)\
	)
 


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* IEEE_CONST_H */
/* EOF */
