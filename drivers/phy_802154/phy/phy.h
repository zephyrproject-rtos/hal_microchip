/*******************************************************************************
  PHY Header

  File Name:
    phy.h

  Summary:
    This file contains PHY API function declarations

  Description:
    Physical Layer implements the transceiver specific functionalities  
    using 802.15.4 wireless subsystem of PIC32CXBZ2 devices. It provides the 
    interface to the upper layers (like IEEE 802.15.4 MAC ) and utilizing the 
    services of PAL layer
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
// DOM-IGNORE-END

#ifndef PHY_H
#define PHY_H

// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "bmm.h"
#include "qmm.h"
#include "ieee_phy_const.h"


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
        
// *****************************************************************************
/* PIB value types

  Summary:
    Union of different PHY Pib value types

  Description:
    PibValue_t is used as the data type to set/get the different PHY Information 
    Base value 

  Remarks:
    None
*/

typedef union {
	/** PIB Attribute Bool */
	bool pib_value_bool;
	/** PIB Attribute 8-bit */
	uint8_t pib_value_8bit;
	/** PIB Attribute 16-bit */
	uint16_t pib_value_16bit;
	/** PIB Attribute 32-bit */
	uint32_t pib_value_32bit;
	/** PIB Attribute 64-bit */
	uint64_t pib_value_64bit;
} PibValue_t;

// *****************************************************************************
/* PHY Configuration Parameters
 
   Summary:
    PHY Configuration parameters supported by transceiver
 
   Description:
    Following are the list of configuration parameters which can be read from the 
    transceiver
 
   Remarks:
    None
 */
 
typedef enum param_tag {
    /** Antenna Diversity */
	ANT_DIVERSITY     = 0x00,
    /** Antenna Configured - ANTENNA_1/ANTENNA_2*/
	ANT_SELECT        = 0x01,
    /** Antenna Control */
	ANT_CTRL          = 0x02,
    /** Promiscuous Mode*/
	AACK_PROMSCS_MODE = 0x03,
    /** Tx Power Configured*/
	TX_PWR            = 0x06,
    /** Rx Sensitivity*/
    RX_SENS           = 0x07,
    /** RX Reduced Power Consumption*/
    RX_RPC            = 0x08,
    /** Automatic acknowledgement*/
    RX_AUTO_ACK       = 0x09,
    /** Reserved frame reception*/
    RX_RESERVED_FRAME = 0x0A,
    /** Filter reserved frame*/
    FILTER_RESERVED_FRAME = 0x0B,
}PHY_ConfigParam_t;

// *****************************************************************************
/* PHY Frame information structure
 
   Summary:
    PHY_FrameInfo_t holds the data to be transmitted or the data being received 
    by the transceiver. 
 
   Description:
    None
 
   Remarks:
    None 
 */
 
typedef struct frame_info_tag
{
	/** Pointer to buffer header of frame */
	buffer_t *buffer_header;
	/** Pointer to MPDU */
	uint8_t *mpdu;
} PHY_FrameInfo_t;

// *****************************************************************************
/* PHY Sleep Modes
 
   Summary:
    Sleep Modes supported by transceiver
 
   Description:
    List of sleep modes supported by the transceiver. If, TRX is set to SLEEP_MODE_1,
    the TRX register contents are retained. If, TRX is set to DEEP_SLEEP_Mode 
    state the register contents are cleared
 
   Remarks:
    None 
 */
 
typedef enum sleep_mode_tag {
	SLEEP_MODE_1,
	DEEP_SLEEP_MODE
} PHY_SleepMode_t;

// *****************************************************************************
/* PHY CSMA Modes
 
   Summary:
   List of carrier sense multiple access with collision avoidance 
   supported by PHY Layer
 
   Description:
    When Transmit function is called with PHYCSMAMode of 
    NO_CSMA_NO_IFS    - Immediate Tx and SIFS(Short InterFrameSpacing) between 
                       subsequent frames
    NO_CSMA_WITH_IFS  - Immediate Tx and LIFS (Long InterFrameSpacing) between
                       subsequent frames
    CSMA_UNSLOTTED    - Hardware CSMA will be performed before packet transmission 
                        with number of retries configured 
    CSMA_SLOTTED      - Hardware CSMA will be performed - Used with Beacon 
                        Enabled network - Currently not supported by PHY 
   Remarks:
    None 
 */
 
typedef enum csma_mode_tag {
	NO_CSMA_NO_IFS,
	NO_CSMA_WITH_IFS,
	CSMA_UNSLOTTED,
	CSMA_SLOTTED
} PHY_CSMAMode_t;

// *****************************************************************************
/* PHY Continuous Transmission test Modes
 
   Summary:
    List of Continuous Transmission Test Modes supported by transceiver
 
   Description:
    CW_MODE - Continuous Wave mode to transmit the signal at Fc +&- 0.5MHz frequency 
    PRBS_MODE  - PRBS mode to Pseudorandom Binary Sequence frame continuously
 
   Remarks:
    None 
 */
 
typedef enum continuous_tx_mode_tag {
	/* Continuous Wave mode to transmit 
	 * the signal at Fc +&- 0.5MHz frequency */
	CW_MODE = 0,
	/* PRBS mode to Pseudorandom Binary Sequence frame continuously */
	PRBS_MODE = 1
} PHY_ContinuousTxMode_t;


// *****************************************************************************
/* PHY Return Values
 
   Summary:
    List of return status for the PHY functions
 
   Description:
    None
   Remarks:
    None 
 */
 
typedef enum phy_return_value_tag {
	/* General Success condition*/
    PHY_SUCCESS                 = 0x00, 
	/* Transceiver is currently sleeping */
    PHY_TRX_ASLEEP              = 0x81,
	/* Transceiver is currently awake */
	PHY_TRX_AWAKE               = 0x82, 
	/* 15.4 subsytem request is aborted due to BT subsystem High priority request */                                 
    PHY_RF_REQ_ABORTED          = 0x83, 
	/* RF is not available for 802.15.4 subsytem*/
    PHY_RF_UNAVAILABLE          = 0x84, 
	/* General failure condition */
	PHY_FAILURE                 = 0x85,
	/* PHY busy condition */	
	PHY_BUSY                    = 0x86, 
	/* Frame pending at PHY */
	PHY_FRAME_PENDING           = 0x87,
	/*A parameter in the set/get request is either not supported or is out ofthe valid range*/	
    PHY_INVALID_PARAMETER       = 0x88,
	/*A SET/GET request was issued with the identifier of a PIB attribute that is not supported	*/
    PHY_UNSUPPORTED_ATTRIBUTE   = 0x89, 
	/* The CCA attempt has detected a busy channel.*/
    PHY_CHANNEL_BUSY            = 0x8A,
	/* The CCA attempt has detected an idle channel.*/	
    PHY_CHANNEL_IDLE            = 0x8B,
	/* TRX received no ack for the previously sent packet*/	
    PHY_NO_ACK                  = 0x8C, 
	/* Transmit is failed due to Channel access failure*/
    PHY_CHANNEL_ACCESS_FAILURE  = 0x8D  
            
}PHY_Retval_t;

 // *****************************************************************************
/* PHY Transceiver State Values
 
   Summary:
    Enumeration for Transceiver States that can be set 
 
   Description:
    None
   Remarks:
    None 
 */
 
typedef enum phy_trx_state_tag{
	/* Transceiver to be configured to Transceiver OFF state*/
	PHY_STATE_TRX_OFF,
	/* Transceiver to be configured to Receiver ON state */
	PHY_STATE_RX_ON
}PHY_TrxState_t;

 // *****************************************************************************
/* PHY Transceiver Status Values
 
   Summary:
    Enumeration for current state of the Transceiver
   Description:
    None
   Remarks:
    None 
 */

typedef enum phy_trx_status_tag{
	/* Transceiver is in Transceiver OFF state*/
    PHY_TRX_OFF = 0x08,
	/* Transceiver is in Receiver ON state */
    PHY_RX_ON   = 0x16,
	/* Transceiver is in Transmit ON state */
    PHY_TX_ON   = 0x19,
	/* Transceiver is currently receiving the packet*/
    PHY_BUSY_RX = 0x11,
	/* Transceiver is currently transmitting the packet */
    PHY_BUSY_TX = 0x12,
	/* Transceiver is in sleep state */
    PHY_TRX_SLEEP  = 0x0F,
	/* Transceiver is in Deep sleep state */
    PHY_TRX_DEEP_SLEEP = 0x20
}PHY_TrxStatus_t;

// ****************************************************************************
/* Short address type declaration */
typedef uint16_t ShortAddr_t; 

// ****************************************************************************
/* Ieee address type declaration */
typedef uint64_t IeeeAddr_t;   

// ****************************************************************************
/* Union of possible MAC address types*/
typedef union
{
  ShortAddr_t shortAddr;
  IeeeAddr_t   ieeeAddr;
  uint8_t     val[8];
} PHY_Addr_t;

// ****************************************************************************
typedef uint8_t (*PTA_REQ_FUNC_PTR)(uint8_t);

typedef struct phy_pta_req_ptrs
{
	PTA_REQ_FUNC_PTR pta_req_tx_set;
	PTA_REQ_FUNC_PTR pta_req_rx_set;
	PTA_REQ_FUNC_PTR pta_req_ed_set;
}PHY_PtaReq_t;

/* PTA Prioirty level Config*/
 typedef enum tx_prio_level
{
    TX_PRIO_ALWAYS        = 1,
    TX_PRIO_PENULTIMATE   = 2,
    TX_PRIO_NEVER         = 3
}PHY_TxPrioLevel_t;

typedef enum rx_prio_level
{
    RX_PRIO_ALWAYS          = 1,
    RX_PRIO_PREAMBLE_DETECT = 2,
    RX_PRIO_ADDR_MATCH      = 3,
	RX_PRIO_NEVER	        = 4
}PHY_RxPrioLevel_t;

typedef struct pta_tx_config
{
    PHY_TxPrioLevel_t cca_backoff_prio;
    PHY_TxPrioLevel_t mac_retry_prio;
    
}PHY_PtaTxConfig_t;

typedef struct pta_rx_config
{
    PHY_RxPrioLevel_t prio;
}PHY_PtaRxConfig_t;

typedef struct pta_ed_config
{
    bool enable;
}PHY_PtaEdConfig_t;

typedef struct pta_debug_config
{
    bool enable;
}PHY_PtaDebugConfig_t;


typedef struct phy_pta_config
{
    uint8_t            ptaenable;
    PHY_PtaTxConfig_t    tx;
    PHY_PtaRxConfig_t    rx;
    PHY_PtaEdConfig_t    ed;
    PHY_PtaDebugConfig_t debug;
}PHY_PtaConfig_t;


// *****************************************************************************
// *****************************************************************************
// Section: Macros
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Transmit Power Max value as per Regulatory region selected in Device support 
   library
 
   Summary:
    Constant Transmit Power Max value as per Regulatory region
   Description:
    This Macro defines the maximum transmit power that can be set in the Transceiver
    as per Regulatory region selected in Device support 
    library. User cannot set the Tx power beyond this value.
    
   Remarks:
    This is auto generated value - Shouldn't be changed by user- Read only MACRO. 
 */

#define PHY_TX_PWR_MAX                       (15)

// *****************************************************************************
/* Default Antenna Gain of the Module
 
   Summary:
    Macro holding the constant default antenna gain of the module
   Description:
    Antenna Gain value is taken into account while converting radiated power 
    to conductive power. If the WBZ45x/PIC32Cx-BZ2 device holding the valid antenna 
    gain in device support library information base, that value is taken for conversion. 
    Otherwise DEFAULT_ANT_GAIN is used
   Remarks:
    This is auto generated value - Shouldn't be changed by user- Read only MACRO. 
 */

#define DEFAULT_ANT_GAIN                    (3)

// *****************************************************************************
/* Custom PHY PIB attribute ID 
 
   Summary:
    Seting this attribute enables the device as PAN Coordinator 
   Description:
    if only source addressing fields are included in a data or MAC command frame, 
	the frame shall be accepted only if the device is the PAN coordinator and 
	the source PAN identifier matches macPANId, for details refer to 
	IEEE 802.15.4-2006, Section 7.5.6.2 (third-level filter rule six
   Remarks:
    None 
 */

#define mac_i_pan_coordinator                         (0x0B)

// *****************************************************************************
/* Macro to convert Symbols to Microsecond 
 
   Summary:
    This macro function converts the given symbol value to microseconds 
   Description:
    None
   Remarks:
    None 
 */
#define PHY_CONVERT_SYMBOLS_TO_US(symbols)            ((uint32_t)(symbols) << 4)

// *****************************************************************************
/* Macro to convert Microsecond to symbols
 
   Summary:
    This macro function converts the given time in microseconds to symbols 
   Description:
    None
   Remarks:
    None 
 */
#define PHY_CONVERT_US_TO_SYMBOLS(time)               ((time) >> 4)


// *****************************************************************************
// *****************************************************************************
// Section: Release Version Macros
// *****************************************************************************
// *****************************************************************************


/* Major Number
 
   Summary:
    This macro holds the stack Major number 
   Description:
	None
   Remarks:
    None 
 */
#define MAJOR_NUM                 "1"


/* Minor Number
 
   Summary:
    This macro holds the stack Minor number 
   Description:
	None
   Remarks:
    None 
 */
#define MINOR_NUM                 "4"

/* Patch Number
 
   Summary:
    This macro holds the stack patch number 
   Description:
	None
   Remarks:
    None 
 */
#define PATCH_NUM                 "0"


/* PHY Version
 
   Summary:
    This macro holds the PHY SW version as a String 
   Description:
	None
   Remarks:
    None 
 */
#if (defined RC_NUM)
#define PHY_VER   "802.15.4-PHY v" MAJOR_NUM"." MINOR_NUM"." PATCH_NUM"-rc." RC_NUM
#else
#define PHY_VER   "802.15.4-PHY v" MAJOR_NUM"." MINOR_NUM"." PATCH_NUM
#endif

/* Release version information in 32-bit bitfield 
 
| bit pos | field name      | meaning                        |
|---------|-----------------|------------------------------  |
| 0-13    | reserved        | NA                             |
| 14-17   | build itreation | running version of this release|
| 18-19   | qualifier       | 00 - reserved                  |
|         |                 | 01 - Production (P)            |
|         |                 | 10 - Engineering (E)           |
|         |                 | 11 - reserved                  |
| 20-23   | stack minor     | minor version                  |
| 24-27   | stack major     | major version                  |
| 28-31   | reserved        | NA                             |


Example:
  802.15.4-PHY v1.3.0 is represented as 0x01340000

|0000       |0001        | 0100        | 01        | 0000           | 00000000000000|
|-----------|------------|-------------|-----------|----------------|---------------|
|Reserved   | Stack Major| Stack Minor | Qualifier | Build Iteration| Reserved      |
*/

 
/* PHY Software Version Information in 32-bit bitfield
 
   Summary:
    This macro holds PHY Software Version Information in 32-bit bitfield
   Description:
    None
   Remarks:
    None 
*/
#define PHY_VERSION_VALUE      (0x01440000)

// *****************************************************************************
// *****************************************************************************
// Section: PHY PIB Attribute List
// *****************************************************************************
// *****************************************************************************

// ***************************************************************************** 
/* PHY Information Base (PIB) Attribute list

| PIB Attribute       |AccessType| Type    | DefaultValue     | Range           |
|---------------------|----------|---------|------------------|-----------------|
| phyCurrentChannel   | Get/Set  | uint8_t | 11               | 11 - 26         |
| phyChannelsSupported| Get      | uint32_t| 0x07FFF800       | NA              |                    
| phyCurrentPage      | Get/Set  | uint8_t | 0                | 0,2,16,17       |
| phyTransmitPower    | Get/Set  | uint8_t | 4                |                 |
| phyCCAMode          | Get/Set  | uint8_t | 1                | 0 - 3           |
| macIeeeAddress      | Get/Set  | uint64_t| All 0's          | NA              |
| macShortAddress     | Get/Set  | uint16_t| 0xFFFF           | 0x0000 - 0xFFFF |
| macPANId            | Get/Set  | uint16_t| 0xFFFF           | 0x0000 - 0xFFFF |
| macMinBE            | Get/Set  | uint8_t | 3                | 0 - 3           |
| macMaxBE            | Get/Set  | uint8_t | 5                | 3 - 8           |
| macMaxCSMABackoffs  | Get/Set  | uint8_t | 4                | 0 - 5           |
| macMaxFrameRetries  | Get/Set  | uint8_t | 3                | 0 - 7           |
| macPromiscuousMode  | Get/Set  | bool    | 0                | 0 or 1          |
| phySHRDuration      | Get      | uint8_t | 10 Symbols       | NA              |
| phySymbolsPerOctet  | Get      | uint8_t | 2 Symbols        | NA              |
| phyMaxFrameDuration | Get      | uint16_t| 266 Symbols      | NA              |
| macIpanCoordinator  | Get/Set  | bool    | 0                | 0 or 1          |
 */

// *****************************************************************************
// *****************************************************************************
// Section: PHY Task Handler Funtions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************    
/*
  Function:
    void PHY_TaskHandler ( void )

  Summary:
    PHY Task Handling routine

  Description:
    This function
   - Checks and allocates the receive buffer.
   - Processes the PHY incoming frame queue.
   - Implements the PHY state machine.

  Precondition:
    PHY_Init should be called before calling this function

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    PHY_TaskHandler();
    </code>

  Remarks:
    This routine must be called from the RTOS Task function incase of any 
    RTOS is used.
*/
void PHY_TaskHandler(void);

// *****************************************************************************
// *****************************************************************************
// Section: PHY Initialization and Reset Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_Init( void )

  Summary:
    Initialization of PHY Layer

  Description:
    This function is called to initialize the PHY layer. The transceiver is
    initialized and it will be in  PHY_STATE_TRX_OFF, the PHY PIBs are set to 
    their default values. PAL layer is initialized

  Precondition:
    SYS_Load_Cal(WSS_ENABLE_ZB) function of device support library should be 
    called before calling this function. 

  Parameters:
    None.

  Returns:
    PHY_SUCCESS - If the transceiver state is changed to TRX_OFF
    PHY_FAILURE - Otherwise

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
 
    retVal = PHY_Init();
    if (PHY_SUCCESS =! retVal)
    {
        while(1);
    }
    </code>

  Remarks:
    This routine must be called before any of the PHY function is called
*/
PHY_Retval_t PHY_Init(void);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_Reset( bool setDefaultPibs )

  Summary:
    Resets the PHY Layer

  Description:
    This function is called to Resets PHY state machine 
    and sets the default PIB values if requested

  Precondition:
    PHY_Init() should have been called before calling this function 

  Parameters:
    setDefaultPibs - Defines whether PIB values need to be set
                     to its default values

  Returns:
    PHY_SUCCESS - If the transceiver state is changed to TRX_OFF and PIBs are set 
                  to their default value 
    PHY_FAILURE - Otherwise

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    bool setDefault = false;
 
    retVal = PHY_Reset(setDefault);
    if (PHY_SUCCESS =! retVal)
    {
        while(1);
    }
    </code>

  Remarks:
    None
*/

PHY_Retval_t PHY_Reset(bool setDefaultPib);

// *****************************************************************************
// *****************************************************************************
// Section: PHY Tranmission Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_TxFrame(PHY_FrameInfo_t *txFrame, PHY_CSMAMode_t csmaMode,
                             bool performFrameRetry)

  Summary:
    Request to PHY to transmit frame

  Description:
    This function is called by the upper layer (MAC/Application) to deliver a 
    frame to the PHY to be transmitted by the transceiver.
  
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    txFrame     - Pointer to the PHY_FrameInfo_t structure or
                  to frame array to be transmitted
                txFrame->mpdu - Pointer to the PHY Payload. mpdu[0] should hold 
						the length of the payload(N) + 1 (for length field length)
                txFrame->mpdu[1-N] - Hold the phyPayload
  
    csmaMode    - Indicates mode of csma-ca to be performed for this frame
                NO_CSMA_NO_IFS    - Immediate Tx and SIFS(Short InterFrameSpacing) 
                                    between subsequent frames
                NO_CSMA_WITH_IFS  - Immediate Tx and LIFS (Long InterFrameSpacing) 
                                    between subsequent frames
                CSMA_UNSLOTTED    - Hardware CSMA will be performed before packet 
                                    transmission with number of retries configured 
                CSMA_SLOTTED      - Hardware CSMA will be performed - Used with 
                                    Beacon Enabled network - Currently not supported 
                                    by PHY
    performFrameRetry - Indicates whether to retries are to be performed
                        for this frame
                        true - SW retry will be performed for macMaxFrameRetries
                               value
                        false- SW retry is disabled       

  Returns:
    PHY_SUCCESS -  If PHY has accepted the data from the MAC for frame
                   transmission
    PHY_BUSY    -  If PHY is busy servicing the previous MAC request

  Example:
    <code>
    uint8_t txBuffer[LARGE_BUFFER_SIZE];
    uint8_t txData[] = "Wireless!!!";
    PHY_CSMAMode_t csmaMode = CSMA_UNSLOTTED;
    bool performRetry = true;
    PHY_FrameInfo_t txFrame;
    
    txFrame.mpdu = txBuffer;
    txBuffer[0] = sizeof(txData);
    memcpy((uint8_t *)&txBuffer[1], txData, sizeof(txData));
 
    if(PHY_SUCCESS == PHY_TxFrame(&txFrame, csmaMode, performRetry))
    {
        printf("Frame Transmission Initiated");
    }   
    </code>

  Remarks:
    None
*/
PHY_Retval_t PHY_TxFrame(PHY_FrameInfo_t *txFrame, PHY_CSMAMode_t csmaMode,
		bool performFrameRetry);
		
// *****************************************************************************
/*
  Function:
    void PHY_TxDoneCallback(PHY_Retval_t status, PHY_FrameInfo_t *frame)

  Summary:
    User callback function for the transmission of a frame

  Description:
    This callback function SHOULD be defined by the upper layer(Application/MAC)
    for getting the status of last transmitted packet.
  
  Precondition:
    This is a Asynchronous function call for the transmission of a frame

  Parameters:
    status      - Status of frame transmission attempt
                  PHY_SUCCESS        - The transaction was responded to by a valid ACK, 
                                       or, if no ACK is requested, after a successful
                                       frame transmission.
                  PHY_FRAME_PENDING  - Equivalent to SUCCESS and indicating that 
                                       the ?Frame Pending? bit of the received 
                                       acknowledgment frame was set.
                  PHY_CHANNEL_ACCESS_FAILURE - Channel is still busy after attempting 
                                               MAX_CSMA_RETRIES of CSMA-CA.
                  PHY_NO_ACK         - No acknowledgement frames were received 
                                       during all retry attempts.
                  PHY_FAILURE        - Transaction not yet finished.
                  PHY_RF_REQ_ABORTED - RF is busy performing Higher priority BLE task 
                                       and the transmission is aborted
                  PHY_RF_UNAVAILABLE - RF is currently unavailable for 15.4 subsystem
 
    frame       - Pointer to the PHY_FrameInfo_t structure or
                  to frame array to be transmitted
                txFrame->mpdu - Pointer to the PHY Payload. mpdu[0] should hold 
						the length of the payload(N) + 1 (for length field length)
                txFrame->mpdu[1-N] - Hold the phyPayload     

  Returns:
    None

  Example:
    <code>
    void PHY_TxDoneCallback(PHY_Retval_t status, PHY_FrameInfo_t *frame)
    {
        status = status;
        frame = frame;
    }
    </code>

  Remarks:
    None
*/
void PHY_TxDoneCallback(PHY_Retval_t status, PHY_FrameInfo_t *frame);

// *****************************************************************************
// *****************************************************************************
// Section: PHY Energy Detaction Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_EdStart(uint8_t scanDuration)

  Summary:
    Starts ED Scan

  Description:
    This function starts an ED Scan for the scan duration specified by the
    upper layer. Actual ED result of Energy level on current channel will be 
    indicated by PHY_EdEndCallback(eneryLevel).
    Scan duration formula:  aBaseSuperframeDuration * (2^SD + 1) symbols
                            where SD - scanDuration parameter (0 - 14)

  Precondition:
    PHY_Init() should have been called before calling this function 

  Parameters:
    scanDuration - Specifies the ED scan duration in symbols
                   Range - (0 to 14) 

  Returns:
    PHY_SUCCESS - ED scan is started successfully
    PHY_BUSY - PHY is busy servicing the previous request
    PHY_TRX_ASLEEP - Transceiver is currently sleeping, wakeup the transceiver 
                     using PHY_TrxWakeup() function
    PHY_FAILURE otherwise

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t scanDurationSym = 1;
 
    retVal = PHY_EdStart(scanDurationSym);
    if (PHY_SUCCESS =! retVal)
    {
        printf("ED Scan Cannot be started at this moment");
    }
    </code>

  Remarks:
    PHY_EdEndCallback(energyLevel) will be called after scanning the current 
    channel for a time period of aBaseSuperframeDuration * (2^scanDuration + 1) symbols
    For scanDuration of value 0, ScanTime = 960 *(2^0 +1) 
                                          = 1920 symbols = 30720 us
*/
PHY_Retval_t PHY_EdStart(uint8_t scanDuration);

// *****************************************************************************
/*
  Function:
    void PHY_EdEndCallback(uint8_t energyLevel)

  Summary:
    User callback function for Energy detection

  Description:
    This function SHOULD be defined by the upperlayer (Application/MAC layer) 
    in order to get the energyLevel on the current channel which is being scanned 
    for a period of scanDuration symbols 

  Precondition:
    This is an Asynchronous function call for the energy scan complete 

  Parameters:
    energyLevel - Measured energy level during ED Scan
 
    With energy_level, the RF input power can be calculated as follows
    PRF[dBm] = RSSI_BASE_VAL[dBm] + 1[dB] x energy_level

  Returns:
    None

  Example:
    <code>
    void PHY_EdEndCallback(uint8_t energyLevel)
    {
        int8_t energyLeveldBm = (int8_t) (PHY_GetRSSIBaseVal() + energyLevel);
        energyLevel = energyLevel; 
    }
    </code>

  Remarks:
    None
*/
void PHY_EdEndCallback(uint8_t energyLevel);

// *****************************************************************************
// *****************************************************************************
// Section: PHY Information Base Set/Get Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_PibGet(uint8_t attribute, uint8_t *value)

  Summary:
    Gets a PHY PIB attribute

  Description:
    This function is called to retrieve the transceiver information base
    attributes. The list of PHY PIB attributes, its default values and 
    range are described in the above table. 
    For more information refer ieee_phy_const.h file

  Precondition:
    PHY_init() should have been called before calling this function.

  Parameters:
    attribute - PHY infobase attribute ID
    value     - Pointer to the PHY infobase attribute value

  Returns:
    PHY_UNSUPPORTED_ATTRIBUTE - If the PHY infobase attribute is not found
    PHY_SUCCESS - otherwise

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel;
    uint8_t shortAddr;
    
    retVal = PHY_PibGet(phyCurrentChannel, &phyChannel);
    if(PHY_SUCCESS == retVal)
    {
        printf("\r\n PHY Current Channel - %d",phyChannel ); 
    }
    
    retVal = PHY_PibGet(macShortAddr, &shortAddr);
    if(PHY_SUCCESS == retVal)
    {
        printf("\r\n Device short addr - 0x%x",shortAddr ); 
    }
  
    </code>

  Remarks:
    None
*/
PHY_Retval_t PHY_PibGet(uint8_t attribute, uint8_t *value);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_PibSet(uint8_t attribute, PibValue_t *value)

  Summary:
    Sets the PHY PIB attribute with value

  Description:
    This function is called to set the transceiver information base
    attributes. The list of PHY PIB attributes, its default values and 
    range are described in the above table. 
    For more information refer ieee_phy_const.h file

  Precondition:
    PHY_init() should have been called before calling this function.

  Parameters:
    attribute - PHY infobase attribute ID
    value     - Pointer to the PHY infobase attribute value to be set

  Returns:
    PHY_UNSUPPORTED_ATTRIBUTE - if the PHY info base attribute is not
                                found
    PHY_BUSY - If the PHY is not in PHY_IDLE state. An exception is
               macBeaconTxTime which can be accepted by PHY even if PHY is not
                in PHY_IDLE state.
    PHY_SUCCESS - If the attempt to set the PIB attribute was successful
    PHY_TRX_ASLEEP - If trx is in SLEEP mode and access to trx is
                     required

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel = 15;
    uint8_t shortAddr = 0x1234;
    PibValue_t pibValue;
    
    pibValue.pib_value_8bit = phyChannel;
    retVal = PHY_PibSet(phyCurrentChannel, &pibValue);
    if(PHY_SUCCESS == retVal)
    {
         printf("Channel is configured ");
    }
  
    pibValue.pib_value_16bit = shortAddr;
    retVal = PHY_PibSet(macShortAddr, &pibValue);
    if(PHY_SUCCESS == retVal)
    {
         printf("Short Address is configured ");
    }
  
    </code>

  Remarks:
    None
*/
PHY_Retval_t PHY_PibSet(uint8_t attribute, PibValue_t *value);


// *****************************************************************************
// *****************************************************************************
// Section: PHY Reception Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_TrxStatus_t PHY_RxEnable(PHY_TrxState_t state)

  Summary:
    Switches receiver on or off

  Description:
    This function switches the receiver on (PHY_STATE_RX_ON) or off (PHY_STATE_TRX_OFF)
 
  Precondition:
    PHY_init() should have been called before calling this function.

  Parameters:
    state - State of the Transceiver to be set
            PHY_STATE_RX_ON - Transceiver will be put into Receive state
            PHY_STATE_TRX_OFF - Transceiver will be put into OFF state         

  Returns:
    PHY_TRX_OFF- If receiver has been switched off, or
    PHY_RX_ON  - otherwise.

  Example:
    <code>
    PHY_TrxStatus_t trxStatus;
    PHY_TrxState_t trxState = PHY_STATE_RX_ON;

    trxStatus = PHY_RxEnable(trxState);
    if(PHY_RX_ON == trxStatus)
    {
        printf("TRX is in receive state");
    } 
    </code>

  Remarks:
    None
*/
PHY_TrxStatus_t PHY_RxEnable(PHY_TrxState_t state);

// *****************************************************************************
/*
  Function:
    void PHY_RxFrameCallback(PHY_FrameInfo_t *rxFrame)

  Summary:
    User callback function for the reception of a frame

  Description:
    This callback function SHOULD be defined by the upper layer(Application/MAC)
    for getting the received frame details 
 
  Precondition:
    This is a Asynchronous function call for the reception of a frame

  Parameters:
    rxFrame - Pointer to received frame structure of type PHY_FrameInfo_t
              or to received frame array
              rxFrame->buffer_header - BMM Buffer Header of the frame
              rxFrame->mpdu - Actual MPDU comprises of 
                       mpdu[0]  - Payload Length(N)
                       mpdu[1-N]- Payload
                       mpdu[N+1]- LQI of received packet
                       mpdu[N+2]- ED_LEVEL of received packet        

  Returns:
    None

  Example:
    <code>
    uint8_t rxBuffer[LARGE_BUFFER_SIZE];
    uint8_t frameLen, frameLQI, frameED;
    int8_t frameRSSI;
    void PHY_RxFrameCallback(PHY_FrameInfo_t *frame)
    {
        printf("\n--RxCallbackreceived--");
        frameLen = frame->mpdu[0];
        memcpy(rxBuffer, (uint8_t *)&(frame->mpdu[1]), frameLen);
        frameLQI = frame->mpdu[frameLen+LQI_LEN];
        frameED = frame->mpdu[frameLen+LQI_LEN+ED_VAL_LEN];             
        frameRSSI = (int8_t)(frameED + PHY_GetRSSIBaseVal());  

        bmm_buffer_free((buffer_t *)(frame->buffer_header));
    } 
    </code>

  Remarks:
    None
*/
void PHY_RxFrameCallback(PHY_FrameInfo_t *rxFrame);


// *****************************************************************************
// *****************************************************************************
// Section: PHY TRX Power Management Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_TrxSleep(PHY_SleepMode_t mode)

  Summary:
    Sets the transceiver to sleep

  Description:
    This function sets the transceiver to sleep or deep sleep state.
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    mode    - Defines sleep mode of transceiver SLEEP or DEEP_SLEEP     

  Returns:
    PHY_BUSY                - The transceiver is busy in TX or RX
    PHY_SUCCESS             - The transceiver is put to sleep
    PHY_TRX_ASLEEP          - The transceiver is already asleep

  Example:
    <code>
    PHY_SleepMode_t sleepMode = SLEEP_MODE_1;
    bool trxSleepStatus = false;
 
    if (PHY_SUCCESS == PHY_TrxSleep(sleepMode))
	{
		trxSleepStatus = true;
	}  
    </code>

  Remarks:
    When TRX is put into DeepSleep, the TRX registers are reset and it will hold 
    default values, PIB values are getting written by PHY layer when Wakeup 
    function is called.User has to reconfigure the configuration parameters
    (PHY_ConfigParam_t) which are set by application. This procedure is not 
    needed for SLEEP mode as the TRX register values are retained.
*/
PHY_Retval_t PHY_TrxSleep(PHY_SleepMode_t mode);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_TrxWakeup(void)

  Summary:
    Wakes up the transceiver from sleep

  Description:
    This function awakes the transceiver from sleep state.
 
  Precondition:
    PHY_TrxSleep() should have been called before calling this function

  Parameters:
    None     

  Returns:
    PHY_TRX_AWAKE   - The transceiver is already awake
    PHY_SUCCESS     - The transceiver is woken up from sleep
    PHY_FAILURE     - The transceiver did not wake-up from sleep

  Example:
    <code>
    PHY_SleepMode_t sleepMode = SLEEP_MODE_1;
    bool trxSleepStatus = false;

    if (PHY_SUCCESS == PHY_TrxSleep(sleepMode))
	{
		trxSleepStatus = true;
	}

    if (PHY_SUCCESS == PHY_TrxWakeup())
    {
        trxSleepStatus = false;
    }  
    </code>

  Remarks:
    When TRX is put into DeepSleep, the TRX registers are reset and it will hold 
    default values, PIB values are getting written by PHY layer when Wakeup 
    function is called.User has to reconfigure the configuration parameters
    (PHY_ConfigParam_t) which are set by application. This procedure is not 
    needed for SLEEP mode as the TRX register values are retained.
*/
PHY_Retval_t PHY_TrxWakeup(void);

// *****************************************************************************
// *****************************************************************************
// Section: PHY TRX Feature Access Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    uint8_t PHY_EdSample(void)

  Summary:
    Perform a single ED measurement on current channel

  Description:
    This function is used to measure the energy level on current channel
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    None

  Returns:
    edValue -  Result of the measurement

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel = 15;
    uint8_t edLevel;
    int8_t pwrDbm;
    PibValue_t pibValue;
    

    pibValue.pib_value_8bit = phyChannel;
    retVal = PHY_PibSet(phyCurrentChannel, &pibValue);
    if(PHY_SUCCESS == retVal)
    {

        edLevel = PHY_EdSample();  

        pwrDbm = (int8_t)(edLevel + PHY_GetRSSIBaseVal());
    }
    
    </code>

  Remarks:
    PHY_EdSample scans the channel for 8 symbols(128us) and returns the energy level  
*/
uint8_t PHY_EdSample(void);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_CCAPerform(void)

  Summary:
    Perform a clear channel assessment

  Description:
    This function is used to perform a clear channel assessment on current channel.
    using configured CCA mode (can be set using PHY_PibSet of phyCCAMode). 
    This results in the status of channel is current busy or Idle.
    
    The different CCA modes supported by Transceiver are
    The CCA mode
    - CCA Mode 1: Energy above threshold. CCA shall report a busy medium
    upon detecting any energy above the ED threshold.
    - CCA Mode 2: Carrier sense only. CCA shall report a busy medium only upon
    the detection of a signal with the modulation and spreading characteristics
    of IEEE 802.15.4. This signal may be above or below the ED threshold.
    - CCA Mode 3: Carrier sense with energy above threshold. CCA shall report a
    busy medium only upon the detection of a signal with the modulation and
    spreading characteristics of IEEE 802.15.4 with energy above the ED
    threshold. 
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    None

  Returns:
    PHY_Retval_t  - PHY_CHANNEL_IDLE or PHY_CHANNEL_BUSY
                    PHY_CHANNEL_IDLE - The CCA attempt has detected an idle channel
                    PHY_CHANNEL_BUSY - The CCA attempt has detected a busy channel

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel = 15;
    PibValue_t pibValue;
    bool isChIdle = false;
 
    pibValue.pib_value_8bit = phyChannel;
    retVal = PHY_PibSet(phyCurrentChannel, &pibValue);
    if(PHY_SUCCESS == retVal)
    {
        retVal = PHY_CCAPerform(); 
        if (PHY_CHANNEL_IDLE == retVal)
        {
            isChIdle = true;
        } 
    }
    
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_CCAPerform(void);



// *****************************************************************************
/*
  Function:
    void PHY_StartContinuousTransmit(PHY_ContinuousTxMode_t txMode, 
                                        bool randomContent)

  Summary:
    Starts continuous transmission on current channel

  Description:
    This function is called to start the continuous transmission on current 
    channel.
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    txMode        - Mode of continuous transmission 
                    CW_MODE   - Continuous Wave mode to transmit 
                                the signal at Fc +&- 0.5MHz frequency
                    PRBS_MODE - PRBS mode to Pseudorandom Binary Sequence frame 
                                continuously
    randomContent - Use random content if true 

  Returns:
    None

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel = 15;
    PHY_ContinuousTxMode_t txMode = CW_MODE;
    bool useRandomContent = false;
    PibValue_t pibValue;
    

    pibValue.pib_value_8bit = phyChannel;
    retVal = PHY_PibSet(phyCurrentChannel, &pibValue);
    if(PHY_SUCCESS == retVal)
    {
        PHY_StartContinuousTransmit(txMode, useRandomContent);       
    }
    
    </code>

  Remarks:
    None 
*/
void PHY_StartContinuousTransmit(PHY_ContinuousTxMode_t txMode, 
                                 bool randomContent);
// *****************************************************************************
/*
  Function:
    void PHY_StopContinuousTransmit(void)

  Summary:
    Stops the continuous transmission on the current channel

  Description:
    This function is called to stop the continuous transmission
 
  Precondition:
    PHY_Init() should have been called before calling this function.
    This function will stop the continuous transmission which is started by 
    PHY_StartContinuousTransmit()function.
 
  Parameters:
    None 

  Returns:
    None

  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t phyChannel = 15;
    PHY_ContinuousTxMode_t txMode = PRBS_MODE;
    bool useRandomContent = true;
    bool contTxStarted = false;
    PibValue_t pibValue;
    
    pibValue.pib_value_8bit = phyChannel;
    retVal = PHY_PibSet(phyCurrentChannel, &pibValue);
    if(PHY_SUCCESS == retVal)
    {

        PHY_StartContinuousTransmit(txMode, useRandomContent);
        contTxStarted = true;      
    }
    
    if(contTxStarted)
    {
       PHY_StopContinuousTransmit();
    }   
    </code>

  Remarks:
    When continuous tx is stopped, the PHY_Reset function is called.
    User has to reconfigure the configuration parameters
    (PHY_ConfigParam_t) which are set by application.
*/
void PHY_StopContinuousTransmit(void);

// *****************************************************************************
// *****************************************************************************
// Section: PHY TRX Configuration Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigTxPwr(bool type, int8_t pwrValue)

  Summary:
    Configures the TX Power in Transceiver

  Description:
    This function is used to configure the Transmit power of the transceiver
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    type        -  PWR_REGISTER_VALUE or PWR_DBM_VALUE
    pwrValue    -  Index of the power register value (0-15) or Power value in dBm
                   If LPA is enabled - Pmax - +5.5 dBm to Pmin - (-14)dbm
                   If LPA&MPA enabled - Pmax - +12 dBm to Pmin - (-16)dbm     

  Returns:
    PHY_SUCCESS  - If pwrValue bit is configured correctly
    PHY_FAILURE  - Otherwise

  Example:
    <code>
    bool pwrType = PWR_REGISTER_VALUE;
    uint8_t pwrIndex = 0x00;
    bool configStatus = false;

    if (PHY_SUCCESS == PHY_ConfigTxPwr(pwrType, int8_t (pwrIndex)))
    {
        configStatus = true;
    }

    int8_t pwrDbm = -17;
    pwrType = PWR_DBM_VALUE;
    if (PHY_SUCCESS == PHY_ConfigTxPwr(pwrType, int8_t (pwrDbm)))
    {
        configStatus = true;
    }
 
    uint8_t pwrReg;
    PHY_GetTrxConfig(TX_PWR, &pwrReg);   
    </code>

  Remarks:
    None .
*/
PHY_Retval_t PHY_ConfigTxPwr(bool type, int8_t pwrValue);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t  PHY_ConfigAntennaDiversity(bool divCtrl, uint8_t antCtrl)

  Summary:
    Configures antenna diversity and selects antenna

  Description:
    This function is used to enable the Antenna Diversity feature and 
    to select the antenna path if the feature is disabled.
    Antenna Diversity uses two antennas to select the most reliable RF signal path. 
    To ensure highly independent receive signals on both antennas, 
    the antennas should be carefully separated from each other.
    If a valid IEEE 802.15.4 frame is detected on one antenna, this antenna is 
    selected for reception. Otherwise the search is continued on the other antenna 
    and vice versa.
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    divCtrl  - true/false to enable/disable antenna diversity algorithm
    antCtrl  - 0 or 3 when antenna diversity is enabled
               1 or 2 to select antenna 1 or antenna 2   

  Returns:
    PHY_SUCCESS -  If Antenna Diversity/ Control bits are configured correctly
    PHY_FAILURE -  otherwise

  Example:
    <code>
    bool antDiv = ANTENNA_DIVERSITY_DISABLE;
    uint8_t antennaSel =  ANTENNA_CTRL_1;

	PHY_ConfigAntennaDiversity(antDiv, antennaSel);
    
    PHY_GetTrxConfig(ANT_DIV, &antDiv); 
    PHY_GetTrxConfig(ANT_SELECT, &antennaSel);    
    </code>

  Remarks:
    None 
*/
PHY_Retval_t  PHY_ConfigAntennaDiversity(bool divCtrl, uint8_t antCtrl);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigRxSensitivity(uint8_t pdtLevel)

  Summary:
    Configures receiver sensitivity level. This is used to desensitize 
    the receiver

  Description:
    This function is used to reduce the sensitivity of the receiver. 
    The input pdtLevel(Power Detect Level) desensitize the receiver such that 
    frames with an RSSI level below the pdtLevel threshold level (if pdtLevel > 0) 
    are not received. For a pdtLevel > 0 value the threshold level can be 
    calculated according to the following formula: 
            PRF[dBm] > RSSIBASE_VAL[dBm] + 3[dB] x (pdtLevel - 1)
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    pdtLevel    -   0 to 15 levels of rx sensitivity(RX_PDT_LEVEL)
                      

  Returns:
    PHY_SUCCESS -  If pdtLevel bits are configured correctly
    PHY_FAILURE -  otherwise

  Example:
    <code>
    uint8_t pdtLevel =  0x03;
 
	PHY_ConfigRxSensitivity(pdtLevel);
    PHY_GetTrxConfig(RX_SENS, &pdtLevel); 
     
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_ConfigRxSensitivity(uint8_t pdtLevel);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigRxPromiscuousMode(bool promCtrl)

  Summary:
    Configures RX promiscuous mode

  Description:
    This function is used to enable the RX promiscuous mode. The TRX will receive
    all frames even with FCS failure, PHY layer will discard the CRC invalid packet 
    and TRX will not acknowledge even ack is requested by the received 
    packet(auto ack is disabled in this mode). 
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    promCtrl  - true  -  To enable promiscuous mode
                false -  To disable promiscuous mode

  Returns:
    PHY_SUCCESS -  If promCtrl bits are configured correctly
    PHY_FAILURE -  otherwise

  Example:
    <code>
    bool promCtrl =  true;
 
	PHY_ConfigRxPromiscuousMode(promCtrl);
    
    PHY_GetTrxConfig(AACK_PROMSCS_MODE, &promCtrl); 
     
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_ConfigRxPromiscuousMode(bool promCtrl);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigRxRPCMode(uint8_t rxRPCEnable)

  Summary:
    Configures the reduced power consumption mode

  Description:
    The function is used to configure the reduced power consumption mode of the receiver
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    rxRPCEnable - 0x01  -  to enable the rx RPC mode
                  0x00 -  to disable the rx RPC mode
 

  Returns:
    PHY_Retval_t - PHY_SUCCESS  If trx is configured correctly
 *                 PHY_FAILURE  otherwise
  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    uint8_t rxRPCEnable = 0x01;
 
    retVal = PHY_ConfigRxRPCMode(rxRPCEnable);
    if(PHY_SUCCESS == retVal)
    {
        printf("Trx is configured to reduced power consumption mode");
    }   
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_ConfigRxRPCMode(uint8_t rxRPCEnable);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigAutoAck(bool enableAACK)

  Summary:
    Configures TRX for auto acknowledging the reserved frame

  Description:
    The function is used to configure the automatic acknowledgment from 
    Transceiver after packet reception. 
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    nableAACK - true -  to enable the automatic 
                        acknowledgment after reception
                false - to disable the automatic 
                        acknowledgment after reception
 

  Returns:
    PHY_Retval_t - PHY_SUCCESS  If trx is configured correctly
                   PHY_FAILURE  otherwise
  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    bool isEnableAACK = true;
 
    retVal = PHY_ConfigAutoAck(isEnableAACK);
    if(PHY_SUCCESS == retVal)
    {
        printf("Trx is configured to auto acknowledge for the received packet");
    }   
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_ConfigAutoAck(bool enableAACK);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConfigReservedFrameFiltering(bool recReservedFrame, 
        bool bypassFrameFilter )

  Summary:
    Configures TRX for receiving reserved frame

  Description:
    This function is used to configure the trx for receiving the reserved frame 
    type frames and to enable/disable the frame filtering . 
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    recReservedFrame    - true  to enable the reception of reserved frame types 
                          acknowledgment after reception
    bypassFrameFilter   - true to bypass the frame filtering at the hardware 
                           level like data frame as specified in IEEE specification

  Returns:
    PHY_Retval_t - PHY_SUCCESS  If trx is configured correctly
 *                 PHY_FAILURE  otherwise
  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    bool rxResFrame = true;
    bool bypassFrameFiltering = false;
 
    retVal = PHY_ConfigReservedFrameFiltering(rxResFrame, bypassFrameFiltering);
    if(PHY_SUCCESS == retVal)
    {
    }   
    </code>

  Remarks:
        Trx is configured to receive the reserved frame and to do the frame 
         filtering as stated in IEEE Spec
*/
PHY_Retval_t PHY_ConfigReservedFrameFiltering(bool recReservedFrame, 
        bool bypassFrameFilter );

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_GetTrxConfig(PHY_ConfigParam_t parameter, uint8_t *paramValue)

  Summary:
    To read a current setting of particular transceiver parameter

  Description:
    The function is used to read the current of particular parameter. 
    The following parameters can be read from TRX,
        ANT_DIVERSITY     
        ANT_SELECT        
        ANT_CTRL          
        AACK_PROMSCS_MODE 
        TX_PWR            
        RX_SENS           
        RX_RPC                
        RX_AUTO_ACK       
        RX_RESERVED_FRAME 
        FILTER_RESERVED_FRAME 
 
  Precondition:
    PHY_Init() should have been called before calling this function.
 
  Parameters:
    parameter   - Type of the parameter to be read
    paramValue  - Pointer to the current parameter value
 
  Returns:
    PHY_Retval_t - PHY_INVALID_PARAMETER If the parameter is invalid
                 - PHY_SUCCESS otherwise
  Example:
    <code>
    PHY_Retval_t retVal = PHY_FAILURE;
    bool promCtrl = true;
 
    PHY_GetTrxConfig(AACK_PROMSCS_MODE, (uint8_t *)&promCtrl); 
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_GetTrxConfig(PHY_ConfigParam_t parameter, uint8_t *paramValue);


// *****************************************************************************
// *****************************************************************************
// Section: PHY Utility Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    PHY_TrxStatus_t PHY_GetTrxStatus(void)

  Summary:
    Returns the current status of the Transceiver

  Description:
    This function gets the status of the transceiver
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    None     

  Returns:
    PHY_TRX_OFF - The transceiver is in TRX_OFF state
    PHY_RX_ON - The transceiver is in receive state
    PHY_TX_ON - The transceiver is in Transmit state
    PHY_BUSY_RX - The transceiver currently receiving the packet
    PHY_BUSY_TX - The transceiver is currently transmitting the packet
    PHY_TRX_SLEEP - The transceiver is in sleep state
    PHY_DEEP_SLEEP - The transceiver is in Deep sleep state

  Example:
    <code>
    PHY_TrxStatus_t trxStatus;
    trxStatus = PHY_GetTrxStatus();
     
    </code>

  Remarks:
    None .
*/
PHY_TrxStatus_t PHY_GetTrxStatus(void);

// *****************************************************************************
/*
  Function:
    int8_t PHY_GetRSSIBaseVal(void)

  Summary:
    Get RSSI base value of TRX

  Description:
    This function is called to get the base RSSI value for respective
    radios
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    None 

  Returns:
    32-bit PHY SW version value

  Example:
    <code>
    int8_t trxBaseRSSI;
 
	trxBaseRSSI = PHY_GetRSSIBaseVal();
    
    </code>

  Remarks:
    None 
*/
int8_t PHY_GetRSSIBaseVal(void);

// *****************************************************************************
/*
  Function:
    uint32_t PHY_GetSWVersion(void)

  Summary:
    To Get the current Software version of PHY

  Description:
    This function is used Get the current Software version of PHY
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    None 

  Returns:
    32-bit PHY SW version value

  Example:
    <code>
    uint32_t phySwVersion;
	phySwVersion = PHY_GetSWVersion();
    
    </code>

  Remarks:
    None 
*/
uint32_t PHY_GetSWVersion(void);

// *****************************************************************************
/*
  Function:
    PHY_Retval_t PHY_ConvertTxPwrRegValToDbm(uint8_t regValue, int8_t *dbmValue)

  Summary:
    To convert the Tx Power Register index value to dbm Value

  Description:
    This function is used to convert Tx Power Register index value to dbm Value
 
  Precondition:
    PHY_Init() should have been called before calling this function

  Parameters:
    regVaue  - Index of the Power register value (Range 0-15)
    dbmValue - Corresponding dbm value to the Pwr register value  

  Returns:
    PHY_SUCCESS -  If reg value can be converted into dBm value
    PHY_FAILURE -  If regVaue is holding the invalid value

  Example:
    <code>
    uint8_t pwrRegIndex = 0x04;
    int8_t pwrDbm;
 
	PHY_ConvertTxPwrRegValToDbm(pwrRegIndex, &pwrDbm);
    
    </code>

  Remarks:
    None 
*/
PHY_Retval_t PHY_ConvertTxPwrRegValToDbm(uint8_t regValue, int8_t *dbmValue);

// *****************************************************************************
/*
  Function:
	bool PHY_IsFramePendingFromNextLayer(PHY_Addr_t *addr, uint8_t *addrMode)

  Summary:
    Function to check whether Any frame is pending from higher layer upon 
	reception of Datarequest command frame (Ex: MAC/APP)

  Description:
    Function to check whether Any frame is pending from higher layer upon 
	reception of Datarequest command frame (Ex: MAC/APP)
	so that the automatic acknowledgement frame will have proper FramePending bit status
 
  Precondition:
    PHY_Init() should have been called before calling this function.

  Parameters:
    addr  - Source Address of the Datarequest (Either Short/Long) frame received
    addrMode - Either FCF_SHORT_ADDR or FCF_LONG_ADDR  

  Returns:
    bool - true - If Frame is pending for the RFD 
		 - false - Otherwise

  Example:
    <code>
    	bool PHY_IsFramePendingFromNextLayer(PHY_Addr_t *addr, uint8_t *addrMode)
		{
			bool isFramePending = true;
			return isFramePending;
		}  
    </code>

  Remarks:
    This function is invloked by phy layer on the reception of Datarequest frame in ISR context.
	The higher layer has to implement this function approprietely to set the framepending bit in Acknoewledgement frame.
	This function is weak by default with FramePending bit set to true. 
*/

bool PHY_IsFramePendingFromNextLayer(PHY_Addr_t *addr, uint8_t *addrMode);

// *****************************************************************************
/*
  Function:
    void* PHY_RegisterPtaIrqHandler(void)

  Summary:
    To invoke the PHY to register the PTA IRQ Handler

  Description:
    This function is used to request the PHY to register the PTA IRQ Handler
 
  Precondition:
    None

  Parameters:
    None  

  Returns:
    Function pointer to the PHY PTA Handler.

  Example:
    <code>
    void* phyIrqHandler;
 
    phyIrqHandler = PHY_RegisterPtaIrqHandler();
    
    </code>

  Remarks:
    None 
*/
void* PHY_RegisterPtaIrqHandler(void);

// *****************************************************************************
/*
  Function:
    void PHY_NotifyUpdatedPTAStatus(PHY_PtaReq_t *req,PHY_PtaConfig_t *Pta_config)

  Summary:
    To notify and register the PTA req pointers based on the PTA enabled/disabled.

  Description:
    This function is used to notify and register the PTA req pointers based on the PTA enabled/disabled
 
  Precondition:
    None

  Parameters:
    pta_req_tx_set - Pointer to PTA req function while TX. 
	pta_req_rx_set - Pointer to PTA req function while RX.	
	pta_req_ed_set - Pointer to PTA req function while ED.

  Returns:
    None

  Example:
    <code>
    PHY_PtaReq_t req;
	PHY_PtaConfig_t  gs_pta_config;
	
	gs_pta_config.ptaenable = true;
    gs_pta_config.tx.cca_backoff_prio = TX_PRIO_NEVER;
    gs_pta_config.tx.mac_retry_prio = TX_PRIO_NEVER;
    gs_pta_config.rx.prio = RX_PRIO_ALWAYS;
    gs_pta_config.ed.enable = false;
    gs_pta_config.debug.enable = true; 
	
	req.pta_req_tx_set = NULL;
	req.pta_req_rx_set = NULL;
	req.pta_req_ed_set = NULL;
	
	PHY_NotifyUpdatedPTAStatus(&req,&gs_pta_config);

    </code>

  Remarks:
    None 
*/
void PHY_NotifyUpdatedPTAStatus(PHY_PtaReq_t *req,PHY_PtaConfig_t *Pta_config);


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif /* PHY_H */
/* EOF */
