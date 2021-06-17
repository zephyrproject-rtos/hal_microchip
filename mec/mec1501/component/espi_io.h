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

/** @file espi_io.h
 *MEC1501 eSPI IO Component definitions
 */
/** @defgroup MEC1501 Peripherals eSPI IO Component
 */

#ifndef _ESPI_IO_H
#define _ESPI_IO_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/*------------------------------------------------------------------*/

#define MCHP_ESPI_IO_BASE_ADDR	0x400F3400u

/* Offsets from base for various register groups */
#define MCHP_ESPI_IO_PC_OFS			0x0100u
#define MCHP_ESPI_IO_HOST_BAR_OFS	0x0120u
#define MCHP_ESPI_IO_LTR_OFS		0x0220u
#define MCHP_ESPI_IO_OOB_OFS		0x0240u
#define MCHP_ESPI_IO_FC_OFS			0x0280u
#define MCHP_ESPI_IO_CAP_OFS		0x02b0u
#define MCHP_ESPI_IO_SIRQ_OFS		0x03a0u

/*
 * ESPI IO Component interrupts
 */
#define MCHP_ESPI_IO_GIRQ		19u
#define MCHP_ESPI_IO_GIRQ_NVIC	11u

/* Direct mode NVIC inputs */
#define MCHP_ESPI_PC_NVIC		103u
#define MCHP_ESPI_BM1_NVIC		104u
#define MCHP_ESPI_BM2_NVIC		105u
#define MCHP_ESPI_LTR_NVIC		106u
#define MCHP_ESPI_OOB_UP_NVIC	107u
#define MCHP_ESPI_OOB_DN_NVIC	108u
#define MCHP_ESPI_FC_NVIC		109u
#define MCHP_ESPI_ESPI_RST_NVIC	110u
#define MCHP_ESPI_VW_EN_NVIC	156u

/* GIRQ Source, Enable_Set/Clr, Result registers bit positions */
#define MCHP_ESPI_PC_GIRQ_POS		0
#define MCHP_ESPI_BM1_GIRQ_POS		1
#define MCHP_ESPI_BM2_GIRQ_POS		2
#define MCHP_ESPI_LTR_GIRQ_POS		3
#define MCHP_ESPI_OOB_UP_GIRQ_POS	4
#define MCHP_ESPI_OOB_DN_GIRQ_POS	5
#define MCHP_ESPI_FC_GIRQ_POS		6
#define MCHP_ESPI_ESPI_RST_GIRQ_POS	7
#define MCHP_ESPI_VW_EN_GIRQ_POS	8
/*
 * !!!! NOTE !!!!
 * eSPI SAF Done and Error interrupt signals do not
 * have direct mode NVIC connections.
 * GIRQ19 cannot be configured for direct mode unless
 * SAF interrupt are not used.
 */
#define MCHP_ESPI_SAF_DONE_GIRQ_POS	9
#define MCHP_ESPI_SAF_ERR_GIRQ_POS	10

#define MCHP_ESPI_PC_GIRQ_VAL		BIT(0)
#define MCHP_ESPI_BM1_GIRQ_VAL		BIT(1)
#define MCHP_ESPI_BM2_GIRQ_VAL		BIT(2)
#define MCHP_ESPI_LTR_GIRQ_VAL		BIT(3)
#define MCHP_ESPI_OOB_UP_GIRQ_VAL	BIT(4)
#define MCHP_ESPI_OOB_DN_GIRQ_VAL	BIT(5)
#define MCHP_ESPI_FC_GIRQ_VAL		BIT(6)
#define MCHP_ESPI_ESPI_RST_GIRQ_VAL	BIT(7)
#define MCHP_ESPI_VW_EN_GIRQ_VAL	BIT(8)
#define MCHP_ESPI_SAF_DONE_GIRQ_VAL	BIT(9)
#define MCHP_ESPI_SAF_ERR_GIRQ_VAL	BIT(10)

/* eSPI Global Capabilities 0 */
#define MCHP_ESPI_GBL_CAP0_MASK		0x0fu
#define MCHP_ESPI_GBL_CAP0_PC_SUPP	BIT(0)
#define MCHP_ESPI_GBL_CAP0_VW_SUPP	BIT(1)
#define MCHP_ESPI_GBL_CAP0_OOB_SUPP	BIT(2)
#define MCHP_ESPI_GBL_CAP0_FC_SUPP	BIT(3)

/* eSPI Global Capabilities 1 */
#define MCHP_ESPI_GBL_CAP1_MASK			0xffu
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_POS		0u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_MASK	0x07u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_20M		0x00u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_25M		0x01u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_33M		0x02u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_50M		0x03u
#define MCHP_ESPI_GBL_CAP1_MAX_FREQ_66M		0x04u
#define MCHP_ESPI_GBL_CAP1_ALERT_POS		3	/* Read-Only */
#define MCHP_ESPI_GBL_CAP1_ALERT_DED_PIN \
	(1u << (MCHP_ESPI_GBL_CAP1_ALERT_POS))
#define MCHP_ESPI_GBL_CAP1_ALERT_ON_IO1 \
	(0u << (MCHP_ESPI_GBL_CAP1_ALERT_POS))
#define MCHP_ESPI_GBL_CAP1_IO_MODE_POS		4
#define MCHP_ESPI_GBL_CAP1_IO_MODE_MASK0	0x03u
#define MCHP_ESPI_GBL_CAP1_IO_MODE_MASK		\
	((MCHP_ESPI_GBL_CAP1_IO_MODE_MASK0) <<	\
	 (MCHP_ESPI_GBL_CAP1_IO_MODE_POS))
#define MCHP_ESPI_GBL_CAP1_IO_MODE0_1		0u
#define MCHP_ESPI_GBL_CAP1_IO_MODE0_12		1u
#define MCHP_ESPI_GBL_CAP1_IO_MODE0_14		2u
#define MCHP_ESPI_GBL_CAP1_IO_MODE0_124		3u
#define MCHP_ESPI_GBL_CAP1_IO_MODE_1		\
	((MCHP_ESPI_GBL_CAP1_IO_MODE0_1) <<	\
	 (MCHP_ESPI_GBL_CAP1_IO_MODE_POS))
#define MCHP_ESPI_GBL_CAP1_IO_MODE_12		\
	((MCHP_ESPI_GBL_CAP1_IO_MODE0_12) <<	\
	 (MCHP_ESPI_GBL_CAP1_IO_MODE_POS))
#define MCHP_ESPI_GBL_CAP1_IO_MODE_14		\
	((MCHP_ESPI_GBL_CAP1_IO_MODE0_14) <<	\
	 (MCHP_ESPI_GBL_CAP1_IO_MODE_POS))
#define MCHP_ESPI_GBL_CAP1_IO_MODE_124		\
	((MCHP_ESPI_GBL_CAP1_IO_MODE0_124) <<	\
	 (MCHP_ESPI_GBL_CAP1_IO_MODE_POS))
/*
 * Support Open Drain ALERT pin configuration
 * EC sets this bit if it can support open-drain ESPI_ALERT#
 */
#define MCHP_ESPI_GBL_CAP1_ALERT_ODS_POS	6u
#define MCHP_ESPI_GBL_CAP1_ALERT_ODS		\
	(1u << (MCHP_ESPI_GBL_CAP1_ALERT_ODS_POS))

/*
 * Read-Only ALERT Open Drain select.
 * If EC has indicated it can support open-drain ESPI_ALERT# then
 * the Host can enable open-drain ESPI_ALERT# by sending a configuraiton
 * message. This read-only bit relects the configuration selection.
 */
#define MCHP_ESPI_GBL_CAP1_ALERT_ODS_SEL_POS	7u
#define MCHP_ESPI_GBL_CAP1_ALERT_SEL_ODS	\
	(1u << (MCHP_ESPI_GBL_CAP1_ALERT_ODS_SEL_POS))

/* Peripheral Channel(PC) Capabilites */
#define MCHP_ESPI_PC_CAP_MASK			0x07u
#define MCHP_ESPI_PC_CAP_MAX_PLD_SZ_MASK	0x07u
#define MCHP_ESPI_PC_CAP_MAX_PLD_SZ_64		0x01u
#define MCHP_ESPI_PC_CAP_MAX_PLD_SZ_128		0x02u
#define MCHP_ESPI_PC_CAP_MAX_PLD_SZ_256		0x03u

/* Virtual Wire(VW) Capabilities */
#define MCHP_ESPI_VW_CAP_MASK			0x3fu
#define MCHP_ESPI_VW_CAP_MAX_VW_CNT_MASK	0x3fu

/* Out-of-Band(OOB) Capabilities */
#define MCHP_ESPI_OOB_CAP_MASK			0x07u
#define MCHP_ESPI_OOB_CAP_MAX_PLD_SZ_MASK	0x07u
#define MCHP_ESPI_OOB_CAP_MAX_PLD_SZ_73		0x01u
#define MCHP_ESPI_OOB_CAP_MAX_PLD_SZ_137	0x02u
#define MCHP_ESPI_OOB_CAP_MAX_PLD_SZ_265	0x03u

/* Flash Channel(FC) Capabilities */
#define MCHP_ESPI_FC_CAP_MASK			0xffu
#define MCHP_ESPI_FC_CAP_MAX_PLD_SZ_MASK	0x07u
#define MCHP_ESPI_FC_CAP_MAX_PLD_SZ_64		0x01u
#define MCHP_ESPI_FC_CAP_SHARE_POS		3u
#define MCHP_ESPI_FC_CAP_SHARE_MASK0		0x03u
#define MCHP_ESPI_FC_CAP_SHARE_MASK		\
	((MCHP_ESPI_FC_CAP_SHARE_MASK0) <<	\
	 (MCHP_ESPI_FC_CAP_SHARE_POS))
#define MCHP_ESPI_FC_CAP_SHARE_MAF_ONLY		0
#define MCHP_ESPI_FC_CAP_SHARE_MAF2_ONLY	\
	(1u << (MCHP_ESPI_FC_CAP_SHARE_POS))
#define MCHP_ESPI_FC_CAP_SHARE_SAF_ONLY		\
	(2u << (MCHP_ESPI_FC_CAP_SHARE_POS))
#define MCHP_ESPI_FC_CAP_SHARE_MAF_SAF		\
	(3u << (MCHP_ESPI_FC_CAP_SHARE_POS))
#define MCHP_ESPI_FC_CAP_MAX_RD_SZ_POS		5u
#define MCHP_ESPI_FC_CAP_MAX_RD_SZ_MASK0	0x07u
#define MCHP_ESPI_FC_CAP_MAX_RD_SZ_MASK		\
	((MCHP_ESPI_FC_CAP_MAX_RD_SZ_MASK0) <<	\
	 (MCHP_ESPI_FC_CAP_MAX_RD_SZ_POS))
#define MCHP_ESPI_FC_CAP_MAX_RD_SZ_64		\
	(1u << (MCHP_ESPI_FC_CAP_MAX_RD_SZ_POS))

/* PC Ready */
#define MCHP_ESPI_PC_READY_MASK		0x01u;
#define MCHP_ESPI_PC_READY		0x01u;

/* OOB Ready */
#define MCHP_ESPI_OOB_READY_MASK	0x01u;
#define MCHP_ESPI_OOB_READY		0x01u;

/* FC Ready */
#define MCHP_ESPI_FC_READY_MASK		0x01u;
#define MCHP_ESPI_FC_READY		0x01u;

/* ESPI_RESET# Interrupt Status */
#define MCHP_ESPI_RST_ISTS_MASK		0x03u;
#define MCHP_ESPI_RST_ISTS_POS		0u
#define MCHP_ESPI_RST_ISTS		(1u << (MCHP_ESPI_RST_ISTS_POS))
#define MCHP_ESPI_RST_ISTS_PIN_RO_POS	1u
#define MCHP_ESPI_RST_ISTS_PIN_RO_HI \
	(1u << (MCHP_ESPI_RST_ISTS_PIN_RO_POS))

/* ESPI_RESET# Interrupt Enable */
#define MCHP_ESPI_RST_IEN_MASK		0x01u
#define MCHP_ESPI_RST_IEN		0x01u

/* eSPI Platform Reset Source */
#define MCHP_ESPI_PLTRST_SRC_MASK	0x01u
#define MCHP_ESPI_PLTRST_SRC_POS	0
#define MCHP_ESPI_PLTRST_SRC_IS_PIN	0x01u
#define MCHP_ESPI_PLTRST_SRC_IS_VW	0x00u

/* VW Ready */
#define MCHP_ESPI_VW_READY_MASK		0x01u
#define MCHP_ESPI_VW_READY		0x01u

/* SAF Erase Block size */
#define MCHP_ESPI_SERASE_SZ_1K_BITPOS	0
#define MCHP_ESPI_SERASE_SZ_2K_BITPOS	1
#define MCHP_ESPI_SERASE_SZ_4K_BITPOS	2
#define MCHP_ESPI_SERASE_SZ_8K_BITPOS	3
#define MCHP_ESPI_SERASE_SZ_16K_BITPOS	4
#define MCHP_ESPI_SERASE_SZ_32K_BITPOS	5
#define MCHP_ESPI_SERASE_SZ_64K_BITPOS	6
#define MCHP_ESPI_SERASE_SZ_128K_BITPOS	7
#define MCHP_ESPI_SERASE_SZ_1K		BIT(0)
#define MCHP_ESPI_SERASE_SZ_2K		BIT(1)
#define MCHP_ESPI_SERASE_SZ_4K		BIT(2)
#define MCHP_ESPI_SERASE_SZ_8K		BIT(3)
#define MCHP_ESPI_SERASE_SZ_16K		BIT(4)
#define MCHP_ESPI_SERASE_SZ_32K		BIT(5)
#define MCHP_ESPI_SERASE_SZ_64K		BIT(6)
#define MCHP_ESPI_SERASE_SZ_128K	BIT(7)
#define MCHP_ESPI_SERASE_SZ(bitpos)	BIT((bitpos)+10)

/* VW Error Status */
#define MCHP_ESPI_VW_ERR_STS_MASK		0x33u
#define MCHP_ESPI_VW_ERR_STS_FATAL_POS		0u
#define MCHP_ESPI_VW_ERR_STS_FATAL_RO		\
	BIT(MCHP_ESPI_VW_ERR_STS_FATAL_POS)
#define MCHP_ESPI_VW_ERR_STS_FATAL_CLR_POS	1u
#define MCHP_ESPI_VW_ERR_STS_FATAL_CLR_WO	\
	BIT(MCHP_ESPI_VW_ERR_STS_FATAL_CLR_POS)
#define MCHP_ESPI_VW_ERR_STS_NON_FATAL_POS	4u
#define MCHP_ESPI_VW_ERR_STS_NON_FATAL_RO	\
	BIT(MCHP_ESPI_VW_ERR_STS_NON_FATAL_POS)
#define MCHP_ESPI_VW_ERR_STS_NON_FATAL_CLR_POS	5u
#define MCHP_ESPI_VW_ERR_STS_NON_FATAL_CLR_WO	\
	BIT(MCHP_ESPI_VW_ERR_STS_NON_FATAL_CLR_POS)

/* VW Channel Enable Status */
#define MCHP_ESPI_VW_EN_STS_MASK	0x01u
#define MCHP_ESPI_VW_EN_STS_RO		0x01u

/**
  * @brief ESPI Host interface IO Component (MCHP_ESPI_IO)
  */

/*
 * ESPI_IO_CAP - eSPI IO capabilities, channel ready, activate,
 * registers @ 0x400F36B0
 * VW_EN_STS (@ 0x36B0) Virtual Wire Enable Status
 * CAP_ID (@ 0x36E0) Capabilities ID
 * GLB_CAP0 (@ 0x36E1) Global Capabilities 0
 * GLB_CAP1 (@ 0x36E2) Global Capabilities 1
 * PC_CAP (@ 0x36E3) Periph Chan Capabilities
 * VW_CAP (@ 0x36E4) Virtual Wire Chan Capabilities
 * OOB_CAP (@ 0x36E5) OOB Chan Capabilities
 * FC_CAP (@ 0x36E6) Flash Chan Capabilities
 * PC_RDY (@ 0x36E7) PC ready
 * OOB_RDY (@ 0x36E8) OOB ready
 * FC_RDY (@ 0x36E9) OOB ready
 * ERST_STS (@ 0x36EA) eSPI Reset interrupt status
 * ERST_IEN (@ 0x36EB) eSPI Reset interrupt enable
 * PLTRST_SRC (@ 0x36EC) Platform Reset Source
 * VW_RDY (@ 0x36ED) VW ready
 * FC_SERBZ (@ 0x36EE) S-Erase Block Size
 * VW_ERR_STS (@ 0x37F0) IO Virtual Wire Error
 */
typedef struct espi_io_cap_regs {
	__IOM uint32_t VW_EN_STS;
	uint8_t RSVD1[0x36e0 - 0x36b4];
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
	uint8_t RSVD2[0x37f0u - 0x36ee];
	__IOM uint32_t VW_ERR_STS;
} ESPI_IO_CAP_Type;

/*
 * MCHP_ESPI_IO_PC - eSPI IO Peripheral Channel registers @ 0x400F3500
 */

/*
 * Peripheral Channel Last Cycle length, type, and tag.
 */
#define MCHP_ESPI_PC_LC_LEN_POS		0u
#define MCHP_ESPI_PC_LC_LEN_MASK0	0x0fffu
#define MCHP_ESPI_PC_LC_LEN_MASK	0x0fffu
#define MCHP_ESPI_PC_LC_TYPE_POS	12u
#define MCHP_ESPI_PC_LC_TYPE_MASK0	0xffu
#define MCHP_ESPI_PC_LC_TYPE_MASK	(0xffu << 12)
#define MCHP_ESPI_PC_LC_TAG_POS		20u
#define MCHP_ESPI_PC_LC_TAG_MASK0	0x0fu
#define MCHP_ESPI_PC_LC_TAG_MASK	(0x0fu << 20)

/*
 * Peripheral Channel Status
 * Bus error, Channel enable change, and Bus master enable change.
 */
#define MCHP_ESPI_PC_STS_BUS_ERR_POS	16u
#define MCHP_ESPI_PC_STS_BUS_ERR	BIT(16)	/* RW1C */
#define MCHP_ESPI_PC_STS_EN_POS		24u
#define MCHP_ESPI_PC_STS_EN		BIT(24)	/* RO */
#define MCHP_ESPI_PC_STS_EN_CHG_POS	25u
#define MCHP_ESPI_PC_STS_EN_CHG		BIT(25)	/* RW1C */
#define MCHP_ESPI_PC_STS_BM_EN_POS	27u
#define MCHP_ESPI_PC_STS_BM_EN		BIT(27)	/* RO */
#define MCHP_ESPI_PC_STS_BM_EN_CHG_POS	28u
#define MCHP_ESPI_PC_STS_BM_EN_CHG	BIT(28)	/* RW1C */

/*
 * Peripheral Channel Interrupt Enables for
 * Bus error, Channel enable change, and Bus master enable change.
 * PC_LC_ADDR_LSW (@ 0x0000) Periph Chan Last Cycle address LSW
 * PC_LC_ADDR_MSW (@ 0x0004) Periph Chan Last Cycle address MSW
 * PC_LC_LEN_TYPE_TAG (@ 0x0008) Periph Chan Last Cycle length/type/tag
 * PC_ERR_ADDR_LSW (@ 0x000C) Periph Chan Error Address LSW
 * PC_ERR_ADDR_MSW (@ 0x0010) Periph Chan Error Address MSW
 * PC_STATUS (@ 0x0014) Periph Chan Status
 * PC_IEN (@ 0x0018) Periph Chan IEN
 */
#define MCHP_ESPI_PC_IEN_BUS_ERR_POS	16u
#define MCHP_ESPI_PC_IEN_BUS_ERR	BIT(16)
#define MCHP_ESPI_PC_IEN_EN_CHG_POS	25u
#define MCHP_ESPI_PC_IEN_EN_CHG		BIT(25)
#define MCHP_ESPI_PC_IEN_BM_EN_CHG_POS	28u
#define MCHP_ESPI_PC_IEN_BM_EN_CHG	BIT(28)

typedef struct espi_io_pc_regs
{
	__IOM uint32_t PC_LC_ADDR_LSW;
	__IOM uint32_t PC_LC_ADDR_MSW;
	__IOM uint32_t PC_LC_LEN_TYPE_TAG;
	__IOM uint32_t PC_ERR_ADDR_LSW;
	__IOM uint32_t PC_ERR_ADDR_MSW;
	__IOM uint32_t PC_STATUS;
	__IOM uint32_t PC_IEN;
} ESPI_IO_PC_Type;

/* ESPI_IO_LTR - eSPI IO LTR registers  */
#define MCHP_ESPI_LTR_STS_TX_DONE_POS	0u
#define MCHP_ESPI_LTR_STS_TX_DONE	BIT(0)	/* RW1C */
#define MCHP_ESPI_LTR_STS_OVRUN_POS	3u
#define MCHP_ESPI_LTR_STS_OVRUN		BIT(3)	/* RW1C */
#define MCHP_ESPI_LTR_STS_HDIS_POS	4u
#define MCHP_ESPI_LTR_STS_HDIS		BIT(4)	/* RW1C */
#define MCHP_ESPI_LTR_STS_TX_BUSY_POS	8u
#define MCHP_ESPI_LTR_STS_TX_BUSY	BIT(8)	/* RO */

#define MCHP_ESPI_LTR_IEN_TX_DONE_POS	0u
#define MCHP_ESPI_LTR_IEN_TX_DONE	BIT(0)

#define MCHP_ESPI_LTR_CTRL_START_POS	0u
#define MCHP_ESPI_LTR_CTRL_START	BIT(0)
#define MCHP_ESPI_LTR_CTRL_TAG_POS	8u
#define MCHP_ESPI_LTR_CTRL_TAG_MASK0	0x0fu
#define MCHP_ESPI_LTR_CTRL_TAG_MASK	(0x0fu << 8)

#define MCHP_ESPI_LTR_MSG_VAL_POS	0u
#define MCHP_ESPI_LTR_MSG_VAL_MASK0	0x3ffu
#define MCHP_ESPI_LTR_MSG_VAL_MASK	(0x3ffu << 0)
#define MCHP_ESPI_LTR_MSG_SC_POS	10u
#define MCHP_ESPI_LTR_MSG_SC_MASK0	0x07u
#define MCHP_ESPI_LTR_MSG_SC_MASK	(0x07u << 10)
#define MCHP_ESPI_LTR_MSG_RT_POS	13u
#define MCHP_ESPI_LTR_MSG_RT_MASK0	0x03u
#define MCHP_ESPI_LTR_MSG_RT_MASK	(0x03u << 13)
/* eSPI specification indicates RT field must be 00b */
#define MCHP_ESPI_LTR_MSG_RT_VAL	0
#define MCHP_ESPI_LTR_MSG_REQ_POS	15u
/* inifinite latency(default) */
#define MCHP_ESPI_LTR_MSG_REQ_INF	0
/* latency computed from VAL and SC(scale) fields */
#define MCHP_ESPI_LTR_MSG_REQ_VAL	BIT(15)

/*
 * eSPI IO Component LTR registers @ 0x400F3620
 * LTR_STS (@ 0x0000) LTR peripheral ptatus
 * LTR_IEN (@ 0x0004) LTR peripheral interrupt enable
 * LTR_CTRL (@ 0x0008) LTR peripheral control
 * LTR_MSG (@ 0x000C) LTR peripheral message
 */
typedef struct espi_io_ltr_regs
{
	__IOM uint32_t LTR_STS;
	__IOM uint32_t LTR_IEN;
	__IOM uint32_t LTR_CTRL;
	__IOM uint32_t LTR_MSG;
} ESPI_IO_LTR_Type;

/* ESPI_IO_OOB - eSPI IO OOB registers  */
#define MCHP_ESPI_OOB_RX_ADDR_LSW_MASK	0xfffffffcu
#define MCHP_ESPI_OOB_TX_ADDR_LSW_MASK	0xfffffffcu

/* RX_LEN register */
/* Number of bytes received (RO) */
#define MCHP_ESPI_OOB_RX_LEN_POS	0u
#define MCHP_ESPI_OOB_RX_LEN_MASK	0x1fffu
/* Recieve buffer length field (RW) */
#define MCHP_ESPI_OOB_RX_BUF_LEN_POS	16u
#define MCHP_ESPI_OOB_RX_BUF_LEN_MASK0	0x1fffu
#define MCHP_ESPI_OOB_RX_BUF_LEN_MASK	(0x1fffu << 16)

/* TX_LEN register */
#define MCHP_ESPI_OOB_TX_MSG_LEN_POS	0u
#define MCHP_ESPI_OOB_TX_MSG_LEN_MASK	0x1fffu

/* RX_CTRL */
/* Set AVAIL bit to indicate SRAM Buffer and size has been configured */
#define MCHP_ESPI_OOB_RX_CTRL_AVAIL_POS		0u
#define MCHP_ESPI_OOB_RX_CTRL_AVAIL		BIT(0)	/* WO */
#define MCHP_ESPI_OOB_RX_CTRL_CHEN_POS		9u
#define MCHP_ESPI_OOB_RX_CTRL_CHEN		BIT(9)	/* RO */
/* Copy of eSPI OOB Capabilities max. payload size */
#define MCHP_ESPI_OOB_RX_CTRL_MAX_SZ_POS	16u
#define MCHP_ESPI_OOB_RX_CTRL_MAX_SZ_MASK0	0x07u
#define MCHP_ESPI_OOB_RX_CTRL_MAX_SZ_MASK	(0x07u << 16)	/* RO */

/* RX_IEN */
#define MCHP_ESPI_OOB_RX_IEN_POS	0u
#define MCHP_ESPI_OOB_RX_IEN		BIT(0)

/* RX_STS */
#define MCHP_ESPI_OOB_RX_STS_DONE_POS	0u
#define MCHP_ESPI_OOB_RX_STS_DONE	BIT(0)	/* RW1C */
#define MCHP_ESPI_OOB_RX_STS_IBERR_POS	1u
#define MCHP_ESPI_OOB_RX_STS_IBERR	BIT(1)	/* RW1C */
#define MCHP_ESPI_OOB_RX_STS_OVRUN_POS	2u
#define MCHP_ESPI_OOB_RX_STS_OVRUN	BIT(2)	/* RW1C */
#define MCHP_ESPI_OOB_RX_STS_RXEN_POS	3u
#define MCHP_ESPI_OOB_RX_STS_RXEN	BIT(3)	/* RO */
#define MCHP_ESPI_OOB_RX_STS_TAG_POS	8u
#define MCHP_ESPI_OOB_RX_STS_TAG_MASK0	0x0fu
#define MCHP_ESPI_OOB_RX_STS_TAG_MASK	(0x0fu << 8)	/* RO */

#define MCHP_ESPI_OOB_RX_STS_ALL_RW1C	0x07u
#define MCHP_ESPI_OOB_RX_STS_ALL	0x0fu

/* TX_CTRL */
#define MCHP_ESPI_OOB_TX_CTRL_START_POS	0u
#define MCHP_ESPI_OOB_TX_CTRL_START	BIT(0)	/* WO */
#define MCHP_ESPI_OOB_TX_CTRL_TAG_POS	8u
#define MCHP_ESPI_OOB_TX_CTRL_TAG_MASK0	0x0fu
#define MCHP_ESPI_OOB_TX_CTRL_TAG_MASK	(0x0fu << 8)	/* RW */

/* TX_IEN */
#define MCHP_ESPI_OOB_TX_IEN_DONE_POS	0u
#define MCHP_ESPI_OOB_TX_IEN_DONE	BIT(0)
#define MCHP_ESPI_OOB_TX_IEN_CHG_EN_POS	1u
#define MCHP_ESPI_OOB_TX_IEN_CHG_EN	BIT(1)
#define MCHP_ESPI_OOB_TX_IEN_ALL	0x03u

/* TX_STS */
#define MCHP_ESPI_OOB_TX_STS_DONE_POS	0u
#define MCHP_ESPI_OOB_TX_STS_DONE	BIT(0)	/* RW1C */
#define MCHP_ESPI_OOB_TX_STS_CHG_EN_POS	1u
#define MCHP_ESPI_OOB_TX_STS_CHG_EN	BIT(1)	/* RW1C */
#define MCHP_ESPI_OOB_TX_STS_IBERR_POS	2u
#define MCHP_ESPI_OOB_TX_STS_IBERR	BIT(2)	/* RW1C */
#define MCHP_ESPI_OOB_TX_STS_OVRUN_POS	3u
#define MCHP_ESPI_OOB_TX_STS_OVRUN	BIT(3)	/* RW1C */
#define MCHP_ESPI_OOB_TX_STS_BADREQ_POS	5u
#define MCHP_ESPI_OOB_TX_STS_BADREQ	BIT(5)	/* RW1C */
#define MCHP_ESPI_OOB_TX_STS_BUSY_POS	8u
#define MCHP_ESPI_OOB_TX_STS_BUSY	BIT(8)	/* RO */
/* Read-only copy of OOB Channel Enabled bit */
#define MCHP_ESPI_OOB_TX_STS_CHEN_POS	9u
#define MCHP_ESPI_OOB_TX_STS_CHEN	BIT(9)	/* RO */

#define MCHP_ESPI_OOB_TX_STS_ALL_RW1C	0x2fu

/*
 * eSPI IO Component OOB registers @ 0x400F3640
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
typedef struct espi_io_oob_regs
{
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

/* MCHP_ESPI_IO_FC - eSPI IO Flash channel registers  */
/* MEM_ADDR_LSW */
#define MCHP_ESPI_FC_MEM_ADDR_LSW_MASK	0xfffffffcu

/* CTRL */
#define MCHP_ESPI_FC_CTRL_START_POS	0u
#define MCHP_ESPI_FC_CTRL_START		BIT(0)	/* WO */
#define MCHP_ESPI_FC_CTRL_FUNC_POS	2u
#define MCHP_ESPI_FC_CTRL_FUNC_MASK0	0x03u
#define MCHP_ESPI_FC_CTRL_FUNC_MASK	(0x03u << 2)	/* RW */
#define MCHP_ESPI_FC_CTRL_RD0		0x00u
#define MCHP_ESPI_FC_CTRL_WR0		0x01u
#define MCHP_ESPI_FC_CTRL_ERS0		0x02u
#define MCHP_ESPI_FC_CTRL_ERL0		0x03u
#define MCHP_ESPI_FC_CTRL_FUNC(f)	\
	(((uint32_t)(f) & MCHP_ESPI_FC_CTRL_FUNC_MASK0)		\
	 << MCHP_ESPI_FC_CTRL_FUNC_POS)
#define MCHP_ESPI_FC_CTRL_TAG_POS	4u
#define MCHP_ESPI_FC_CTRL_TAG_MASK0	0x0fu
#define MCHP_ESPI_FC_CTRL_TAG_MASK	(0x0fu << 4)
#define MCHP_ESPI_FC_CTRL_TAG(t)	\
	(((uint32_t)(t) & MCHP_ESPI_FC_CTRL_TAG_MASK0)		\
	 << MCHP_ESPI_FC_CTRL_TAG_POS)
#define MCHP_ESPI_FC_CTRL_ABORT_POS	16u
#define MCHP_ESPI_FC_CTRL_ABORT		BIT(16)	/* WO */

/* IEN */
#define MCHP_ESPI_FC_IEN_DONE_POS	0u
#define MCHP_ESPI_FC_IEN_DONE		BIT(0)
#define MCHP_ESPI_FC_IEN_CHG_EN_POS	1u
#define MCHP_ESPI_FC_IEN_CHG_EN		BIT(1)

/* CFG */
#define MCHP_ESPI_FC_CFG_BUSY_POS	0u
#define MCHP_ESPI_FC_CFG_BUSY		BIT(0)	/* RO */
#define MCHP_ESPI_FC_CFG_ERBSZ_POS	2u
#define MCHP_ESPI_FC_CFG_ERBSZ_MASK0	0x07u
#define MCHP_ESPI_FC_CFG_ERBSZ_MASK	(0x07u << 2)	/* RO */
#define MCHP_ESPI_FC_CFG_ERBSZ_4K	(0x01u << 2)
#define MCHP_ESPI_FC_CFG_ERBSZ_64K	(0x02u << 2)
#define MCHP_ESPI_FC_CFG_ERBSZ_4K_64K	(0x03u << 2)
#define MCHP_ESPI_FC_CFG_ERBSZ_128K	(0x04u << 2)
#define MCHP_ESPI_FC_CFG_ERBSZ_256K	(0x05u << 2)
#define MCHP_ESPI_FC_CFG_MAXPLD_POS	8u
#define MCHP_ESPI_FC_CFG_MAXPLD_MASK0	0x07u
#define MCHP_ESPI_FC_CFG_MAXPLD_MASK	(0x07u << 8)	/* RO */
#define MCHP_ESPI_FC_CFG_MAXPLD_64B	(0x01u << 8)
#define MCHP_ESPI_FC_CFG_MAXPLD_128B	(0x02u << 8)
#define MCHP_ESPI_FC_CFG_MAXPLD_256B	(0x03u << 8)
#define MCHP_ESPI_FC_CFG_SAFS_SEL_POS	11u
#define MCHP_ESPI_FC_CFG_SAFS_SEL	(1u << 11)
#define MCHP_ESPI_FC_CFG_MAXRD_POS	12u
#define MCHP_ESPI_FC_CFG_MAXRD_MASK0	0x07u
#define MCHP_ESPI_FC_CFG_MAXRD_MASK	(0x07u << 12)	/* RO */
#define MCHP_ESPI_FC_CFG_MAXRD_64B	(0x01u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_128B	(0x02u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_256B	(0x03u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_512B	(0x04u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_1K	(0x05u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_2K	(0x06u << 12)
#define MCHP_ESPI_FC_CFG_MAXRD_4K	(0x07u << 12)
#define MCHP_ESPI_FC_CFG_FORCE_MS_POS	28u
#define MCHP_ESPI_FC_CFG_FORCE_MS_MASK0	0x03u
#define MCHP_ESPI_FC_CFG_FORCE_MS_MASK	(0x03u << 28)	/* RW */
/* Host (eSPI Master) can select MAFS or SAFS */
#define MCHP_ESPI_FC_CFG_FORCE_NONE	0
/* EC forces eSPI slave HW to only allow MAFS */
#define MCHP_ESPI_FC_CFG_FORCE_MAFS	(0x02u << 28)
/* EC forces eSPI slave HW to only allow SAFS */
#define MCHP_ESPI_FC_CFG_FORCE_SAFS	(0x03u << 28)

/* STS */
#define MCHP_ESPI_FC_STS_CHAN_EN_POS		0u
#define MCHP_ESPI_FC_STS_CHAN_EN		BIT(0)	/* RO */
#define MCHP_ESPI_FC_STS_CHAN_EN_CHG_POS	1u
#define MCHP_ESPI_FC_STS_CHAN_EN_CHG		BIT(1)	/* RW1C */
#define MCHP_ESPI_FC_STS_DONE_POS		2u
#define MCHP_ESPI_FC_STS_DONE			BIT(2)	/* RW1C */
#define MCHP_ESPI_FC_STS_MDIS_POS		3u
#define MCHP_ESPI_FC_STS_MDIS			BIT(3)	/* RW1C */
#define MCHP_ESPI_FC_STS_IBERR_POS		4u
#define MCHP_ESPI_FC_STS_IBERR			BIT(4)	/* RW1C */
#define MCHP_ESPI_FC_STS_ABS_POS		5u
#define MCHP_ESPI_FC_STS_ABS			BIT(5)	/* RW1C */
#define MCHP_ESPI_FC_STS_OVRUN_POS		6u
#define MCHP_ESPI_FC_STS_OVRUN			BIT(6)	/* RW1C */
#define MCHP_ESPI_FC_STS_INC_POS		7u
#define MCHP_ESPI_FC_STS_INC			BIT(7)	/* RW1C */
#define MCHP_ESPI_FC_STS_FAIL_POS		8u
#define MCHP_ESPI_FC_STS_FAIL			BIT(8)	/* RW1C */
#define MCHP_ESPI_FC_STS_OVFL_POS		9u
#define MCHP_ESPI_FC_STS_OVFL			BIT(9)	/* RW1C */
#define MCHP_ESPI_FC_STS_BADREQ_POS		11u
#define MCHP_ESPI_FC_STS_BADREQ			BIT(11)	/* RW1C */

#define MCHP_ESPI_FC_STS_ALL_RW1C		0x0bfeu

/*
 * eSPI IO Flash Channel registers @ 0x40003680
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

/* MCHP_ESPI_IO_BAR_HOST - eSPI IO Host visible BAR registers */

/*
 * IOBAR_INH_LSW/MSW 64-bit register: each bit = 1 inhibits an I/O BAR
 * independent of the BAR's Valid bit.
 * Logical Device Number = bit position.
 */
#define MCHP_ESPI_IOBAR_LDN_MBOX	0x00u
#define MCHP_ESPI_IOBAR_LDN_KBC		0x01u
#define MCHP_ESPI_IOBAR_LDN_ACPI_EC_0	0x02u
#define MCHP_ESPI_IOBAR_LDN_ACPI_EC_1	0x03u
#define MCHP_ESPI_IOBAR_LDN_ACPI_EC_2	0x04u
#define MCHP_ESPI_IOBAR_LDN_ACPI_EC_3	0x05u
#define MCHP_ESPI_IOBAR_LDN_ACPI_PM1	0x07u
#define MCHP_ESPI_IOBAR_LDN_PORT92	0x08u
#define MCHP_ESPI_IOBAR_LDN_UART_0	0x09u
#define MCHP_ESPI_IOBAR_LDN_UART_1	0x0au
#define MCHP_ESPI_IOBAR_LDN_UART_2	0x0bu
#define MCHP_ESPI_IOBAR_LDN_IOC		0x0du
#define MCHP_ESPI_IOBAR_LDN_MEM		0x0eu
#define MCHP_ESPI_IOBAR_LDN_GLUE_LOG	0x0fu
#define MCHP_ESPI_IOBAR_LDN_EMI_0	0x10u
#define MCHP_ESPI_IOBAR_LDN_EMI_1	0x11u
#define MCHP_ESPI_IOBAR_LDN_RTC		0x14u
#define MCHP_ESPI_IOBAR_LDN_P80CAP_0	0x20u
#define MCHP_ESPI_IOBAR_LDN_P80CAP_1	0x21u
#define MCHP_ESPI_IOBAR_LDN_T32B	0x2fu

/*
 * IOBAR_INIT: Default address of I/O Plug and Play Super-IO index/data
 * configuration registers. (Defaults to 0x2E/0x2F)
 */
#define MCHP_ESPI_IOBAR_INIT_DFLT	0x2eu

/*
 * EC_IRQ: A write to bit[0] triggers EC SERIRQ. The actual
 * SERIRQ slot is configured in MCHP_ESPI_IO_SIRQ.EC_SIRQ
 */
#define MCHP_ESPI_EC_IRQ_GEN		BIT(0)

/*
 * 32-bit Host IO BAR
 */
#define MCHP_ESPI_IO_BAR_HOST_VALID_POS		0u
#define MCHP_ESPI_IO_BAR_HOST_VALID		BIT(0)
#define MCHP_ESPI_IO_BAR_HOST_ADDR_POS		16
#define MCHP_ESPI_IO_BAR_HOST_ADDR_MASK0	0xffffu
#define MCHP_ESPI_IO_BAR_HOST_ADDR_MASK		(0xffffu << 16)

/*
 * eSPI IO BAR Host registers.
 * These registers contain the Host side IO address for each peripheral.
 * IOBAR_INH_LSW (@ 0x0000) BAR Inhibit LSW
 * IOBAR_INH_MSW (@ 0x0004) BAR Inhibit MSW
 * IOBAR_INIT (@ 0x0008) BAR Init
 * EC_IRQ (@ 0x000C) EC IRQ
 * HOST_BAR_IOC (@ 0x0014) Host IO Component BAR
 * HOST_BAR_MEM (@ 0x0018) Host IO Compoent Mem BAR
 * HOST_BAR_MBOX (@ 0x001C) Host IO Mailbox BAR
 * HOST_BAR_KBC (@ 0x0020) Host IO KBC BAR
 * HOST_BAR_ACPI_EC_0 (@ 0x0024) Host IO ACPI_EC 0 BAR
 * HOST_BAR_ACPI_EC_1 (@ 0x0028) Host IO ACPI_EC 1 BAR
 * HOST_BAR_ACPI_EC_2 (@ 0x002C) Host IO ACPI_EC 2 BAR
 * HOST_BAR_ACPI_EC_3 (@ 0x0030) Host IO ACPI_EC 3 BAR
 * HOST_BAR_ACPI_PM1 (@ 0x0038) Host IO ACPI_PM1 BAR
 * HOST_BAR_PORT92 (@ 0x003C) Host IO PORT92 BAR
 * HOST_BAR_UART_0 (@ 0x0040) Host IO UART 0 BAR
 * HOST_BAR_UART_1 (@ 0x0044) Host IO UART 1 BAR
 * HOST_BAR_EMI_0 (@ 0x0048) Host IO EMI 0 BAR
 * HOST_BAR_EMI_1 (@ 0x004C) Host IO EMI 1 BAR
 * HOST_BAR_P80CAP_0 (@ 0x0054) Host IO Port80 Capture 0 BAR
 * HOST_BAR_P80CAP_1 (@ 0x0058) Host IO Port80 Capture 1 BAR
 * HOST_BAR_RTC (@ 0x005C) Host IO RTC BAR
 * HOST_BAR_T32B (@ 0x0064) Host IO Test 32 byte BAR
 * HOST_BAR_UART_2 (@ 0x0068) Host IO UART 2 BAR
 * HOST_BAR_GLUE_LOG (@ 0x006C) Host IO Glue Logic BAR
 */
typedef struct espi_io_bar_host_regs
{
	__IOM uint32_t IOBAR_INH_LSW;
	__IOM uint32_t IOBAR_INH_MSW;
	__IOM uint32_t IOBAR_INIT;
	__IOM uint32_t EC_IRQ;
	uint8_t RSVD1[4];
	__IOM uint32_t HOST_BAR_IOC;
	__IOM uint32_t HOST_BAR_MEM;
	__IOM uint32_t HOST_BAR_MBOX;
	__IOM uint32_t HOST_BAR_KBC;
	__IOM uint32_t HOST_BAR_ACPI_EC_0;
	__IOM uint32_t HOST_BAR_ACPI_EC_1;
	__IOM uint32_t HOST_BAR_ACPI_EC_2;
	__IOM uint32_t HOST_BAR_ACPI_EC_3;
	uint8_t RSVD2[4];
	__IOM uint32_t HOST_BAR_ACPI_PM1;
	__IOM uint32_t HOST_BAR_PORT92;
	__IOM uint32_t HOST_BAR_UART_0;
	__IOM uint32_t HOST_BAR_UART_1;
	__IOM uint32_t HOST_BAR_EMI_0;
	__IOM uint32_t HOST_BAR_EMI_1;
	uint8_t RSVD3[4];
	__IOM uint32_t HOST_BAR_P80CAP_0;
	__IOM uint32_t HOST_BAR_P80CAP_1;
	__IOM uint32_t HOST_BAR_RTC;
	uint8_t RSVD4[4];
	__IOM uint32_t HOST_BAR_T32B;
	__IOM uint32_t HOST_BAR_UART_2;
	__IOM uint32_t HOST_BAR_GLUE_LOG;
} ESPI_IO_BAR_HOST_Type;

/*
 * ESPI_IO_BAR_EC - eSPI IO EC-only component of IO BAR @ 0x400F3730
 * All fields are Read-Only
 * Address mask in bits[7:0]
 * Logical device number in bits[13:8]
 * IO_ACTV (@ 0x0000) ESPI IO Component Activate
 * EC_BAR_IOC (@ 0x0004) Host IO Component BAR
 * EC_BAR_MEM (@ 0x0008) Host IO Compoent Mem BAR
 * EC_BAR_MBOX (@ 0x000C) Host IO Mailbox BAR
 * EC_BAR_KBC (@ 0x0010) Host IO KBC BAR
 * EC_BAR_ACPI_EC_0 (@ 0x0014) Host IO ACPI_EC 0 BAR
 * EC_BAR_ACPI_EC_1 (@ 0x0018) Host IO ACPI_EC 1 BAR
 * EC_BAR_ACPI_EC_2 (@ 0x001C) Host IO ACPI_EC 2 BAR
 * EC_BAR_ACPI_EC_3 (@ 0x0020) Host IO ACPI_EC 3 BAR
 * EC_BAR_ACPI_PM1 (@ 0x0028) Host IO ACPI_PM1 BAR
 * EC_BAR_PORT92 (@ 0x002C) Host IO PORT92 BAR
 * EC_BAR_UART_0 (@ 0x0030) Host IO UART 0 BAR
 * EC_BAR_UART_1 (@ 0x0034) Host IO UART 1 BAR
 * EC_BAR_EMI_0 (@ 0x0038) Host IO EMI 0 BAR
 * EC_BAR_EMI_1 (@ 0x003C) Host IO EMI 1 BAR
 * EC_BAR_P80CAP_0 (@ 0x0044) Host IO Port80 Capture 0 BAR
 * EC_BAR_P80CAP_1 (@ 0x0048) Host IO Port80 Capture 1 BAR
 * EC_BAR_RTC (@ 0x004C) Host IO RTC BAR
 * EC_BAR_T32B (@ 0x0054) Host IO Test 32 byte BAR
 * EC_BAR_UART_2 (@ 0x0058) Host IO UART 2 BAR
 * EC_BAR_GLUE_LOG (@ 0x005C) Host IO Glue Logic BAR
 */
typedef struct espi_io_bar_ec_regs
{
	__IOM uint32_t IO_ACTV;
	__IOM uint32_t EC_BAR_IOC;
	__IOM uint32_t EC_BAR_MEM;
	__IOM uint32_t EC_BAR_MBOX;
	__IOM uint32_t EC_BAR_KBC;
	__IOM uint32_t EC_BAR_ACPI_EC_0;
	__IOM uint32_t EC_BAR_ACPI_EC_1;
	__IOM uint32_t EC_BAR_ACPI_EC_2;
	__IOM uint32_t EC_BAR_ACPI_EC_3;
	uint8_t RSVD2[4];
	__IOM uint32_t EC_BAR_ACPI_PM1;
	__IOM uint32_t EC_BAR_PORT92;
	__IOM uint32_t EC_BAR_UART_0;
	__IOM uint32_t EC_BAR_UART_1;
	__IOM uint32_t EC_BAR_EMI_0;
	__IOM uint32_t EC_BAR_EMI_1;
	uint8_t RSVD3[4];
	__IOM uint32_t EC_BAR_P80CAP_0;
	__IOM uint32_t EC_BAR_P80CAP_1;
	__IOM uint32_t EC_BAR_RTC;
	uint8_t RSVD4[4];
	__IOM uint32_t EC_BAR_T32B;
	__IOM uint32_t EC_BAR_UART_2;
	__IOM uint32_t EC_BAR_GLUE_LOG;
} ESPI_IO_BAR_EC_Type;

/* Offsets from first SIRQ */
#define MCHP_ESPI_SIRQ_MBOX_SIRQ	0u
#define MCHP_ESPI_SIRQ_MBOX_SMI		1u
#define MCHP_ESPI_SIRQ_KBC_KIRQ		2u
#define MCHP_ESPI_SIRQ_KBC_MIRQ		3u
#define MCHP_ESPI_SIRQ_ACPI_EC0		4u
#define MCHP_ESPI_SIRQ_ACPI_EC1		5u
#define MCHP_ESPI_SIRQ_ACPI_EC2		6u
#define MCHP_ESPI_SIRQ_ACPI_EC3		7u
#define MCHP_ESPI_SIRQ_RSVD8		8u
#define MCHP_ESPI_SIRQ_UART0		9u
#define MCHP_ESPI_SIRQ_UART1		10u
#define MCHP_ESPI_SIRQ_EMI0_HOST	11u
#define MCHP_ESPI_SIRQ_EMI0_E2H		12u
#define MCHP_ESPI_SIRQ_EMI1_HOST	13u
#define MCHP_ESPI_SIRQ_EMI1_E2H		14u
#define MCHP_ESPI_SIRQ_RSVD15		15u
#define MCHP_ESPI_SIRQ_RSVD16		16u
#define MCHP_ESPI_SIRQ_RTC		17u
#define MCHP_ESPI_SIRQ_EC		18u
#define MCHP_ESPI_SIRQ_UART2		19u
#define MCHP_ESPI_SIRQ_MAX		20u

/*
 * eSPI IO Component Logical Device Serial IRQ configuration @ 0x400F37A0
 * MBOX_SIRQ_0 (@ 0x000C) Mailbox SIRQ 0 config
 * MBOX_SIRQ_1 (@ 0x000D) Mailbox SIRQ 1 config
 * KBC_SIRQ_0 (@ 0x000E) KBC SIRQ 0 config
 * KBC_SIRQ_1 (@ 0x000F) KBC SIRQ 1 config
 * ACPI_EC_0_SIRQ (@ 0x0010) ACPI EC 0 SIRQ config
 * ACPI_EC_1_SIRQ (@ 0x0011) ACPI EC 1 SIRQ config
 * ACPI_EC_2_SIRQ (@ 0x0012) ACPI EC 2 SIRQ config
 * ACPI_EC_3_SIRQ (@ 0x0013) ACPI EC 3 SIRQ config
 * UART_0_SIRQ (@ 0x0015) UART 0 SIRQ config
 * UART_1_SIRQ (@ 0x0016) UART 1 SIRQ config
 * EMI_0_SIRQ_0 (@ 0x0017) EMI 0 SIRQ 0 config
 * EMI_0_SIRQ_1 (@ 0x0018) EMI 0 SIRQ 1 config
 * EMI_1_SIRQ_0 (@ 0x0019) EMI 1 SIRQ 0 config
 * EMI_1_SIRQ_1 (@ 0x001A) EMI 1 SIRQ 1 config
 * RTC_SIRQ (@ 0x001D) RTC SIRQ config
 * EC_SIRQ (@ 0x001E) EC SIRQ config
 * UART_2_SIRQ (@ 0x001F) UART 2 SIRQ config
 */
/*
 * Values for Logical Device SIRQ registers.
 * Unless disabled each logical device must have a unique value
 * programmed to its SIRQ register.
 * Values 0x00u through 0x7Fu are sent using VWire host index 0x00
 * Values 0x80h through 0xFEh are sent using VWire host index 0x01
 * All registers reset default is 0xFFu (disabled).
 */
#define MCHP_ESPI_IO_SIRQ_DIS	0xffu

typedef struct espi_io_sirq_regs
{
	uint8_t RSVD1[12];
	__IOM uint8_t MBOX_SIRQ_0;
	__IOM uint8_t MBOX_SIRQ_1;
	__IOM uint8_t KBC_SIRQ_0;
	__IOM uint8_t KBC_SIRQ_1;
	__IOM uint8_t ACPI_EC_0_SIRQ;
	__IOM uint8_t ACPI_EC_1_SIRQ;
	__IOM uint8_t ACPI_EC_2_SIRQ;
	__IOM uint8_t ACPI_EC_3_SIRQ;
	uint8_t RSVD2[1];
	__IOM uint8_t UART_0_SIRQ;
	__IOM uint8_t UART_1_SIRQ;
	__IOM uint8_t EMI_0_SIRQ_0;
	__IOM uint8_t EMI_0_SIRQ_1;
	__IOM uint8_t EMI_1_SIRQ_0;
	__IOM uint8_t EMI_1_SIRQ_1;
	uint8_t RSVD3[2];
	__IOM uint8_t RTC_SIRQ;
	__IOM uint8_t EC_SIRQ;
	__IOM uint8_t UART_2_SIRQ;
} ESPI_IO_SIRQ_Type;

/* All eSPI IO registers in one structure */
struct espi_io_mbar { /* 80-bit register */
	volatile uint16_t  LDN_MASK;
	volatile uint16_t  RESERVED[4];
}; /* Size = 10 (0xa) */

struct espi_sram_bar {
	volatile uint16_t  VACCSZ; /* valid, access type, and size */
	volatile uint16_t  EC_SRAM_BASE_LSH; /* EC SRAM base address b[15:0] */
	volatile uint16_t  EC_SRAM_BASE_MSH; /* EC SRAM base address b[31:16] */
	volatile uint16_t  RESERVED[2];
}; /* Size = 10 (0xa) */

struct espi_mbar_host {
	volatile uint16_t  VALID;
	volatile uint16_t  HADDR_LSH;
	volatile uint16_t  HADDR_MSH;
	volatile uint16_t  RESERVED[2];
}; /* Size = 10 (0xa) */

struct espi_sram_host_bar {
	volatile uint16_t  ACCSZ; /* read-only copy of EC access type and size */
	volatile uint16_t  HBASE_LSH; /* Host memory base b[15:0] */
	volatile uint16_t  HBASE_MSH; /* Host memory base b[31:16] */
	volatile uint16_t  RESERVED[2];
}; /* Size = 10 (0xa) */

struct espi_io_regs { /* @ 0x400F3400 */
	volatile uint8_t   RTIDX;		/* @ 0x0000 */
	volatile uint8_t   RTDAT;		/* @ 0x0001 */
	volatile uint16_t  RESERVED;
	volatile uint32_t  RESERVED1[63];
	volatile uint32_t  PCLC[3];		/* @ 0x0100 */
	volatile uint32_t  PCERR[2];		/* @ 0x010C */
	volatile uint32_t  PCSTS;		/* @ 0x0114 */
	volatile uint32_t  PCIEN;		/* @ 0x0118 */
	volatile uint32_t  RESERVED2;
	volatile uint32_t  PCBINH[2];		/* @ 0x0120 */
	volatile uint32_t  PCBINIT;		/* @ 0x0128 */
	volatile uint32_t  PCECIRQ;		/* @ 0x012C */
	volatile uint32_t  PCCKNP;		/* @ 0x0130 */
	volatile uint32_t  IOBAR[23];		/* @ 0x0134 */
	volatile uint32_t  RESERVED3[36];
	volatile uint32_t  PCLTRSTS;		/* @ 0x0220 */
	volatile uint32_t  PCLTREN;		/* @ 0x0224 */
	volatile uint32_t  PCLTRCTL;		/* @ 0x0228 */
	volatile uint32_t  PCLTRM;		/* @ 0x022C */
	volatile uint32_t  RESERVED4[4];
	volatile uint32_t  OOBRXA[2];		/* @ 0x0240 */
	volatile uint32_t  OOBTXA[2];		/* @ 0x0248 */
	volatile uint32_t  OOBRXL;		/* @ 0x0250 */
	volatile uint32_t  OOBTXL;		/* @ 0x0254 */
	volatile uint32_t  OOBRXC;		/* @ 0x0258 */
	volatile uint32_t  OOBRXIEN;		/* @ 0x025C */
	volatile uint32_t  OOBRXSTS;		/* @ 0x0260 */
	volatile uint32_t  OOBTXC;		/* @ 0x0264 */
	volatile uint32_t  OOBTXIEN;		/* @ 0x0268 */
	volatile uint32_t  OOBTXSTS;		/* @ 0x026C */
	volatile uint32_t  RESERVED5[4];
	volatile uint32_t  FCFA[2];		/* @ 0x0280 */
	volatile uint32_t  FCBA[2];		/* @ 0x0288 */
	volatile uint32_t  FCLEN;		/* @ 0x0290 */
	volatile uint32_t  FCCTL;		/* @ 0x0294 */
	volatile uint32_t  FCIEN;		/* @ 0x0298 */
	volatile uint32_t  FCCFG;		/* @ 0x029C */
	volatile uint32_t  FCSTS;		/* @ 0x02A0 */
	volatile uint32_t  RESERVED6[3];
	volatile uint32_t  VWSTS;		/* @ 0x02B0 */
	volatile uint32_t  RESERVED7[11];
	volatile uint8_t   CAPID;		/* @ 0x02E0 */
	volatile uint8_t   CAP0;		/* @ 0x02E1 */
	volatile uint8_t   CAP1;		/* @ 0x02E2 */
	volatile uint8_t   CAPPC;		/* @ 0x02E3 */
	volatile uint8_t   CAPVW;		/* @ 0x02E4 */
	volatile uint8_t   CAPOOB;		/* @ 0x02E5 */
	volatile uint8_t   CAPFC;		/* @ 0x02E6 */
	volatile uint8_t   PCRDY;		/* @ 0x02E7 */
	volatile uint8_t   OOBRDY;		/* @ 0x02E8 */
	volatile uint8_t   FCRDY;		/* @ 0x02E9 */
	volatile uint8_t   ERIS;		/* @ 0x02EA */
	volatile uint8_t   ERIE;		/* @ 0x02EB */
	volatile uint8_t   PLTSRC;		/* @ 0x02EC */
	volatile uint8_t   VWRDY;		/* @ 0x02ED */
	volatile uint8_t   SAFEBS;		/* @ 0x02EE */
	volatile uint8_t   RESERVED8;
	volatile uint32_t  RESERVED9[16];
	volatile uint32_t  ACTV;		/* @ 0x0330 */
	volatile uint32_t  IOHBAR[23];		/* @ 0x0334 */
	volatile uint8_t   SIRQ[20];		/* @ 0x03AC */
	volatile uint32_t  RESERVED10[12];
	volatile uint32_t  VWERREN;		/* @ 0x03F0 */
	volatile uint32_t  RESERVED11[79];
	struct espi_io_mbar MBAR[8];		/* @ 0x0530 */
	volatile uint32_t  RESERVED12[11];
	struct espi_sram_bar SRAMBAR[2];	/* @ 0x05AC */
	volatile uint32_t  RESERVED13[16];
	volatile uint32_t  BM_STATUS;		/* @ 0x0600 */
	volatile uint32_t  BM_IEN;		/* @ 0x0604 */
	volatile uint32_t  BM_CONFIG;		/* @ 0x0608 */
	volatile uint32_t  RESERVED14;
	volatile uint32_t  BM_CTRL1;		/* @ 0x0610 */
	volatile uint32_t  BM_HADDR1_LSW;	/* @ 0x0614 */
	volatile uint32_t  BM_HADDR1_MSW;	/* @ 0x0618 */
	volatile uint32_t  BM_EC_ADDR1_LSW;	/* @ 0x061C */
	volatile uint32_t  BM_EC_ADDR1_MSW;	/* @ 0x0620 */
	volatile uint32_t  BM_CTRL2;		/* @ 0x0624 */
	volatile uint32_t  BM_HADDR2_LSW;	/* @ 0x0628 */
	volatile uint32_t  BM_HADDR2_MSW;	/* @ 0x062C */
	volatile uint32_t  BM_EC_ADDR2_LSW;	/* @ 0x0630 */
	volatile uint32_t  BM_EC_ADDR2_MSW;	/* @ 0x0634 */
	volatile uint32_t  RESERVED15[62];
	struct espi_mbar_host HMBAR[8];		/* @ 0x0730 */
	volatile uint32_t  RESERVED16[11];
	struct espi_sram_host_bar HSRAMBAR[2];	/* @ 0x07AC */
}; /* Size = 1984 (0x7c0) */

#endif				/* #ifndef _ESPI_IO_H */
/* end espi_io.h */
/**   @}
 */
