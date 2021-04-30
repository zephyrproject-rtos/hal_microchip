/**************************************************************************
 * @file     MEC172XNSZ.h
 * @brief    CMSIS Cortex-M4 Core Peripheral Access Layer Header File for
 *           Device Microchip MEC172X-N-SZ
 * @version  V5.00
 * @date     18. Febuary 2021
 * Copyright (c) 2021 Microchip Technology Inc.
 ***************************************************************************/
/*
 * Copyright (c) 2009-2018 Arm Limited. All rights reserved.
 * Copyright (c) 2021 Microchip Technology Incorporated. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MEC172XNSZ_H
#define MEC172XNSZ_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup MCHP
 * @{
 */

/** @addtogroup MEC172XNSZ
 * @{
 */

/** @addtogroup Configuration_of_CMSIS
 * @{
 */

/* ====================================================================== */
/* ================    Interrupt Number Definition       ================ */
/*======================================================================= */

/** @brief ARM Cortex-M4 NVIC Interrupt Numbers
 * CM4 NVIC implements 16 internal interrupt sources. CMSIS macros use
 * negative numbers [-15, -1]. Lower numerical value indicates higher
 * priority.
 * -15 = Reset Vector invoked on POR or any CPU reset.
 * -14 = NMI
 * -13 = Hard Fault. At POR or CPU reset all faults map to Hard Fault.
 * -12 = Memory Management Fault. If enabled Hard Faults caused by access
 *       violations, no address match, or MPU mismatch.
 * -11 = Bus Fault. If enabled pre-fetch, AHB access faults.
 * -10 = Usage Fault. If enabled Undefined instructions, illegal state
 *       transition (Thumb -> ARM mode), unaligned, etc.
 * -9 through -6 are not implemented (reserved).
 * -5 System call via SVC instruction.
 * -4 Debug Monitor.
 * -3 not implemented (reserved).
 * -2 PendSV for system service.
 * -1 SysTick NVIC system timer.
 * Numbers >= 0 are external peripheral interrupts.
 */
typedef enum IRQn {
	/* ========== ARM Cortex-M4 Specific Interrupt Numbers ============ */

	Reset_IRQn              = -15,  /*!< POR/CPU Reset Vector */
	NonMaskableInt_IRQn     = -14,  /*!< NMI */
	HardFault_IRQn          = -13,  /*!< Hard Faults */
	MemoryManagement_IRQn   = -12,  /*!< Memory Management faults */
	BusFault_IRQn           = -11,  /*!< Bus Access faults */
	UsageFault_IRQn         = -10,  /*!< Usage/instruction faults */
	SVCall_IRQn             = -5,   /*!< SVC */
	DebugMonitor_IRQn       = -4,   /*!< Debug Monitor */
	PendSV_IRQn             = -2,   /*!< PendSV */
	SysTick_IRQn            = -1,   /*!< SysTick */

	/* ==============  MEC172x Specific Interrupt Numbers ============ */

	GIRQ08_IRQn             = 0,    /*!< GPIO 0140 - 0176 */
	GIRQ09_IRQn             = 1,    /*!< GPIO 0100 - 0136 */
	GIRQ10_IRQn             = 2,    /*!< GPIO 0040 - 0076 */
	GIRQ11_IRQn             = 3,    /*!< GPIO 0000 - 0036 */
	GIRQ12_IRQn             = 4,    /*!< GPIO 0200 - 0236 */
	GIRQ13_IRQn             = 5,    /*!< SMBus Aggregated */
	GIRQ14_IRQn             = 6,    /*!< DMA Aggregated */
	GIRQ15_IRQn             = 7,
	GIRQ16_IRQn             = 8,
	GIRQ17_IRQn             = 9,
	GIRQ18_IRQn             = 10,
	GIRQ19_IRQn             = 11,
	GIRQ20_IRQn             = 12,
	GIRQ21_IRQn             = 13,
	/* GIRQ22(peripheral clock wake) is not connected to NVIC */
	GIRQ23_IRQn             = 14,
	GIRQ24_IRQn             = 15,
	GIRQ25_IRQn             = 16,
	GIRQ26_IRQn             = 17, /*!< GPIO 0240 - 0276 */
	/* Reserved 18-19 */
	/* GIRQ's 8 - 12, 24 - 26 no direct connections */
	I2C_SMB_0_IRQn          = 20,   /*!< GIRQ13 b[0] */
	I2C_SMB_1_IRQn          = 21,   /*!< GIRQ13 b[1] */
	I2C_SMB_2_IRQn          = 22,   /*!< GIRQ13 b[2] */
	I2C_SMB_3_IRQn          = 23,   /*!< GIRQ13 b[3] */
	DMA0_IRQn               = 24,   /*!< GIRQ14 b[0] */
	DMA1_IRQn               = 25,   /*!< GIRQ14 b[1] */
	DMA2_IRQn               = 26,   /*!< GIRQ14 b[2] */
	DMA3_IRQn               = 27,   /*!< GIRQ14 b[3] */
	DMA4_IRQn               = 28,   /*!< GIRQ14 b[4] */
	DMA5_IRQn               = 29,   /*!< GIRQ14 b[5] */
	DMA6_IRQn               = 30,   /*!< GIRQ14 b[6] */
	DMA7_IRQn               = 31,   /*!< GIRQ14 b[7] */
	DMA8_IRQn               = 32,   /*!< GIRQ14 b[8] */
	DMA9_IRQn               = 33,   /*!< GIRQ14 b[9] */
	DMA10_IRQn              = 34,   /*!< GIRQ14 b[10] */
	DMA11_IRQn              = 35,   /*!< GIRQ14 b[11] */
	DMA12_IRQn              = 36,   /*!< GIRQ14 b[12] */
	DMA13_IRQn              = 37,   /*!< GIRQ14 b[13] */
	DMA14_IRQn              = 38,   /*!< GIRQ14 b[14] */
	DMA15_IRQn              = 39,   /*!< GIRQ14 b[15] */
	UART0_IRQn              = 40,   /*!< GIRQ15 b[0] */
	UART1_IRQn              = 41,   /*!< GIRQ15 b[1] */
	EMI0_IRQn               = 42,   /*!< GIRQ15 b[2] */
	EMI1_IRQn               = 43,   /*!< GIRQ15 b[3] */
	EMI2_IRQn               = 44,   /*!< GIRQ15 b[4] */
	ACPI_EC0_IBF_IRQn       = 45,   /*!< GIRQ15 b[5] */
	ACPI_EC0_OBE_IRQn       = 46,   /*!< GIRQ15 b[6] */
	ACPI_EC1_IBF_IRQn       = 47,   /*!< GIRQ15 b[7] */
	ACPI_EC1_OBE_IRQn       = 48,   /*!< GIRQ15 b[8] */
	ACPI_EC2_IBF_IRQn       = 49,   /*!< GIRQ15 b[9] */
	ACPI_EC2_OBE_IRQn       = 50,   /*!< GIRQ15 b[10] */
	ACPI_EC3_IBF_IRQn       = 51,   /*!< GIRQ15 b[11] */
	ACPI_EC3_OBE_IRQn       = 52,   /*!< GIRQ15 b[12] */
	ACPI_EC4_IBF_IRQn       = 53,   /*!< GIRQ15 b[13] */
	ACPI_EC4_OBE_IRQn       = 54,   /*!< GIRQ15 b[14] */
	ACPI_PM1_CTL_IRQn       = 55,   /*!< GIRQ15 b[15] */
	ACPI_PM1_EN_IRQn        = 56,   /*!< GIRQ15 b[16] */
	ACPI_PM1_STS_IRQn       = 57,   /*!< GIRQ15 b[17] */
	KBC_OBE_IRQn            = 58,   /*!< GIRQ15 b[18] */
	KBC_IBF_IRQn            = 59,   /*!< GIRQ15 b[19] */
	MBOX_IRQn               = 60,   /*!< GIRQ15 b[20] */
	/* reserved 61 */
	P80BD_0_IRQn            = 62,   /*!< GIRQ15 b[22] */
	/* reserved 63-64 */
	PKE_IRQn                = 65,   /*!< GIRQ16 b[0] */
	/* reserved 66 */
	RNG_IRQn                = 67,   /*!< GIRQ16 b[2] */
	AESH_IRQn               = 68,   /*!< GIRQ16 b[3] */
	/* reserved 69 */
	PECI_IRQn               = 70,   /*!< GIRQ17 b[0] */
	TACH_0_IRQn             = 71,   /*!< GIRQ17 b[1] */
	TACH_1_IRQn             = 72,   /*!< GIRQ17 b[2] */
	TACH_2_IRQn             = 73,   /*!< GIRQ17 b[3] */
	RPMFAN_0_FAIL_IRQn      = 74,   /*!< GIRQ17 b[20] */
	RPMFAN_0_STALL_IRQn     = 75,   /*!< GIRQ17 b[21] */
	RPMFAN_1_FAIL_IRQn      = 76,   /*!< GIRQ17 b[22] */
	RPMFAN_1_STALL_IRQn     = 77,   /*!< GIRQ17 b[23] */
	ADC_SNGL_IRQn           = 78,   /*!< GIRQ17 b[8] */
	ADC_RPT_IRQn            = 79,   /*!< GIRQ17 b[9] */
	RCID_0_IRQn             = 80,   /*!< GIRQ17 b[10] */
	RCID_1_IRQn             = 81,   /*!< GIRQ17 b[11] */
	RCID_2_IRQn             = 82,   /*!< GIRQ17 b[12] */
	LED_0_IRQn              = 83,   /*!< GIRQ17 b[13] */
	LED_1_IRQn              = 84,   /*!< GIRQ17 b[14] */
	LED_2_IRQn              = 85,   /*!< GIRQ17 b[15] */
	LED_3_IRQn              = 86,   /*!< GIRQ17 b[16] */
	PHOT_IRQn               = 87,   /*!< GIRQ17 b[17] */
	/* reserved 88-89 */
	SPIP_0_IRQn             = 90,   /*!< GIRQ18 b[0] */
	QMSPI_0_IRQn            = 91,   /*!< GIRQ18 b[1] */
	GPSPI_0_TXBE_IRQn       = 92,   /*!< GIRQ18 b[2] */
	GPSPI_0_RXBF_IRQn       = 93,   /*!< GIRQ18 b[3] */
	GPSPI_1_TXBE_IRQn       = 94,   /*!< GIRQ18 b[4] */
	GPSPI_1_RXBF_IRQn       = 95,   /*!< GIRQ18 b[5] */
	BCL_0_ERR_IRQn          = 96,   /*!< GIRQ18 b[7] */
	BCL_0_BCLR_IRQn         = 97,   /*!< GIRQ18 b[6] */
	/* reserved 98-99 */
	PS2_0_ACT_IRQn          = 100,  /*!< GIRQ18 b[10] */
	/* reserved 101-102 */
	ESPI_PC_IRQn            = 103,  /*!< GIRQ19 b[0] */
	ESPI_BM1_IRQn           = 104,  /*!< GIRQ19 b[1] */
	ESPI_BM2_IRQn           = 105,  /*!< GIRQ19 b[2] */
	ESPI_LTR_IRQn           = 106,  /*!< GIRQ19 b[3] */
	ESPI_OOB_UP_IRQn        = 107,  /*!< GIRQ19 b[4] */
	ESPI_OOB_DN_IRQn        = 108,  /*!< GIRQ19 b[5] */
	ESPI_FLASH_IRQn         = 109,  /*!< GIRQ19 b[6] */
	ESPI_RESET_IRQn         = 110,  /*!< GIRQ19 b[7] */
	RTMR_IRQn               = 111,  /*!< GIRQ23 b[10] */
	HTMR_0_IRQn             = 112,  /*!< GIRQ23 b[16] */
	HTMR_1_IRQn             = 113,  /*!< GIRQ23 b[17] */
	WK_IRQn                 = 114,  /*!< GIRQ21 b[3] */
	WKSUB_IRQn              = 115,  /*!< GIRQ21 b[4] */
	WKSEC_IRQn              = 116,  /*!< GIRQ21 b[5] */
	WKSUBSEC_IRQn           = 117,  /*!< GIRQ21 b[6] */
	WKSYSPWR_IRQn           = 118,  /*!< GIRQ21 b[7] */
	RTC_IRQn                = 119,  /*!< GIRQ21 b[8] */
	RTC_ALARM_IRQn          = 120,  /*!< GIRQ21 b[9] */
	VCI_OVRD_IN_IRQn        = 121,  /*!< GIRQ21 b[10] */
	VCI_IN0_IRQn            = 122,  /*!< GIRQ21 b[11] */
	VCI_IN1_IRQn            = 123,  /*!< GIRQ21 b[12] */
	VCI_IN2_IRQn            = 124,  /*!< GIRQ21 b[13] */
	VCI_IN3_IRQn            = 125,  /*!< GIRQ21 b[14] */
	VCI_IN4_IRQn            = 126,  /*!< GIRQ21 b[15] */
	/* reserved 127-128 */
	PS2_0A_WAKE_IRQn        = 129,  /*!< GIRQ21 b[18] */
	PS2_0B_WAKE_IRQn        = 130,  /*!< GIRQ21 b[19] */
	/* reserved 131-134 */
	KEYSCAN_IRQn            = 135,  /*!< GIRQ21 b[25] */
	B16TMR_0_IRQn           = 136,  /*!< GIRQ23 b[0] */
	B16TMR_1_IRQn           = 137,  /*!< GIRQ23 b[1] */
	B16TMR_2_IRQn           = 138,  /*!< GIRQ23 b[2] */
	B16TMR_3_IRQn           = 139,  /*!< GIRQ23 b[3] */
	B32TMR_0_IRQn           = 140,  /*!< GIRQ23 b[4] */
	B32TMR_1_IRQn           = 141,  /*!< GIRQ23 b[5] */
	CTMR_0_IRQn             = 142,  /*!< GIRQ23 b[6] */
	CTMR_1_IRQn             = 143,  /*!< GIRQ23 b[7] */
	CTMR_2_IRQn             = 144,  /*!< GIRQ23 b[8] */
	CTMR_3_IRQn             = 145,  /*!< GIRQ23 b[9] */
	CCT_IRQn                = 146,  /*!< GIRQ18 b[20] */
	CCT_CAP0_IRQn           = 147,  /*!< GIRQ18 b[21] */
	CCT_CAP1_IRQn           = 148,  /*!< GIRQ18 b[22] */
	CCT_CAP2_IRQn           = 149,  /*!< GIRQ18 b[23] */
	CCT_CAP3_IRQn           = 150,  /*!< GIRQ18 b[24] */
	CCT_CAP4_IRQn           = 151,  /*!< GIRQ18 b[25] */
	CCT_CAP5_IRQn           = 152,  /*!< GIRQ18 b[26] */
	CCT_CMP0_IRQn           = 153,  /*!< GIRQ18 b[27] */
	CCT_CMP1_IRQn           = 154,  /*!< GIRQ18 b[28] */
	EEPROMC_IRQn            = 155,  /*!< GIRQ18 b[13] */
	ESPI_VWIRE_IRQn         = 156,  /*!< GIRQ19 b[8] */
	/* reserved 157 */
	I2C_SMB_4_IRQn          = 158,  /*!< GIRQ13 b[4] */
	TACH_3_IRQn             = 159,  /*!< GIRQ17 b[4] */
	/* reserved 160-165 */
	SAF_DONE_IRQn           = 166,  /*!< GIRQ19 b[9] */
	SAF_ERR_IRQn            = 167,  /*!< GIRQ19 b[10] */
	/* reserved 168 */
	SAF_CACHE_IRQn          = 169,  /*!< GIRQ19 b[11] */
	/* reserved 170 */
	WDT_0_IRQn              = 171,  /*!< GIRQ21 b[2] */
	GLUE_IRQn               = 172,  /*!< GIRQ21 b[26] */
	OTP_RDY_IRQn            = 173,  /*!< GIRQ20 b[3] */
	CLK32K_MON_IRQn         = 174,  /*!< GIRQ20 b[9] */
	ACPI_EC0_IRQn           = 175,  /* ACPI EC OBE and IBF combined into one */
	ACPI_EC1_IRQn           = 176,  /* No GIRQ connection. Status in ACPI blocks */
	ACPI_EC2_IRQn           = 177,  /* Code uses level bits and NVIC bits */
	ACPI_EC3_IRQn           = 178,
	ACPI_EC4_IRQn           = 179,
	ACPI_PM1_IRQn           = 180,
	MAX_IRQn
} IRQn_Type;

/* ========================================================================= */
/* ================  Processor and Core Peripheral Section  ================ */
/* ========================================================================= */

/* == Configuration of the Arm Cortex-M4 Processor and Core Peripherals  == */

#define __CM4_REV 0x0201                /*!< Core Revision r2p1 */

#define __MPU_PRESENT 1                 /*!< Set to 1 if MPU is present */
#define __VTOR_PRESENT 1                /*!< Set to 1 if VTOR is present */
#define __NVIC_PRIO_BITS 3              /*!< Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig 0        /*!< 0 use default SysTick HW */
#define __FPU_PRESENT 1                 /*!< Set to 1 if FPU is present */
#define __FPU_DP 0                      /*!< Set to 1 if FPU is double precision */
#define __ICACHE_PRESENT 0              /*!< Set to 1 if I-Cache is present */
#define __DCACHE_PRESENT 0              /*!< Set to 1 if D-Cache is present */
#define __DTCM_PRESENT 0                /*!< Set to 1 if DTCM is present */

/** @} */ /* End of group Configuration_of_CMSIS */

#include "core_cm4.h" /*!< Arm Cortex-M4 processor and core peripherals */

/* ==  Start of section using anonymous unions  ========================= */
#if defined(__CC_ARM)
#pragma push
#pragma anon_unions
#elif defined(__ICCARM__)
#pragma language = extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning 586
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* ====================================================================== */
/* ================   Device Specific Peripheral Section   ============== */
/* ====================================================================== */

/** @addtogroup MEC172x_Peripheral_peripherals
 * @{
 */

/** @brief GIRQ registers. Total size = 20(0x14) bytes */
typedef struct girq_regs {
	__IOM uint32_t SRC;     /*! (@ 0x0000) GIRQ Source(RW/1C) */
	__IOM uint32_t EN_SET;  /*! (@ 0x0004) GIRQ Enable Set(RW) */
	__IOM uint32_t RESULT;  /*! (@ 0x0008) GIRQ Result(RO) */
	__IOM uint32_t EN_CLR;  /*! (@ 0x000C) GIRQ Enable Clear(RW) */
	uint32_t RSVD1[1];
} GIRQ_Type;

/** @brief ECIA registers with each GIRQ elucidated */
typedef struct ecia_regs {
	GIRQ_Type GIRQ08;                       /*!< (@ 0x0000) GIRQ08 */
	GIRQ_Type GIRQ09;                       /*!< (@ 0x0014) GIRQ09 */
	GIRQ_Type GIRQ10;                       /*!< (@ 0x0028) GIRQ10 */
	GIRQ_Type GIRQ11;                       /*!< (@ 0x003C) GIRQ11 */
	GIRQ_Type GIRQ12;                       /*!< (@ 0x0050) GIRQ12 */
	GIRQ_Type GIRQ13;                       /*!< (@ 0x0064) GIRQ13 */
	GIRQ_Type GIRQ14;                       /*!< (@ 0x0078) GIRQ14 */
	GIRQ_Type GIRQ15;                       /*!< (@ 0x008C) GIRQ15 */
	GIRQ_Type GIRQ16;                       /*!< (@ 0x00A0) GIRQ16 */
	GIRQ_Type GIRQ17;                       /*!< (@ 0x00B4) GIRQ17 */
	GIRQ_Type GIRQ18;                       /*!< (@ 0x00C8) GIRQ18 */
	GIRQ_Type GIRQ19;                       /*!< (@ 0x00DC) GIRQ19 */
	GIRQ_Type GIRQ20;                       /*!< (@ 0x00F0) GIRQ20 */
	GIRQ_Type GIRQ21;                       /*!< (@ 0x0104) GIRQ21 */
	GIRQ_Type GIRQ22;                       /*!< (@ 0x0118) GIRQ22 */
	GIRQ_Type GIRQ23;                       /*!< (@ 0x012C) GIRQ23 */
	GIRQ_Type GIRQ24;                       /*!< (@ 0x0140) GIRQ24 */
	GIRQ_Type GIRQ25;                       /*!< (@ 0x0154) GIRQ25 */
	GIRQ_Type GIRQ26;                       /*!< (@ 0x0168) GIRQ26 */
	uint8_t RSVD2[(0x0200ul - 0x017Cul)];   /* offsets 0x017C - 0x1FF */
	__IOM uint32_t BLK_EN_SET;              /*! (@ 0x0200) Aggregated GIRQ output
	                                             Enable Set */
	__IOM uint32_t BLK_EN_CLR;              /*! (@ 0x0204) Aggregated GIRQ output
	                                             Enable Clear */
	__IM uint32_t BLK_ACTIVE;               /*! (@ 0x0204) GIRQ Active bitmap (RO) */
} ECIA_Type;

/** @brief ECIA registers with array of GIRQ's */
typedef struct ecia_ar_regs {
	GIRQ_Type GIRQ[19];                     /*!< (@ 0x0000 - 0x17b GIRQ 8-26 */
	uint8_t RSVD2[(0x200ul - 0x17Cul)];     /* offsets 0x017C - 0x1FF */
	__IOM uint32_t BLK_EN_SET;              /*! (@ 0x0200) Aggregated GIRQ output
	                                             Enable Set */
	__IOM uint32_t BLK_EN_CLR;              /*! (@ 0x0204) Aggregated GIRQ output
	                                             Enable Clear */
	__IM uint32_t BLK_ACTIVE;               /*! (@ 0x0204) GIRQ Active bitmap (RO) */
} ECIA_AR_Type;

/* ---------------- Timers ---------------- */

/** @brief Watch Dog Timer (WDT) */
typedef struct wdt_regs {
	__IOM uint16_t LOAD;    /*!< (@ 0x0000) WDT Load */
	uint8_t RSVD1[2];
	__IOM uint16_t CTRL;    /*!< (@ 0x0004) WDT Control */
	uint8_t RSVD2[2];
	__OM uint8_t KICK;      /*!< (@ 0x0008) WDT Kick (WO) */
	uint8_t RSVD3[3];
	__IM uint16_t CNT;      /*!< (@ 0x000C) WDT Count (RO) */
	uint8_t RSVD4[2];
	__IOM uint16_t STS;     /*!< (@ 0x0010) WDT Status */
	uint8_t RSVD5[2];
	__IOM uint8_t IEN;      /*!< (@ 0x0014) WDT Interrupt Enable */
} WDT_Type;

/** @brief 16-bit Basic Timer */
typedef struct btmr16_regs {
	__IOM uint16_t CNT;     /*!< (@ 0x0000) BTMR Count */
	uint16_t RSVD1[1];
	__IOM uint16_t PRLD;    /*!< (@ 0x0004) BTMR Preload */
	uint16_t RSVD2[1];
	__IOM uint8_t STS;      /*!< (@ 0x0008) BTMR Status */
	uint8_t RSVDC[3];
	__IOM uint8_t IEN;      /*!< (@ 0x000C) BTMR Interrupt Enable */
	uint8_t RSVDD[3];
	__IOM uint32_t CTRL;    /*!< (@ 0x0010) BTMR Control */
} BTMR16_Type;

/** @brief 32-bit Basic Timer */
typedef struct btmr32_regs {
	__IOM uint32_t CNT;     /*!< (@ 0x0000) BTMR Count */
	__IOM uint32_t PRLD;    /*!< (@ 0x0004) BTMR Preload */
	__IOM uint8_t STS;      /*!< (@ 0x0008) BTMR Status */
	uint8_t RSVDC[3];
	__IOM uint8_t IEN;      /*!< (@ 0x000C) BTMR Interrupt Enable */
	uint8_t RSVDD[3];
	__IOM uint32_t CTRL;    /*!< (@ 0x0010) BTMR Control */
} BTMR32_Type;

/** @brief 16-bit Counter Timer */
typedef struct ctmr_regs {
	__IOM uint32_t CTRL;            /*!< (@ 0x0000) CTMR Control */
	__IOM uint32_t CEV_CTRL;        /*!< (@ 0x0004) CTMR Clock Event Control */
	__IOM uint32_t RELOAD;          /*!< (@ 0x0008) CTMR Reload */
	__IOM uint32_t COUNT;           /*!< (@ 0x000C) CTMR Count (RO) */
} CTMR_Type;

/** @brief Capture/Compare Timer */
typedef struct cct_regs {
	__IOM uint32_t CTRL;            /*!< (@ 0x0000) CCT Control */
	__IOM uint32_t CAP0_CTRL;       /*!< (@ 0x0004) CCT Capture 0 Control */
	__IOM uint32_t CAP1_CTRL;       /*!< (@ 0x0008) CCT Capture 1 Control */
	__IOM uint32_t FREE_RUN;        /*!< (@ 0x000C) CCT Free run counter */
	__IOM uint32_t CAP0;            /*!< (@ 0x0010) CCT Capture 0 */
	__IOM uint32_t CAP1;            /*!< (@ 0x0014) CCT Capture 1 */
	__IOM uint32_t CAP2;            /*!< (@ 0x0018) CCT Capture 2 */
	__IOM uint32_t CAP3;            /*!< (@ 0x001C) CCT Capture 3 */
	__IOM uint32_t CAP4;            /*!< (@ 0x0020) CCT Capture 4 */
	__IOM uint32_t CAP5;            /*!< (@ 0x0024) CCT Capture 5 */
	__IOM uint32_t COMP0;           /*!< (@ 0x0028) CCT Compare 0 */
	__IOM uint32_t COMP1;           /*!< (@ 0x002C) CCT Compare 1 */
} CCT_Type;

/** @brief Hibernation Timer (HTMR) */
typedef struct htmr_regs {
	__IOM uint16_t PRLD;    /*!< (@ 0x0000) HTMR Preload */
	uint16_t RSVD1[1];
	__IOM uint16_t CTRL;    /*!< (@ 0x0004) HTMR Control */
	uint16_t RSVD2[1];
	__IM uint16_t CNT;      /*!< (@ 0x0008) HTMR Count (RO) */
	uint16_t RSVD3[1];
} HTMR_Type;

/** @brief RTOS Timer (RTMR) */
typedef struct rtmr_regs {
	__IOM uint32_t CNT;     /*!< (@ 0x0000) RTMR Counter */
	__IOM uint32_t PRLD;    /*!< (@ 0x0004) RTMR Preload */
	__IOM uint32_t CTRL;    /*!< (@ 0x0008) RTMR Control */
	__IOM uint32_t SOFTIRQ; /*!< (@ 0x000C) RTMR Soft IRQ */
} RTMR_Type;

/** @brief Week Timer (WKTMR) */
typedef struct wktmr_regs {
	__IOM uint32_t CTRL;            /*! (@ 0x0000) WKTMR control */
	__IOM uint32_t ALARM_CNT;       /*! (@ 0x0004) WKTMR Week alarm counter */
	__IOM uint32_t TMR_COMP;        /*! (@ 0x0008) WKTMR Week timer compare */
	__IM uint32_t CLKDIV;           /*! (@ 0x000C) WKTMR Clock Divider (RO) */
	__IOM uint32_t SS_INTR_SEL;     /*! (@ 0x0010) WKTMR Sub-second
	                                    interrupt select */
	__IOM uint32_t SWK_CTRL;        /*! (@ 0x0014) WKTMR Sub-week control */
	__IOM uint32_t SWK_ALARM;       /*! (@ 0x0018) WKTMR Sub-week alarm */
	__IOM uint32_t BGPO_DATA;       /*! (@ 0x001C) WKTMR BGPO data */
	__IOM uint32_t BGPO_PWR;        /*! (@ 0x0020) WKTMR BGPO power */
	__IOM uint32_t BGPO_RST;        /*! (@ 0x0024) WKTMR BGPO reset */
} WKTMR_Type;

/** @brief Real Time Clock (RTC) */
typedef struct rtc_regs {
	__IOM uint8_t SECONDS;          /*! (@ 0x0000) RTC seconds */
	__IOM uint8_t SEC_ALARM;        /*! (@ 0x0001) RTC seconds alarm */
	__IOM uint8_t MINUTES;          /*! (@ 0x0002) RTC minutes */
	__IOM uint8_t MIN_ALARM;        /*! (@ 0x0003) RTC minutes alarm */
	__IOM uint8_t HOURS;            /*! (@ 0x0004) RTC hours */
	__IOM uint8_t HOURS_ALARM;      /*! (@ 0x0005) RTC hours alarm */
	__IOM uint8_t DAY_OF_WEEK;      /*! (@ 0x0006) RTC day of week */
	__IOM uint8_t DAY_OF_MONTH;     /*! (@ 0x0007) RTC day of month */
	__IOM uint8_t MONTH;            /*! (@ 0x0008) RTC month */
	__IOM uint8_t YEAR;             /*! (@ 0x0009) RTC year */
	__IOM uint8_t REGA;             /*! (@ 0x000A) RTC Reg A */
	__IOM uint8_t REGB;             /*! (@ 0x000B) RTC Reg B */
	__IOM uint8_t REGC;             /*! (@ 0x000C) RTC Reg C */
	__IOM uint8_t REGD;             /*! (@ 0x000D) RTC Reg D */
	uint8_t RSVD1[2];
	__IOM uint8_t CONTROL;          /*! (@ 0x0010) RTC Control */
	uint8_t RSVD2[3];
	__IOM uint8_t WEEK_ALARM;       /*! (@ 0x0014) RTC Alarm day of week */
	uint8_t RSVD3[3];
	__IOM uint32_t DLSF;            /*! (@ 0x0018) RTC Daylight savings forward */
	__IOM uint32_t DLSB;            /*! (@ 0x001C) RTC Daylight savings backward */
} RTC_Type;

/* ---------------- Legacy DMA ---------------- */

/** @brief DMA Main (DMAM) */
typedef struct dma_main_regs {
	__IOM uint8_t ACTRST;   /*!< (@ 0x0000) DMA block activate/reset */
	uint8_t RSVDA[3];
	__IM uint32_t DATA_PKT; /*!< (@ 0x0004) DMA data packet (RO) */
	__IM uint32_t ARB_FSM;  /*!< (@ 0x0008) DMA Arbiter FSM (RO) */
} DMAM_Type;

/*
 * NOTE: structure size is 0x40 (64) bytes as each channel
 * is spaced every 0x40 bytes from DMA block base address.
 * Channel 0 starts at offset 0x40 from DMA Main base address.
 * Channels 0 and 1 include an ALU for special operations on data
 * they transfer.
 * Channel 0 ALU is specialized for CRC-32 calculations.
 * Channel 1 ALU is specialized for memory fill.
 */

/** @brief DMA Channels 0 and 1 with ALU
 * ACTV      !< (@ 0x0000) DMA channel activate
 * MSTART    !< (@ 0x0004) DMA channel memory start address
 * MEND      !< (@ 0x0008) DMA channel memory end address
 * DSTART    !< (@ 0x000C) DMA channel device start address
 * CTRL      !< (@ 0x0010) DMA channel control
 * ISTS      !< (@ 0x0014) DMA channel interrupt status
 * IEN       !< (@ 0x0018) DMA channel interrupt enable
 * FSM       !< (@ 0x001C) DMA channel FSM (RO)
 * ALU_EN    !< (@ 0x0020) DMA chan[0-1] ALU Enable
 * ALU_DATA  !< (@ 0x0024) DMA chan[0-1] ALU Data
 * ALU_STS   !< (@ 0x0028) DMA chan[0-1] ALU post status (RO)
 * ALU_FSM   !< (@ 0x002C) DMA chan[0-1] ALU FSM (RO)
 */
typedef struct dma_chan_alu_regs {
	__IOM uint32_t ACTV;
	__IOM uint32_t MSTART;
	__IOM uint32_t MEND;
	__IOM uint32_t DSTART;
	__IOM uint32_t CTRL;
	__IOM uint32_t ISTS;
	__IOM uint32_t IEN;
	__IM uint32_t FSM;
	__IOM uint32_t ALU_EN;
	__IOM uint32_t ALU_DATA;
	__IOM uint32_t ALU_STS;
	__IM uint32_t ALU_FSM;
	uint32_t RSVD6[4];
} DMA_CHAN_ALU_Type;

/** @brief DMA Channels 2 through 11 no ALU */
typedef struct dma_chan_regs {
	__IOM uint32_t ACTV;
	__IOM uint32_t MSTART;
	__IOM uint32_t MEND;
	__IOM uint32_t DSTART;
	__IOM uint32_t CTRL;
	__IOM uint32_t ISTS;
	__IOM uint32_t IEN;
	__IM uint32_t FSM;
	uint32_t RSVD4[8]; /* pad to 0x40(64) byte size */
} DMA_CHAN_Type;

/** @brief DMA block: main and channels */
typedef struct dma_regs {
	__IOM uint32_t ACTRST;          /*!< (@ 0x0000) DMA block activate/reset */
	__IM uint32_t DATA_PKT;         /*!< (@ 0x0004) DMA data packet (RO) */
	__IM uint32_t ARB_FSM;          /*!< (@ 0x0008) DMA Arbiter FSM (RO) */
	uint32_t RSVD2[13];
	DMA_CHAN_ALU_Type CHAN[16];     /*!< (@ 0x0040) DMA Channels 0 - 15 */
} DMA_Type;

/* ---------------- I2C/SMBus ---------------- */
/** @brief I2C with SMBus Network Layer (SNL) */
typedef struct i2c_smb_regs {
	__IOM uint8_t CTRLSTS;          /*!< (@ 0x0000) I2C Status(RO), Control(WO) */
	uint8_t RSVD1[3];
	__IOM uint32_t OWN_ADDR;        /*!< (@ 000004) I2C Own address 1 */
	__IOM uint8_t I2CDATA;          /*!< (@ 0x0008) I2C Data */
	uint8_t RSVD2[3];
	__IOM uint32_t MCMD;            /*!< (@ 0x000C) I2C SNL leader command */
	__IOM uint32_t SCMD;            /*!< (@ 0x0010) I2C SNL follower command */
	__IOM uint8_t PEC;              /*!< (@ 0x0014) I2C PEC value */
	uint8_t RSVD3[3];
	__IOM uint32_t RSHTM;           /*!< (@ 0x0018) I2C Repeated-Start hold time */
	__IOM uint32_t EXTLEN;          /*!< (@ 0x001C) I2C Extended length */
	__IOM uint32_t COMPL;           /*!< (@ 0x0020) I2C Completion */
	__IOM uint32_t IDLSC;           /*!< (@ 0x0024) I2C Idle scaling */
	__IOM uint32_t CFG;             /*!< (@ 0x0028) I2C Configuration */
	__IOM uint32_t BUSCLK;          /*!< (@ 0x002C) I2C Bus Clock */
	__IOM uint32_t BLKID;           /*!< (@ 0x0030) I2C Block ID */
	__IOM uint32_t BLKREV;          /*!< (@ 0x0034) I2C Block revision */
	__IOM uint8_t BBCTRL;           /*!< (@ 0x0038) I2C Bit-Bang control */
	uint8_t RSVD7[3];
	__IOM uint32_t CLKSYNC;         /*!< (@ 0x003C) I2C Clock Sync */
	__IOM uint32_t DATATM;          /*!< (@ 0x0040) I2C Data timing */
	__IOM uint32_t TMOUTSC;         /*!< (@ 0x0044) I2C Time-out scaling */
	__IOM uint8_t SLV_TXB;          /*!< (@ 0x0048) I2C SNL follower TX buffer */
	uint8_t RSVD8[3];
	__IOM uint8_t SLV_RXB;          /*!< (@ 0x004C) I2C SNL follower RX buffer */
	uint8_t RSVD9[3];
	__IOM uint8_t MTR_TXB;          /*!< (@ 0x0050) I2C SNL leader TX buffer */
	uint8_t RSVD10[3];
	__IOM uint8_t MTR_RXB;          /*!< (@ 0x0054) I2C SNL leader RX buffer */
	uint8_t RSVD11[3];
	__IOM uint32_t FSM;             /*!< (@ 0x0058) I2C FSM (RO) */
	__IOM uint32_t FSM_SMB;         /*!< (@ 0x005C) I2C FSM SMB (RO) */
	__IOM uint8_t WAKE_STS;         /*!< (@ 0x0060) I2C Wake status */
	uint8_t RSVD12[3];
	__IOM uint8_t WAKE_EN;          /*!< (@ 0x0064) I2C Wake enable */
	uint32_t RSVD13[2];
	__IOM uint32_t PROM_ISTS;       /*!< (@ 0x0070) I2C Promiscuous
	                                      interrupt status */
	__IOM uint32_t PROM_IEN;        /*!< (@ 0x0074) I2C Promiscuous
	                                       interrupt enable */
	__IOM uint32_t PROM_CTRL;       /*!< (@ 0x0078) I2C Promiscuous control */
	__IOM uint32_t SHADOW_DATA;     /*!< (@ 0x007C) I2C Shadow Data.
	                                    Last received or transmitted data */
} I2C_SMB_Type;

/* ---------------- SPI ---------------------- */

/** @brief EEPROM Controller (EEPROMC) */
typedef struct eepromc_regs {
	__IOM uint32_t MODE;    /*!< (@ 0x0000) EEPROMC Mode */
	__IOM uint32_t EXE;     /*!< (@ 0x0004) EEPROMC Execute */
	__IOM uint32_t STATUS;  /*!< (@ 0x0008) EEPROMC Status */
	__IOM uint32_t IEN;     /*!< (@ 0x000C) EEPROMC Interrupt enable */
	__IOM uint32_t PSWD;    /*!< (@ 0x0010) EEPROMC Password */
	__IOM uint32_t UNLOCK;  /*!< (@ 0x0014) EEPROMC Unlock */
	__IOM uint32_t LOCK;    /*!< (@ 0x0018) EEPROMC Lock */
	uint32_t RSVD1[1];
	union {
		__IOM uint32_t DATA32[8];
		__IOM uint16_t DATA16[16];
		__IOM uint8_t DATA8[32];
	}; /*!< (@ 0x0020) EEPROM 32 byte data array */
} EEPROMC_Type;

/** @brief SPI Peripheral registers (SPIP) */
typedef struct spip_regs {
	__IOM uint32_t CONFIG;          /*!< (@ 0x0000) SPIP Control */
	__IOM uint32_t SLV_STATUS;      /*!< (@ 0x0004) SPIP Slave Status */
	__IOM uint32_t EC_STATUS;       /*!< (@ 0x0008) SPIP EC Status */
	__IOM uint32_t SPI_INT_EN;      /*!< (@ 0x000C) SPIP SPI Interrupt Enable */
	__IOM uint32_t EC_INT_EN;       /*!< (@ 0x0010) SPIP EC Interrupt Enable */
	__IOM uint32_t MCONFIG;         /*!< (@ 0x0014) SPIP Memory Config */
	__IOM uint32_t MBA0;            /*!< (@ 0x0018) SPIP Memory BAR 0 */
	__IOM uint32_t MBA0_WLIM;       /*!< (@ 0x001C) SPIP Memory BAR 0
	                                      Write Limit */
	__IOM uint32_t MBA0_RLIM;       /*!< (@ 0x0020) SPIP Memory BAR 0
	                                      Read Limit */
	__IOM uint32_t MBA1;            /*!< (@ 0x0024) SPIP Memory BAR 1 */
	__IOM uint32_t MBA1_WLIM;       /*!< (@ 0x0028) SPIP Memory BAR 1
	                                      Write Limit */
	__IOM uint32_t MBA1_RLIM;       /*!< (@ 0x002C) SPIP Memory BAR 1
	                                      Read Limit */
	__IOM uint32_t RXF_HBAR;        /*!< (@ 0x0030) SPIP RX FIFO Host BAR */
	__IOM uint32_t RXF_BCNT;        /*!< (@ 0x0034) SPIP RX FIFO Byte Counter */
	__IOM uint32_t TXF_HBAR;        /*!< (@ 0x0038) SPIP RX FIFO Host BAR */
	__IOM uint32_t TXF_BCNT;        /*!< (@ 0x003C) SPIP TX FIFO Byte Counter */
	__IOM uint32_t SYS_CONFIG;      /*!< (@ 0x0040) SPIP System Config */
	__IOM uint32_t MBOX_S2EC;       /*!< (@ 0x0044) SPIP external SPI controller
	                                      to EC Mailbox */
	__IOM uint32_t MBOX_EC2S;       /*!< (@ 0x0048) SPIP EC to external SPI
	                                      Controller Mailbox */
} SPIP_Type;

/** @brief General Purpose SPI Controller (GPSPI)
 * Offset 0x00 GPSPI Activate
 * Offset 0x04 GPSPI Control
 * Offset 0x08 GPSPI Status
 * Offset 0x0C GPSPI TX DATA 8-bit
 * Offset 0x10 GPSPI RX DATA 8-bit
 * Offset 0x14 GPSPI Clock Control
 * Offset 0x18 GPSPI Clock Generator
 */
typedef struct gpspi_regs {
	__IOM uint32_t BLOCK_EN;
	__IOM uint32_t CONTROL;
	__IOM uint32_t STATUS;
	__IOM uint8_t TX_DATA;
	uint8_t RSVD1[3];
	__IOM uint8_t RX_DATA;
	uint8_t RSVD2[3];
	__IOM uint32_t CLK_CTRL;
	__IOM uint32_t CLK_GEN;
} GPSPI_Type;

/** @brief QMSPI Local DMA channel */
typedef struct qldma_chan {
	__IOM uint32_t CTRL;    /*!< (@ 0x0000) QMSPI Local DMA channel control */
	__IOM uint32_t MSTART;  /*!< (@ 0x0004) QMSPI Local DMA channel memory
	                           start address */
	__IOM uint32_t LEN;     /*!< (@ 0x0008) QMSPI Local DMA channel transfer
	                            byte length */
	uint32_t RSVD1[1];
} QLDCH;

/**
 * @brief Quad Master SPI (QMSPI_LDMA_Type)
 * @note Version of QMSPI with local DMA (LDMA) channels.
 * MODE (@ 0x0000) Mode: frequency, chip select, signal sampling
 * CTRL (@ 0x0004) Control
 * EXE (@ 0x0008) Execute, write-only
 * IFCTRL (@ 0x000C) Interface control
 * STS (@ 0x0010) Status, RW/1C and RO
 * BCNT_STS (@ 0x0014) Buffer Count Status, RO
 * IEN (@ 0x0018) Interrupt Enable
 * BCNT_TRIG (@ 0x001C) Buffer Count Trigger
 * TX_FIFO (@ 0x0020) Transmit FIFO
 * RX_FIFO (@ 0x0024) Receive FIFO
 * CSTM (@ 0x0028) Chip select timing
 * DESCR[16] (@ 0x0030 - 0x006F) 32-bit descriptors
 * ALIAS_CTRL (@ 0x00B0) eSPI ?
 * MODE_ALT1 (@ 0x00C0) Mode Alternate 1
 * TM_TAPS (@ 0x00D0) Timing taps select
 * TM_TAPS_ADJ (@ 0x00D4) Timing taps adjust
 * TM_TAPS_CTRL (@ 0x00D8) Timing taps control
 * LDMA_RX_DESCR_BM (@ 0x100) Local DMA RX Descriptor bit map
 * LDMA_TX_DESCR_BM (@ 0x104) Local DMA TX Descriptor bit map
 * LDRX[3] (@ 0x110) Local DMA RX channels 0 - 3
 * LDRX[3] (@ 0x140) Local DMA TX channels 0 - 3
 */
typedef struct qmspi_ldma_regs {
	__IOM uint32_t MODE;
	__IOM uint32_t CTRL;
	__IOM uint32_t EXE;
	__IOM uint32_t IFCTRL;
	__IOM uint32_t STS;
	__IOM uint32_t BCNT_STS;
	__IOM uint32_t IEN;
	__IOM uint32_t BCNT_TRIG;
	__IOM uint32_t TX_FIFO;
	__IOM uint32_t RX_FIFO;
	__IOM uint32_t CSTM;
	uint32_t RSVD1[1];
	__IOM uint32_t DESCR[16];
	uint32_t RSVD2[16];
	__IOM uint32_t ALIAS_CTRL;
	uint32_t RSVD3[3];
	__IOM uint32_t MODE_ALT1;
	uint32_t RSVD4[3];
	__IOM uint32_t TM_TAPS;
	__IOM uint32_t TM_TAPS_ADJ;
	__IOM uint32_t TM_TAPS_CTRL;
	uint32_t RSVD5[9];
	__IOM uint32_t LDMA_RX_DESCR_BM;
	__IOM uint32_t LDMA_TX_DESCR_BM;
	uint32_t RSVD6[2];
	QLDCH LDRX[3];
	QLDCH LDTX[3];
} QMSPI_Type;

/* ---------------- Host CPU Monitoring ---------------- */

/** @brief Processor Hot Interface (PROCHOT) */
typedef struct prochot_regs {
	__IOM uint32_t CUMUL_COUNT;     /*!< (@ 0x0000) PROCHOT Cumulative Count */
	__IOM uint32_t DUTY_COUNT;      /*!< (@ 0x0004) PROCHOT Duty cycle count */
	__IOM uint32_t DUTY_PERIOD;     /*!< (@ 0x0008) PROCHOT Duty cycle period */
	__IOM uint32_t CTRL_STS;        /*!< (@ 0x000C) PROCHOT Control and Status */
	__IOM uint32_t ASSERT_COUNT;    /*!< (@ 0x0010) PROCHOT Assertion counter */
	__IOM uint32_t ASSERT_LIMIT;    /*!< (@ 0x0014) PROCHOT Assertion limit */
} PROCHOT_Type;

/** @brief Platform Enviroment Control Interface Registers (PECI)
 * !< (@ 0x0000) PECI Write Data
 * !< (@ 0x0004) PECI Read data
 * !< (@ 0x0008) PECI Control
 * !< (@ 0x000C) PECI Status 1
 * !< (@ 0x0010) PECI Status 2
 * !< (@ 0x0014) PECI Error
 * !< (@ 0x0018) PECI Interrupt Enable 1
 * !< (@ 0x001C) PECI Interrupt Enable 2
 * !< (@ 0x0020) PECI Optimal Bit Time LSB
 * !< (@ 0x0024) PECI Optimal Bit Time MSB
 */
typedef struct peci_regs {
	__IOM uint8_t WR_DATA;
	uint8_t RSVD1[3];
	__IOM uint8_t RD_DATA;
	uint8_t RSVD2[3];
	__IOM uint8_t CONTROL;
	uint8_t RSVD3[3];
	__IOM uint8_t STATUS1;
	uint8_t RSVD4[3];
	__IOM uint8_t STATUS2;
	uint8_t RSVD5[3];
	__IOM uint8_t ERROR;
	uint8_t RSVD6[3];
	__IOM uint8_t INT_EN1;
	uint8_t RSVD7[3];
	__IOM uint8_t INT_EN2;
	uint8_t RSVD8[3];
	__IOM uint8_t OPT_BIT_TIME_LSB;
	uint8_t RSVD9[3];
	__IOM uint8_t OPT_BIT_TIME_MSB;
	uint8_t RSVD10[87]; /* 0x25 - 0x7C */
} PECI_Type;

/* ---------------- Fan Control -------------------- */

/** @brief Pulse Width Modulator Registers (PWM)
 * !< (@ 0x0000) PWM Counter ON b[15:0]
 * !< (@ 0x0004) PWM Counter OFF b[15:0]
 * !< (@ 0x0008) PWM Configuration b[7:0]
 */
typedef struct pwm_regs {
	__IOM uint32_t COUNT_ON;
	__IOM uint32_t COUNT_OFF;
	__IOM uint32_t CONFIG;
} PWM_Type;

/** @brief Tachometer Registers (TACH)
 * !< (@ 0x0000) TACH Control b[31:0]
 * !< (@ 0x0004) TACH Status b[7:0]
 * !< (@ 0x0008) TACH High LImit b[15:0]
 * !< (@ 0x000C) TACH Low Limit b[15:0]
 */
typedef struct tach_regs {
	__IOM uint32_t CONTROL;
	__IOM uint32_t STATUS;
	__IOM uint32_t LIMIT_HI;
	__IOM uint32_t LIMIT_LO;
} TACH_Type;

/** @brief RPM to PWM Fan Registers (RPMFAN) */
typedef struct rpmfan_regs {
	__IOM uint16_t FAN_SETTING;     /*!< (@ 0x0000) RPMFAN Fan Settings */
	__IOM uint16_t FAN_CONFIG;      /*!< (@ 0x0002) RPMFAN Fan Config */
	__IOM uint8_t PWM_DIVIDE;       /*!< (@ 0x0004) RPMFAN PWM Divider */
	__IOM uint8_t GAIN;             /*!< (@ 0x0005) RPMFAN Gain */
	__IOM uint8_t FSPU_CFG;         /*!< (@ 0x0006) RPMFAN Fan Spin-up config */
	__IOM uint8_t FAN_STEP;         /*!< (@ 0x0007) RPMFAN Fan Step */
	__IOM uint8_t FAN_MIN_DRV;      /*!< (@ 0x0008) RPMFAN Fan Minimum drive */
	__IOM uint8_t VALID_TACH_CNT;   /*!< (@ 0x0009) RPMFAN Valid TACH count */
	__IOM uint16_t FAN_DFB;         /*!< (@ 0x000A) RPMFAN Fan driver fail band */
	__IOM uint16_t TACH_TARGET;     /*!< (@ 0x000C) RPMFAN TACH target */
	__IOM uint16_t TACH_READING;    /*!< (@ 0x000E) RPMFAN TACH reading */
	__IOM uint8_t PWM_DBF;          /*!< (@ 0x0010) RPMFAN PWM driver base freq. */
	__IOM uint8_t FAN_STATUS;       /*!< (@ 0x0011) RPMFAN PWM driver base freq. */
	uint8_t RSVD1[6];
} RPMFAN_Type;

/* ---------------- Keyboard, PS/2, Key scan matrix -------------------- */

/** @brief Keyboard Scan Matrix Registers (KSCAN) */
typedef struct kscan_regs {
	uint32_t RSVD[1];
	__IOM uint32_t KSO_SEL;         /*!< (@ 0x0004) KSO Select */
	__IOM uint32_t KSI_IN;          /*!< (@ 0x0008) KSI Input States */
	__IOM uint32_t KSI_STS;         /*!< (@ 0x000C) KSI Status */
	__IOM uint32_t KSI_IEN;         /*!< (@ 0x0010) KSI Interrupt Enable */
	__IOM uint32_t EXT_CTRL;        /*!< (@ 0x0014) Extended Control */
} KSCAN_Type;

/** @brief Emulated 8042 Keyboard Controller Registers (KBC) */
typedef struct kbc_regs {
	__IOM uint32_t HOST_AUX_DATA;   /*!< (@ 0x0000) EC_HOST and AUX Data */
	__IOM uint32_t KBC_STS_RD;      /*!< (@ 0x0004) Keyboard Status Read */
	uint8_t RSVD1[0x100u - 0x08u];
	__IOM uint32_t EC_DATA;         /*!< (@ 0x0100) EC Data */
	__IOM uint32_t EC_KBC_STS;      /*!< (@ 0x0104) EC KBC Status */
	__IOM uint32_t KBC_CTRL;        /*!< (@ 0x0108) KBC Control */
	__IOM uint32_t EC_AUX_DATA;     /*!< (@ 0x010C) EC Aux Data */
	uint32_t RSVD2[1];
	__IOM uint32_t PCOBF;           /*!< (@ 0x0114) PCOBF register */
	uint8_t RSVD3[0x0330ul - 0x0118ul];
	__IOM uint32_t KBC_PORT92_EN;   /*!< (@ 0x0330) Port92h enable */
} KBC_Type;

/** @brief Fast Port92h Registers (PORT92) */
typedef struct port92_regs {
	__IOM uint32_t HOST_P92;        /*!< (@ 0x0000) HOST Port92h register */
	uint8_t RSVD1[0x100u - 0x04u];
	__IOM uint32_t GATEA20_CTRL;    /*!< (@ 0x0100) Gate A20 Control */
	uint32_t RSVD2[1];
	__IOM uint32_t SETGA20L;        /*!< (@ 0x0108) Set Gate A20 */
	__IOM uint32_t RSTGA20L;        /*!< (@ 0x010C) Reset Gate A20 */
	uint8_t RSVD3[0x0330ul - 0x0110ul];
	__IOM uint32_t ACTV;            /*!< (@ 0x0330) Logical device Activate */
} PORT92_Type;

/** @brief PS/2 Controller Registers (PS2) */
typedef struct ps2_regs {
	__IOM uint32_t TRX_BUFF;        /*!< (@ 0x0000) PS/2 Transmit buffer(WO),
	                                       Receive buffer(RO) */
	__IOM uint32_t CTRL;            /*!< (@ 0x0004) PS/2 Control */
	__IOM uint32_t STATUS;          /*!< (@ 0x0008) PS/2 Status */
} PS2_Type;

/* ---------------- VBAT Powered Features ---------------- */
/** @brief VBAT Register Bank (VBATR) */
typedef struct vbatr_regs {
	__IOM uint32_t PFRS;            /*! (@ 0x0000) VBATR Power Fail Reset Status */
	uint32_t RSVD1[1];
	__IOM uint32_t CLK32_SRC;       /*! (@ 0x0008) VBATR 32K clock source */
	uint32_t RSVD2[5];
	__IOM uint32_t MCNT_LO;         /*! (@ 0x0020) VBATR monotonic count lo */
	__IOM uint32_t MCNT_HI;         /*! (@ 0x0024) VBATR monotonic count hi */
	__IOM uint32_t EMBRD_EN;        /*! (@ 0x0034) VBATR Embedded Reset
	                                       De-bounce Enable */
} VBATR_Type;

/** @brief VBAT Memory (VBATM) */
typedef struct vbatm_regs {
	union vbmem_u {
		uint32_t u32[128U / 4U];
		uint16_t u16[128U / 2U];
		uint8_t u8[128U];
	} MEM;
} VBATM_Type;

/** @brief VBAT powered control interface (VCI) */
typedef struct vci_regs {
	__IOM uint32_t CONFIG;          /*! (@ 0x0000) VCI Config register */
	__IOM uint32_t LATCH_EN;        /*! (@ 0x0004) VCI Latch enable register */
	__IOM uint32_t LATCH_RST;       /*! (@ 0x0008) VCI Latch resets register */
	__IOM uint32_t INPUT_EN;        /*! (@ 0x000C) VCI Input enable register */
	__IOM uint32_t HOLD_OFF;        /*! (@ 0x0010) VCI Hold off count register */
	__IOM uint32_t POLARITY;        /*! (@ 0x0014) VCI Polarity register */
	__IOM uint32_t
		PEDGE_DET;              /*! (@ 0x0018) VCI Positive edge detect register */
	__IOM uint32_t
		NEDGE_DET;              /*! (@ 0x001C) VCI Negative edge detect register */
	__IOM uint32_t BUFFER_EN;       /*! (@ 0x0020) VCI Buffer enable register */
} VCI_Type;

/* ---------------- Miscellaneous Interfaces ---------------- */

/** @brief Breathing-Blinking LED (LED) */
typedef struct led_regs {
	__IOM uint32_t CFG;     /*!< (@ 0x0000) LED configuration */
	__IOM uint32_t LIMIT;   /*!< (@ 0x0004) LED limits */
	__IOM uint32_t DLY;     /*!< (@ 0x0008) LED delay */
	__IOM uint32_t STEP;    /*!< (@ 0x000C) LED update step size */
	__IOM uint32_t INTRVL;  /*!< (@ 0x0010) LED update interval */
	__IOM uint32_t OUTDLY;  /*!< (@ 0x0014) LED output delay */
} LED_Type;

/** @brief BC-Link Controller (BCL) */
typedef struct bcl_regs {
	__IOM uint32_t STATUS;  /*!< (@ 0x0000) BCL Status */
	__IOM uint32_t TADDR;   /*!< (@ 0x0004) BCL Target address */
	__IOM uint32_t DATA;    /*!< (@ 0x0008) BCL Data */
	__IOM uint32_t CLKSEL;  /*!< (@ 0x000C) BCL Clock select */
} BCL_Type;

/** @brief Glue Logic registers (GLUE) */
typedef struct glue_regs {
	uint32_t RSVD1[1];
	__IOM uint32_t S0IX_DET_EN;     /*!< (@ 0x0004) S0ix detect enable */
	uint32_t RSVD2[(0x10Cu - 0x008u) / 4];
	__IOM uint32_t PWRGD_SRC_CFG;   /*!< (@ 0x010C) PWRGD Source Config */
	__IOM uint32_t S0IX_DET_CFG;    /*!< (@ 0x0110) S0ix detect config */
	uint32_t RSVD3[5];
	__IOM uint32_t MON_STATE;       /*!< (@ 0x0128) Monitor state */
	__IOM uint32_t MON_IPEND;       /*!< (@ 0x012C) Monitor Interrupt pending */
	__IOM uint32_t MON_IEN;         /*!< (@ 0x0130) Monitor Intrrupt enable */
} GLUE_Type;

/* ---------------- Analog Interfaces ---------------- */
/** @brief Analog to Digital Converter Registers (ADC) */
typedef struct adc_regs {
	__IOM uint32_t CONTROL;         /*!< (@ 0x0000) ADC Control */
	__IOM uint32_t DELAY;           /*!< (@ 0x0004) ADC Delay */
	__IOM uint32_t STATUS;          /*!< (@ 0x0008) ADC Status */
	__IOM uint32_t SINGLE;          /*!< (@ 0x000C) ADC Single */
	__IOM uint32_t REPEAT;          /*!< (@ 0x0010) ADC Repeat */
	__IOM uint32_t RD[8];           /*!< (@ 0x0014 - 0x0033 ADC Chan 0-7 reading */
	uint8_t RSVD1[0x7C - 0x34];
	__IOM uint32_t CONFIG;          /*!< (@ 0x007C) ADC Configuration */
	__IOM uint32_t VREF_CHAN_SEL;   /*!< (@ 0x0080) ADC Vref Channel Sel. */
	__IOM uint32_t VREF_CTRL;       /*!< (@ 0x0084) ADC Vref Control */
	__IOM uint32_t SARADC_CTRL;     /*!< (@ 0x0088) SAR ARD Control */
} ADC_Type;

/** @brief RC-ID */
typedef struct rcid_regs {
	__IOM uint32_t CTRL;    /*!< (@ 0x0000) RCID Control */
	__IOM uint32_t DATA;    /*!< (@ 0x0004) RCID Data */
} RCID_Type;

/* ---------------- Chip Configuration/Control ---------------- */
/** @brief Glocal Configuration Registers (GLOBAL_CFG)
 * !< (@ 0x0002) MCHP Test
 * !< (@ 0x0007) Global Config Logical Device Number
 * !< (@ 0x001C) Device and revision ID
 * !< (@ 0x0020) Legacy Device ID
 */
typedef struct global_cfg_regs {
	__IOM uint8_t RSVD0[2];
	__IOM uint8_t TEST02;
	__IOM uint8_t RSVD1[4];
	__IOM uint8_t LOG_DEV_NUM;
	__IOM uint8_t RSVD2[20];
	__IOM uint32_t DEV_REV_ID;
	__IOM uint8_t LEGACY_DEV_ID;
	__IOM uint8_t RSVD3[14];
} GLOBAL_CFG_Type;

/**  @brief EC Subsystem (ECS) */
typedef struct ecs_regs {
	uint32_t RSVD1[1];
	__IOM uint32_t AHB_ERR_ADDR;    /*!< (@ 0x0004) ECS AHB Error Address */
	uint32_t RSVD2[2];
	__IOM uint32_t OSC_ID;          /*!< (@ 0x0010) ECS ID register */
	__IOM uint32_t AHB_ERR_CTRL;    /*!< (@ 0x0014) ECS AHB Error Control */
	__IOM uint32_t INTR_CTRL;       /*!< (@ 0x0018) ECS Interupt Control */
	__IOM uint32_t ETM_CTRL;        /*!< (@ 0x001C) ECS ETM Trace Control */
	__IOM uint32_t DEBUG_CTRL;      /*!< (@ 0x0020) ECS Debug Control */
	__IOM uint32_t OTP_LOCK;        /*!< (@ 0x0024) ECS OTP Lock Enable */
	__IOM uint32_t WDT_CNT;         /*!< (@ 0x0028) ECS WDT Event Count */
	uint32_t RSVD3[5];
	__IOM uint32_t PECI_DIS;        /*!< (@ 0x0040) ECS PECI Disable */
	uint32_t RSVD4[3];
	__IOM uint32_t VCI_FW_OVR;      /*!< (@ 0x0050) ECS VCI FW Override */
	uint32_t RSVD5[1];
	__IOM uint32_t CRYPTO_CFG;      /*!< (@ 0x0058) ECS Crypto Config */
	uint32_t RSVD6[5];
	__IOM uint32_t JTAG_MCFG;       /*!< (@ 0x0070) ECS JTAG Master Config */
	__IOM uint32_t JTAG_MSTS;       /*!< (@ 0x0074) ECS JTAG Master Status */
	__IOM uint32_t JTAG_MTDO;       /*!< (@ 0x0078) ECS JTAG Master TDO */
	__IOM uint32_t JTAG_MTDI;       /*!< (@ 0x007C) ECS JTAG Master TDI */
	__IOM uint32_t JTAG_MTMS;       /*!< (@ 0x0080) ECS JTAG Master TMS */
	__IOM uint32_t JTAG_MCMD;       /*!< (@ 0x0084) ECS JTAG Master Command */
	uint32_t RSVD7[2];
	__IOM uint32_t VW_FW_OVR;       /*!< (@ 0x0090) ECS VWire Source Config */
	__IOM uint32_t CMP_CTRL;        /*!< (@ 0x0094) ECS Analog Comparator Control */
	__IOM uint32_t CMP_SLP_CTRL;    /*!< (@ 0x0098) ECS Analog Comparator
	                                   Sleep Control */
	uint32_t RSVD8[(0x144 - 0x9C) / 4];
	__IOM uint32_t SLP_STS_MIRROR;  /*!< (@ 0x0144) ECS Sleep Status
	                                   Mirror (RO) */
} ECS_Type;

/** @brief Power Control Reset (PCR)
 * SYS_SLP_CTRL     (@ 0x0000) System Sleep Control
 * PROC_CLK_CTRL    (@ 0x0004) CPU Clock Control
 * SLOW_CLK_CTRL    (@ 0x0008) Slow Clock Control
 * OSC_ID           (@ 0x000C) Processor Clock Control
 * PWR_RST_STS      (@ 0x0010) Power Reset Status
 * PWR_RST_CTRL     (@ 0x0014) Power Reset Control
 * SYS_RST          (@ 0x0018) System Reset
 * TURBO_CLK        (@ 0x001C) Fast clock: CPU, SRAM, PMC, CacheCtrl,
 *                             QMSPI, Crypto
 * SLP_EN[5]        (@ 0x0030) Sleep Enable 0 - 4
 * CLK_REQ[5]       (@ 0x0050) PCR Clock Req 0-4 (RO)
 * RST_EN[5]        (@ 0x0070) PCR Peripheral Reset 0 - 4
 * RST_EN_LOCK      (@ 0x0084) PCR Peripheral Lock
 * VBAT_SRST        (@ 0x0088) PCR VBAT Soft Reset
 * CLK32K_SRC_VTR   (@ 0x008C) PCR 32K Clock Source
 * CNT32K_PER       (@ 0x00C0) PCR 32K period counter
 * CNT32K_PULSE_HI  (@ 0x00C4) PCR 32K pulse hi counter
 * CNT32K_PER_MIN   (@ 0x00C8) PCR 32K mininum period count
 * CNT32K_PER_MAX   (@ 0x00CC) PCR 32K maximum period count
 * CNT32K_DV        (@ 0x00D0) PCR 32K Duty variation
 * CNT32K_DV_MAX    (@ 0x00D4 PCR 32K Duty variation maximum
 * CNT32K_VALID     (@ 0x00D8) PCR 32K Counter valid
 * CNT32K_VALID_MIN (@ 0x00DC) PCR 32K counter valid minimum
 * CNT32K_CTRL      (@ 0x00E0) PCR 32K counter control
 * CLK32K_MON_ISTS  (@ 0x00E4) PCR 32K Monitor interrupt status
 * CLK32K_MON_IEN   (@ 0x00E8) PCR 32K Monitor interrupt enable
 */
typedef struct pcr_regs {
	__IOM uint32_t SYS_SLP_CTRL;
	__IOM uint32_t PROC_CLK_CTRL;
	__IOM uint32_t SLOW_CLK_CTRL;
	__IOM uint32_t OSC_ID;
	__IOM uint32_t PWR_RST_STS;
	__IOM uint32_t PWR_RST_CTRL;
	__IOM uint32_t SYS_RST;
	__IOM uint32_t TURBO_CLK;
	__IOM uint32_t TEST20;
	uint32_t RSVD1[3];
	__IOM uint32_t SLP_EN[5];
	uint32_t RSVD2[3];
	__IOM uint32_t CLK_REQ[5];
	uint32_t RSVD3[3];
	__IOM uint32_t RST_EN[5];
	__IOM uint32_t RST_EN_LOCK;
	__IOM uint32_t VBAT_SRST;
	__IOM uint32_t CLK32K_SRC_VTR;
	__IOM uint32_t TEST90;
	uint32_t RSVD4[(0x00C0 - 0x0094) / 4];
	__IOM uint32_t CNT32K_PER;
	__IOM uint32_t CNT32K_PULSE_HI;
	__IOM uint32_t CNT32K_PER_MIN;
	__IOM uint32_t CNT32K_PER_MAX;
	__IOM uint32_t CNT32K_DV;
	__IOM uint32_t CNT32K_DV_MAX;
	__IOM uint32_t CNT32K_VALID;
	__IOM uint32_t CNT32K_VALID_MIN;
	__IOM uint32_t CNT32K_CTRL;
	__IOM uint32_t CLK32K_MON_ISTS;
	__IOM uint32_t CLK32K_MON_IEN;
} PCR_Type;

/* -------------------- GPIO -------------------- */

/** @brief All GPIO register as arrays of registers
 * CTRL (@ 0x000 - 0x2FF) Sparse array of GPIO 32-bit Control registers
 * PARIN (@ 0x300 - 0x317) Array of GPIO Parallel input 32-bit registers
 * PAROUT (@ 0x380 - 0x397) Array of GPIO Parallel output 32-bit registers
 * LOCK (@ 0x3EC - 0x3FF) Array of GPIO Lock 32-bit registers (write-once)
 * CTRL2 (@ 0x500 - 0x7FF) Sparse array of GPIO 32-bit Control 2 registers
 */
typedef struct gpio_regs {
	__IOM uint32_t CTRL[192];
	__IOM uint32_t PARIN[6];
	uint32_t RSVD1[(0x380u - 0x318u) / 4];
	__IOM uint32_t PAROUT[6];
	uint32_t RSVD2[(0x3ECu - 0x398u) / 4u];
	__IOM uint32_t LOCK[6];
	uint32_t RSVD3[(0x500u - 0x400u) / 4u];
	__IOM uint32_t CTRL2[192];
} GPIO_Type;

/** @brief GPIO control registers by pin name */
typedef struct gpio_ctrl_regs {
	__IOM uint32_t CTRL_0000;       /*!< (@ 0x0000) GPIO_0000 Control */
	uint32_t RSVD1[1];
	__IOM uint32_t CTRL_0002;       /*!< (@ 0x0008) GPIO_0002 Control */
	__IOM uint32_t CTRL_0003;       /*!< (@ 0x000C) GPIO_0003 Control */
	__IOM uint32_t CTRL_0004;       /*!< (@ 0x0010) GPIO_0004 Control */
	uint32_t RSVD2[2];
	__IOM uint32_t CTRL_0007;       /*!< (@ 0x001C) GPIO_0007 Control */
	__IOM uint32_t CTRL_0010;       /*!< (@ 0x0020) GPIO_0010 Control */
	__IOM uint32_t CTRL_0011;
	__IOM uint32_t CTRL_0012;
	__IOM uint32_t CTRL_0013;
	__IOM uint32_t CTRL_0014; /*!< (@ 0x0030) GPIO_0014 Control */
	__IOM uint32_t CTRL_0015;
	__IOM uint32_t CTRL_0016;
	__IOM uint32_t CTRL_0017;
	__IOM uint32_t CTRL_0020; /*!< (@ 0x0040) GPIO_0020 Control */
	__IOM uint32_t CTRL_0021;
	__IOM uint32_t CTRL_0022;
	__IOM uint32_t CTRL_0023;
	__IOM uint32_t CTRL_0024; /*!< (@ 0x0050) GPIO_0024 Control */
	__IOM uint32_t CTRL_0025;
	__IOM uint32_t CTRL_0026;
	__IOM uint32_t CTRL_0027;
	__IOM uint32_t CTRL_0030; /*!< (@ 0x0060) GPIO_0030 Control */
	__IOM uint32_t CTRL_0031;
	__IOM uint32_t CTRL_0032;
	__IOM uint32_t CTRL_0033;
	__IOM uint32_t CTRL_0034;
	__IOM uint32_t CTRL_0035;
	__IOM uint32_t CTRL_0036;       /*!< (@ 0x0078) GPIO_0036 Control */
	uint32_t RSVD3[1];
	__IOM uint32_t CTRL_0040;       /*!< (@ 0x0080) GPIO_0040 Control */
	uint32_t RSVD4[1];
	__IOM uint32_t CTRL_0042;       /*!< (@ 0x0088) GPIO_0042 Control */
	__IOM uint32_t CTRL_0043;       /*!< (@ 0x008C) GPIO_0043 Control */
	__IOM uint32_t CTRL_0044;       /*!< (@ 0x0090) GPIO_0044 Control */
	__IOM uint32_t CTRL_0045;
	__IOM uint32_t CTRL_0046;
	__IOM uint32_t CTRL_0047;
	__IOM uint32_t CTRL_0050; /*!< (@ 0x00A0) GPIO_0050 Control */
	__IOM uint32_t CTRL_0051;
	__IOM uint32_t CTRL_0052;
	__IOM uint32_t CTRL_0053;
	__IOM uint32_t CTRL_0054; /*!< (@ 0x00B0) GPIO_0054 Control */
	__IOM uint32_t CTRL_0055;
	__IOM uint32_t CTRL_0056;
	__IOM uint32_t CTRL_0057;
	__IOM uint32_t CTRL_0060; /*!< (@ 0x00C0) GPIO_0060 Control */
	__IOM uint32_t CTRL_0061;
	__IOM uint32_t CTRL_0062;
	__IOM uint32_t CTRL_0063;
	__IOM uint32_t CTRL_0064; /*!< (@ 0x00D0) GPIO_0064 Control */
	__IOM uint32_t CTRL_0065;
	__IOM uint32_t CTRL_0066;
	__IOM uint32_t CTRL_0067;
	__IOM uint32_t CTRL_0070; /*!< (@ 0x00E0) GPIO_0070 Control */
	__IOM uint32_t CTRL_0071;
	__IOM uint32_t CTRL_0072;
	__IOM uint32_t CTRL_0073;       /*!< (@ 0x00EC) GPIO_0073 Control */
	uint32_t RSVD5[4];
	__IOM uint32_t CTRL_0100;       /*!< (@ 0x0100) GPIO_0100 Control */
	__IOM uint32_t CTRL_0101;
	__IOM uint32_t CTRL_0102;
	uint32_t RSVD6[1];
	__IOM uint32_t CTRL_0104; /*!< (@ 0x0110) GPIO_0104 Control */
	__IOM uint32_t CTRL_0105;
	__IOM uint32_t CTRL_0106;
	__IOM uint32_t CTRL_0107;       /*!< (@ 0x011C) GPIO_0107 Control */
	uint32_t RSVD7[2];
	__IOM uint32_t CTRL_0112;       /*!< (@ 0x0128) GPIO_0112 Control */
	__IOM uint32_t CTRL_0113;
	__IOM uint32_t CTRL_0114;
	__IOM uint32_t CTRL_0115;       /*!< (@ 0x0134) GPIO_0115 Control */
	uint32_t RSVD8[2];
	__IOM uint32_t CTRL_0120;       /*!< (@ 0x0140) GPIO_0120 Control */
	__IOM uint32_t CTRL_0121;
	__IOM uint32_t CTRL_0122;
	__IOM uint32_t CTRL_0123;
	__IOM uint32_t CTRL_0124; /*!< (@ 0x0150) GPIO_0124 Control */
	__IOM uint32_t CTRL_0125;
	__IOM uint32_t CTRL_0126;
	__IOM uint32_t CTRL_0127;       /*!< (@ 0x015C) GPIO_0127 Control */
	__IOM uint32_t CTRL_0130;       /*!< (@ 0x0160) GPIO_0130 Control */
	__IOM uint32_t CTRL_0131;       /*!< (@ 0x0164) GPIO_0131 Control */
	__IOM uint32_t CTRL_0132;       /*!< (@ 0x0168) GPIO_0132 Control */
	uint32_t RSVD9[5];
	__IOM uint32_t CTRL_0140;       /*!< (@ 0x0180) GPIO_0140 Control */
	__IOM uint32_t CTRL_0141;
	__IOM uint32_t CTRL_0142;
	__IOM uint32_t CTRL_0143;
	__IOM uint32_t CTRL_0144; /*!< (@ 0x0190) GPIO_0144 Control */
	__IOM uint32_t CTRL_0145;
	__IOM uint32_t CTRL_0146;
	__IOM uint32_t CTRL_0147;       /*!< (@ 0x019C) GPIO_0147 Control */
	__IOM uint32_t CTRL_0150;       /*!< (@ 0x01A0) GPIO_0150 Control */
	__IOM uint32_t CTRL_0151;
	__IOM uint32_t CTRL_0152;
	__IOM uint32_t CTRL_0153;
	__IOM uint32_t CTRL_0154; /*!< (@ 0x01B0) GPIO_0154 Control */
	__IOM uint32_t CTRL_0155;
	__IOM uint32_t CTRL_0156;
	__IOM uint32_t CTRL_0157;       /*!< (@ 0x01BC) GPIO_0157 Control */
	uint32_t RSVD10[1];
	__IOM uint32_t CTRL_0161;       /*!< (@ 0x01C4) GPIO_0161 Control */
	__IOM uint32_t CTRL_0162;
	uint32_t RSVD11[2];
	__IOM uint32_t CTRL_0165;       /*!< (@ 0x01D4) GPIO_0165 Control */
	uint32_t RSVD12[2];
	__IOM uint32_t CTRL_0170;       /*!< (@ 0x01E0) GPIO_0170 Control */
	__IOM uint32_t CTRL_0171;       /*!< (@ 0x01E4) GPIO_0171 Control */
	uint32_t RSVD13[3];
	__IOM uint32_t CTRL_0175;       /*!< (@ 0x01F4) GPIO_0175 Control */
	uint32_t RSVD14[2];
	__IOM uint32_t CTRL_0200;       /*!< (@ 0x0200) GPIO_0200 Control */
	__IOM uint32_t CTRL_0201;
	__IOM uint32_t CTRL_0202;
	__IOM uint32_t CTRL_0203;
	__IOM uint32_t CTRL_0204; /*!< (@ 0x0210) GPIO_0204 Control */
	__IOM uint32_t CTRL_0205;
	__IOM uint32_t CTRL_0206;
	__IOM uint32_t CTRL_0207;       /*!< (@ 0x021C) GPIO_0207 Control */
	uint32_t RSVD15[9];
	__IOM uint32_t CTRL_0221;       /*!< (@ 0x0244) GPIO_0221 Control */
	__IOM uint32_t CTRL_0222;
	__IOM uint32_t CTRL_0223;
	__IOM uint32_t CTRL_0224; /*!< (@ 0x0250) GPIO_0224 Control */
	uint32_t RSVD16[1];
	__IOM uint32_t CTRL_0226;
	__IOM uint32_t CTRL_0227;       /*!< (@ 0x025C) GPIO_0227 Control */
	uint32_t RSVD17[8];
	__IOM uint32_t CTRL_0240;       /*!< (@ 0x0280) GPIO_0240 Control */
	__IOM uint32_t CTRL_0241;
	__IOM uint32_t CTRL_0242;
	__IOM uint32_t CTRL_0243;       /*!< (@ 0x028C) GPIO_0243 Control */
	__IOM uint32_t CTRL_0244;       /*!< (@ 0x0290) GPIO_0244 Control */
	__IOM uint32_t CTRL_0245;       /*!< (@ 0x0294) GPIO_0245 Control */
	__IOM uint32_t CTRL_0246;       /*!< (@ 0x0298) GPIO_0246 Control */
	uint32_t RSVD18[5];
	__IOM uint32_t CTRL_0254;       /*!< (@ 0x02B0) GPIO_0254 Control */
	__IOM uint32_t CTRL_0255;       /*!< (@ 0x02B4) GPIO_0255 Control */
} GPIO_CTRL_Type;

/** @brief GPIO Control 2 registers by pin name */
typedef struct gpio_ctrl2_regs {
	__IOM uint32_t CTRL2_0000;      /*!< (@ 0x0000) GPIO_0000 Control 2 */
	uint32_t RSVD1[1];
	__IOM uint32_t CTRL2_0002;      /*!< (@ 0x0008) GPIO_0002 Control 2 */
	__IOM uint32_t CTRL2_0003;      /*!< (@ 0x000C) GPIO_0003 Control 2 */
	__IOM uint32_t CTRL2_0004;      /*!< (@ 0x0010) GPIO_0004 Control 2 */
	uint32_t RSVD2[2];
	__IOM uint32_t CTRL2_0007;      /*!< (@ 0x001C) GPIO_0007 Control 2 */
	__IOM uint32_t CTRL2_0010;      /*!< (@ 0x0020) GPIO_0010 Control 2 */
	__IOM uint32_t CTRL2_0011;
	__IOM uint32_t CTRL2_0012;
	__IOM uint32_t CTRL2_0013;
	__IOM uint32_t CTRL2_0014; /*!< (@ 0x0030) GPIO_0014 Control 2 */
	__IOM uint32_t CTRL2_0015;
	__IOM uint32_t CTRL2_0016;
	__IOM uint32_t CTRL2_0017;
	__IOM uint32_t CTRL2_0020; /*!< (@ 0x0040) GPIO_0020 Control 2 */
	__IOM uint32_t CTRL2_0021;
	__IOM uint32_t CTRL2_0022;
	__IOM uint32_t CTRL2_0023;
	__IOM uint32_t CTRL2_0024; /*!< (@ 0x0050) GPIO_0024 Control 2 */
	__IOM uint32_t CTRL2_0025;
	__IOM uint32_t CTRL2_0026;
	__IOM uint32_t CTRL2_0027;
	__IOM uint32_t CTRL2_0030; /*!< (@ 0x0060) GPIO_0030 Control 2 */
	__IOM uint32_t CTRL2_0031;
	__IOM uint32_t CTRL2_0032;
	__IOM uint32_t CTRL2_0033;
	__IOM uint32_t CTRL2_0034;
	__IOM uint32_t CTRL2_0035;
	__IOM uint32_t CTRL2_0036;      /*!< (@ 0x0078) GPIO_0036 Control 2 */
	uint32_t RSVD3[1];
	__IOM uint32_t CTRL2_0040;      /*!< (@ 0x0080) GPIO_0040 Control 2 */
	uint32_t RSVD4[1];
	__IOM uint32_t CTRL2_0042;      /*!< (@ 0x0088) GPIO_0042 Control 2 */
	__IOM uint32_t CTRL2_0043;      /*!< (@ 0x008C) GPIO_0043 Control 2 */
	__IOM uint32_t CTRL2_0044;      /*!< (@ 0x0090) GPIO_0044 Control 2 */
	__IOM uint32_t CTRL2_0045;
	__IOM uint32_t CTRL2_0046;
	__IOM uint32_t CTRL2_0047;
	__IOM uint32_t CTRL2_0050; /*!< (@ 0x00A0) GPIO_0050 Control 2 */
	__IOM uint32_t CTRL2_0051;
	__IOM uint32_t CTRL2_0052;
	__IOM uint32_t CTRL2_0053;
	__IOM uint32_t CTRL2_0054; /*!< (@ 0x00B0) GPIO_0054 Control 2 */
	__IOM uint32_t CTRL2_0055;
	__IOM uint32_t CTRL2_0056;
	__IOM uint32_t CTRL2_0057;
	__IOM uint32_t CTRL2_0060; /*!< (@ 0x00C0) GPIO_0060 Control 2 */
	__IOM uint32_t CTRL2_0061;
	__IOM uint32_t CTRL2_0062;
	__IOM uint32_t CTRL2_0063;
	__IOM uint32_t CTRL2_0064; /*!< (@ 0x00D0) GPIO_0064 Control 2 */
	__IOM uint32_t CTRL2_0065;
	__IOM uint32_t CTRL2_0066;
	__IOM uint32_t CTRL2_0067;
	__IOM uint32_t CTRL2_0070; /*!< (@ 0x00E0) GPIO_0070 Control 2 */
	__IOM uint32_t CTRL2_0071;
	__IOM uint32_t CTRL2_0072;
	__IOM uint32_t CTRL2_0073;      /*!< (@ 0x00EC) GPIO_0073 Control 2 */
	uint32_t RSVD5[4];
	__IOM uint32_t CTRL2_0100;      /*!< (@ 0x0100) GPIO_0100 Control 2 */
	__IOM uint32_t CTRL2_0101;
	__IOM uint32_t CTRL2_0102;
	uint32_t RSVD6[1];
	__IOM uint32_t CTRL2_0104; /*!< (@ 0x0110) GPIO_0104 Control 2 */
	__IOM uint32_t CTRL2_0105;
	__IOM uint32_t CTRL2_0106;
	__IOM uint32_t CTRL2_0107;      /*!< (@ 0x011C) GPIO_0107 Control 2 */
	uint32_t RSVD7[2];
	__IOM uint32_t CTRL2_0112;      /*!< (@ 0x0128) GPIO_0112 Control 2 */
	__IOM uint32_t CTRL2_0113;
	__IOM uint32_t CTRL2_0114;
	__IOM uint32_t CTRL2_0115;      /*!< (@ 0x0134) GPIO_0115 Control 2 */
	uint32_t RSVD8[2];
	__IOM uint32_t CTRL2_0120;      /*!< (@ 0x0140) GPIO_0120 Control 2 */
	__IOM uint32_t CTRL2_0121;
	__IOM uint32_t CTRL2_0122;
	__IOM uint32_t CTRL2_0123;
	__IOM uint32_t CTRL2_0124; /*!< (@ 0x0150) GPIO_0124 Control 2 */
	__IOM uint32_t CTRL2_0125;
	__IOM uint32_t CTRL2_0126;
	__IOM uint32_t CTRL2_0127;      /*!< (@ 0x015C) GPIO_0127 Control 2 */
	__IOM uint32_t CTRL2_0130;      /*!< (@ 0x0160) GPIO_0130 Control 2 */
	__IOM uint32_t CTRL2_0131;      /*!< (@ 0x0164) GPIO_0131 Control 2 */
	__IOM uint32_t CTRL2_0132;      /*!< (@ 0x0168) GPIO_0132 Control 2 */
	uint32_t RSVD9[5];
	__IOM uint32_t CTRL2_0140;      /*!< (@ 0x0180) GPIO_0140 Control 2 */
	__IOM uint32_t CTRL2_0141;
	__IOM uint32_t CTRL2_0142;
	__IOM uint32_t CTRL2_0143;
	__IOM uint32_t CTRL2_0144; /*!< (@ 0x0190) GPIO_0144 Control 2 */
	__IOM uint32_t CTRL2_0145;
	__IOM uint32_t CTRL2_0146;
	__IOM uint32_t CTRL2_0147;      /*!< (@ 0x019C) GPIO_0147 Control 2 */
	__IOM uint32_t CTRL2_0150;      /*!< (@ 0x01A0) GPIO_0150 Control 2 */
	__IOM uint32_t CTRL2_0151;
	__IOM uint32_t CTRL2_0152;
	__IOM uint32_t CTRL2_0153;
	__IOM uint32_t CTRL2_0154; /*!< (@ 0x01B0) GPIO_0154 Control 2 */
	__IOM uint32_t CTRL2_0155;
	__IOM uint32_t CTRL2_0156;
	__IOM uint32_t CTRL2_0157;      /*!< (@ 0x01BC) GPIO_0157 Control 2 */
	uint32_t RSVD10[1];
	__IOM uint32_t CTRL2_0161;      /*!< (@ 0x01C4) GPIO_0161 Control 2 */
	__IOM uint32_t CTRL2_0162;
	uint32_t RSVD11[2];
	__IOM uint32_t CTRL2_0165;      /*!< (@ 0x01D4) GPIO_0165 Control 2 */
	uint32_t RSVD12[2];
	__IOM uint32_t CTRL2_0170;      /*!< (@ 0x01E0) GPIO_0170 Control 2 */
	__IOM uint32_t CTRL2_0171;      /*!< (@ 0x01E4) GPIO_0171 Control 2 */
	uint32_t RSVD13[3];
	__IOM uint32_t CTRL2_0175;      /*!< (@ 0x01F4) GPIO_0175 Control 2 */
	uint32_t RSVD14[2];
	__IOM uint32_t CTRL2_0200;      /*!< (@ 0x0200) GPIO_0200 Control 2 */
	__IOM uint32_t CTRL2_0201;
	__IOM uint32_t CTRL2_0202;
	__IOM uint32_t CTRL2_0203;
	__IOM uint32_t CTRL2_0204; /*!< (@ 0x0210) GPIO_0204 Control 2 */
	__IOM uint32_t CTRL2_0205;
	__IOM uint32_t CTRL2_0206;
	__IOM uint32_t CTRL2_0207;      /*!< (@ 0x021C) GPIO_0207 Control 2 */
	uint32_t RSVD15[9];
	__IOM uint32_t CTRL2_0221;      /*!< (@ 0x0244) GPIO_0221 Control 2 */
	__IOM uint32_t CTRL2_0222;
	__IOM uint32_t CTRL2_0223;
	__IOM uint32_t CTRL2_0224; /*!< (@ 0x0250) GPIO_0224 Control 2 */
	uint32_t RSVD16[1];
	__IOM uint32_t CTRL2_0226;
	__IOM uint32_t CTRL2_0227;      /*!< (@ 0x025C) GPIO_0227 Control 2 */
	uint32_t RSVD17[8];
	__IOM uint32_t CTRL2_0240;      /*!< (@ 0x0280) GPIO_0240 Control 2 */
	__IOM uint32_t CTRL2_0241;
	__IOM uint32_t CTRL2_0242;
	__IOM uint32_t CTRL2_0243;      /*!< (@ 0x028C) GPIO_0243 Control 2 */
	__IOM uint32_t CTRL2_0244;      /*!< (@ 0x0290) GPIO_0244 Control 2 */
	__IOM uint32_t CTRL2_0245;      /*!< (@ 0x0294) GPIO_0245 Control 2 */
	__IOM uint32_t CTRL2_0246;      /*!< (@ 0x0298) GPIO_0246 Control 2 */
	uint32_t RSVD18[5];
	__IOM uint32_t CTRL2_0254;      /*!< (@ 0x02B0) GPIO_0254 Control 2 */
	__IOM uint32_t CTRL2_0255;      /*!< (@ 0x02B4) GPIO_0255 Control 2 */
} GPIO_CTRL2_Type;

/** @brief GPIO Parallel Input register. 32 GPIO pins per bank */
typedef struct gpio_parin_regs {
	__IOM uint32_t PARIN0;  /*!< (@ 0x000) GPIO Parallel In [0000:0036] */
	__IOM uint32_t PARIN1;  /*!< (@ 0x004) GPIO Parallel In [0040:0076] */
	__IOM uint32_t PARIN2;  /*!< (@ 0x008) GPIO Parallel In [0100:0136] */
	__IOM uint32_t PARIN3;  /*!< (@ 0x00C) GPIO Parallel In [0140:0176] */
	__IOM uint32_t PARIN4;  /*!< (@ 0x010) GPIO Parallel In [0200:0236] */
	__IOM uint32_t PARIN5;  /*!< (@ 0x014) GPIO Parallel In [0240:0276] */
} GPIO_PARIN_Type;

/** @brief GPIO Parallel Output register. 32 GPIO pins per bank */
typedef struct gpio_parout_regs {
	__IOM uint32_t PAROUT0; /*!< (@ 0x000) GPIO Parallel Out [0000:0036] */
	__IOM uint32_t PAROUT1; /*!< (@ 0x004) GPIO Parallel Out [0040:0076] */
	__IOM uint32_t PAROUT2; /*!< (@ 0x008) GPIO Parallel Out [0100:0136] */
	__IOM uint32_t PAROUT3; /*!< (@ 0x00C) GPIO Parallel Out [0140:0176] */
	__IOM uint32_t PAROUT4; /*!< (@ 0x010) GPIO Parallel Out [0200:0236] */
	__IOM uint32_t PAROUT5; /*!< (@ 0x014) GPIO Parallel Out [0240:0276] */
} GPIO_PAROUT_Type;

/** @brief GPIO Lock registers. 32 GPIO pins per bank. Write-once bits */
typedef struct gpio_lock_regs {
	__IOM uint32_t LOCK5;   /*!< (@ 0x0000) GPIO Lock 5 */
	__IOM uint32_t LOCK4;   /*!< (@ 0x0004) GPIO Lock 4 */
	__IOM uint32_t LOCK3;   /*!< (@ 0x0008) GPIO Lock 3 */
	__IOM uint32_t LOCK2;   /*!< (@ 0x000C) GPIO Lock 2 */
	__IOM uint32_t LOCK1;   /*!< (@ 0x0010) GPIO Lock 1 */
	__IOM uint32_t LOCK0;   /*!< (@ 0x0014) GPIO Lock 0 */
} GPIO_LOCK_Type;

/* ---------------- Debug ------------ */

/** @brief Trace FIFO Debug Port Registers (TFDP) */
typedef struct tfdp_regs {
	__IOM uint8_t DATA_OUT; /*!< (@ 0x0000) Data out shift register */
	uint8_t RSVD1[3];
	__IOM uint32_t CTRL;    /*!< (@ 0x0004) Control register */
} TFDP_Type;

/*-------- Peripherals with Host interfaces --------*/

/** @brief Mailbox Registers (MBOX) */
typedef struct mbox_regs {
	__IOM uint8_t OS_IDX;           /*!< (@ 0x0000) OS Index */
	__IOM uint8_t OS_DATA;          /*!< (@ 0x0001) OS Data */
	uint8_t RSVD1[0x100u - 0x02u];
	__IOM uint32_t HOST_TO_EC;      /*!< (@ 0x0100) Host to EC */
	__IOM uint32_t EC_TO_HOST;      /*!< (@ 0x0104) EC to Host */
	__IOM uint32_t SMI_SRC;         /*!< (@ 0x0108) SMI Source */
	__IOM uint32_t SMI_MASK;        /*!< (@ 0x010C) SMI Mask */
	union {                         /*!< (@ 0x0110 - 0x12F) Mailboxes 0-31 */
		__IOM uint32_t MBX32[8];
		__IOM uint8_t MBX8[32];
	};
} MBOX_Type;

/** @brief ACPI EC Registers (ACPI_EC) */
typedef struct acpi_ec_regs {
	__IOM uint32_t OS_DATA;         /*!< (@ 0x0000) OS Data */
	__IOM uint8_t OS_CMD_STS;       /*!< (@ 0x0004) OS Command(WO), Status(RO) */
	__IOM uint8_t OS_BYTE_CTRL;     /*!< (@ 0x0005) OS Byte Control */
	uint8_t RSVD1[0x100u - 0x06u];
	__IOM uint32_t EC2OS_DATA;      /*!< (@ 0x0100) EC to OS Data */
	__IOM uint8_t EC_STS;           /*!< (@ 0x0104) EC Status */
	__IOM uint8_t EC_BYTE_CTRL;     /*!< (@ 0x0105) EC Byte Control */
	uint8_t RSVD2[2];
	__IOM uint32_t OS2EC_DATA;      /*!< (@ 0x0108) OS to EC Data */
} ACPI_EC_Type;

/** @brief ACPI PM1 Registers (ACPI_PM1) */
typedef struct acpi_pm1_regs {
	__IOM uint8_t RT_STS1;          /*!< (@ 0x0000) ACPI PM1 run time status 1 */
	__IOM uint8_t RT_STS2;          /*!< (@ 0x0001) ACPI PM1 run time status 2 */
	__IOM uint8_t RT_EN1;           /*!< (@ 0x0002) ACPI PM1 run time enable 1 */
	__IOM uint8_t RT_EN2;           /*!< (@ 0x0003) ACPI PM1 run time enable 2 */
	__IOM uint8_t RT_CTRL1;         /*!< (@ 0x0004) ACPI PM1 run time ctrl 1 */
	__IOM uint8_t RT_CTRL2;         /*!< (@ 0x0005) ACPI PM1 run time ctrl 2 */
	__IOM uint8_t RT_CTRL21;        /*!< (@ 0x0006) ACPI PM1 run time ctrl 21 */
	__IOM uint8_t RT_CTRL22;        /*!< (@ 0x0007) ACPI PM1 run time ctrl 22 */
	uint8_t RSVD1[(0x100u - 0x008u)];
	__IOM uint8_t EC_STS1;          /*!< (@ 0x0100) ACPI PM1 EC-only status 1 */
	__IOM uint8_t EC_STS2;          /*!< (@ 0x0101) ACPI PM1 EC-only status 2 */
	__IOM uint8_t EC_EN1;           /*!< (@ 0x0102) ACPI PM1 EC-only enable 1 */
	__IOM uint8_t EC_EN2;           /*!< (@ 0x0103) ACPI PM1 EC-only enable 2 */
	__IOM uint8_t EC_CTRL1;         /*!< (@ 0x0104) ACPI PM1 EC-only ctrl 1 */
	__IOM uint8_t EC_CTRL2;         /*!< (@ 0x0105) ACPI PM1 EC-only ctrl 2 */
	__IOM uint8_t EC_CTRL21;        /*!< (@ 0x0106) ACPI PM1 EC-only ctrl 21 */
	__IOM uint8_t EC_CTRL22;        /*!< (@ 0x0107) ACPI PM1 EC-only ctrl 22 */
	uint8_t RSVD2[(0x0110u - 0x0108u)];
	__IOM uint8_t EC_PM_STS;        /*!< (@ 0x0110) ACPI PM1 EC-only PM status */
	uint8_t RSVD3[3];
} ACPI_PM1_Type;

/** @brief UART interface (UART) */
typedef struct uart_regs {
	__IOM uint8_t RTXB;     /*!< (@ 0x0000) UART RXB(RO), TXB(WO),
	                            BRGD_LSB(RW LCR.DLAB=1) */
	__IOM uint8_t IER;      /*!< (@ 0x0001) UART IER(RW),
	                             BRGD_MSB(RW LCR.DLAB=1) */
	__IOM uint8_t IIR_FCR;  /*!< (@ 0x0002) UART IIR(RO), FCR(WO) */
	__IOM uint8_t LCR;      /*!< (@ 0x0003) UART Line Control(RW) */
	__IOM uint8_t MCR;      /*!< (@ 0x0004) UART Modem Control(RW) */
	__IOM uint8_t LSR;      /*!< (@ 0x0005) UART Line Status(RO) */
	__IOM uint8_t MSR;      /*!< (@ 0x0006) UART Modem Status(RO) */
	__IOM uint8_t SCR;      /*!< (@ 0x0007) UART Scratch(RW) */
	uint8_t RSVDA[0x330u - 0x08u];
	__IOM uint8_t ACTV;     /*!< (@ 0x0330) UART Activate(RW) */
	uint8_t RSVDB[0x3F0u - 0x331u];
	__IOM uint8_t CFG_SEL;  /*!< (@ 0x03F0) UART Configuration Select(RW) */
} UART_Type;

/** @brief EMI Registers (EMI)
 * !< (@ 0x0000) OS space Host to EC mailbox register
 * !< (@ 0x0001) OS space EC to Host mailbox register
 * !< (@ 0x0002) OS space EC memory address LSB register
 * !< (@ 0x0003) OS space EC memory address LSB register
 * !< (@ 0x0004) OS space EC Data register
 * !< (@ 0x0008) OS space Interrupt Source LSB register
 * !< (@ 0x0009) OS space Interrupt Source MSB register
 * !< (@ 0x000A) OS space Interrupt Mask LSB register
 * !< (@ 0x000B) OS space Interrupt Mask MSB register
 * !< (@ 0x000C) OS space Application ID register
 * !< (@ 0x0100) Host to EC mailbox
 * !< (@ 0x0101) EC Data
 * !< (@ 0x0104) EC memory region 0 base address
 * !< (@ 0x0108) EC memory region 0 read/write limits
 * !< (@ 0x010C) EC memory region 1 base address
 * !< (@ 0x0110) EC memory region 1 read/write limits
 * !< (@ 0x0114) Set OS interrupt source
 * !< (@ 0x0116) OS interrupt source clear enable
 */
typedef struct emi_regs {
	__IOM uint8_t OS_H2E_MBOX;
	__IOM uint8_t OS_E2H_MBOX;
	__IOM uint8_t OS_EC_ADDR_LSB;
	__IOM uint8_t OS_EC_ADDR_MSB;
	__IOM uint32_t OS_EC_DATA;
	__IOM uint8_t OS_INT_SRC_LSB;
	__IOM uint8_t OS_INT_SRC_MSB;
	__IOM uint8_t OS_INT_MASK_LSB;
	__IOM uint8_t OS_INT_MASK_MSB;
	__IOM uint32_t OS_APP_ID;
	uint8_t RSVD1[0x100u - 0x10u];
	__IOM uint8_t H2E_MBOX;
	__IOM uint8_t E2H_MBOX;
	uint8_t RSVD2[2];
	__IOM uint32_t MEM_BASE_0;
	__IOM uint32_t MEM_LIMIT_0;
	__IOM uint32_t MEM_BASE_1;
	__IOM uint32_t MEM_LIMIT_1;
	__IOM uint16_t EC_OS_INT_SET;
	__IOM uint16_t EC_OS_INT_CLR_EN;
} EMI_Type;

/** @brief BIOS Debug Port 80h and Alias port capture registers.
 * HDATA !< (@ 0x0000) Host Data b[7:0] write-only
 * EC_DA !< (@ 0x0100) P80BD EC-only Data/attributes b[15:0]
 * CONFIG !< (@ 0x0104) P80BD EC-only configuration
 * STS_IEN !< (@ 0x0108) P80BD EC-only status
 * SNAPSHOT !< (@ 0x010C) P80BD EC-only snapshot
 * CAPTURE !< (@ 0x0110) P80BD EC-only current value of 4-byte capture
 * ACTV !< (@ 0x0330) P80BD logical device Activate
 * ALIAS_HDATA !< (@ 0x0400) P80BD Alias Port Host Data
 * ALIAS_ACTV !< (@ 0x0730) P80BD Alias Port Activate
 * ALIAS_BLS  !< (@ 0x0730) P80BD Alias Byte Lane Select
 */
typedef struct p80bd_regs {
	__OM uint32_t HDATA;
	uint8_t RSVD1[0x100u - 0x04u];
	__IM uint32_t EC_DA;
	__IOM uint32_t CONFIG;
	__IOM uint32_t STS_IEN;
	__IM uint32_t SNAPSHOT;
	__IM uint32_t CAPTURE;
	uint8_t RSVD2[0x330ul - 0x114ul];
	__IOM uint32_t ACTV;
	uint8_t RSVD3[0x400ul - 0x334ul];
	__IOM uint8_t ALIAS_HDATA;
	uint8_t RSVD4[0x730ul - 0x401ul];
	__IOM uint32_t ALIAS_ACTV;
	uint8_t RSVD5[0x7F0ul - 0x734ul];
	__IOM uint32_t ALIAS_BLS;
} P80BD_Type;

/* --------------- eSPI End Point Devices ----------------- */

/**
 * @brief ESPI Host interface IO Component (MCHP_ESPI_IO) @ 0x400f36b0
 * ESPI_IO_CAP - eSPI IO capabilities, channel ready, activate,
 * VW_EN_STS (@ 0x0000) Virtual Wire Enable Status
 * CAP_ID (@ 0x0030) Capabilities ID
 * GLB_CAP0 (@ 0x0031) Global Capabilities 0
 * GLB_CAP1 (@ 0x0032) Global Capabilities 1
 * PC_CAP (@ 0x0033) Periph Chan Capabilities
 * VW_CAP (@ 0x0034) Virtual Wire Chan Capabilities
 * OOB_CAP (@ 0x0035) OOB Chan Capabilities
 * FC_CAP (@ 0x0036) Flash Chan Capabilities
 * PC_RDY (@ 0x0037) PC ready
 * OOB_RDY (@ 0x0038) OOB ready
 * FC_RDY (@ 0x0039) OOB ready
 * ERST_STS (@ 0x003A) eSPI Reset interrupt status
 * ERST_IEN (@ 0x003B) eSPI Reset interrupt enable
 * PLTRST_SRC (@ 0x003C) Platform Reset Source
 * VW_RDY (@ 0x003D) VW ready
 * FC_SERBZ (@ 0x003E) S-Erase Block Size
 * VW_ERR_STS (@ 0x0140) IO Virtual Wire Error
 */
typedef struct espi_io_cap_regs {
	__IOM uint32_t VW_EN_STS;
	uint8_t RSVD1[0x36E0 - 0x36B4];
	__IOM uint8_t CAP_ID;
	__IOM uint8_t GLB_CAP0;
	__IOM uint8_t GLB_CAP1;
	__IOM uint8_t PC_CAP;
	__IOM uint8_t VW_CAP;
	__IOM uint8_t OOB_CAP;
	__IOM uint8_t FC_CAP;
	__IOM uint8_t PC_RDY;
	__IOM uint8_t OOB_RDY;
	__IOM uint8_t FC_RDY;
	__IOM uint8_t ERST_STS;
	__IOM uint8_t ERST_IEN;
	__IOM uint8_t PLTRST_SRC;
	__IOM uint8_t VW_RDY;
	__IOM uint8_t FC_SERBZ;
	uint8_t RSVD2[0x37F0u - 0x36EE];
	__IOM uint32_t VW_ERR_STS;
} ESPI_IO_CAP_Type;

/** @brief eSPI IO Component Peripheral Channel (PC) register structure
 * PC registers at 0x400f3500.
 * PC_LC_ADDR_LSW (@ 0x000) Last Cycle address bits[31:0]
 * PC_LC_ADDR_MSW (@ 0x004) Last Cycle address bits[63:32]
 * PC_LEN_TYPE_TAG (@ 0x008) Last Cycle length, type, and tag
 * PC_ERR_ADDR_LSW (@ 0x00c) Address bits[31:0] causing an error
 * PC_ERR_ADDR_MSW (@ 0x010) Address bits[63:32] causing an error
 * PC_STATUS (@ 0x014) Peripheral channel status (RW/1C and RO)
 * PC_IEN (@ 0x018) Peripheral channel interrupt enable
 */
typedef struct espi_io_pc_regs {
	__IOM uint32_t PC_LC_ADDR_LSW;
	__IOM uint32_t PC_LC_ADDR_MSW;
	__IOM uint32_t PC_LC_LEN_TYPE_TAG;
	__IOM uint32_t PC_ERR_ADDR_LSW;
	__IOM uint32_t PC_ERR_ADDR_MSW;
	__IOM uint32_t PC_STATUS;
	__IOM uint32_t PC_IEN;
} ESPI_IO_PC_Type;

/** @brief eSPIO IO Component LTR registers @ 0x400f3620
 * LTR_STS (@ 0x000) LTR peripheral ptatus
 * LTR_IEN (@ 0x004) LTR peripheral interrupt enable
 * LTR_CTRL (@ 0x008) LTR peripheral control
 * LTR_MSG (@ 0x00c) LTR peripheral message
 */
typedef struct espi_io_ltr_regs {
	__IOM uint32_t LTR_STS;
	__IOM uint32_t LTR_IEN;
	__IOM uint32_t LTR_CTRL;
	__IOM uint32_t LTR_MSG;
} ESPI_IO_LTR_Type;

/** @brief eSPI IO Component OOB registers @ 0x400F3640
 * RX_ADDR_LSW (@ 0x0000) OOB Receive Address bits[31:0]
 * RX_ADDR_MSW (@ 0x0004) OOB Receive Address bits[63:32]
 * TX_ADDR_LSW (@ 0x0008) OOB Transmit Address bits[31:0]
 * TX_ADDR_MSW (@ 0x000C) OOB Transmit Address bits[63:32]
 * RX_LEN (@ 0x0010) OOB Receive length
 * TX_LEN (@ 0x0014) OOB Transmit length
 * RX_CTRL (@ 0x0018) OOB Receive control
 * RX_IEN (@ 0x001C) OOB Receive interrupt enable
 * RX_STS (@ 0x0020) OOB Receive interrupt status
 * TX_CTRL (@ 0x0024) OOB Transmit control
 * TX_IEN (@ 0x0028) OOB Transmit interrupt enable
 * TX_STS (@ 0x002C) OOB Transmit interrupt status
 */
typedef struct espi_io_oob_regs {
	__IOM uint32_t RX_ADDR_LSW;
	__IOM uint32_t RX_ADDR_MSW;
	__IOM uint32_t TX_ADDR_LSW;
	__IOM uint32_t TX_ADDR_MSW;
	__IOM uint32_t RX_LEN;
	__IOM uint32_t TX_LEN;
	__IOM uint32_t RX_CTRL;
	__IOM uint32_t RX_IEN;
	__IOM uint32_t RX_STS;
	__IOM uint32_t TX_CTRL;
	__IOM uint32_t TX_IEN;
	__IOM uint32_t TX_STS;
} ESPI_IO_OOB_Type;

/** @brief eSPI IO Flash Channel registers @ 0x40003680
 * FL_ADDR_LSW	(@ 0x0000) FC flash address bits[31:0]
 * FL_ADDR_MSW (@ 0x0004) FC flash address bits[63:32]
 * MEM_ADDR_LSW (@ 0x0008) FC EC Memory address bits[31:0]
 * MEM_ADDR_MSW (@ 0x000C) FC EC Memory address bits[63:32]
 * XFR_LEN (@ 0x0010) FC transfer length
 * CTRL (@ 0x0014) FC Control
 * IEN (@ 0x0018) FC interrupt enable
 * CFG (@ 0x001C) FC configuration
 * STS (@ 0x0020) FC status
 */
typedef struct espi_io_fc_regs {
	__IOM uint32_t FL_ADDR_LSW;
	__IOM uint32_t FL_ADDR_MSW;
	__IOM uint32_t MEM_ADDR_LSW;
	__IOM uint32_t MEM_ADDR_MSW;
	__IOM uint32_t XFR_LEN;
	__IOM uint32_t CTRL;
	__IOM uint32_t IEN;
	__IOM uint32_t CFG;
	__IOM uint32_t STS;
} ESPI_IO_FC_Type;

/** @brief eSPI IO component registers related to VW channel @ 0x400F36B0 */
typedef struct {
	__IOM uint32_t VW_EN_STS;       /*! (@ 0x0000) Virtual Wire Enable Status */
	uint32_t RSVD1[12];
	__IOM uint8_t VW_CAP;           /*! (@ 0x0034) Virtual Wire Chan Capabilities */
	uint8_t RSVD2[8];
	__IOM uint8_t VW_RDY;           /*! (@ 0x003D) VW ready */
	uint8_t RSVD3[0x102];
	__IOM uint32_t VW_ERR_STS;      /*! (@ 0x0140) IO Virtual Wire Error */
} ESPI_IO_VW_Type;

/** @brief eSPI IO BAR Host registers at 0x400f3520
 * These registers contain the Host side IO address for each peripheral.
 * IOBAR_INH_LSW (@ 0x0000) BAR Inhibit LSW
 * IOBAR_INH_MSW (@ 0x0004) BAR Inhibit MSW
 * IOBAR_INIT (@ 0x0008) BAR Init
 * EC_IRQ (@ 0x000C) EC IRQ
 * IOBAR (@ 0x0014) Host IO Component BAR array, index is enum epio_io_bar_idx
 */
typedef struct espi_io_bar_host_regs {
	__IOM uint32_t IOBAR_INH_LSW;
	__IOM uint32_t IOBAR_INH_MSW;
	__IOM uint32_t IOBAR_INIT;
	__IOM uint32_t EC_IRQ;
	uint32_t RSVD1[1];
	__IOM uint32_t IOBAR[23];
} ESPI_IO_BAR_HOST_Type;

/** @brief ESPI_IO_BAR_EC - eSPI IO EC-only component of IO BAR @ 0x400F3730
 * All fields are Read-Only
 * Address mask in bits[7:0]
 * Logical device number in bits[13:8]
 * IO_ACTV (@ 0x0000) ESPI IO Component Activate
 * IOBAR (@ 0x0004) IO Component BAR, index is enum espi_io_bar_idx
 */
typedef struct espi_io_bar_ec_ar_regs {
	__IOM uint32_t IO_ACTV;
	__IOM uint32_t IOBAR[23];
} ESPI_IO_BAR_EC_AR_Type;

/** @brief ESPI_IO_BAR_EC - eSPI IO EC-only component of IO BAR @ 0x400F3730
 * use named registers
 */
typedef struct espi_io_bar_ec_regs {
	__IOM uint32_t IO_ACTV;                 /*!< (0x0000) eSPI IO component activate */
	__IOM uint32_t EC_BAR_IOC;              /*!< (0x0004) IO component BAR */
	__IOM uint32_t EC_BAR_MEM;              /*!< (0x0008) IO component MEM BAR */
	__IOM uint32_t EC_BAR_MBOX;             /*!< (0x000C) IO Mailbox BAR */
	__IOM uint32_t EC_BAR_KBC;              /*!< (0x0010) IO 8042 KBC BAR */
	__IOM uint32_t EC_BAR_ACPI_EC_0;        /*!< (0x0014) ACPI EC 0 BAR */
	__IOM uint32_t EC_BAR_ACPI_EC_1;        /*!< (0x0018) ACPI EC 1 BAR */
	__IOM uint32_t EC_BAR_ACPI_EC_2;        /*!< (0x001C) ACPI EC 2 BAR */
	__IOM uint32_t EC_BAR_ACPI_EC_3;        /*!< (0x0020) ACPI EC 3 BAR */
	__IOM uint32_t EC_BAR_ACPI_EC_4;        /*!< (0x0024) ACPI EC 4 BAR */
	__IOM uint32_t EC_BAR_ACPI_PM1;         /*!< (0x0028) ACPI PM1 BAR */
	__IOM uint32_t EC_BAR_PORT92;           /*!< (0x002C) Legacy Port92 BAR */
	__IOM uint32_t EC_BAR_UART_0;           /*!< (0x0030) UART 0 BAR */
	__IOM uint32_t EC_BAR_UART_1;           /*!< (0x0034) UART 1 BAR */
	__IOM uint32_t EC_BAR_EMI_0;            /*!< (0x0038) EMI 0 BAR */
	__IOM uint32_t EC_BAR_EMI_1;            /*!< (0x003C) EMI 0 BAR */
	__IOM uint32_t EC_BAR_EMI_2;            /*!< (0x0040) EMI 0 BAR */
	__IOM uint32_t EC_BAR_P80CAP_0;         /*!< (0x0044) BDP Port 80 BAR */
	__IOM uint32_t EC_BAR_P80CAP_1;         /*!< (0x0048) BDP Alias Port BAR */
	__IOM uint32_t EC_BAR_RTC;              /*!< (0x004C) RTC BAR */
	uint32_t RSVD1[1];
	__IOM uint32_t EC_BAR_T32B;             /*!< (0x0054) T32B BAR */
	uint32_t RSVD2[1];
	__IOM uint32_t EC_BAR_GLUE_LOG;         /*!< (0x005C) Glue Logic BAR */
} ESPI_IO_BAR_EC_Type;

/** @brief eSPI IO Component Logical Device Serial IRQ config @ 0x400F37A0
 * SIRQ index with enum espi_io_sirq_idx
 */
typedef struct espi_io_sirq_ar_regs {
	uint8_t RSVD1[12];
	uint8_t SIRQ[20];
} ESPI_IO_SIRQ_AR_Type;

typedef struct espi_io_sirq_regs {
	uint8_t RSVD1[12];
	__IOM uint8_t MBOX_SIRQ_0;
	__IOM uint8_t MBOX_SIRQ_1;
	__IOM uint8_t KBC_SIRQ_0;
	__IOM uint8_t KBC_SIRQ_1;
	__IOM uint8_t ACPI_EC_0_SIRQ;
	__IOM uint8_t ACPI_EC_1_SIRQ;
	__IOM uint8_t ACPI_EC_2_SIRQ;
	__IOM uint8_t ACPI_EC_3_SIRQ;
	__IOM uint8_t ACPI_EC_4_SIRQ;
	__IOM uint8_t UART_0_SIRQ;
	__IOM uint8_t UART_1_SIRQ;
	__IOM uint8_t EMI_0_SIRQ_0;
	__IOM uint8_t EMI_0_SIRQ_1;
	__IOM uint8_t EMI_1_SIRQ_0;
	__IOM uint8_t EMI_1_SIRQ_1;
	__IOM uint8_t EMI_2_SIRQ_0;
	__IOM uint8_t EMI_2_SIRQ_1;
	__IOM uint8_t RTC_SIRQ;
	__IOM uint8_t EC_SIRQ;
	uint8_t RSVD2[1];
} ESPI_IO_SIRQ_Type;

/** @brief eSPI Memory Component Bus Master registers @ 0x400F3A00
 * BM_STS (@ 0x0000) Bus Master Status
 * BM_IEN (@ 0x0004) Bus Master interrupt enable
 * BM_CFG (@ 0x0008) Bus Master configuration
 * BM1_CTRL (@ 0x0010) Bus Master 1 control
 * BM1_HOST_ADDR_LSW (@ 0x0014) Bus Master 1 host address bits[31:0]
 * BM1_HOST_ADDR_MSW (@ 0x0018) Bus Master 1 host address bits[63:32]
 * BM1_EC_ADDR_LSW (@ 0x001C) Bus Master 1 EC address bits[31:0]
 * BM1_EC_ADDR_MSW (@ 0x0020) Bus Master 1 EC address bits[63:32]
 * BM2_CTRL (@ 0x0024) Bus Master 2 control
 * BM2_HOST_ADDR_LSW (@ 0x0028) Bus Master 2 host address bits[31:0]
 * BM2_HOST_ADDR_MSW (@ 0x002C) Bus Master 2 host address bits[63:32]
 * BM2_EC_ADDR_LSW (@ 0x0030) Bus Master 2 EC address bits[31:0]
 * BM2_EC_ADDR_MSW (@ 0x0034) Bus Master 2 EC address bits[63:32]
 */
typedef struct espi_mem_bm_regs {
	__IOM uint32_t BM_STS;
	__IOM uint32_t BM_IEN;
	__IOM uint32_t BM_CFG;
	uint8_t RSVD1[4];
	__IOM uint32_t BM1_CTRL;
	__IOM uint32_t BM1_HOST_ADDR_LSW;
	__IOM uint32_t BM1_HOST_ADDR_MSW;
	__IOM uint32_t BM1_EC_ADDR_LSW;
	__IOM uint32_t BM1_EC_ADDR_MSW;
	__IOM uint32_t BM2_CTRL;
	__IOM uint32_t BM2_HOST_ADDR_LSW;
	__IOM uint32_t BM2_HOST_ADDR_MSW;
	__IOM uint32_t BM2_EC_ADDR_LSW;
	__IOM uint32_t BM2_EC_ADDR_MSW;
} ESPI_MEM_BM_Type;

/** @brief eSPI Memory Component Memory BAR EC-only registers @ 0x400F3930 */
typedef struct espi_mem_bar_ec_regs {
	__IOM uint16_t EMBAR[9 * 5];
} ESPI_MEM_BAR_EC_Type;

/** @brief eSPI Memory Component Memory BAR Host registers @ 0x400F3B30 */
typedef struct espi_mem_bar_host_regs {
	__IOM uint16_t HMBAR[9 * 5];
} ESPI_MEM_BAR_HOST_Type;

/* eSPI Memory Component SRAM 0 and 1 EC BAR's @ 0x400F39A0 */
typedef struct espi_mem_sram_bar_ec_regs {
	uint32_t RSVD1[3];
	__IOM uint16_t ESMB[2 * 5];
} ESPI_MEM_SRAM_BAR_EC_Type;

/* eSPI Memory Component SRAM 0 and 1 Host BAR's @ 0x400F3BA0 */
typedef struct espi_mem_sram_bar_host_regs {
	uint32_t RSVD1[3];
	__IOM uint16_t HSMB[2 * 5];
} ESPI_MEM_SRAM_BAR_HOST_Type;

/** @brief eSPI 96-bit Master-to-Slave Virtual Wire register */
typedef struct espi_msvw_reg {
	__IOM uint8_t INDEX;
	__IOM uint8_t MTOS;
	uint8_t RSVD1[2];
	__IOM uint32_t SRC_IRQ_SEL;
	__IOM uint32_t SRC;
} ESPI_MSVW_REG;

/** @brief HW implements 11 Master-to-Slave VW registers as an array */
typedef struct {
	ESPI_MSVW_REG MSVW[11];
} ESPI_M2S_VW_AR_Type;

/** @brief HW implements 11 Master-to-Slave VW registers as named registers */
typedef struct {
	ESPI_MSVW_REG MSVW00;
	ESPI_MSVW_REG MSVW01;
	ESPI_MSVW_REG MSVW02;
	ESPI_MSVW_REG MSVW03;
	ESPI_MSVW_REG MSVW04;
	ESPI_MSVW_REG MSVW05;
	ESPI_MSVW_REG MSVW06;
	ESPI_MSVW_REG MSVW07;
	ESPI_MSVW_REG MSVW08;
	ESPI_MSVW_REG MSVW09;
	ESPI_MSVW_REG MSVW10;
} ESPI_M2S_VW_Type;

/** @brief eSPI M2S VW registers as an array of words at 0x400F9C00 */
typedef struct {
	__IOM uint32_t MSVW32[11 * 3];
} ESPI_M2S_VW32_Type;

/** @brief eSPI 64-bit Slave-to-Master Virtual Wire register */
typedef struct espi_smvw_reg {
	__IOM uint8_t INDEX;
	__IOM uint8_t STOM;
	__IM uint8_t SRC_CHG;
	uint8_t RSVD1[1];
	__IOM uint32_t SRC;
} ESPI_SMVW_REG;

/** @brief HW implements 11 Slave-to-Master VW registers as an array */
typedef struct {
	ESPI_SMVW_REG SMVW[11];
} ESPI_S2M_VW_AR_Type;

/** @brief HW implements 11 Slave-to-Master VW registers as named registers */
typedef struct {
	ESPI_SMVW_REG SMVW00;
	ESPI_SMVW_REG SMVW01;
	ESPI_SMVW_REG SMVW02;
	ESPI_SMVW_REG SMVW03;
	ESPI_SMVW_REG SMVW04;
	ESPI_SMVW_REG SMVW05;
	ESPI_SMVW_REG SMVW06;
	ESPI_SMVW_REG SMVW07;
	ESPI_SMVW_REG SMVW08;
	ESPI_SMVW_REG SMVW09;
	ESPI_SMVW_REG SMVW10;
} ESPI_S2M_VW_Type;

/** @brief eSPI S2M VW registers as an array of words at 0x400F9E00 */
typedef struct {
	__IOM uint32_t SMVW[11 * 2];
} ESPI_S2M_VW32_Type;

/** @brief SAF SPI Opcoded and indices specifying start QMSPI descriptor for
 * each opcode. There is one register group per flash device.
 * OPA: read status1, resume, suspend, write enable
 * OPB: erase 4KB, erase 32KB, erase 64KB, page program
 * OPC: Fast Read Quad or Dual, N/A, continuous mode byte, read status 2
 * OP_DESCR: contains QMSPI descriptor indices for various opcode fields.
 */
struct mchp_espi_saf_op {
	__IOM uint32_t OPA;
	__IOM uint32_t OPB;
	__IOM uint32_t OPC;
	__IOM uint32_t OP_DESCR;
};

/** @brief SAF protection regions contain 4 32-bit registers.
 * Start address in 4KB units.
 * Limit address in 4KB units.
 * Write-erase eSPI Master bit-map.
 * Read access eSPI Master bit-map.
 */
struct mchp_espi_saf_pr {
	__IOM uint32_t START;
	__IOM uint32_t LIMIT;
	__IOM uint32_t WEBM;
	__IOM uint32_t RDBM;
};

/** @brief eSPI SAF configuration and control registers at 0x40008000 */
typedef struct mchp_espi_saf {
	uint32_t RSVD1[6];
	__IOM uint32_t SAF_ECP_CMD;
	__IOM uint32_t SAF_ECP_FLAR;
	__IOM uint32_t SAF_ECP_START;
	__IOM uint32_t SAF_ECP_BFAR;
	__IOM uint32_t SAF_ECP_STATUS;
	__IOM uint32_t SAF_ECP_INTEN;
	__IOM uint32_t SAF_FL_CFG_SIZE_LIM;
	__IOM uint32_t SAF_FL_CFG_THRH;
	__IOM uint32_t SAF_FL_CFG_MISC;
	__IOM uint32_t SAF_ESPI_MON_STATUS;
	__IOM uint32_t SAF_ESPI_MON_INTEN;
	__IOM uint32_t SAF_ECP_BUSY;
	uint32_t RSVD2[1];
	struct mchp_espi_saf_op SAF_CS_OP[2];
	__IOM uint32_t SAF_FL_CFG_GEN_DESCR;
	__IOM uint32_t SAF_PROT_LOCK;
	__IOM uint32_t SAF_PROT_DIRTY;
	__IOM uint32_t SAF_TAG_MAP[3];
	struct mchp_espi_saf_pr SAF_PROT_RG[17];
	__IOM uint32_t SAF_POLL_TMOUT;
	__IOM uint32_t SAF_POLL_INTRVL;
	__IOM uint32_t SAF_SUS_RSM_INTRVL;
	__IOM uint32_t SAF_CONSEC_RD_TMOUT;
	__IOM uint16_t SAF_CS0_CFG_P2M;
	__IOM uint16_t SAF_CS1_CFG_P2M;
	__IOM uint32_t SAF_FL_CFG_SPM;
	__IOM uint32_t SAF_SUS_CHK_DLY;
	__IOM uint16_t SAF_CS0_CM_PRF;
	__IOM uint16_t SAF_CS1_CM_PRF;
	__IOM uint32_t SAF_DNX_PROT_BYP;
} MCHP_SAF_HW_REGS;

/** @} */ /* End of group MEC172x_Peripheral_peripherals */

/* ====  End of section using anonymous unions  ========================== */
#if defined(__CC_ARM)
#pragma pop
#elif defined(__ICCARM__)
/* leave anonymous unions enabled */
#elif (__ARMCC_VERSION >= 6010050)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
/* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
#pragma warning restore
#elif defined(__CSMC__)
/* anonymous unions are enabled by default */
#else
#warning Not supported compiler type
#endif

/* =========================================================================*/
/* ================ Device Specific Peripheral Address Map ================ */
/* =========================================================================*/

/** @addtogroup MEC172x_Peripheral_peripheralAddr
 * @{
 */

/* Peripheral and SRAM base address */
#define CODE_SRAM_BASE 0x000C0000UL     /*!< (CODE SRAM ) Base Address */
#define DATA_SRAM_BASE 0x00118000UL     /*!< (DATA SRAM ) Base Address */
#define DATA_SRAM_SIZE 0x10000UL        /*!< (DATA SRAM Size ) 64KB */
#define PERIPH_BASE 0x40000000UL        /*!< (Peripheral) Base Address */

/* Peripheral memory map */
#define WDT_BASE (PERIPH_BASE + 0x0400ul)      /*!< (WDT0   )  Base Address */
#define BTMR16_0_BASE (PERIPH_BASE + 0x0C00ul) /*!< (B16TMR 0 ) Base Address */
#define BTMR16_1_BASE (PERIPH_BASE + 0x0C20ul) /*!< (B16TMR 1 ) Base Address */
#define BTMR16_2_BASE (PERIPH_BASE + 0x0C40ul) /*!< (B16TMR 0 ) Base Address */
#define BTMR16_3_BASE (PERIPH_BASE + 0x0C60ul) /*!< (B16TMR 1 ) Base Address */
#define BTMR32_0_BASE (PERIPH_BASE + 0x0C80ul) /*!< (B32TMR 0 ) Base Address */
#define BTMR32_1_BASE (PERIPH_BASE + 0x0CA0ul) /*!< (B32TMR 1 ) Base Address */

#define BTMR16_BASE(n) (BTMR16_0_BASE + ((uint32_t)(n) * 0x20ul))
#define BTMR32_BASE(n) (BTMR32_0_BASE + ((uint32_t)(n) * 0x20ul))

#define CTMR_BASE(n) \
	(PERIPH_BASE + 0x0D00ul + ((n) * 0x20u)) /*! (CTRM n) Base Address */

#define CCT_0_BASE (PERIPH_BASE + 0x1000ul)     /*!< (CCT 0 ) Base Address */

#define RCID_BASE(n)		  \
	(PERIPH_BASE + 0x1400ul + \
	 ((uint32_t)(n) * 0x80))                /*! <(RCID n) Base Address */

#define DMA_BASE (PERIPH_BASE + 0x2400ul)   /*!< (DMA ) Base Address */
#define DMA_CHAN_BASE(n) (DMA_BASE + (((n) + 1) * 40UL))
#define DMA_CH0_BASE (DMA_BASE + 0x0040ul)  /*!< (DMA Chan 00 ) Base Address */
#define DMA_CH1_BASE (DMA_BASE + 0x0080ul)  /*!< (DMA Chan 01 ) Base Address */
#define DMA_CH2_BASE (DMA_BASE + 0x00C0ul)  /*!< (DMA Chan 02 ) Base Address */
#define DMA_CH3_BASE (DMA_BASE + 0x0100ul)  /*!< (DMA Chan 03 ) Base Address */
#define DMA_CH4_BASE (DMA_BASE + 0x0140ul)  /*!< (DMA Chan 04 ) Base Address */
#define DMA_CH5_BASE (DMA_BASE + 0x0180ul)  /*!< (DMA Chan 05 ) Base Address */
#define DMA_CH6_BASE (DMA_BASE + 0x01C0ul)  /*!< (DMA Chan 06 ) Base Address */
#define DMA_CH7_BASE (DMA_BASE + 0x0200ul)  /*!< (DMA Chan 07 ) Base Address */
#define DMA_CH8_BASE (DMA_BASE + 0x0240ul)  /*!< (DMA Chan 08 ) Base Address */
#define DMA_CH9_BASE (DMA_BASE + 0x0280ul)  /*!< (DMA Chan 09 ) Base Address */
#define DMA_CH10_BASE (DMA_BASE + 0x02C0ul) /*!< (DMA Chan 10 ) Base Address */
#define DMA_CH11_BASE (DMA_BASE + 0x0300ul) /*!< (DMA Chan 11 ) Base Address */
#define DMA_CH12_BASE (DMA_BASE + 0x0340ul) /*!< (DMA Chan 12 ) Base Address */
#define DMA_CH13_BASE (DMA_BASE + 0x0380ul) /*!< (DMA Chan 13 ) Base Address */
#define DMA_CH14_BASE (DMA_BASE + 0x03C0ul) /*!< (DMA Chan 14 ) Base Address */
#define DMA_CH15_BASE (DMA_BASE + 0x0400ul) /*!< (DMA Chan 15 ) Base Address */

#define EEPROMC_BASE \
	(PERIPH_BASE + 0x2C00ul)                /*!< (EEPROMC ) Base Address */

#define PROCHOT_BASE (PERIPH_BASE + 0x3400ul)   /*!< (PROCHOT ) Base Address */

#define I2C_SMB_BASE(n) (PERIPH_BASE + 0x4000ul + ((n) * 0x400UL))
#define I2C_SMB_0_BASE (PERIPH_BASE + 0x4000ul) /*!< (I2C_SMB 0) Base Address */
#define I2C_SMB_1_BASE (PERIPH_BASE + 0x4400ul) /*!< (I2C_SMB 1) Base Address */
#define I2C_SMB_2_BASE (PERIPH_BASE + 0x4800ul) /*!< (I2C_SMB 2) Base Address */
#define I2C_SMB_3_BASE (PERIPH_BASE + 0x4C00ul) /*!< (I2C_SMB 3) Base Address */
#define I2C_SMB_4_BASE (PERIPH_BASE + 0x5000ul) /*!< (I2C_SMB 4) Base Address */

#define PWM_BASE(n) (PERIPH_BASE + 0x5800ul + ((n) * 0x10UL))
#define PWM_0_BASE (PERIPH_BASE + 0x5800ul)     /*!< (PWM 0) Base Address */
#define PWM_1_BASE (PERIPH_BASE + 0x5810ul)     /*!< (PWM 1) Base Address */
#define PWM_2_BASE (PERIPH_BASE + 0x5820ul)     /*!< (PWM 2) Base Address */
#define PWM_3_BASE (PERIPH_BASE + 0x5830ul)     /*!< (PWM 3) Base Address */
#define PWM_4_BASE (PERIPH_BASE + 0x5840ul)     /*!< (PWM 4) Base Address */
#define PWM_5_BASE (PERIPH_BASE + 0x5850ul)     /*!< (PWM 5) Base Address */
#define PWM_6_BASE (PERIPH_BASE + 0x5860ul)     /*!< (PWM 6) Base Address */
#define PWM_7_BASE (PERIPH_BASE + 0x5870ul)     /*!< (PWM 7) Base Address */
#define PWM_8_BASE (PERIPH_BASE + 0x5880ul)     /*!< (PWM 8) Base Address */

#define TACH_BASE(n) (PERIPH_BASE + 0x6000ul + ((n) * 0x10UL))
#define TACH_0_BASE (PERIPH_BASE + 0x6000ul)    /*!< (TACH 0) Base Address */
#define TACH_1_BASE (PERIPH_BASE + 0x6010ul)    /*!< (TACH 1) Base Address */
#define TACH_2_BASE (PERIPH_BASE + 0x6020ul)    /*!< (TACH 2) Base Address */
#define TACH_3_BASE (PERIPH_BASE + 0x6030ul)    /*!< (TACH 3) Base Address */

#define PECI_0_BASE (PERIPH_BASE + 0x6400ul)    /*!< (PECI 0) Base Address */

#define SPIP_0_BASE (PERIPH_BASE + 0x7000ul)    /*!< (SPIP 0) Base Address */

#define RTMR_0_BASE (PERIPH_BASE + 0x7400ul)    /*!< (RTMR 0) Base Address */

#define ADC_0_BASE (PERIPH_BASE + 0x7C00ul)     /*!< (ADC 0) Base Address */

#define ESPI_SAF_BASE (PERIPH_BASE + 0x8000ul)  /*!< (ESPI_SAF) Base Address */

#define TFDP_0_BASE (PERIPH_BASE + 0x8C00ul)    /*!< (TFDP 0) Base Address */

#define PS2_0_BASE (PERIPH_BASE + 0x9000ul)     /*!< (PS2 0) Base Address */

#define GPSPI_0_BASE (PERIPH_BASE + 0x9400ul)   /*!< (GPSPI 0) Base Addresss */
#define GPSPI_1_BASE (PERIPH_BASE + 0x9480ul)   /*!< (GPSPI 1) Base Addresss */

#define HTMR_0_BASE (PERIPH_BASE + 0x9800ul)    /*!< (HTMR 0) Base Address */
#define HTMR_1_BASE (PERIPH_BASE + 0x9820ul)    /*!< (HTMR 1) Base Address */

#define KEYSCAN_BASE (PERIPH_BASE + 0x9C00ul)   /*!< (KEYSCAN ) Base Address */

#define RPMFAN_0_BASE (PERIPH_BASE + 0xA000ul)  /*!< (RPMFAN 0) Base Address */
#define RPMFAN_1_BASE (PERIPH_BASE + 0xA080ul)  /*!< (RPMFAN 1) Base Address */

#define VBATR_BASE (PERIPH_BASE + 0xA400ul)     /*!< (VBATR ) Base Address */
#define VBATM_BASE (PERIPH_BASE + 0xA800ul)     /*!< (VBATM ) Base Address */
#define WKTMR_BASE (PERIPH_BASE + 0xAC80ul)     /*!< (WKTMR ) Base Address */
#define VCI_BASE (PERIPH_BASE + 0xAE00ul)       /*!< (VCI ) Base Address */

#define LED_0_BASE (PERIPH_BASE + 0xB800ul)     /*!< (LED 0 ) Base Address */
#define LED_1_BASE (PERIPH_BASE + 0xB900ul)     /*!< (LED 1 ) Base Address */
#define LED_2_BASE (PERIPH_BASE + 0xBA00ul)     /*!< (LED 2 ) Base Address */
#define LED_3_BASE (PERIPH_BASE + 0xBB00ul)     /*!< (LED 3 ) Base Address */

#define BCL_0_BASE (PERIPH_BASE + 0xCD00ul)     /*!< (BCL 0 ) Base Address */

#define ECIA_BASE (PERIPH_BASE + 0xE000ul)      /*!< (ECIA ) Base Address */

/*!< (GIRQ 8<=n<=26) address */
#define GIRQ_BASE(n) (ECIA_BASE + (((n) - 8U) * 0x14ul))

#define ECS_BASE (PERIPH_BASE + 0xFC00ul) /*!< (ECS ) Base Address */

/*!< (CACHE_CTRL ) Base Address */
#define CACHE_CTRL_BASE (PERIPH_BASE + 0x10000ul)

#define QMSPI_0_BASE (PERIPH_BASE + 0x70000ul)  /*!< (QMSPI 0) Base Address */

#define PCR_BASE (PERIPH_BASE + 0x80100ul)      /*!< (PCR ) Base Address */

#define GPIO_BASE (PERIPH_BASE + 0x81000ul)     /*!< (GPIO ) Base Address */
#define GPIO_CTRL_BASE (GPIO_BASE)              /*!< (GPIO ) Control Base Address */

/*!< (GPIO Parallel I/O) Base Address */
#define GPIO_PARIN_BASE (GPIO_BASE + 0x0300ul)
/*!< (GPIO Parallel I/O) Base Address */
#define GPIO_PAROUT_BASE (GPIO_BASE + 0x0380ul)
/*!< (GPIO Lock) Base Address */
#define GPIO_LOCK_BASE (GPIO_BASE + 0x03E8ul)
/*!< (GPIO ) Control2 Base Address */
#define GPIO_CTRL2_BASE (GPIO_BASE + 0x0500ul)

#define OTP_BASE (PERIPH_BASE + 0x82000ul) /*!< (OTP ) Base Address */

/* -------- Host Peripheral Base Addresses -------- */
#define MBOX_0_BASE (PERIPH_BASE + 0xF0000ul)   /*!< (MBOX 0) Base Address */
#define KBC_0_BASE (PERIPH_BASE + 0xF0400ul)    /*!< (KBC 0) Base Address */

/*!< (ACPI EC n ) Base Address 0 <= n <= 4 */
#define ACPI_EC_BASE(n) (PERIPH_BASE + 0xF0800ul + ((n) * 0x400UL))
#define ACPI_PM1_BASE (PERIPH_BASE + 0xF1C00ul) /*!< (ACPI PM1 ) Base Address */

#define PORT92_BASE (PERIPH_BASE + 0xF2000ul)   /*!< (PORT92 ) Base Address */

#define UART_BASE(n) (PERIPH_BASE + 0xF2400ul + ((n) * 0x400UL))
#define UART_0_BASE (PERIPH_BASE + 0xF2400ul)   /*!< (UART0 ) Base Address */
#define UART_1_BASE (PERIPH_BASE + 0xF2800ul)   /*!< (UART1 ) Base Address */

#define GLUE_BASE (PERIPH_BASE + 0xF3C00ul)     /*!< (Glue Logic ) Base Address */

#define EMI_0_BASE (PERIPH_BASE + 0xF4000ul)    /*!< (EMI 0 ) Base Address */
#define EMI_1_BASE (PERIPH_BASE + 0xF4400ul)    /*!< (EMI 1 ) Base Address */
#define EMI_2_BASE (PERIPH_BASE + 0xF4800ul)    /*!< (EMI 2 ) Base Address */

#define RTC_BASE (PERIPH_BASE + 0xF5000ul)      /*!< (RTC ) Base Address */

#define P80BD_0_BASE (PERIPH_BASE + 0xF8000ul)  /*!< (P80BD 0 ) Base Address */

#define GCFG_BASE (PERIPH_BASE + 0xFFF00ul)     /*!< (GCFG ) Base Address */

/* -------- eSPI Base Addresses -------- */
/*!< (ESPI IO Component) Base Address */
#define ESPI_IO_BASE (PERIPH_BASE + 0xF3400ul)
/*!< (ESPI IO Peripheral Channel) Base Address */
#define ESPI_IO_PC_BASE ((ESPI_IO_BASE) +0x100ul)
/*!< (ESPI IO Host IO BAR) Base Address */
#define ESPI_IO_HOST_BAR_BASE ((ESPI_IO_BASE) +0x120ul)
/*!< (ESPI IO LTR) Base Address */
#define ESPI_IO_LTR_BASE ((ESPI_IO_BASE) +0x220ul)
/*!< (ESPI IO Out-of-Band Channel) Base Address */
#define ESPI_IO_OOB_BASE ((ESPI_IO_BASE) +0x240ul)
/*!< (ESPI IO Flash Channel) Base Address */
#define ESPI_IO_FC_BASE ((ESPI_IO_BASE) +0x280ul)
/*!< (ESPI IO Capabilities) Base Address */
#define ESPI_IO_CAP_BASE ((ESPI_IO_BASE) +0x2B0ul)
/*!< (ESPI IO EC IO BAR) Base Address */
#define ESPI_IO_EC_BAR_BASE ((ESPI_IO_BASE) +0x330ul)
/*!< (ESPI IO EC IO VW registers) Base Address */
#define ESPI_IO_VW_BASE ((ESPI_IO_BASE) +0x2B0ul)
/*!< (ESPI IO Serial IRQ registers) Base Address */
#define ESPI_IO_SIRQ_BASE ((ESPI_IO_BASE) +0x3A0ul)
/*!< (ESPI Memory Component) Base Address */
#define ESPI_MEM_BASE (PERIPH_BASE + 0xF3800ul)
/*!< (ESPI Logical Device Memory BAR EC */
#define ESPI_MEM_EC_BAR_BASE ((ESPI_MEM_BASE) +0x0130ul)
/*!< (ESPI Logical Device Memory BAR Host */
#define ESPI_MEM_HOST_BAR_BASE ((ESPI_MEM_BASE) +0x0330ul)
/*!< (ESPI Memory SRAM BAR EC */
#define ESPI_MEM_SRAM_EC_BAR_BASE ((ESPI_MEM_BASE) +0x01A0ul)
/*!< (ESPI Memory SRAM BAR Host */
#define ESPI_MEM_SRAM_HOST_BAR_BASE ((ESPI_MEM_BASE) +0x03A0ul)
/*!< (ESPI Memory Component Bus Master) Base Address */
#define ESPI_MEM_BM_BASE ((ESPI_MEM_BASE) +0x0200ul)
/*!< (ESPI VW Component) Base Address */
#define ESPI_VW_BASE (PERIPH_BASE + 0xF9C00ul)
/*!< (ESPI VW Component Slave-to-Master) Base Address */
#define ESPI_SMVW_BASE (ESPI_VW_BASE + 0x200ul)

#define DELAY_US_BASE (0x08000000ul) /*!< (1 us Delay register) Base Address */

/** @} */ /* End of group MEC172x_Peripheral_peripheralAddr */

/* ARM Cortex-M4 input clock from PLL */
#define MCHP_EC_CLOCK_INPUT_HZ 96000000U

#define MCHP_ACMP_INSTANCES 1
#define MCHP_ACPI_EC_INSTANCES 5
#define MCHP_ACPI_PM1_INSTANCES 1
#define MCHP_ADC_INSTANCES 1
#define MCHP_BCL_INSTANCES 1
#define MCHP_BTMR16_INSTANCES 4
#define MCHP_BTMR32_INSTANCES 2
#define MCHP_CCT_INSTANCES 1
#define MCHP_CTMR_INSTANCES 4
#define MCHP_DMA_INSTANCES 1
#define MCHP_ECIA_INSTANCES 1
#define MCHP_EMI_INSTANCES 3
#define MCHP_HTMR_INSTANCES 2
#define MCHP_I2C_INSTANCES 0
#define MCHP_I2C_SMB_INSTANCES 5
#define MCHP_LED_INSTANCES 4
#define MCHP_MBOX_INSTANCES 1
#define MCHP_OTP_INSTANCES 1
#define MCHP_P80BD_INSTANCES 1
#define MCHP_PECI_INSTANCES 1
#define MCHP_PROCHOT_INSTANCES 1
#define MCHP_PS2_INSTANCES 1
#define MCHP_PWM_INSTANCES 9
#define MCHP_QMSPI_INSTANCES 1
#define MCHP_RCID_INSTANCES 3
#define MCHP_RPMFAN_INSTANCES 2
#define MCHP_RTC_INSTANCES 1
#define MCHP_RTMR_INSTANCES 1
#define MCHP_SPIEP_INSTANCES 1
#define MCHP_TACH_INSTANCES 4
#define MCHP_TFDP_INSTANCES 1
#define MCHP_UART_INSTANCES 2
#define MCHP_WDT_INSTANCES 1
#define MCHP_WKTMR_INSTANCES 1

#define MCHP_ACMP_CHANNELS 2
#define MCHP_ADC_CHANNELS 8
#define MCHP_BGPO_GPIO_PINS 2
#define MCHP_DMA_CHANNELS 16
#define MCHP_GIRQS 19
#define MCHP_GPIO_PINS 123
#define MCHP_GPIO_PORTS 6
#define MCHP_GPTP_PORTS 6
#define MCHP_I2C_SMB_PORTS 15
#define MCHP_I2C_PORTMAP 0xF7FFul;
#define MCHP_QMSPI_PORTS 3
#define MCHP_PS2_PORTS 2
#define MCHP_VCI_IN_PINS 4
#define MCHP_VCI_OUT_PINS 1
#define MCHP_VCI_OVRD_IN_PINS 1

#include "component/acpi_ec.h"
#include "component/adc.h"
#include "component/bcl.h"
#include "component/dma.h"
#include "component/ecia.h"
#include "component/ecs.h"
#include "component/eepromc.h"
#include "component/emi.h"
#include "component/espi_io.h"
#include "component/espi_mem.h"
#include "component/espi_saf.h"
#include "component/espi_vw.h"
#include "component/global_cfg.h"
#include "component/glue.h"
#include "component/gpio.h"
#include "component/gpspi.h"
#include "component/i2c_smb.h"
#include "component/kbc.h"
#include "component/keyscan.h"
#include "component/led.h"
#include "component/mailbox.h"
#include "component/p80bd.h"
#include "component/pcr.h"
#include "component/peci.h"
#include "component/port92.h"
#include "component/prochot.h"
#include "component/ps2_ctrl.h"
#include "component/pwm.h"
#include "component/qmspi.h"
#include "component/rcid.h"
#include "component/rpmfan.h"
#include "component/rtc.h"
#include "component/spi_periph.h"
#include "component/tach.h"
#include "component/tfdp.h"
#include "component/timer.h"
#include "component/uart.h"
#include "component/vbat.h"
#include "component/wdt.h"

/* ===================================================================== */
/* ================  Peripheral declaration             ================ */
/* ===================================================================== */

/** @addtogroup MEC172x_Peripheral_declaration
 * @{
 */

#define WDT_REGS ((WDT_Type *)WDT_BASE)

#define BTMR16_0_REGS ((BTMR16_Type *)BTMR16_BASE(0))
#define BTMR16_1_REGS ((BTMR16_Type *)BTMR16_BASE(1))
#define BTMR16_2_REGS ((BTMR16_Type *)BTMR16_BASE(2))
#define BTMR16_3_REGS ((BTMR16_Type *)BTMR16_BASE(3))
#define BTMR32_0_REGS ((BTMR32_Type *)BTMR32_BASE(0))
#define BTMR32_1_REGS ((BTMR32_Type *)BTMR32_BASE(1))
/* backwards compatible aliases */
#define B16TMR0_REGS BTMR16_0_REGS
#define B16TMR1_REGS BTMR16_1_REGS
#define B16TMR2_REGS BTMR16_2_REGS
#define B16TMR3_REGS BTMR16_3_REGS
#define B32TMR0_REGS BTMR32_0_REGS
#define B32TMR1_REGS BTMR32_1_REGS

#define CTMR_0_REGS ((CTMR_Type *)CTMR_BASE(0))
#define CTMR_1_REGS ((CTMR_Type *)CTMR_BASE(1))
#define CTMR_2_REGS ((CTMR_Type *)CTMR_BASE(2))
#define CTMR_3_REGS ((CTMR_Type *)CTMR_BASE(3))

#define CCT_0_REGS ((CCT_Type *)(CCT_0_BASE))
/* backwards compatible alias */
#define CCT_REGS CCT_0_REGS

#define RCID_0_REGS ((RCID_Type *)RCID_BASE(0))
#define RCID_1_REGS ((RCID_Type *)RCID_BASE(1))
#define RCID_2_REGS ((RCID_Type *)RCID_BASE(2))

/* Complete DMA block */
#define DMA_REGS ((DMA_Type *)(DMA_BASE))
/* DMA Main only */
#define DMAM_REGS ((DMAM_Type *)(DMA_BASE))
/* Individual DMA channels */
#define DMA0_REGS ((DMA_CHAN_ALU_Type *)(DMA_CHAN_BASE(0)))
#define DMA1_REGS ((DMA_CHAN_ALU_Type *)(DMA_CHAN_BASE(1)))
#define DMA2_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(2)))
#define DMA3_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(3)))
#define DMA4_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(4)))
#define DMA5_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(5)))
#define DMA6_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(6)))
#define DMA7_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(7)))
#define DMA8_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(8)))
#define DMA9_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(9)))
#define DMA10_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(10)))
#define DMA11_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(11)))
#define DMA12_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(12)))
#define DMA13_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(13)))
#define DMA14_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(14)))
#define DMA15_REGS ((DMA_CHAN_Type *)(DMA_CHAN_BASE(15)))

#define EEPROMC_REGS ((EEPROMC_Type *)EEPROMC_BASE)
#define PROCHOT_REGS ((PROCHOT_Type *)PROCHOT_BASE)

#define I2C_SMB_0_REGS ((I2C_SMB_Type *)I2C_SMB_0_BASE)
#define I2C_SMB_1_REGS ((I2C_SMB_Type *)I2C_SMB_1_BASE)
#define I2C_SMB_2_REGS ((I2C_SMB_Type *)I2C_SMB_2_BASE)
#define I2C_SMB_3_REGS ((I2C_SMB_Type *)I2C_SMB_3_BASE)
#define I2C_SMB_4_REGS ((I2C_SMB_Type *)I2C_SMB_4_BASE)

#define PWM_0_REGS ((PWM_Type *)PWM_0_BASE)
#define PWM_1_REGS ((PWM_Type *)PWM_1_BASE)
#define PWM_2_REGS ((PWM_Type *)PWM_2_BASE)
#define PWM_3_REGS ((PWM_Type *)PWM_3_BASE)
#define PWM_4_REGS ((PWM_Type *)PWM_4_BASE)
#define PWM_5_REGS ((PWM_Type *)PWM_5_BASE)
#define PWM_6_REGS ((PWM_Type *)PWM_6_BASE)
#define PWM_7_REGS ((PWM_Type *)PWM_7_BASE)
#define PWM_8_REGS ((PWM_Type *)PWM_8_BASE)

#define TACH_0_REGS ((TACH_Type *)TACH_0_BASE)
#define TACH_1_REGS ((TACH_Type *)TACH_1_BASE)
#define TACH_2_REGS ((TACH_Type *)TACH_2_BASE)
#define TACH_3_REGS ((TACH_Type *)TACH_3_BASE)

#define PECI_REGS ((PECI_Type *)PECI_0_BASE)

#define SPIP_0_REGS ((SPIP_Type *)SPIP_0_BASE)

#define RTMR_0_REGS ((RTMR_Type *)RTMR_0_BASE)
/* backwards compatible alias */
#define RTMR_REGS RTMR_0_REGS

#define ADC_0_REGS ((ADC_Type *)ADC_0_BASE)

#define TFDP_0_REGS ((TFDP_Type *)TFDP_0_BASE)

#define PS2_0_REGS ((PS2_Type *)PS2_0_BASE)

#define GPSPI_0_REGS ((GPSPI_Type *)GPSPI_0_BASE)
#define GPSPI_1_REGS ((GPSPI_Type *)GPSPI_1_BASE)

#define HTMR_0_REGS ((HTMR_Type *)HTMR_0_BASE)
#define HTMR_1_REGS ((HTMR_Type *)HTMR_1_BASE)

#define KSCAN_REGS ((KSCAN_Type *)(KEYSCAN_BASE))

#define RPMFAN_0_REGS ((RPMFAN_Type *)RPMFAN_0_BASE)
#define RPMFAN_1_REGS ((RPMFAN_Type *)RPMFAN_0_BASE)

#define VBATR_REGS ((VBATR_Type *)VBATR_BASE)
#define VBATM_REGS ((VBATM_Type *)VBATM_BASE)
#define WKTMR_REGS ((WKTMR_Type *)WKTMR_BASE)

#define VCI_REGS ((VCI_Type *)VCI_BASE)

#define LED_0_REGS ((LED_Type *)LED_0_BASE)
#define LED_1_REGS ((LED_Type *)LED_1_BASE)
#define LED_2_REGS ((LED_Type *)LED_2_BASE)
#define LED_3_REGS ((LED_Type *)LED_3_BASE)

#define BCL_0_REGS ((BCL_Type *)BCL_0_BASE)

#define ECIA_REGS ((ECIA_Type *)ECIA_BASE)
#define ECIA_AR_REGS ((ECIA_AR_Type *)ECIA_BASE)
#define GIRQ08_REGS ((GIRQ_Type *)GIRQ_BASE(8))
#define GIRQ09_REGS ((GIRQ_Type *)GIRQ_BASE(9))
#define GIRQ10_REGS ((GIRQ_Type *)GIRQ_BASE(10))
#define GIRQ11_REGS ((GIRQ_Type *)GIRQ_BASE(11))
#define GIRQ12_REGS ((GIRQ_Type *)GIRQ_BASE(12))
#define GIRQ13_REGS ((GIRQ_Type *)GIRQ_BASE(13))
#define GIRQ14_REGS ((GIRQ_Type *)GIRQ_BASE(14))
#define GIRQ15_REGS ((GIRQ_Type *)GIRQ_BASE(15))
#define GIRQ16_REGS ((GIRQ_Type *)GIRQ_BASE(16))
#define GIRQ17_REGS ((GIRQ_Type *)GIRQ_BASE(17))
#define GIRQ18_REGS ((GIRQ_Type *)GIRQ_BASE(18))
#define GIRQ19_REGS ((GIRQ_Type *)GIRQ_BASE(19))
#define GIRQ20_REGS ((GIRQ_Type *)GIRQ_BASE(20))
#define GIRQ21_REGS ((GIRQ_Type *)GIRQ_BASE(21))
#define GIRQ22_REGS ((GIRQ_Type *)GIRQ_BASE(22))
#define GIRQ23_REGS ((GIRQ_Type *)GIRQ_BASE(23))
#define GIRQ24_REGS ((GIRQ_Type *)GIRQ_BASE(24))
#define GIRQ25_REGS ((GIRQ_Type *)GIRQ_BASE(25))
#define GIRQ26_REGS ((GIRQ_Type *)GIRQ_BASE(26))

#define ECS_REGS ((ECS_Type *)ECS_BASE)

#define QMSPI_REGS ((QMSPI_Type *)QMSPI_0_BASE)

#define PCR_REGS ((PCR_Type *)PCR_BASE)

#define GPIO_REGS ((GPIO_Type *)(GPIO_CTRL_BASE))
#define GPIO_CTRL_REGS ((GPIO_CTRL_Type *)(GPIO_CTRL_BASE))
#define GPIO_CTRL2_REGS ((GPIO_CTRL2_Type *)(GPIO_CTRL2_BASE))
#define GPIO_PARIN_REGS ((GPIO_PARIN_Type *)(GPIO_PARIN_BASE))
#define GPIO_PAROUT_REGS ((GPIO_PAROUT_Type *)(GPIO_PAROUT_BASE))
#define GPIO_LOCK_REGS ((GPIO_LOCK_Type *)(GPIO_LOCK_BASE))

#define MBOX_0_REGS ((MBOX_Type *)(MBOX_0_BASE))

#define KBC_0_REGS ((KBC_Type *)(KBC_0_BASE))
/* backwards compatible */
#define KBC_REGS KBC_0_REGS

#define ACPI_EC_0_REGS ((ACPI_EC_Type *)(ACPI_EC_BASE(0)))
#define ACPI_EC_1_REGS ((ACPI_EC_Type *)(ACPI_EC_BASE(1)))
#define ACPI_EC_2_REGS ((ACPI_EC_Type *)(ACPI_EC_BASE(2)))
#define ACPI_EC_3_REGS ((ACPI_EC_Type *)(ACPI_EC_BASE(3)))
#define ACPI_EC_4_REGS ((ACPI_EC_Type *)(ACPI_EC_BASE(4)))

#define ACPI_PM1_REGS ((ACPI_PM1_Type *)ACPI_PM1_BASE)

#define PORT92_REGS ((PORT92_Type *)(PORT92_BASE))

#define UART_0_REGS ((UART_Type *)UART_0_BASE)
#define UART_1_REGS ((UART_Type *)UART_1_BASE)
/* backwards compatible */
#define UART0_REGS UART_0_REGS
#define UART1_REGS UART_1_REGS

#define GLUE_REGS ((GLUE_Type *)(GLUE_BASE))

#define EMI0_REGS ((EMI_Type *)(EMI_0_BASE))
#define EMI1_REGS ((EMI_Type *)(EMI_1_BASE))
#define EMI2_REGS ((EMI_Type *)(EMI_2_BASE))

#define RTC_REGS ((RTC_Type *)RTC_BASE)

#define P80BD_0_REGS ((P80BD_Type *)(P80BD_0_BASE))

#define GLOBAL_CFG_REGS ((GLOBAL_CFG_Type *)GCFG_BASE)

/* -------- eSPI Register instaniations -------- */
#define ESPI_PC_REGS ((ESPI_IO_PC_Type *)(ESPI_IO_PC_BASE))

#define ESPI_HIO_BAR_REGS ((ESPI_IO_BAR_HOST_Type *)(ESPI_IO_HOST_BAR_BASE))

#define ESPI_LTR_REGS ((ESPI_IO_LTR_Type *)(ESPI_IO_LTR_BASE))
#define ESPI_OOB_REGS ((ESPI_IO_OOB_Type *)(ESPI_IO_OOB_BASE))
#define ESPI_FC_REGS ((ESPI_IO_FC_Type *)(ESPI_IO_FC_BASE))
#define ESPI_CAP_REGS ((ESPI_IO_CAP_Type *)(ESPI_IO_CAP_BASE))
#define ESPI_EIO_BAR_REGS ((ESPI_IO_BAR_EC_Type *)(ESPI_IO_EC_BAR_BASE))
#define ESPI_SIRQ_REGS ((ESPI_IO_SIRQ_Type *)(ESPI_IO_SIRQ_BASE))
#define ESPI_SIRQ_AR_REGS ((ESPI_IO_SIRQ_AR_Type *)(ESPI_IO_SIRQ_BASE))

#define ESPI_MEM_EBAR_REGS ((ESPI_MEM_BAR_EC_Type *)(ESPI_MEM_EC_BAR_BASE))
#define ESPI_MEM_HBAR_REGS ((ESPI_MEM_BAR_HOST_Type *)(ESPI_MEM_HOST_BAR_BASE))

#define ESPI_MEM_SRAM_EBAR_REGS	\
	((ESPI_MEM_SRAM_BAR_EC_Type *)(ESPI_MEM_SRAM_EC_BAR_BASE))
#define ESPI_MEM_SRAM_HBAR_REGS	\
	((ESPI_MEM_SRAM_BAR_HOST_Type *)(ESPI_MEM_SRAM_HOST_BAR_BASE))

#define ESPI_MEM_BM_REGS ((ESPI_MEM_BM_Type *)(ESPI_MEM_BM_BASE))

/* eSPI Virtual Wire registers in IO component */
#define ESPI_IO_VW_REGS ((ESPI_IO_VW_Type *)(ESPI_IO_VW_BASE))
/* eSPI Virtual Wire registers for each group of 4 VWires */
#define ESPI_M2S_VW_REGS ((ESPI_M2S_VW_Type *)(ESPI_VW_BASE))
#define ESPI_S2M_VW_REGS ((ESPI_S2M_VW_Type *)(ESPI_SMVW_BASE))

/** @} */ /* End of group MEC172x_Peripheral_declaration */

/** @} */ /* End of group MEC172XNSZ */

/** @} */ /* End of group MCHP */

#ifdef __cplusplus
}
#endif
#endif /* MEC172XNSZ_H */
