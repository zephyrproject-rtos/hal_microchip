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

/** @file acpi_ec.h
 *MEC1501 ACPI EC Registers
 */
/** @defgroup MEC1501 Peripherals ACPI_EC
 */

#ifndef _ACPI_EC_H
#define _ACPI_EC_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 ACPI_EC 		=================== */
/* =========================================================================*/

#define MCHP_ACPI_EC_BASE_ADDR		0x400f0800u

#define MCHP_ACPI_EC_NUM_INSTANCES	4u
#define MCHP_ACPI_EC_SPACING		0x0400u
#define MCHP_ACPI_EC_SPACING_PWROF2	10u

#define MCHP_ACPI_EC0_ADDR		0x400f0800u
#define MCHP_ACPI_EC1_ADDR		0x400f0C00u
#define MCHP_ACPI_EC2_ADDR		0x400f1000u
#define MCHP_ACPI_EC3_ADDR		0x400f1400u

/* 0 <= n < MCHP_ACPI_EC_NUM_INSTANCES */
#define MCHP_ACPI_EC_ADDR(n) (MCHP_ACPI_EC_BASE_ADDR +\
	((uint32_t)(n) << MCHP_ACPI_EC_SPACING_PWROF2))

/*
 * ACPI_EC interrupts
 */
#define MCHP_ACPI_EC_GIRQ		15u
#define MCHP_ACPI_EC_GIRQ_NVIC		7u

#define MCHP_ACPI_EC_0_IBF_NVIC		45u
#define MCHP_ACPI_EC_0_OBE_NVIC		46u
#define MCHP_ACPI_EC_0_IBF_GIRQ_POS	5u
#define MCHP_ACPI_EC_0_OBE_GIRQ_POS	6u
#define MCHP_ACPI_EC_0_IBF_GIRQ		BIT(5)
#define MCHP_ACPI_EC_0_OBE_GIRQ		BIT(6)

#define MCHP_ACPI_EC_1_IBF_NVIC		47u
#define MCHP_ACPI_EC_1_OBE_NVIC		48u
#define MCHP_ACPI_EC_1_IBF_GIRQ_POS	7u
#define MCHP_ACPI_EC_1_OBE_GIRQ_POS	8u
#define MCHP_ACPI_EC_1_IBF_GIRQ		BIT(7)
#define MCHP_ACPI_EC_1_OBE_GIRQ		BIT(8)

#define MCHP_ACPI_EC_2_IBF_NVIC		49u
#define MCHP_ACPI_EC_2_OBE_NVIC		50u
#define MCHP_ACPI_EC_2_IBF_GIRQ_POS	9u
#define MCHP_ACPI_EC_2_OBE_GIRQ_POS	10u
#define MCHP_ACPI_EC_2_IBF_GIRQ		BIT(9)
#define MCHP_ACPI_EC_2_OBE_GIRQ		BIT(10)

#define MCHP_ACPI_EC_3_IBF_NVIC		51u
#define MCHP_ACPI_EC_3_OBE_NVIC		52u
#define MCHP_ACPI_EC_3_IBF_GIRQ_POS	11u
#define MCHP_ACPI_EC_3_OBE_GIRQ_POS	12u
#define MCHP_ACPI_EC_3_IBF_GIRQ		BIT(11)
#define MCHP_ACPI_EC_3_OBE_GIRQ		BIT(12)

/* 0 <= n < MCHP_ACPI_EC_NUM_INSTANCES */
#define MCHP_ACPI_EC_IBF_NVIC(n)	(45u + ((uint32_t)(n) << 1))
#define MCHP_ACPI_EC_OBE_NVIC(n)	(46u + ((uint32_t)(n) << 1))
#define MCHP_ACPI_EC_IBF_GIRQ_POS(n)	(5u + ((uint32_t)(n) << 1))
#define MCHP_ACPI_EC_OBE_GIRQ_POS(n)	(6u + ((uint32_t)(n) << 1))
#define MCHP_ACPI_EC_IBF_GIRQ(n)	(1u << MCHP_ACPI_EC_IBF_GIRQ_POS(n))
#define MCHP_ACPI_EC_OBE_GIRQ(n)	(1u << MCHP_ACPI_EC_OBE_GIRQ_POS(n))


/*
 * EC_STS and OS_CMD_STS(read) bit definitions
 */
#define MCHP_ACPI_EC_STS_OBF_POS	0u
#define MCHP_ACPI_EC_STS_OBF		BIT(MCHP_ACPI_EC_STS_OBF_POS)
#define MCHP_ACPI_EC_STS_IBF_POS	1u
#define MCHP_ACPI_EC_STS_IBF		BIT(MCHP_ACPI_EC_STS_IBF_POS)
#define MCHP_ACPI_EC_STS_UD1A_POS	2u
#define MCHP_ACPI_EC_STS_UD1A		BIT(MCHP_ACPI_EC_STS_UD1A_POS)
#define MCHP_ACPI_EC_STS_CMD_POS	3u
#define MCHP_ACPI_EC_STS_CMD		BIT(MCHP_ACPI_EC_STS_CMD_POS)
#define MCHP_ACPI_EC_STS_BURST_POS	4u
#define MCHP_ACPI_EC_STS_BURST		BIT(MCHP_ACPI_EC_STS_BURST_POS)
#define MCHP_ACPI_EC_STS_SCI_POS	5u
#define MCHP_ACPI_EC_STS_SCI		BIT(MCHP_ACPI_EC_STS_SCI_POS)
#define MCHP_ACPI_EC_STS_SMI_POS	6u
#define MCHP_ACPI_EC_STS_SMI		BIT(MCHP_ACPI_EC_STS_SMI_POS)
#define MCHP_ACPI_EC_STS_UD0A_POS	7u
#define MCHP_ACPI_EC_STS_UD0A		BIT(MCHP_ACPI_EC_STS_UD0A_POS)

/*
 * EC_BYTE_CTRL and OS_BYTE_CTRL
 */
#define MCHP_ACPI_EC_BYTE_CTRL_4B_POS	0u
#define MCHP_ACPI_EC_BYTE_CTRL_4B_EN	BIT(MCHP_ACPI_EC_BYTE_CTRL_4B_POS)

/**
  * @brief ACPI EC Registers (ACPI_EC)
  */
typedef struct acpi_ec_regs {
	__IOM uint32_t OS_DATA;		/*!< (@ 0x0000) OS Data */
	__IOM uint8_t OS_CMD_STS;	/*!< (@ 0x0004) OS Command(WO), Status(RO) */
	__IOM uint8_t OS_BYTE_CTRL;	/*!< (@ 0x0005) OS Byte Control */
	uint8_t RSVD1[0x100 - 0x06];
	__IOM uint32_t EC2OS_DATA;	/*!< (@ 0x0100) EC to OS Data */
	__IOM uint8_t EC_STS;		/*!< (@ 0x0104) EC Status */
	__IOM uint8_t EC_BYTE_CTRL;	/*!< (@ 0x0105) EC Byte Control */
	uint8_t RSVD2[2];
	__IOM uint32_t OS2EC_DATA;	/*!< (@ 0x0108) OS to EC Data */
} ACPI_EC_Type;

/* =========================================================================*/
/* ================		 ACPI_PM1 		=================== */
/* =========================================================================*/

#define MCHP_ACPI_PM1_BASE_ADDR		0x400f1c00u

/*
 * ACPI_PM1 interrupts
 */
#define MCHP_ACPI_PM1_CTL_GIRQ	15u
#define MCHP_ACPI_PM1_EN_GIRQ	15u
#define MCHP_ACPI_PM1_STS_GIRQ	15u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_ACPI_PM1_CTL_GIRQ_POS	15u
#define MCHP_ACPI_PM1_EN_GIRQ_POS	16u
#define MCHP_ACPI_PM1_STS_GIRQ_POS	17u

#define MCHP_ACPI_PM1_CTL_GIRQ_VAL	BIT(MCHP_ACPI_PM1_CTL_GIRQ_POS)
#define MCHP_ACPI_PM1_EN_GIRQ_VAL	BIT(MCHP_ACPI_PM1_EN_GIRQ_POS)
#define MCHP_ACPI_PM1_STS_GIRQ_VAL	BIT(MCHP_ACPI_PM1_STS_GIRQ_POS)

/* VCI GIRQ aggregated NVIC input */
#define MCHP_ACPI_PM1_CTL_NVIC_AGGR	7u
#define MCHP_ACPI_PM1_EN_NVIC_AGGR	7u
#define MCHP_ACPI_PM1_STS_NVIC_AGGR	7u

/* VCI direct NVIC inputs */
#define MCHP_ACPI_PM1_CTL_NVIC_DIRECT	55u
#define MCHP_ACPI_PM1_EN_NVIC_DIRECT	56u
#define MCHP_ACPI_PM1_STS_NVIC_DIRECT	57u

/* ACPI_PM1 RT/EC Status 1 */
#define MCHP_ACPI_PM1_RT_STS1_REG_OFS		0u
#define MCHP_ACPI_PM1_EC_STS1_REG_OFS		0x0100u
#define MCHP_ACPI_PM1_STS1_REG_MASK		0u

/* ACPI_PM1 RT/EC Status 2 */
#define MCHP_ACPI_PM1_RT_STS2_REG_OFS		0x0001u
#define MCHP_ACPI_PM1_EC_STS2_REG_OFS		0x0101u
#define MCHP_ACPI_PM1_STS2_REG_MASK		0x008fu
#define MCHP_ACPI_PM1_STS2_PWRBTN		BIT(0)
#define MCHP_ACPI_PM1_STS2_SLPBTN		BIT(1)
#define MCHP_ACPI_PM1_STS2_RTC			BIT(2)
#define MCHP_ACPI_PM1_STS2_PWRBTNOR		BIT(3)
#define MCHP_ACPI_PM1_STS2_WAK			BIT(7)

/* ACPI_PM1 RT/EC Enable 1 */
#define MCHP_ACPI_PM1_RT_EN1_REG_OFS		0x0002u
#define MCHP_ACPI_PM1_EC_EN1_REG_OFS		0x0102u
#define MCHP_ACPI_PM1_EN1_REG_MASK		0u

/* ACPI_PM1 RT/EC Enable 2 */
#define MCHP_ACPI_PM1_RT_EN2_REG_OFS		0x0003u
#define MCHP_ACPI_PM1_EC_EN2_REG_OFS		0x0103u
#define MCHP_ACPI_PM1_EN2_REG_MASK		0x0007u
#define MCHP_ACPI_PM1_EN2_PWRBTN		BIT(0)
#define MCHP_ACPI_PM1_EN2_SLPBTN		BIT(1)
#define MCHP_ACPI_PM1_EN2_RTC			BIT(2)

/* ACPI_PM1 RT/EC Control 1 */
#define MCHP_ACPI_PM1_RT_CTRL1_REG_OFS		0x0004u
#define MCHP_ACPI_PM1_EC_CTRL1_REG_OFS		0x0104u
#define MCHP_ACPI_PM1_CTRL1_REG_MASK		0u

/* ACPI_PM1 RT/EC Control 2 */
#define MCHP_ACPI_PM1_RT_CTRL2_REG_OFS		0x0005u
#define MCHP_ACPI_PM1_EC_CTRL2_REG_OFS		0x0105u
#define MCHP_ACPI_PM1_CTRL2_REG_MASK		0x003eu
#define MCHP_ACPI_PM1_CTRL2_PWRBTNOR_EN		BIT(1)
#define MCHP_ACPI_PM1_CTRL2_SLP_TYPE_POS	2
#define MCHP_ACPI_PM1_CTRL2_SLP_TYPE_MASK	(0x03u << 2)
#define MCHP_ACPI_PM1_CTRL2_SLP_EN		BIT(5)

/* ACPI_PM1 RT/EC Control 21 */
#define MCHP_ACPI_PM1_RT_CTRL21_REG_OFS		0x0006u
#define MCHP_ACPI_PM1_EC_CTRL21_REG_OFS		0x0106u
#define MCHP_ACPI_PM1_CTRL21_REG_MASK		0u

/* ACPI_PM1 RT/EC Control 22 */
#define MCHP_ACPI_PM1_RT_CTRL22_REG_OFS		0x0007u
#define MCHP_ACPI_PM1_EC_CTRL22_REG_OFS		0x0107u
#define MCHP_ACPI_PM1_CTRL22_REG_MASK		0u

/* ACPI_PM1 EC PM Status register */
#define MCHP_ACPI_PM1_EC_PM_STS_REG_OFS		0x0110u
#define MCHP_ACPI_PM1_EC_PM_STS_REG_MASK	0x0001u
#define MCHP_ACPI_PM1_EC_PM_STS_SCI		0x0001u

/** @brief ACPI PM1 Registers (ACPI_PM1) */
typedef struct acpi_pm1_regs {
	__IOM uint8_t  RT_STS1;		/*!< (@ 0x0000) */
	__IOM uint8_t  RT_STS2;		/*!< (@ 0x0001) */
	__IOM uint8_t  RT_EN1;		/*!< (@ 0x0002) */
	__IOM uint8_t  RT_EN2;		/*!< (@ 0x0003) */
	__IOM uint8_t  RT_CTRL1;	/*!< (@ 0x0004) */
	__IOM uint8_t  RT_CTRL2;	/*!< (@ 0x0005) */
	__IOM uint8_t  RT_CTRL21;	/*!< (@ 0x0006) */
	__IOM uint8_t  RT_CTRL22;	/*!< (@ 0x0007) */
	uint8_t RSVD1[(0x100 - 0x008)];
	__IOM uint8_t  EC_STS1;		/*!< (@ 0x0100) */
	__IOM uint8_t  EC_STS2;		/*!< (@ 0x0101) */
	__IOM uint8_t  EC_EN1;		/*!< (@ 0x0102) */
	__IOM uint8_t  EC_EN2;		/*!< (@ 0x0103) */
	__IOM uint8_t  EC_CTRL1;	/*!< (@ 0x0104) */
	__IOM uint8_t  EC_CTRL2;	/*!< (@ 0x0105) */
	__IOM uint8_t  EC_CTRL21;	/*!< (@ 0x0106) */
	__IOM uint8_t  EC_CTRL22;	/*!< (@ 0x0107) */
	uint8_t RSVD2[(0x0110 - 0x0108)];
	__IOM uint8_t  EC_PM_STS;	/*!< (@ 0x0110) */
	uint8_t RSVD3[3];
} ACPI_PM1_Type;

#endif	/* #ifndef _ACPI_EC_H */
/* end acpi_ec.h */
/**   @}
 */
