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

/** @file tfdp.h
 * MEC172x TFDP Trace FIFO Debug Port Registers
 */
/** @defgroup MEC172x Peripherals TFDP
 */

#ifndef _COMPONENT_TFDP_H
#define _COMPONENT_TFDP_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_TFDP_BASE_ADDR		0x40008C00ul

#define MCHP_TFDP_DATA_OUT_ADDR		((MCHP_TFDP_BASE_ADDR) +0)
#define MCHP_TFDP_CTRL_ADDR		((MCHP_TFDP_BASE_ADDR) +4ul)

#define MCHP_TFDP_CTRL_REG_MASK		0x7Ful
#define MCHP_TFDP_CTRL_EN_POS		0u
#define MCHP_TFDP_CTRL_EDGE_SEL_POS	1u
#define MCHP_TFDP_CTRL_DIV_SEL_POS	2u
#define MCHP_TFDP_CTRL_IP_DLY_POS	4u

#define MCHP_TFDP_CTRL_EN		BIT(0)
#define MCHP_TFDP_OUT_ON_FALLING_EDGE	BIT(1)
#define MCHP_TFDP_CLK_AHB_DIV_2		0U
#define MCHP_TFDP_CLK_AHB_DIV_4		0x04U
#define MCHP_TFDP_CLK_AHB_DIV_8		0x08U
#define MCHP_TFDP_CLK_AHB_DIV_2_ALT	0x0CU

/* Number of AHB clocks between each byte shifted out */
#define MCHP_TFDP_IP_DLY_1		0U
#define MCHP_TFDP_IP_DLY_2		0x10U
#define MCHP_TFDP_IP_DLY_3		0x20U
#define MCHP_TFDP_IP_DLY_4		0x30U
#define MCHP_TFDP_IP_DLY_5		0x40U
#define MCHP_TFDP_IP_DLY_6		0x50U
#define MCHP_TFDP_IP_DLY_7		0x60U
#define MCHP_TFDP_IP_DLY_8		0x70U

/* First byte indicates start of packet */
#define MCHP_TFDP_PKT_START		0xFDu

#endif	/* #ifndef _COMPONENT_TFDP_H */
/* end tfdp.h */
/**   @}
 */
