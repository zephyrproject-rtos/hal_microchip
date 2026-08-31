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


#ifndef PHY_UTILS_H
#define PHY_UTILS_H

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif
// DOM-IGNORE-END




typedef union {
    struct {
        uint16_t frame_type              : 3;
        uint16_t security_enabled        : 1;
        uint16_t frame_pending           : 1;
        uint16_t ack_request             : 1;
        uint16_t pan_id_compression      : 1;
		uint16_t reserved                : 1;
        uint16_t seq_num_suppression     : 1; // 2015+
        uint16_t ie_present              : 1; // 2015+
        uint16_t dest_addr_mode          : 2;
        uint16_t frame_version           : 2;
        uint16_t src_addr_mode           : 2;     
    };
    uint16_t value;
} fcf_t;

typedef union {
    struct {
        uint8_t secLevel :3;
        uint8_t keyIdMode:2;
        uint8_t reserved:3;
    };
    uint8_t value;
} securityControl_t;

typedef struct frameInfo
{
    uint8_t frameLen;
    fcf_t fcf;
    uint8_t seqNum;

    union {
        uint16_t dstShAddr;
        uint8_t dstExtAddr[8];
    } dstAddr;
    uint16_t dstPanid;

    union {
        uint16_t srcShAddr;
        uint8_t srcExtAddr[8];
    } srcAddr;
    uint16_t srcPanid;

    securityControl_t securityControl;
    uint32_t frameCounter;

    union {
        uint8_t keyIndex;
        uint8_t keySource_5[5]; // 4-byte key source + 1 byte idx
        uint8_t keySource_9[9]; // 8-byte key source + 1 byte idx
    } keyId;

	uint8_t seqNum_offset;
	uint8_t destAddr_offset;
	uint8_t destPanId_offset;
	uint8_t srcAddr_offset;
	uint8_t srcPanid_offset;
	uint8_t secCtrl_offset;
	uint8_t frameCounter_offset;
	uint8_t keyId_offset;

} frameInfo_t;


#define KEY_SIZE                          16U
#define NONCE_SIZE                        13U
#define AES_BLOCKSIZE                     16U
#define MIC_SIZE                          4U
#define SEC_CTRL_SIZE                     1U
#define FRAME_COUNTER_SIZE                4U
#define KEY_INDEX_SIZE                    1U
#define SECURITY_LEVEL_5                  5U
#define FCS_SIZE                          2U

// Frame Control field format for general MAC frame
#define   FCF_SEQ_NO_COMPRESSION        1 << 8
#define   FCF_IE_PRESENT                1 << 9


#define FCF_ADDR_NONE           0
#define FCF_ADDR_SHORT          2 
#define FCF_ADDR_EXT            3 
#define FCF_ADDR_MASK           3

#define FCF_DST_ADDR_NONE       0 << 10
#define FCF_DST_ADDR_SHORT      2 << 10
#define FCF_DST_ADDR_EXT        3 << 10
#define FCF_DST_ADDR_MASK       3 << 10
#define FCF_SRC_ADDR_NONE       0 << 14
#define FCF_SRC_ADDR_SHORT      2 << 14
#define FCF_SRC_ADDR_EXT        3 << 14
#define FCF_SRC_ADDR_MASK       3 << 14

#define  FCF_FRAME_VER_2           2 << 12
#define  FCF_FRAME_VER_MASK        3 << 12

enum
{
// Per IEEE 802.15.4-2015, 12.3.3 Symbol rate:
// The O-QPSK PHY symbol rate shall be 25 ksymbol/s when operating in the 868 MHz band and 62.5 ksymbol/s when
// operating in the 780 MHz, 915 MHz, 2380 MHz, or 2450 MHz band
    RADIO_SYMBOL_RATE           = 62500, ///< The O-QPSK PHY symbol rate when operating in the 780MHz, 915MHz, 2380MHz, 2450MHz
    RADIO_SYMBOL_TIME           = 1000000 * 1 / RADIO_SYMBOL_RATE ,///< Symbol duration time in unit of microseconds
    RADIO_TEN_SYMBOLS_TIME      = 10 * RADIO_SYMBOL_TIME  ,  ///< Time for 10 symbols in unit of microseconds
};

// Structure representing a single IE record.
typedef struct
{
    uint8_t p_data[16]; /// Pointer to IE data buffer.
    uint8_t len;                                /// Length of the buffer.
} ie_data_t;

// Structure representing IE records sent in an ACK message to a given short address.
typedef struct
{
    uint8_t   addr[2]; /// Short address of peer node.
    ie_data_t ie_data;                  /// Pointer to IE records.
} ack_short_ie_data_t;

// Structure representing IE records sent in an ACK message to a given extended address.
typedef struct
{
    uint8_t   addr[8]; /// Extended address of peer node.
    ie_data_t ie_data;                     /// Pointer to IE records.
} ack_ext_ie_data_t;

// Structure representing IE data setting variables.
typedef struct
{
    ack_short_ie_data_t short_data[10];  /// Array of short addresses and IE records sent to these addresses.
    ack_ext_ie_data_t   ext_data[10]; /// Array of extended addresses and IE records sent to these addresses.
   uint32_t            num_of_short_data;                /// Current number of short addresses stored in @p short_data.
    uint32_t            num_of_ext_data;                  /// Current number of extended addresses stored in @p ext_data.
} ie_arrays_t;

/* Structures */

struct fpb_shrtaddr {
	bool 	 inUse;
	uint16_t addr;
};
struct fpb_extaddr
{
	bool 	 inUse;
	uint8_t  m8[8];
};


/* ToDo: Indirect queue size */
#define IEEE802154_FBP_SHORTADDR_LIST_SIZE   CONFIG_NUMBER_OF_SUPP_CHILD
#define IEEE802154_FBP_EXTADDR_LIST_SIZE     CONFIG_NUMBER_OF_SUPP_CHILD
#define IEEE802154_FBP_INVALID_INDEX         0xFF
#define IEEE802154_FBP_INVALID_SHORT_ADDR   0xFFFF

/* Utils funtions for Frame Parsing */
bool is2015FrameVersion(uint16_t aFcf);
bool isACkRequested(uint16_t aFcf);
bool isDstAddrPresent(uint16_t aFcf) ;
bool isSrcAddrPresent(uint16_t aFcf) ;
bool isSrcPanIdPresent(uint16_t fcf) ;
bool isDestPanIdPresent(uint16_t fcf);
uint8_t parseFrame(uint8_t *rxFrame, frameInfo_t *frameInfo);
uint8_t buildEnhancedAckFrame( frameInfo_t *recFrameInfo, uint8_t *ackPtr, bool isIePresent, uint8_t ie_len, const uint8_t *ie_data_ptr, bool fpb, uint32_t fc);

/* IE Data Handling Functions*/
bool add_or_update_short_ie(uint8_t addr[2], uint8_t *data, uint8_t len);
bool add_or_update_ext_ie(uint8_t addr[8], uint8_t *data, uint8_t len);
const ie_data_t* get_short_ie(uint8_t addr[2]);
const ie_data_t* get_ext_ie(uint8_t *addr);
bool clear_short_ie(uint8_t addr[2]);
bool clear_ext_ie(uint8_t *addr);
void clear_all_ie_data(void);
uint8_t get_short_ack_ie_entry(void);
uint8_t get_ext_ack_ie_entry(void);

/* Frame Pending Bit Handling Funtions*/
uint8_t findShrtAddrEntry(void);
uint8_t findExtAddrEntry(void);
int addShrtAddrEntry (uint16_t addr);
int addExtAddrEntry (uint8_t * addr);
int rmvExtEntry(uint8_t * addr);
int rmvShrtEntry(uint16_t addr);
bool searchShrtEntry(uint16_t addr);
bool searchExtEntry(uint8_t * addr);





//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* IEEE_CONST_H */
/* EOF */
