/**
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
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
 * MEC172x EC Subsystem (ECS) registers
 */
/** @defgroup MEC172x Peripherals ECS
 */

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#ifndef _COMPONENT_ECS_H
#define _COMPONENT_ECS_H

/* =========================================================================*/
/* ================	       ECS			   ================ */
/* =========================================================================*/

#define MCHP_ECS_BASE_ADDR	0x4000FC00ul

/* AHB Error Address, write any value to clear */
#define MCHP_ECS_AHB_ERR_ADDR_OFS	0x04ul

/* AHB Error Control */
#define MCHP_ECS_AHB_ERR_CTRL_OFS	0x14ul
#define MCHP_ECS_AHB_ERR_CTRL_DIS_POS	0
#define MCHP_ECS_AHB_ERR_CTRL_DIS	BIT(MCHP_ECS_AHB_ERR_CTRL_DIS_POS)

/* Interrupt Control */
#define MCHP_ECS_ICTRL_OFS		0x18ul
#define MCHP_ECS_ICTRL_DIRECT_POS	0
#define MCHP_ECS_ICTRL_DIRECT_EN	BIT(MCHP_ECS_ICTRL_DIRECT_POS)

/* ETM Control Register */
#define MCHP_ECS_ETM_CTRL_OFS		0x1Cul
#define MCHP_ECS_ETM_CTRL_EN_POS	0
#define MCHP_ECS_ETM_CTRL_EN		BIT(MCHP_ECS_ETM_CTRL_EN_POS)

/* Debug Control Register */
#define MCHP_ECS_DCTRL_OFS		0x20ul
#define MCHP_ECS_DCTRL_MASK		0x1Ful
#define MCHP_ECS_DCTRL_DBG_EN_POS	0u
#define MCHP_ECS_DCTRL_DBG_EN		BIT(MCHP_ECS_DCTRL_DBG_EN_POS)
#define MCHP_ECS_DCTRL_MODE_POS		1u
#define MCHP_ECS_DCTRL_MODE_MASK0	0x03ul
#define MCHP_ECS_DCTRL_MODE_MASK \
	SHLU32(MCHP_ECS_DCTRL_DBG_MODE_MASK0, MCHP_ECS_DCTRL_DBG_MODE_POS)

#define MCHP_ECS_DCTRL_DBG_MODE_POS	1u
#define MCHP_ECS_DCTRL_MODE_JTAG	0x00u
#define MCHP_ECS_DCTRL_MODE_SWD		SHLU32(0x02u, 1u)
#define MCHP_ECS_DCTRL_MODE_SWD_SWV	SHLU32(0x01u, 1u)
#define MCHP_ECS_DCTRL_PUEN_POS		3u
#define MCHP_ECS_DCTRL_PUEN		BIT(MCHP_ECS_DCTRL_PUEN_POS)
#define MCHP_ECS_DCTRL_BSCAN_POS	4u
#define MCHP_ECS_DCTRL_BSCAN_EN		BIT(MCHP_ECS_DCTRL_BSCAN_POS)

/* WDT Event Count */
#define MCHP_ECS_WDT_EVC_OFS		0x28U
#define MCHP_ECS_WDT_EVC_MASK		0x0FU

/* PECI Disable */
#define MCHP_ECS_PECI_DIS_OFS		0x40U
#define MCHP_ECS_PECI_DIS_MASK		0x01U
#define MCHP_ECS_PECI_DIS_POS		0
#define MCHP_ECS_PECI_DISABLE		BIT(0)

/* VCI FW Override */
#define MCHP_ECS_VCI_FW_OVR_OFS		0x50U
#define MCHP_ECS_VCI_FW_OVR_MASK	0x01U
#define MCHP_ECS_VCI_FW_OVR_SSHD_POS	0
#define MCHP_ECS_VCI_FW_OVR_SSHD	BIT(0)

/* Boot-ROM Status */
#define MCHP_ECS_BROM_STS_OFS		0x54U
#define MCHP_ECS_BROM_STS_MASK		0x03U
#define MCHP_ECS_BROM_STS_VTR_POS	0
#define MCHP_ECS_BROM_STS_WDT_POS	1
#define MCHP_ECS_BROM_STS_VTR		BIT(0)
#define MCHP_ECS_BROM_STS_WDT		BIT(1)

/* JTAG Controller Config */
#define MCHP_ECS_JTCC_OFS		0x70U
#define MCHP_ECS_JTCC_MASK		0x0FU
#define MCHP_ECS_JTCC_CLK_POS		0
#define MCHP_ECS_JTCC_CLK_DFLT		0x03U
#define MCHP_ECS_JTCC_CLK_24M		0x01U
#define MCHP_ECS_JTCC_CLK_12M		0x02U
#define MCHP_ECS_JTCC_CLK_6M		0x03U
#define MCHP_ECS_JTCC_CLK_3M		0x04U
#define MCHP_ECS_JTCC_CLK_1500K		0x05U
#define MCHP_ECS_JTCC_CLK_750K		0x06U
#define MCHP_ECS_JTCC_CLK_375K		0x07U
#define MCHP_ECS_JTCC_MS_POS		3
#define MCHP_ECS_JTCC_M			BIT(3)

/* JTAG Controller Status */
#define MCHP_ECS_JTST_OFS		0x74U
#define MCHP_ECS_JTST_MASK		0x01U
#define MCHP_ECS_JTST_DONE		BIT(0)

#define MCHP_ECS_JT_TDO_OFS		0x78U
#define MCHP_ECS_JT_TDI_OFS		0x7CU
#define MCHP_ECS_JT_TMS_OFS		0x80U

/* JTAG Controller Command */
#define MCHP_ECS_JT_CMD_OFS		0x84U
#define MCHP_ECS_JT_CMD_MASK		0x1FU

/* VWire Source Configuration */
#define MCHP_ECS_VWSC_OFS		0x90U
#define MCHP_ECS_VWSC_MASK		0x07U
#define MCHP_ECS_VWSC_DFLT		0x07U
#define MCHP_ECS_VWSC_EC_SCI_DIS	BIT(0)
#define MCHP_ECS_VWSC_MBH_SMI_DIS	BIT(1)

/* Analog Comparator Control */
#define MCHP_ECS_ACC_OFS		0x94U
#define MCHP_ECS_ACC_MASK		0x15U
#define MCHP_ECS_ACC_EN0		BIT(0)
#define MCHP_ECS_ACC_CFG_LOCK0		BIT(2)
#define MCHP_ECS_ACC_EN1		BIT(4)

/* Analog Comparator Sleep Control */
#define MCHP_ECS_ACSC_OFS		0x98U
#define MCHP_ECS_ACSC_MASK		0x03U
#define MCHP_ECS_ACSC_DSLP_EN0		BIT(0)
#define MCHP_ECS_ACSC_DSLP_EN1		BIT(1)

/* Embedded Reset Enable */
#define MCHP_ECS_EMBR_EN_OFS		0xB0U
#define MCHP_ECS_EMBR_EN_MASK		0x01U
#define MCHP_ECS_EMBR_EN_ON		BIT(0)

/* Embedded Reset Timeout value */
#define MCHP_ECS_EMBR_TMOUT_OFS		0xB4U
#define MCHP_ECS_EMBR_TMOUT_MASK	0x07U
#define MCHP_ECS_EMBR_TMOUT_6S		0U
#define MCHP_ECS_EMBR_TMOUT_7S		1U
#define MCHP_ECS_EMBR_TMOUT_8S		2U
#define MCHP_ECS_EMBR_TMOUT_9S		3U
#define MCHP_ECS_EMBR_TMOUT_10S		4U
#define MCHP_ECS_EMBR_TMOUT_11S		5U
#define MCHP_ECS_EMBR_TMOUT_12S		6U
#define MCHP_ECS_EMBR_TMOUT_14S		7U

/* Embedded Reset Status */
#define MCHP_ECS_EMBR_STS_OFS		0xB8U
#define MCHP_ECS_EMBR_STS_MASK		0x01U
#define MCHP_ECS_EMBR_STS_RST		BIT(0)

/* Embedded Reset Count (RO) */
#define MCHP_ECS_EMBR_CNT_OFS		0xBCU
#define MCHP_ECS_EMBR_CNT_MASK		0x7ffffU

/* Register Access */
#define MCHP_ECS_AHB_ERR() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_AHB_ERR_ADDR_OFS)

#define MCHP_ECS_AHB_ERR_CTRL()	\
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_AHB_ERR_CTRL_OFS)

#define MCHP_ECS_ICTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ICTRL_OFS)

#define MCHP_ECS_ETM_CTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ETM_CTRL_OFS)

#define MCHP_ECS_DCTRL() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_DCTRL_OFS)

#define MCHP_ECS_WDT_EVC() REG8(MCHP_ECS_BASE_ADDR + MCHP_ECS_WDT_EVC_OFS)

#define MCHP_ECS_PECI_DIS() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_PECI_DIS_OFS)

#define MCHP_ECS_VCI_FW_OVR() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_VCI_FW_OVR_OFS)

#define MCHP_ECS_BROM_STS() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_BROM_STS_OFS)

#define MCHP_ECS_JTCC() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JTCC_OFS)
#define MCHP_ECS_JTST() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JTST_OFS)
#define MCHP_ECS_JT_TDO() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JT_TDO_OFS)
#define MCHP_ECS_JT_TDI() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JT_TDI_OFS)
#define MCHP_ECS_JT_TMS() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JT_TMS_OFS)
#define MCHP_ECS_JT_CMD() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_JT_CMD_OFS)

#define MCHP_ECS_VWSC() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_VWSC_OFS)

#define MCHP_ECS_ACC() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ACC_OFS)
#define MCHP_ECS_ACSC() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_ACSC_OFS)

#define MCHP_ECS_EMBR_EN() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_EMBR_EN_OFS)
#define MCHP_ECS_EMBR_TMOUT() \
	REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_EMBR_TMOUT_OFS)
#define MCHP_ECS_EMBR_STS() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_EMBR_STS_OFS)
#define MCHP_ECS_EMBR_CNT() REG32(MCHP_ECS_BASE_ADDR + MCHP_ECS_EMBR_CNT_OFS)

#endif /* #ifndef _COMPONENT_ECS_H */
/* end ecs.h */
/**   @}
 */
