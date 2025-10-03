/*******************************************************************************
 *  HCI Header File
 *
 *  Company:
 *    Microchip Technology Inc.
 *
 *  File Name:
 *    hci.h
 *
 *  Summary:
 *    This file contains the HCI functions for application user.
 *
 *  Description:
 *    This file contains the HCI functions and event for application user.  The
 *    "HCI_Init" function shall be called in the "APP_Initialize" function to
 *    initialize the this modules in the system.
 *******************************************************************************
 */

/* DOM-IGNORE-BEGIN */
/*******************************************************************************
 * Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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
 *******************************************************************************
 */

/*******************************************************************************
 *  HCI Header File
 *
 *  Company:
 *    Microchip Technology Inc.
 *
 *  File Name:
 *    hci.h
 *
 *  Summary:
 *    This file contains the HCI definitions for the project.
 *
 *  Description:
 *    This file contains the HCI definitions for the project.
 *******************************************************************************
 */
/**
 * @addtogroup HCI
 * @{
 */

#ifndef HCI_H
#define HCI_H

/* *****************************************************************************
 * *****************************************************************************
 * Section: Included Files
 * *****************************************************************************
 * *****************************************************************************
 */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Macros
 * *****************************************************************************
 * *****************************************************************************
 */
/**@addtogroup HCI_DEFINES Defines
 * @{
 */

/**@defgroup HCI_EVENT_STATUS Status of HCI event
 * @brief Status of HCI event.
 * @{
 */
/**< Success. */
#define HCI_EVENT_STATUS_SUCCESS                        0x00
/**< Unknown HCI Command. */
#define HCI_EVENT_STATUS_UNKNOWN_HCI_COMMAND            0x01
/**< Invalid HCI Command Parameters. */
#define HCI_EVENT_STATUS_INVALID_HCI_COMMAND_PARAMETERS 0x12
/**@} */

/**@} */ /* HCI_DEFINES */

/**@addtogroup HCI_ENUMS Enumerations
 * @{
 */
/**@brief Type of HCI command that application implement. */
typedef enum HCI_CmdCbId_T {
	HCI_CMD_CUSTOM /**< HCI Custom Command. */
} HCI_CmdCbId_T;

/**@} */ /* HCI_ENUMS */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Data Types
 * *****************************************************************************
 * *****************************************************************************
 */

/**@addtogroup BT_SYS_STRUCTS Structures
 * @{
 */

/**@brief HCI callback type. This callback function sends HCI events to the application. */
typedef bool (*HCI_EventCb_T)(uint16_t length, uint8_t *p_packet);

/**@brief HCI callback type. This callback function sends HCI ACL data to the application. */
typedef bool (*HCI_AclRxCb_T)(uint16_t connHandle, uint16_t length, uint8_t *p_packet);

/**@brief HCI callback type. This callback function for the application to implement HCI command. */
typedef void (*HCI_CmdCb_T)(HCI_CmdCbId_T cmdID, uint8_t length, uint8_t *p_packet);

/**@} */ /* BT_SYS_STRUCTS */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Function Prototypes
 * *****************************************************************************
 * *****************************************************************************
 */
/**@addtogroup HCI_FUNS Functions
 * @{
 */

/**@brief Initialize main module of HCI mode.
 *
 * @param[in] preferAclTxBufNum               HCI ACL Tx buffer number that application prefer. Note
 * that each buffer is 251 bytes.
 *
 */
void HCI_Init(uint8_t preferAclTxBufNum);

/**
 * @brief Initialize legacy advertising module of HCI mode.
 *
 * @retval true                                 Successfully initialize legacy advertising module in
 * HCI mode.
 * @retval false                                Fail to initialize legacy advertising module in HCI
 * mode.
 */
bool HCI_AdvInit(void);

/**
 * @brief Initialize extended advertising module of HCI mode.
 * @note  @ref HCI_AdvInit must be called prior to enable this module.
 *
 * @retval true                                 Successfully initialize extended advertising module
 * of HCI mode.
 * @retval false                                Fail to initialize extended advertising module of
 * HCI mode.
 *
 */
bool HCI_ExtAdvInit(void);

/**
 * @brief Initialize periodic advertising module of HCI mode.
 * @note  Periodic advertising is part of the extended advertising feature. Both @ref HCI_AdvInit
 * and
 *          @ref HCI_ExtAdvInit must be called prior to enable this module.
 *
 * @retval true                                 Successfully initialize periodic advertising module
 * of HCI mode.
 * @retval false                                Fail to initialize periodic advertising module of
 * HCI mode.
 *
 */
bool HCI_PeriodicAdvInit(void);

/**
 * @brief Initialize extended connection central module of HCI mode.
 * @note  @ref HCI_ConnCentralInit is also required for this module enabling.
 *
 * @retval true                                 Successfully initialize extended connection central
 * module of HCI mode.
 * @retval false                                Fail to initialize extended connection central
 * module of HCI mode.
 *
 */
bool HCI_ExtConnCntrlInit(void);

/**
 * @brief Initialize legacy scan module of HCI mode.
 *
 * @retval true                                 Successfully initialize legacy scan module of HCI
 * mode.
 * @retval false                                Fail to initialize legacy scan module of HCI mode.
 *
 */
bool HCI_ScanInit(void);

/**
 * @brief Initialize extended scan module of HCI mode.
 * @note  @ref HCI_ScanInit must be called prior to enable this module.
 *
 * @retval true                                 Successfully initialize extended scan module of HCI
 * mode.
 * @retval false                                Fail to initialize extended scan module of HCI mode.
 *
 */
bool HCI_ExtScanInit(void);

/**
 * @brief Initialize sync module of HCI mode, which refers to periodic advertising synchronization.
 * @note  Synchronization is part of the extended advertising feature.
 *
 * @retval true                                 Successfully initialize sync module of HCI mode.
 * @retval false                                Fail to initialize sync module of HCI mode.
 *
 */
bool HCI_SyncInit(void);

/**
 * @brief Initialize connection central module of HCI mode.
 *
 * @retval true                                 Successfully initialize connection central module of
 * HCI mode.
 * @retval false                                Fail to initialize connection central module of HCI
 * mode.
 *
 */
bool HCI_ConnCentralInit(void);

/**
 * @brief Initialize connection peripheral module of HCI mode.
 *
 * @retval true                                 Successfully initialize connection peripheral module
 * of HCI mode.
 * @retval false                                Fail to initialize connection peripheral module of
 * HCI mode.
 *
 */
bool HCI_ConnPeripheralInit(void);

/**@brief HCI command.
 *
 * @param[in] length                          The length of HCI command packet.
 * @param[in] p_packet                        Pointer to HCI command packet.
 *
 *
 * @retval true                                 Successfully send HCI command.
 * @retval false                                Fail to send HCI command.
 */
bool HCI_Cmd(uint16_t length, uint8_t *p_packet);

/**@brief HCI ACL data Trasmit.
 *
 * @param[in] length                          The length of HCI ACL data packet to be trasmitted.
 * @param[in] p_packet                        Pointer to HCI ACL data packet to be trasmitted.
 *
 * @retval true                                 Successfully send HCI ACL.
 * @retval false                                Fail to send HCI ACL.
 */
bool HCI_AclTx(uint16_t length, uint8_t *p_packet);

/**@brief HCI event callback registration.
 *
 * @param[in] eventCb                         Callback function for HCI event.
 *
 */
void HCI_EventRegister(HCI_EventCb_T eventCb);

/**@brief HCI ACL Receive callback registration.
 *
 * @param[in] aclRxCb                         Callback function for HCI ACL received data.
 *
 */
void HCI_AclRxRegister(HCI_AclRxCb_T aclRxCb);

/**@brief Application-implemented HCI command registration.
 *
 * @param[in] cmdCb                           Callback function for application-implemented HCI
 * command.
 */
void HCI_AppCmdRegister(HCI_CmdCb_T cmdCb);

/**@brief Application-implemented HCI command status event.
 *
 * @param[in] status                          Status of application-implemented HCI command status
 * event. See @ref HCI_EVENT_STATUS.
 */
void HCI_AppCmdStatusEvt(uint8_t status);

/**@brief Application-implemented HCI command complete event.
 *
 * @param[in] status                          Status of application-implemented HCI command complete
 * event. See @ref HCI_EVENT_STATUS.
 * @param[in] paramLen                        Parameter length of application-implemented HCI
 * command complete event.
 * @param[in] p_param                         Pointer to parameter of application-implemented HCI
 * command complete event.
 */
void HCI_AppCmdComplEvt(uint8_t status, uint8_t paramLen, uint8_t *p_param);

/**@brief Application-triggered Hardware error event.
 *
 * @param[in] hardwareCode                    Hardware error code.
 */
void HCI_AppHardwareErrEvt(uint8_t hardwareCode);

/**@} */ /* HCI_FUNS */

#endif

/**
 * @}
 */
