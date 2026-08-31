/*******************************************************************************
 * Copyright (C) 2022 Microchip Technology Inc. and its subsidiaries.
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

/*******************************************************************************
 * Bluetooth System Header File
 *
 * Company:
 *   Microchip Technology Inc.
 *
 * File Name:
 *   bt_sys.h
 *
 * Summary:
 *   This header file provides the BLE system interface functions for application developers.
 *
 * Description:
 *   The file provides declarations for BLE system-level functions that are integral to the
 *   operation of the BLE module in the project. It includes the initialization function
 *   "BT_SYS_Init", which should be invoked during the system initialization phase, specifically
 *   within the "SYS_Initialize" function. Additionally, the "BM_Task" function is provided for
 *   inclusion in the main system task scheduler, "SYS_Tasks", to ensure regular processing of
 *   BLE tasks and events. This ensures that the BLE module operates smoothly and efficiently
 *   within the system's multitasking environment.
 *******************************************************************************
 */
#ifndef BT_SYS_H
#define BT_SYS_H

/* *****************************************************************************
 * *****************************************************************************
 * Section: Included Files
 * *****************************************************************************
 * *****************************************************************************
 */
#include <stdbool.h>
#include <stdint.h>

/* DOM-IGNORE-BEGIN */
#ifdef __cplusplus /* Provide C++ Compatibility */
extern "C" {
#endif
/* DOM-IGNORE-END */

/**
 * @defgroup BT_SYS Bluetooth System
 * @brief Defines the interface for the BLE System functions provided by the BLE Library.
 * @{
 */

/**
 * @defgroup BT_SYS_INT Bluetooth System Interface
 * @brief This module defines the interface of the Bluetooth system.
 * @{
 */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Macros
 * *****************************************************************************
 * *****************************************************************************
 */
/**
 * @addtogroup BT_SYS_DEFINES Defines
 * @{
 */

/**
 * @defgroup BT_SYS_ADDR_LEN Bluetooth address length
 * @brief Defines the length of a Bluetooth device address.
 * @{
 */
#define BT_SYS_DEV_ADDR_LEN (7U) /**< Bluetooth device address length in bytes. */
/** @} */                        /* BT_SYS_ADDR_LEN */

/**
 * @defgroup BT_SYS_TRACE_MASK Trace mask
 * @brief Defines the trace mask for different levels of logging information.
 * @{
 */
#define BT_SYS_TRACE_INFO_LL_H (1U)       /**< High priority information from the Link Layer. */
#define BT_SYS_TRACE_INFO_LL_L (1U << 1U) /**< Low priority information from the Link Layer. */
#define BT_SYS_TRACE_INFO_HOST (1U << 2U) /**< Information from the Bluetooth Host stack. */
/** @} */                                 /* BT_SYS_TRACE_MASK */

/**
 * @defgroup BT_SYS_TRACE_LEVEL Trace level
 * @brief Defines the trace levels for debugging purposes.
 * @{
 */
#define BT_SYS_TRACE_LEVEL_ERR (0U) /**< Error trace level for critical issues. */
#define BT_SYS_TRACE_LEVEL_API (1U) /**< API trace level for function calls and parameters. */
#define BT_SYS_TRACE_LEVEL_OP  (2U) /**< Operational trace level for general operation logs. */
/** @} */                           /* BT_SYS_TRACE_LEVEL */

/**
 * @defgroup BT_SYS_RF_SUSPEND_STATUS RF suspned status
 * @brief Defines the RF suspend status indicating if the RF can be suspended and under what
 * conditions.
 * @{
 */
#define BT_SYS_RF_NOT_SUSPEND          (0U) /**< RF is not suspended; normal operation. */
#define BT_SYS_RF_SUSPENDED_NO_SLEEP   (1U) /**< RF is suspended without entering BLE sleep mode. */
#define BT_SYS_RF_SUSPENDED_WITH_SLEEP (2U) /**< RF is suspended and BLE sleep mode is enabled. */
/** @} */                                   /* BT_SYS_RF_SUSPEND */

/**
 * @defgroup BT_SYS_FEAT_MASK Feature mask
 * @brief Defines the feature mask to enable or disable specific Bluetooth system features.
 * @{
 */
#define BT_SYS_FEAT_PWR_CTRL (1U)       /**< Power control feature mask. */
#define BT_SYS_FEAT_CHC      (1U << 1U) /**< Channel classification feature mask. */
/** @} */                               /* BT_SYS_FEAT_MASK */

/** @} */ /* BT_SYS_DEFINES */

/**
 * @addtogroup BT_SYS_ENUM Enumerations
 * @{
 */

/**
 * @defgroup BT_SYS_TRACE_FMT Trace format
 * @brief Enumeration for Bluetooth system trace output formats.
 * @{
 */
typedef enum BT_SYS_TraceFmt_T {
	BT_SYS_FMT_ASCII, /**< ASCII format for trace output. */
} BT_SYS_TraceFmt_T;
/** @} */ /* BT_SYS_TRACE_FMT */

/**
 * @defgroup BT_SYS_ERR BT system error codes
 * @brief Defines for error codes used in the Bluetooth system.
 * @{
 */
typedef enum BT_SYS_ErrCode_T {
	BT_SYS_ERR_OOM, /**< Error code for 'Out of Memory' condition. */
	BT_SYS_ERR_END  /**< Sentinel value indicating the end of error codes. */
} BT_SYS_ErrCode_T;
/** @} */ /* BT_SYS_ERR */

/** @} */ /* BT_SYS_ENUM */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Data Types
 * *****************************************************************************
 * *****************************************************************************
 */
/**
 * @addtogroup BT_SYS_STRUCTS Structures
 * @{
 */

/** @brief Structure for Bluetooth system configuration. */
typedef struct BT_SYS_Cfg_T {
	/**< Antenna gain in dB. */
	int8_t antennaGain;
	/**< Flag indicating if the device address is valid (1) or not (0). */
	unsigned int addrValid: 1;
	/**< Flag indicating if the RSSI offset is valid (1) or not (0). */
	unsigned int rssiOffsetValid: 1;
	/**< Flag indicating if the ADC timing field is valid (1) or not (0). */
	unsigned int adcTimingValid: 1;
	/**< Bluetooth device address in hex format. */
	uint8_t devAddr[BT_SYS_DEV_ADDR_LEN];
	/**< Offset to be applied to the RSSI value. */
	int8_t rssiOffset;
	/**< ADC timing value for RF register 08, used for configuring ADC operation. */
	uint8_t adcTiming08;
	/**< ADC timing value for RF register 51, used for configuring ADC operation. */
	uint8_t adcTiming51;
} BT_SYS_Cfg_T;

/** @brief Structure for Bluetooth system initialization options. */
typedef struct BT_SYS_Option_T {
	/**< Size of the common memory pool required by the Bluetooth stack. */
	uint32_t cmnMemSize;
	/**< Pointer to the start address of the common memory pool. */
	uint8_t *p_cmnMemAddr;
	/**< Pointer to the SRAM vector table */
	uint32_t *p_sramVecorTable;
	/**< HCI mode flag. Set to 1 to enable HCI mode, 0 otherwise. */
	unsigned int hciMode: 1;
	/**< Bitmask of features to be disabled, as defined by @ref BT_SYS_FEAT_MASK. */
	uint32_t deFeatMask;
} BT_SYS_Option_T;

/** @brief Structure for additional information about a trace event. */
typedef struct BT_SYS_TraceInfo_T {
	/**< Level of the trace event. See @ref BT_SYS_TRACE_LEVEL.*/
	uint8_t level;
	/**< Identifier of the component generating the trace event. */
	uint8_t componentId;
	/**< Identifier of the specific event being traced. */
	uint8_t eventId;
} BT_SYS_TraceInfo_T;

/**
 * @brief Callback type for Bluetooth system trace events.
 *
 * @param p_traceInfo       Pointer to the structure containing trace event information. See @ref
 * BT_SYS_TraceInfo_T.
 * @param length            Length of the trace payload.
 * @param p_tracePayload    Pointer to the payload of the trace event.
 */
typedef void (*BT_SYS_TraceEventCb_T)(BT_SYS_TraceInfo_T *p_traceInfo, uint8_t length,
				      uint8_t *p_tracePayload);

/**
 * @brief Callback type for Bluetooth system error events.
 *
 * @param errCode           Error code indicating the type of error that occurred. See @ref
 * BT_SYS_ErrCode_T.
 */
typedef void (*BT_SYS_ErrCb_T)(BT_SYS_ErrCode_T errCode);

/** @} */ /* BT_SYS_STRUCTS */

/* *****************************************************************************
 * *****************************************************************************
 * Section: Function Prototypes
 * *****************************************************************************
 * *****************************************************************************
 */

/**
 * @addtogroup BT_SYS_FUNS Functions
 * @{
 */

/**
 * @brief Initialize the Bluetooth system.
 *
 * @param[in] p_reqSemHandle                    Handle to the OS semaphore for Bluetooth internal
 * task management.
 * @param[in] p_osalApiList                     Pointer to the list of OS abstraction layer (OSAL)
 * APIs.
 * @param[in] p_option                          Pointer to the structure containing initialization
 * options. See @ref BT_SYS_Option_T.
 * @param[in] p_cfg                             Pointer to the structure containing system
 * configuration parameters. See @ref BT_SYS_Cfg_T.
 *
 * @retval true                                 Successfully initialize Bluetooth system.
 * @retval false                                Fail to initialize Bluetooth system.
 */
bool BT_SYS_Init(void *p_reqSemHandle, void *p_osalApiList, BT_SYS_Option_T *p_option,
		 BT_SYS_Cfg_T *p_cfg);

/**
 * @brief Retrieve the Bluetooth system version.
 *
 * @param[out] p_version                        Pointer to a variable where the version number will
 * be stored.
 *
 */
void BT_SYS_ReadVersion(uint32_t *p_version);

/**
 * @brief Query the sleep status of the Bluetooth system.
 *
 * @retval true                                 The Bluetooth system is currently in sleep mode.
 * @retval false                                The Bluetooth system is not in sleep mode.
 */
bool BT_SYS_GetSleepMode(void);

/**
 * @brief Request the Bluetooth system to enter sleep mode.
 *
 * @param[in] ulRtcFrequency                    The frequency of the RTC used for timing sleep
 * duration.
 * @param[in] ulRtcCurrentCnt                   The current count value of the RTC.
 *
 * @retval true                                 The Bluetooth system is ready for idle and entering
 * sleep mode.
 * @retval false                                The Bluetooth system is not ready for idle or
 * already sleeping.
 */
bool BT_SYS_EnterSleepMode(uint32_t ulRtcFrequency, uint32_t ulRtcCurrentCnt);

/**
 * @brief Check if the Bluetooth system allows the system to enter sleep mode.
 *
 * @param[in] ulRtcFrequency                    The frequency of the RTC used for timing sleep
 * duration.
 * @param[in] ulRtcCurrentCnt                   The current count value of the RTC.
 *
 * @retval true                                 The Bluetooth system is sleeping and allows the
 * system to sleep.
 * @retval false                                The Bluetooth system is not sleeping or disallows
 * the system to sleep.
 */
bool BT_SYS_AllowSystemSleep(uint32_t ulRtcFrequency, uint32_t ulRtcCurrentCnt);

/** @brief Request the Bluetooth system to enter deep sleep mode. */
void BT_SYS_EnterDeepSleepMode(void);

/**
 * @brief Request to suspend the Bluetooth RF functionality.
 *
 * @param[in] enable                            Set to true to suspend RF; otherwise set flase.
 *
 * @retval BT_SYS_RF_SUSPEND_STATUS             The status of the RF suspend operation. See @ref
 * BT_SYS_RF_SUSPEND_STATUS for possible values.
 */
uint8_t BT_SYS_RfSuspendReq(bool enable);

/**
 * @brief Enable Bluetooth system trace message indications.
 *
 * @param[in] fmt                               The format of the trace messages. See @ref
 * BT_SYS_TraceFmt_T for possible values.
 * @param[in] traceMask                         A bitmask that specifies which trace messages to
 * enable. See @ref BT_SYS_TRACE_MASK for details.
 * @param[in] traceCb                           The callback function that will be invoked for trace
 * events. See @ref BT_SYS_TraceEventCb_T.
 *
 */
void BT_SYS_TraceEnable(BT_SYS_TraceFmt_T fmt, uint32_t traceMask, BT_SYS_TraceEventCb_T traceCb);

/**
 * @brief Register a callback function for Bluetooth system error events.
 *
 * @param[in] errHandler                        The callback function to handle Bluetooth system
 * errors. See @ref BT_SYS_ErrCb_T.
 *
 */
void BT_SYS_ErrRegister(BT_SYS_ErrCb_T errHandler);

/**
 * @brief The main task function for the Bluetooth module.
 *
 * @param[in] p_param                           A pointer to a parameter that will be passed to the
 * task function.
 *
 */
void BM_Task(void *p_param);

/** @} */ /* BT_SYS_FUNS */

/** @} */

/** @} */

/* DOM-IGNORE-BEGIN */
#ifdef __cplusplus
}
#endif
/* DOM-IGNORE-END */

#endif /* BT_SYS_H */
