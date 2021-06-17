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

/** @file peci.h
 *MEC1501 Platform Environment Control Interface registers
 */
/** @defgroup MEC1501 Peripherals PECI
 */

#ifndef _PECI_H
#define _PECI_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 PECI 				=========== */
/* =========================================================================*/

#define MCHP_PECI_BASE_ADDR	0x40006400u

/*
 * PECI interrupts.
 */
#define MCHP_PECI_GIRQ		17u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_PECI_GIRQ_POS	0

#define MCHP_PECI_GIRQ_VAL	(1u << MCHP_PECI_GIRQ_POS)

/* PECI GIRQ aggregated NVIC input */
#define MCHP_PECI_NVIC_AGGR	9u

/* PECI direct NVIC inputs */
#define MCHP_PECI_NVIC_DIRECT	70u

/*
 * Write Data register
 */
#define MCHP_PECI_WR_DATA_REG_OFS	0U
#define MCHP_PECI_WR_DATA_MASK		0xffu

/*
 * Read Data register
 */
#define MCHP_PECI_RD_DATA_REG_OFS	4U
#define MCHP_PECI_RD_DATA_MASK		0xffu

/*
 * Control register
 */
#define MCHP_PECI_CTRL_REG_OFS		8U
#define MCHP_PECI_CTRL_MASK		0xe9u
#define MCHP_PECI_CTRL_PD_POS		0
#define MCHP_PECI_CTRL_PD		(1u << MCHP_PECI_CTRL_PD_POS)
#define MCHP_PECI_CTRL_RST_POS		3
#define MCHP_PECI_CTRL_RST		(1u << MCHP_PECI_CTRL_RST_POS)
#define MCHP_PECI_CTRL_FRST_POS		5
#define MCHP_PECI_CTRL_FRST		(1u << MCHP_PECI_CTRL_FRST_POS)
#define MCHP_PECI_CTRL_TXEN_POS		6
#define MCHP_PECI_CTRL_TXEN		(1u << MCHP_PECI_CTRL_TXEN_POS)
#define MCHP_PECI_CTRL_MIEN_POS		7
#define MCHP_PECI_CTRL_MIEN		(1u << MCHP_PECI_CTRL_MIEN_POS)

/*
 * Status 1 register. RW1C and read-only bits.
 */
#define MCHP_PECI_STS1_REG_OFS		0x0cu
#define MCHP_PECI_STS1_MASK		0xbfu
#define MCHP_PECI_STS1_BOF_POS		0
#define MCHP_PECI_STS1_BOF		(1u << MCHP_PECI_STS1_BOF_POS)
#define MCHP_PECI_STS1_EOF_POS		1
#define MCHP_PECI_STS1_EOF		(1u << MCHP_PECI_STS1_EOF_POS)
/* Error is read-only */
#define MCHP_PECI_STS1_ERR_POS		2
#define MCHP_PECI_STS1_ERR		(1u << MCHP_PECI_STS1_ERR_POS)
/* Ready is read-only */
#define MCHP_PECI_STS1_RDY_POS		3
#define MCHP_PECI_STS1_RDY		(1u << MCHP_PECI_STS1_RDY_POS)
#define MCHP_PECI_STS1_RDYLO_POS	4
#define MCHP_PECI_STS1_RDYLO		(1u << MCHP_PECI_STS1_RDYLO_POS)
#define MCHP_PECI_STS1_RDYHI_POS	5
#define MCHP_PECI_STS1_RDYHI		(1u << MCHP_PECI_STS1_RDYHI_POS)
/* MINT is read-only */
#define MCHP_PECI_STS1_MINT_POS		7
#define MCHP_PECI_STS1_MINT		(1u << MCHP_PECI_STS1_MINT_POS)

/*
 * Status 2 register. Read-only bits.
 */
#define MCHP_PECI_STS2_REG_OFS		0x10u
#define MCHP_PECI_STS2_MASK		0x8fu
#define MCHP_PECI_STS2_WFF_POS		0
#define MCHP_PECI_STS2_WFF		(1u << MCHP_PECI_STS2_WFF_POS)
#define MCHP_PECI_STS2_WFE_POS		1
#define MCHP_PECI_STS2_WFE		(1u << MCHP_PECI_STS2_WFE_POS)
#define MCHP_PECI_STS2_RFF_POS		2
#define MCHP_PECI_STS2_RFF		(1u << MCHP_PECI_STS2_RFF_POS)
#define MCHP_PECI_STS2_RFE_POS		3
#define MCHP_PECI_STS2_RFE		(1u << MCHP_PECI_STS2_RFE_POS)
#define MCHP_PECI_STS2_IDLE_POS	7
#define MCHP_PECI_STS2_IDLE		(1u << MCHP_PECI_STS2_IDLE_POS)

/*
 * Error register. R/W1C bits.
 */
#define MCHP_PECI_ERR_REG_OFS		0x14u
#define MCHP_PECI_ERR_MASK		0xf3u
#define MCHP_PECI_ERR_FERR_POS		0
#define MCHP_PECI_ERR_FERR		(1u << MCHP_PECI_ERR_FERR_POS)
#define MCHP_PECI_ERR_BERR_POS		1
#define MCHP_PECI_ERR_BERR		(1u << MCHP_PECI_ERR_BERR_POS)
#define MCHP_PECI_ERR_WROV_POS		4
#define MCHP_PECI_ERR_WROV		(1u << MCHP_PECI_ERR_WROV_POS)
#define MCHP_PECI_ERR_WRUN_POS		5
#define MCHP_PECI_ERR_WRUN		(1u << MCHP_PECI_ERR_WRUN_POS)
#define MCHP_PECI_ERR_RDOV_POS		6
#define MCHP_PECI_ERR_RDOV		(1u << MCHP_PECI_ERR_RDOV_POS)
#define MCHP_PECI_ERR_CLK_POS		7
#define MCHP_PECI_ERR_CLK		(1u << MCHP_PECI_ERR_CLK_POS)

/*
 * Interrupt Enable 1 register.
 */
#define MCHP_PECI_IEN1_REG_OFS		0x18u
#define MCHP_PECI_IEN1_MASK		0x37u
#define MCHP_PECI_IEN1_BIEN_POS		0
#define MCHP_PECI_IEN1_BIEN		(1u << MCHP_PECI_IEN1_BIEN_POS)
#define MCHP_PECI_IEN1_EIEN_POS		1
#define MCHP_PECI_IEN1_EIEN		(1u << MCHP_PECI_IEN1_EIEN_POS)
#define MCHP_PECI_IEN1_EREN_POS		2
#define MCHP_PECI_IEN1_EREN		(1u << MCHP_PECI_IEN1_EREN_POS)
#define MCHP_PECI_IEN1_RLEN_POS		4
#define MCHP_PECI_IEN1_RLEN		(1u << MCHP_PECI_IEN1_RLEN_POS)
#define MCHP_PECI_IEN1_RHEN_POS		5
#define MCHP_PECI_IEN1_RHEN		(1u << MCHP_PECI_IEN1_RHEN_POS)

/*
 * Interrupt Enable 2 register.
 */
#define MCHP_PECI_IEN2_REG_OFS		0x1cu
#define MCHP_PECI_IEN2_MASK		0x06u
#define MCHP_PECI_IEN2_ENWFE_POS	1
#define MCHP_PECI_IEN2_ENWFE		(1u << MCHP_PECI_IEN2_ENWFE_POS)
#define MCHP_PECI_IEN2_ENRFF_POS	2
#define MCHP_PECI_IEN2_ENRFF		(1u << MCHP_PECI_IEN2_ENRFF_POS)

/*
 * Optimal Bit Time LSB register.
 */
#define MCHP_PECI_OPT_BT_LSB_REG_OFS	0x20u
#define MCHP_PECI_OPT_BT_LSB_MASK	0xffu

/*
 * Optimal Bit Time MSB register.
 */
#define MCHP_PECI_OPT_BT_MSB_REG_OFS	0x24u
#define MCHP_PECI_OPT_BT_MSB_MASK	0xffu


/**
  * @brief Platform Enviroment Control Interface Registers (PECI)
  */
typedef struct peci_regs {
	__IOM uint8_t  WR_DATA; /*!< (@ 0x0000) PECI Write Data */
	uint8_t RSVD1[3];
	__IOM uint8_t  RD_DATA; /*!< (@ 0x0004) PECI Read data */
	uint8_t RSVD2[3];
	__IOM uint8_t  CONTROL;	/*!< (@ 0x0008) PECI Control */
	uint8_t RSVD3[3];
	__IOM uint8_t  STATUS1;	/*!< (@ 0x000c) PECI Status 1 */
	uint8_t RSVD4[3];
	__IOM uint8_t  STATUS2;	/*!< (@ 0x0010) PECI Status 2 */
	uint8_t RSVD5[3];
	__IOM uint8_t  ERROR;	/*!< (@ 0x0014) PECI Error */
	uint8_t RSVD6[3];
	__IOM uint8_t  INT_EN1;	/*!< (@ 0x0018) PECI Interrupt Enable 1 */
	uint8_t RSVD7[3];
	__IOM uint8_t  INT_EN2;	/*!< (@ 0x001c) PECI Interrupt Enable 2 */
	uint8_t RSVD8[3];
	__IOM uint8_t  OPT_BIT_TIME_LSB; /*!< (@ 0x0020) PECI Optimal Bit Time LSB */
	uint8_t RSVD9[3];
	__IOM uint8_t  OPT_BIT_TIME_MSB; /*!< (@ 0x0024) PECI Optimal Bit Time MSB */
	uint8_t RSVD10[87]; /* 0x25 - 0x7c */
} PECI_Type;

#endif	/* #ifndef _PECI_H */
/* end peci.h */
/**   @}
 */
