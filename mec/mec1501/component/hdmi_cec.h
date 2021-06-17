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

/** @file hdmi_cec.h
 *MEC1501 HDMI CEC registers
 */
/** @defgroup MEC1501 Peripherals HDMI-CEC
 */

#ifndef _HDMI_CEC_H
#define _HDMI_CEC_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 HDMI CEC 			=========== */
/* =========================================================================*/

#define MCHP_HDMI_CEC_BASE_ADDR		0x40006800u

/*
 * HDMI_CEC interrupts
 */
#define MCHP_HDMI_CEC_GIRQ	17u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_HDMI_CEC_GIRQ_POS	5u

#define MCHP_HDMI_CEC_GIRQ_VAL	(1u << MCHP_HDMI_CEC_GIRQ_POS)

/* HDMI_CEC GIRQ aggregated NVIC input */
#define MCHP_HDMI_CEC_NVIC_AGGR	9u

/* HDMI_CEC direct NVIC inputs */
#define MCHP_HDMI_CEC_NVIC_DIRECT	160u

/* HDMI_CEC Control register */
#define MCHP_HDMI_CEC_CTRL_REG_OFS	0U
#define MCHP_HDMI_CEC_CTRL_MASK		0x0fu
#define MCHP_HDMI_CEC_CTRL_ACT_POS	0
#define MCHP_HDMI_CEC_CTRL_ACT		(1u << 0)
#define MCHP_HDMI_CEC_CTRL_RST_POS	1
#define MCHP_HDMI_CEC_CTRL_RST		(1u << 1)
#define MCHP_HDMI_CEC_CTRL_FILT_EN_POS	2
#define MCHP_HDMI_CEC_CTRL_FILT_EN	(1u << 2)
#define MCHP_HDMI_CEC_CTRL_SFT5_POS	3
#define MCHP_HDMI_CEC_CTRL_SFT5_EN	(1u << 3)

/* HDMI_CEC Claimed Logic Address register  */
#define MCHP_HDMI_CEC_CLA_REG_OFS	4U
#define MCHP_HDMI_CEC_CLA_MASK		0xffffu

/* HDMI_CEC Initiator Data Register */
#define MCHP_HDMI_CEC_IDATA_REG_OFS	8U
#define MCHP_HDMI_CEC_IDATA_REG_MASK	0x01ffu
#define MCHP_HDMI_CEC_IDATA_POS		0
#define MCHP_HDMI_CEC_IDATA_MASK	0xffu
#define MCHP_HDMI_CEC_IDATA_EOM_POS	8
#define MCHP_HDMI_CEC_IDATA_EOM		(1u << 8)

/* HDMI_CEC Follower Data Register  */
#define MCHP_HDMI_CEC_FDATA_REG_OFS	0x0cu
#define MCHP_HDMI_CEC_FDATA_REG_MASK	0x01ffu
#define MCHP_HDMI_CEC_FDATA_POS		0
#define MCHP_HDMI_CEC_FDATA_MASK	0xffu
#define MCHP_HDMI_CEC_FDATA_EOM_POS	8
#define MCHP_HDMI_CEC_FDATA_EOM		(1u << 8)

/* HDMI_CEC Initiator/Follower Status Register */
#define MCHP_HDMI_CEC_IFSTS_REG_OFS	0x10u
#define MCHP_HDMI_CEC_IFSTS_REG_MASK	0x007f007fu
#define MCHP_HDMI_CEC_ISTS_POS		0
#define MCHP_HDMI_CEC_ISTS_IDLE		(1u << 0)
#define MCHP_HDMI_CEC_ISTS_LAB		(1u << 1)
#define MCHP_HDMI_CEC_ISTS_UNDRN	(1u << 2)
#define MCHP_HDMI_CEC_ISTS_ACKERR	(1u << 3)
#define MCHP_HDMI_CEC_ISTS_CE		(1u << 4)
#define MCHP_HDMI_CEC_ISTS_IFE		(1u << 5)
#define MCHP_HDMI_CEC_ISTS_IFDONE	(1u << 6)
/* follower status */
#define MCHP_HDMI_CEC_FSTS_POS		16
#define MCHP_HDMI_CEC_FSTS_OVRN		(1u << 16)
#define MCHP_HDMI_CEC_FSTS_BERR		(1u << 17)
#define MCHP_HDMI_CEC_FSTS_BTO		(1u << 18)
#define MCHP_HDMI_CEC_FSTS_FFNE		(1u << 19)
#define MCHP_HDMI_CEC_FSTS_FFF		(1u << 20)
#define MCHP_HDMI_CEC_FSTS_FDR		(1u << 21)
#define MCHP_HDMI_CEC_FSTS_FFDONE	(1u << 22)

/* HDMI_CEC Initiator Control Register */
#define MCHP_HDMI_CEC_ICTRL_REG_OFS		0x18u
#define MCHP_HDMI_CEC_ICTRL_REG_MASK		0xe3u
#define MCHP_HDMI_CEC_ICTRL_FLUSH_POS		0
#define MCHP_HDMI_CEC_ICTRL_FLUSH		(1u << 0)
#define MCHP_HDMI_CEC_ICTRL_START_POS		1
#define MCHP_HDMI_CEC_ICTRL_START		(1u << 1)
#define MCHP_HDMI_CEC_ICTRL_IFE_EN_POS		5
#define MCHP_HDMI_CEC_ICTRL_IFE_EN		(1u << 5)
#define MCHP_HDMI_CEC_ICTRL_IFDONE_EN_POS	6
#define MCHP_HDMI_CEC_ICTRL_IFDONE_EN		(1u << 6)

/* HDMI_CEC Follower Control Register */
#define MCHP_HDMI_CEC_FCTRL_REG_OFS		0x1cu
#define MCHP_HDMI_CEC_FCTRL_REG_MASK		0x71u
#define MCHP_HDMI_CEC_FCTRL_FLUSH_POS		0
#define MCHP_HDMI_CEC_FCTRL_FLUSH		(1u << 0)
#define MCHP_HDMI_CEC_FCTRL_FFF_EN_POS		4
#define MCHP_HDMI_CEC_FCTRL_FFF_EN		(1u << 4)
#define MCHP_HDMI_CEC_FCTRL_FDR_EN_POS		5
#define MCHP_HDMI_CEC_FCTRL_FDR_EN		(1u << 5)
#define MCHP_HDMI_CEC_FCTRL_FFDONE_EN_POS	6
#define MCHP_HDMI_CEC_FCTRL_FFDONE_EN		(1u << 6)

/**
  * @brief HDMI CEC (HDMI_CEC)
  */
typedef struct hdmi_cec_regs {
	__IOM uint32_t CEC_CONTROL; /*!< (@ 0x0000) HDMI_CEC Control */
	__IOM uint32_t CL_ADDR; /*!< (@ 0x0004) HDMI_CEC Claimed Logic Address */
	__IOM uint32_t IDATA; /*!< (@ 0x0008) HDMI_CEC Initiator Data */
	__IOM uint32_t FDATA; /*!< (@ 0x000c) HDMI_CEC Follower Data */
	__IOM uint32_t IFSTATUS; /*!< (@ 0x0010) HDMI_CEC Initiator/Follower Status */
	uint8_t RSVD1[4];
	__IOM uint32_t ICTRL; /*!< (@ 0x0018) HDMI_CEC Initiator Control */
	__IOM uint32_t FCTRL; /*!< (@ 0x001c) HDMI_CEC Follower Control */
} HDMI_CEC_Type;

#endif	/* #ifndef _HDMI_CEC_H */
/* end hdmi_cec.h */
/**   @}
 */
