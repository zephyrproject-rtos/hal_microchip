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

/** @file ecs.h
 *MEC1501 EC Subsystem (ECS) registers
 */
/** @defgroup MEC1501 Peripherals ECS
 */

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

#ifndef _ECS_H
#define _ECS_H

/* =========================================================================*/
/* ================	       ECS			   ================ */
/* =========================================================================*/

#define MCHP_ECS_BASE_ADDR	0x4000fc00u

/* AHB Error Address, write any value to clear */
#define MCHP_ECS_AHB_ERR_ADDR_OFS	0x04u

/* AHB Error Control */
#define MCHP_ECS_AHB_ERR_CTRL_OFS	0x14u
#define MCHP_ECS_AHB_ERR_CTRL_DIS_POS	0u
#define MCHP_ECS_AHB_ERR_CTRL_DIS	BIT(MCHP_ECS_AHB_ERR_CTRL_DIS_POS)

/* Interrupt Control */
#define MCHP_ECS_ICTRL_OFS		0x18u
#define MCHP_ECS_ICTRL_DIRECT_POS	0
#define MCHP_ECS_ICTRL_DIRECT_EN	BIT(MCHP_ECS_ICTRL_DIRECT_POS)

/* ETM Control Register */
#define MCHP_ECS_ETM_CTRL_OFS		0x1cu
#define MCHP_ECS_ETM_CTRL_EN_POS	0
#define MCHP_ECS_ETM_CTRL_EN		BIT(MCHP_ECS_ETM_CTRL_EN_POS)

/* Debug Control Register */
#define MCHP_ECS_DCTRL_OFS		0x20u
#define MCHP_ECS_DCTRL_MASK		0x1fu
#define MCHP_ECS_DCTRL_DBG_EN_POS	0u
#define MCHP_ECS_DCTRL_DBG_EN		BIT(MCHP_ECS_DCTRL_DBG_EN_POS)
#define MCHP_ECS_DCTRL_MODE_POS		1u
#define MCHP_ECS_DCTRL_MODE_MASK0	0x03u
#define MCHP_ECS_DCTRL_MODE_MASK \
	((MCHP_ECS_DCTRL_DBG_MODE_MASK0) << (MCHP_ECS_DCTRL_DBG_MODE_POS))

#define MCHP_ECS_DCTRL_DBG_MODE_POS	1u
#define MCHP_ECS_DCTRL_MODE_JTAG	(0x00 << (MCHP_ECS_DCTRL_DBG_MODE_POS))
#define MCHP_ECS_DCTRL_MODE_SWD		(0x02 << (MCHP_ECS_DCTRL_DBG_MODE_POS))
#define MCHP_ECS_DCTRL_MODE_SWD_SWV	(0x01 << (MCHP_ECS_DCTRL_DBG_MODE_POS))
#define MCHP_ECS_DCTRL_PUEN_POS		3u
#define MCHP_ECS_DCTRL_PUEN		BIT(MCHP_ECS_DCTRL_PUEN_POS)
#define MCHP_ECS_DCTRL_BSCAN_POS	4u
#define MCHP_ECS_DCTRL_BSCAN_EN		BIT(MCHP_ECS_DCTRL_BSCAN_POS)

/* AES Hash Byte Swap Control Register */
#define MCHP_ECS_AHSW_OFS		0x2cu
#define MCHP_ECS_AHSW_MASK		0xffu
#define MCHP_ECS_DW_SWAP_IN_POS		0u
#define MCHP_ECS_DW_SWAP_IN_EN		BIT(MCHP_ECS_DW_SWAP_IN_POS)
#define MCHP_ECS_DW_SWAP_OUT_POS	1u
#define MCHP_ECS_DW_SWAP_OUT_EN		BIT(MCHP_ECS_DW_SWAP_OUT_POS)
#define MCHP_ECS_BLK_SWAP_IN_POS	2u
#define MCHP_ECS_BLK_SWAP_IN_MASK	(0x07u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_IN_DIS	(0x00u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_IN_8B		(0x01u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_IN_16B	(0x02u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_IN_64B	(0x03u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_IN_128B	(0x04u << (MCHP_ECS_BLK_SWAP_IN_POS))
#define MCHP_ECS_BLK_SWAP_OUT_POS	5u
#define MCHP_ECS_BLK_SWAP_OUT_MASK	(0x07u << (MCHP_ECS_BLK_SWAP_OUT_POS))
#define MCHP_ECS_BLK_SWAP_OUT_DIS	(0x00u << (MCHP_ECS_BLK_SWAP_OUT_POS))
#define MCHP_ECS_BLK_SWAP_OUT_8B	(0x01u << (MCHP_ECS_BLK_SWAP_OUT_POS))
#define MCHP_ECS_BLK_SWAP_OUT_16B	(0x02u << (MCHP_ECS_BLK_SWAP_OUT_POS))
#define MCHP_ECS_BLK_SWAP_OUT_64B	(0x03u << (MCHP_ECS_BLK_SWAP_OUT_POS))
#define MCHP_ECS_BLK_SWAP_OUT_128B	(0x04u << (MCHP_ECS_BLK_SWAP_OUT_POS))

/* ECS PECI disable register */
#define MCHP_ECS_PECI_DIS_REG_OFS	0x40u
#define MCHP_ECS_PECI_DIS_POS		0u
#define MCHP_ECS_PECI_DISABLE		BIT(MCHP_ECS_PECI_DIS_POS)

/* ECS VCI FW Override */
#define MCHP_ECS_VCI_FWO_OFS		0x50u
#define MCHP_ECS_VCI_FWO_SYS_SHDN_POS	0u
#define MCHP_ECS_VCI_FWO_SYS_SHDN	BIT(MCHP_ECS_VCI_FWO_SYS_SHDN_POS)

/* EC Subystem GPIO Bank Power */
#define MCHP_ECS_GBPWR_OFS		0x64u
#define MCHP_ECS_GBPWR_LOCK_POS		7u
#define MCHP_ECS_GBPWR_LOCK		BIT(MCHP_ECS_GBPWR_LOCK_POS)
#define MCHP_ECS_VTR3_LVL_POS		2u
#define MCHP_ECS_VTR3_LVL_18		BIT(MCHP_ECS_VTR3_LVL_POS)
#define MCHP_ECS_VTR2_LVL_POS		1u
#define MCHP_ECS_VTR2_LVL_18		BIT(MCHP_ECS_VTR2_LVL_POS)

/* ECS Virtual Wire Source Configuration */
#define MCHP_ECS_VWSC_OFS		0x90u
#define MCHP_ECS_VWSC_MASK		0x07u
#define MCHP_ECS_VWSC_DFLT		0x07u
#define MCHP_ECS_VWSC_EC_SCI_DIS	BIT(0)
#define MCHP_ECS_VWSC_MBH_SMI_DIS	BIT(1)

/* ECS Analog Comparator Control register */
#define MCHP_ECS_ACC_OFS		0x94u
#define MCHP_ECS_ACC_MASK		0x15u
#define MCHP_ECS_ACC_EN0		BIT(0)
#define MCHP_ECS_ACC_CFG_LOCK0		BIT(2)
#define MCHP_ECS_ACC_EN1		BIT(4)

/* ECS Analog Comparator Sleep Control register */
#define MCHP_ECS_ACSC_OFS		0x98u
#define MCHP_ECS_ACSC_MASK		0x03u
#define MCHP_ECS_ACSC_DSLP_EN0		BIT(0)
#define MCHP_ECS_ACSC_DSLP_EN1		BIT(1)

/* Register Access */
#define MCHP_ECS_AHB_ERR() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_AHB_ERR_ADDR_OFS)

#define MCHP_ECS_AHB_ERR_CTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_AHB_ERR_CTRL_OFS)

#define MCHP_ECS_ICTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ICTRL_OFS)

#define MCHP_ECS_ETM_CTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ETM_CTRL_OFS)

#define MCHP_ECS_DCTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_DCTRL_OFS)

#define MCHP_ECS_AHSW_CTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_AHSW_OFS)

#define MCHP_ECS_GBPWR() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_GBPWR_OFS)

/**
  * @brief EC Subsystem (ECS)
  */
typedef struct ecs_regs
{		/*!< (@ 0x4000fc00) ECS Structure   */
	__IOM uint8_t RSVD1[4];
	__IOM uint32_t AHB_ERR_ADDR;	/*!< (@ 0x0004) ECS AHB Error Address */
	__IOM uint32_t TEST08;
	__IOM uint32_t TEST0C;
	__IOM uint32_t TEST10;
	__IOM uint32_t AHB_ERR_CTRL;	/*!< (@ 0x0014) ECS AHB Error Control */
	__IOM uint32_t INTR_CTRL;	/*!< (@ 0x0018) ECS Interupt Control */
	__IOM uint32_t ETM_CTRL;	/*!< (@ 0x001c) ECS ETM Trace Control */
	__IOM uint32_t DEBUG_CTRL;	/*!< (@ 0x0020) ECS Debug Control */
	__IOM uint32_t OTP_LOCK;	/*!< (@ 0x0024) ECS OTP Lock Enable */
	__IOM uint32_t WDT_CNT;	/*!< (@ 0x0028) ECS WDT Event Count */
	__IOM uint32_t AESH_BSWAP_CTRL;	/*!< (@ 0x002c) ECS AES-Hash Byte Swap Control */
	__IOM uint32_t TEST30;
	__IOM uint32_t TEST34;
	__IOM uint32_t RSVD38;
	__IOM uint32_t TEST3C;
	__IOM uint32_t PECI_DIS;	/*!< (@ 0x0040) ECS PECI Disable */
	__IOM uint32_t RSVD44;
	__IOM uint32_t RSVD48;
	__IOM uint32_t RSVD4C;
	__IOM uint32_t VCI_FW_OVR;	/*!< (@ 0x0050) ECS VCI FW Override */
	__IOM uint32_t BROM_STS;	/*!< (@ 0x0054) ECS Boot-ROM Status */
	uint8_t RSVD2[4];
	__IOM uint32_t CRYPTO_SRST;	/*!< (@ 0x005c) ECS Crypto HW Soft Reset */
	__IOM uint32_t TEST60;
	__IOM uint32_t GPIO_BANK_PWR;	/*!< (@ 0x0064) ECS GPIO Bank Power Select */
	__IOM uint32_t TEST68;
	__IOM uint32_t TEST6C;
	__IOM uint32_t JTAG_MCFG;	/*!< (@ 0x0070) ECS JTAG Master Config */
	__IOM uint32_t JTAG_MSTS;	/*!< (@ 0x0074) ECS JTAG Master Status */
	__IOM uint32_t JTAG_MTDO;	/*!< (@ 0x0078) ECS JTAG Master TDO */
	__IOM uint32_t JTAG_MTDI;	/*!< (@ 0x007c) ECS JTAG Master TDI */
	__IOM uint32_t JTAG_MTMS;	/*!< (@ 0x0080) ECS JTAG Master TMS */
	__IOM uint32_t JTAG_MCMD;	/*!< (@ 0x0084) ECS JTAG Master Command */
	uint8_t RSVD3[8];
	__IOM uint32_t VW_FW_OVR;	/*!< (@ 0x0090) ECS VWire Source Config */
	__IOM uint32_t CMP_CTRL;	/*!< (@ 0x0094) ECS Analog Comparator Control */
	__IOM uint32_t CMP_SLP_CTRL;	/*!< (@ 0x0098) ECS Analog Comparator Sleep Control */
	uint8_t RSVD4[(0x144 - 0x9c)];
	__IOM uint32_t SLP_STS_MIRROR; /*!< (@ 0x0144) ECS Sleep Status Mirror (RO) */
	uint8_t RSVD5[(0x180 - 0x148)];
	__IOM uint32_t BROM_SCR0;	/*!< (@ 0x0180) ECS Boot-ROM Scratch 0 */
	__IOM uint32_t BROM_SCR1;	/*!< (@ 0x0184) ECS Boot-ROM Scratch 1 */
	__IOM uint32_t BROM_SCR2;	/*!< (@ 0x0188) ECS Boot-ROM Scratch 2 */
	__IOM uint32_t BROM_SCR3;	/*!< (@ 0x018c) ECS Boot-ROM Scratch 3 */
} ECS_Type;

#endif	/* #ifndef _ECS_H */
/* end ecs.h */
/**   @}
 */
