/**
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

/** @file vbat.h
 *MEC1501 VBAT Registers and memory definitions
 */
/** @defgroup MEC1501 Peripherals VBAT
 */

#ifndef _VBAT_H
#define _VBAT_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/*
 * VBAT Registers Registers
 */

#define MCHP_VBAT_REGISTERS_ADDR	0x4000A400ul
#define MCHP_VBAT_MEMORY_ADDR		0x4000A800ul
#define MCHP_VBAT_MEMORY_SIZE		64ul

/*
 * Offset 0x00 Power-Fail and Reset Status
 */
#define MCHP_VBATR_PFRS_OFS		0ul
#define MCHP_VBATR_PFRS_MASK		0x7Cul
#define MCHP_VBATR_PFRS_SYS_RST_POS	2u
#define MCHP_VBATR_PFRS_JTAG_POS	3u
#define MCHP_VBATR_PFRS_RESETI_POS	4u
#define MCHP_VBATR_PFRS_WDT_POS		5u
#define MCHP_VBATR_PFRS_SYSRESETREQ_POS	6u
#define MCHP_VBATR_PFRS_VBAT_RST_POS	7u

#define MCHP_VBATR_PFRS_SYS_RST		(1ul << 2)
#define MCHP_VBATR_PFRS_JTAG		(1ul << 3)
#define MCHP_VBATR_PFRS_RESETI		(1ul << 4)
#define MCHP_VBATR_PFRS_WDT		(1ul << 5)
#define MCHP_VBATR_PFRS_SYSRESETREQ	(1ul << 6)
#define MCHP_VBATR_PFRS_VBAT_RST	(1ul << 7)

/*
 * Offset 0x08 32K Clock Enable
 */
#define MCHP_VBATR_CLKEN_OFS		0x08ul
#define MCHP_VBATR_CLKEN_MASK		0x0Eul
#define MCHP_VBATR_CLKEN_32K_DOM_POS	1u
#define MCHP_VBATR_CLKEN_32K_SRC_POS	2u
#define MCHP_VBATR_CLKEN_XTAL_SEL_POS	3u

#define MCHP_VBATR_CLKEN_32K_DOM_ALWYS_ON	(0ul << 1)
#define MCHP_VBATR_CLKEN_32K_DOM_32K_IN_PIN	(1ul << 1)
#define MCHP_VBATR_CLKEN_32K_ALWYS_ON_SI_OSC	(0ul << 2)
#define MCHP_VBATR_CLKEN_32K_ALWYS_ON_XTAL	(1ul << 2)
#define MCHP_VBATR_CLKEN_XTAL12_PARALLEL	(0ul << 3)
#define MCHP_VBATR_CLKEN_XTAL2_SE_32K		(1ul << 3)

#define MCHP_VBATR_USE_SIL_OSC		0x00ul
#define MCHP_VBATR_USE_32KIN_PIN	MCHP_VBATR_CLKEN_32K_DOM_32K_IN_PIN
#define MCHP_VBATR_USE_PAR_CRYSTAL \
	(MCHP_VBATR_CLKEN_32K_ALWYS_ON_XTAL + MCHP_VBATR_CLKEN_XTAL12_PARALLEL)
#define MCHP_VBATR_USE_SE_CRYSTAL \
	(MCHP_VBATR_CLKEN_32K_ALWYS_ON_XTAL + MCHP_VBATR_CLKEN_XTAL2_SE_32K)

/*
 * Monotonic Counter
 */
#define MCHP_VBATR_MCNT_LSW_OFS		0x20ul
#define MCHP_VBATR_MCNT_MSW_OFS		0x24ul

/*
 * Register access
 */
#define MCHP_VBATR_PFRS() \
	REG8(MCHP_VBAT_REGISTERS_ADDR + MCHP_VBATR_PFRS_OFS)

#define MCHP_VBATR_CLKEN() \
	REG8(MCHP_VBAT_REGISTERS_ADDR + MCHP_VBATR_CLKEN_OFS)

#define MCHP_VBATR_MCNT_LO() \
	REG32(MCHP_VBAT_REGISTERS_ADDR + MCHP_VBATR_MCNT_LSW_OFS)

#define MCHP_VBATR_MCNT_HI() \
	REG32(MCHP_VBAT_REGISTERS_ADDR + MCHP_VBATR_MCNT_MSW_OFS)

/* =========================================================================*/
/* ================	       VBATR			   ================ */
/* =========================================================================*/

/**
  * @brief VBAT Register Bank (VBATR)
  */
typedef struct vbatr_regs {
	__IOM uint32_t PFRS;	/*! (@ 0x00000000) VBATR Power Fail Reset Status */
	uint8_t RSVD1[4];
	__IOM uint32_t CLK32_EN;	/*! (@ 0x00000008) VBATR 32K clock enable */
	__IOM uint32_t SHDN_EN;		/*! (@ 0x0000000C) VBATR SHD pin enable */
	uint8_t RSVD2[12];
	__IOM uint32_t CKK32_TRIM;	/*! (@ 0x0000001C) VBATR 32 clock override */
	__IOM uint32_t MCNT_LO;	/*! (@ 0x00000020) VBATR monotonic count lo */
	__IOM uint32_t MCNT_HI;	/*! (@ 0x00000024) VBATR monotonic count hi */
} VBATR_Type;

/* =========================================================================*/
/* ================	       VBATM			   ================ */
/* =========================================================================*/

/**
  * @brief VBAT Memory (VBATM)
  */
#define MCHP_VBAT_MEM_LEN	64ul

typedef struct vbatm_regs {
	union vbmem_u {
		uint32_t u32[(MCHP_VBAT_MEM_LEN) / 4];
		uint16_t u16[(MCHP_VBAT_MEM_LEN) / 2];
		uint8_t u8[MCHP_VBAT_MEM_LEN];
	} MEM;
} VBATM_Type;

/* =========================================================================*/
/* ================		 VCI 			=================== */
/* =========================================================================*/

#define MCHP_VCI_BASE_ADDR	0x4000AE00ul

/*
 * VCI interrupts
 */
#define MCHP_VCI_OVRD_GIRQ	21u
#define MCHP_VCI_IN0_GIRQ	21u
#define MCHP_VCI_IN1_GIRQ	21u
#define MCHP_VCI_IN2_GIRQ	21u
#define MCHP_VCI_IN3_GIRQ	21u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_VCI_OVRD_GIRQ_POS	10u
#define MCHP_VCI_IN0_GIRQ_POS	11u
#define MCHP_VCI_IN1_GIRQ_POS	12u
#define MCHP_VCI_IN2_GIRQ_POS	13u
#define MCHP_VCI_IN3_GIRQ_POS	14u

#define MCHP_VCI_OVRD_GIRQ_VAL	(1ul << MCHP_VCI_OVRD_GIRQ_POS)
#define MCHP_VCI_IN0_GIRQ_VAL	(1ul << MCHP_VCI_IN0_GIRQ_POS)
#define MCHP_VCI_IN1_GIRQ_VAL	(1ul << MCHP_VCI_IN1_GIRQ_POS)
#define MCHP_VCI_IN2_GIRQ_VAL	(1ul << MCHP_VCI_IN2_GIRQ_POS)
#define MCHP_VCI_IN3_GIRQ_VAL	(1ul << MCHP_VCI_IN3_GIRQ_POS)

/* VCI GIRQ aggregated NVIC input */
#define MCHP_VCI_OVRD_NVIC_AGGR	13u
#define MCHP_VCI_IN0_NVIC_AGGR	13u
#define MCHP_VCI_IN1_NVIC_AGGR	13u
#define MCHP_VCI_IN2_NVIC_AGGR	13u
#define MCHP_VCI_IN3_NVIC_AGGR	13u

/* VCI direct NVIC inputs */
#define MCHP_VCI_OVRD_NVIC_DIRECT	121u
#define MCHP_VCI_IN0_NVIC_DIRECT	122u
#define MCHP_VCI_IN1_NVIC_DIRECT	123u
#define MCHP_VCI_IN2_NVIC_DIRECT	124u
#define MCHP_VCI_IN3_NVIC_DIRECT	125u

/* VCI Config register */
#define MCHP_VCI_CFG_REG_OFS		0
#define MCHP_VCI_CFG_REG_MASK		0x00071F8Ful
#define MCHP_VCI_CFG_IN03_MASK		0x0Fu
#define MCHP_VCI_CFG_IN0_HI		0x01u
#define MCHP_VCI_CFG_IN1_HI		0x02u
#define MCHP_VCI_CFG_IN2_HI		0x04u
#define MCHP_VCI_CFG_IN3_HI		0x08u
#define MCHP_VCI_CFG_VPWR_POS		7
#define MCHP_VCI_CFG_VPWR_VTR		(0ul << 7)
#define MCHP_VCI_CFG_VPWR_VBAT		(1ul << 7)
#define MCHP_VCI_VCI_OVRD_IN_PIN	(1ul << 8)
#define MCHP_VCI_VCI_OUT_PIN		(1ul << 9)
#define MCHP_VCI_FW_CTRL_EN		(1ul << 10)
#define MCHP_VCI_FW_EXT_SEL		(1ul << 11)
#define MCHP_VCI_FILTER_BYPASS		(1ul << 12)
#define MCHP_VCI_WEEK_ALARM		(1ul << 16)
#define MCHP_VCI_RTC_ALARM		(1ul << 17)
#define MCHP_VCI_SYS_PWR_PRES		(1ul << 18)

/* VCI Latch Enable register */
#define MCHP_VCI_LE_REG_OFS		4
#define MCHP_VCI_LE_REG_MASK		0x0003000Ful
#define MCHP_VCI_LE_IN03_MASK		0x0Fu
#define MCHP_VCI_LE_IN0			0x01u
#define MCHP_VCI_LE_IN1			0x02u
#define MCHP_VCI_LE_IN2			0x04u
#define MCHP_VCI_LE_IN3			0x08u
#define MCHP_VCI_LE_WEEK_ALARM		(1ul << 16)
#define MCHP_VCI_LE_RTC_ALARM		(1ul << 17)

/* VCI Latch Resets register */
#define MCHP_VCI_LR_REG_OFS		8
#define MCHP_VCI_LR_REG_MASK		0x0003000Ful
#define MCHP_VCI_LR_IN03_MASK		0x0Fu
#define MCHP_VCI_LR_IN0			0x01u
#define MCHP_VCI_LR_IN1			0x02u
#define MCHP_VCI_LR_IN2			0x04u
#define MCHP_VCI_LR_IN3			0x08u
#define MCHP_VCI_LR_WEEK_ALARM		(1ul << 16)
#define MCHP_VCI_LR_RTC_ALARM		(1ul << 17)

/* VCI Input Enable register */
#define MCHP_VCI_INPUT_EN_REG_OFS	0x0C
#define MCHP_VCI_INPUT_EN_REG_MASK	0x0Ful
#define MCHP_VCI_INPUT_EN_IE30_MASK	0x0Fu
#define MCHP_VCI_INPUT_EN_IN0		0x01u
#define MCHP_VCI_INPUT_EN_IN1		0x02u
#define MCHP_VCI_INPUT_EN_IN2		0x04u
#define MCHP_VCI_INPUT_EN_IN3		0x08u

/* VCI Hold Off Count register */
#define MCHP_VCI_HDO_REG_OFS		0x10
#define MCHP_VCI_HDO_REG_MASK		0xFFul

/* VCI Polarity register */
#define MCHP_VCI_POL_REG_OFS		0x14
#define MCHP_VCI_POL_REG_MASK		0x0Ful
#define MCHP_VCI_POL_IE30_MASK		0x0Fu
#define MCHP_VCI_POL_ACT_HI_IN0		0x01u
#define MCHP_VCI_POL_ACT_HI_IN1		0x02u
#define MCHP_VCI_POL_ACT_HI_IN2		0x04u
#define MCHP_VCI_POL_ACT_HI_IN3		0x08u

/* VCI Positive Edge Detect register */
#define MCHP_VCI_PDET_REG_OFS		0x18
#define MCHP_VCI_PDET_REG_MASK		0x0Ful
#define MCHP_VCI_PDET_IE30_MASK		0x0Fu
#define MCHP_VCI_PDET_IN0		0x01u
#define MCHP_VCI_PDET_IN1		0x02u
#define MCHP_VCI_PDET_IN2		0x04u
#define MCHP_VCI_PDET_IN3		0x08u

/* VCI Positive Edge Detect register */
#define MCHP_VCI_NDET_REG_OFS		0x1C
#define MCHP_VCI_NDET_REG_MASK		0x0Ful
#define MCHP_VCI_NDET_IE30_MASK		0x0Fu
#define MCHP_VCI_NDET_IN0		0x01u
#define MCHP_VCI_NDET_IN1		0x02u
#define MCHP_VCI_NDET_IN2		0x04u
#define MCHP_VCI_NDET_IN3		0x08u

/* VCI Buffer Enable register */
#define MCHP_VCI_BEN_REG_OFS		0x20
#define MCHP_VCI_BEN_REG_MASK		0x0Ful
#define MCHP_VCI_BEN_IE30_MASK		0x0Fu
#define MCHP_VCI_BEN_IN0		0x01u
#define MCHP_VCI_BEN_IN1		0x02u
#define MCHP_VCI_BEN_IN2		0x04u
#define MCHP_VCI_BEN_IN3		0x08u

/**
  * @brief VBAT powered control interface (VCI)
  */

typedef struct vci_regs {
	__IOM uint32_t CONFIG; /*! (@ 0x0000) VCI Config register */
	__IOM uint32_t LATCH_EN; /*! (@ 0x0004) VCI Latch enable register */
	__IOM uint32_t LATCH_RST; /*! (@ 0x0008) VCI Latch resets register */
	__IOM uint32_t INPUT_EN; /*! (@ 0x000C) VCI Input enable register */
	__IOM uint32_t HOLD_OFF; /*! (@ 0x0010) VCI Hold off count register */
	__IOM uint32_t POLARITY; /*! (@ 0x0014) VCI Polarity register */
	__IOM uint32_t PEDGE_DET; /*! (@ 0x0018) VCI Positive edge detect register */
	__IOM uint32_t NEDGE_DET; /*! (@ 0x001C) VCI Negative edge detect register */
	__IOM uint32_t BUFFER_EN; /*! (@ 0x0020) VCI Buffer enable register */
} VCI_Type;


#endif	/* #ifndef _VBAT_H */
/* end vbat.h */
/**   @}
 */
