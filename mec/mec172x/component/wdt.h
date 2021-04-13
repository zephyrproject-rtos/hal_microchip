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

/** @file wdt.h
 * MEC172x Watch Dog Timer Registers
 */
/** @defgroup MEC172x Peripherals WDT
 */

#ifndef _COMPONENT_WDT_H
#define _COMPONENT_WDT_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/* =========================================================================*/
/* ================		  WDT			====================*/
/* =========================================================================*/

#define MCHP_WDT_BASE_ADDR		0x40000400ul

/* WDT Interrupt */
#define MCHP_WDT_GIRQ			21u
#define MCHP_WDT_GIRQ_NVIC		13u
#define MCHP_WDT_GIRQ_NVIC_DIRECT	171u

/* Bit position in Interrupt Aggregator GIRQ registers */
#define MCHP_WDT_GIRQ_POS		2u

/* Interrupt Aggregator Source, Enable Set/Clear registers value */
#define MCHP_WDT_GIRQ_VAL		BIT(MCHP_WDT_GIRQ_POS)


/* Load register */
#define MCHP_WDT_LOAD_REG_OFS		0x00ul
#define MCHP_WDT_LOAD_REG_MASK		0xFFFFul

/* Control register */
#define MCHP_WDT_CTRL_REG_OFS		0x04ul
#define MCHP_WDT_CTRL_REG_MASK		0x021Dul
#define MCHP_WDT_CTRL_EN_POS		0u
#define MCHP_WDT_CTRL_EN_MASK		BIT(MCHP_WDT_CTRL_EN_POS)
#define MCHP_WDT_CTRL_EN		BIT(MCHP_WDT_CTRL_EN_POS)
#define MCHP_WDT_CTRL_HTMR_STALL_POS	2u
#define MCHP_WDT_CTRL_HTMR_STALL_MASK	BIT(MCHP_WDT_CTRL_HTMR_STALL_POS)
#define MCHP_WDT_CTRL_HTMR_STALL_EN	BIT(MCHP_WDT_CTRL_HTMR_STALL_POS)
#define MCHP_WDT_CTRL_WKTMR_STALL_POS	3u
#define MCHP_WDT_CTRL_WKTMR_STALL_MASK	BIT(MCHP_WDT_CTRL_WKTMR_STALL_POS)
#define MCHP_WDT_CTRL_WKTMR_STALL_EN	BIT(MCHP_WDT_CTRL_WKTMR_STALL_POS)
#define MCHP_WDT_CTRL_JTAG_STALL_POS	4u
#define MCHP_WDT_CTRL_JTAG_STALL_MASK	BIT(MCHP_WDT_CTRL_JTAG_STALL_POS)
#define MCHP_WDT_CTRL_JTAG_STALL_EN	BIT(MCHP_WDT_CTRL_JTAG_STALL_POS)
/*
 * WDT mode selecting action taken upon count expiration.
 * 0 = Generate chip reset
 * 1 = Clear this bit,
 *     Set event status
 *     Generate interrupt if event IEN bit is set
 *     Kick WDT causing it to reload from LOAD register
 * If interrupt is enabled in GIRQ21 and NVIC then the EC will jump
 * to the WDT ISR.
 */
#define MCHP_WDT_CTRL_MODE_POS		9u
#define MCHP_WDT_CTRL_MODE_MASK		BIT(MCHP_WDT_CTRL_MODE_POS)
#define MCHP_WDT_CTRL_MODE_RESET	0ul
#define MCHP_WDT_CTRL_MODE_IRQ		BIT(MCHP_WDT_CTRL_MODE_POS)

/* WDT Kick register. Write any value to reload counter */
#define MCHP_WDT_KICK_REG_OFS		0x08ul
#define MCHP_WDT_KICK_REG_MASK		0xFFul
#define MCHP_WDT_KICK_VAL		0

/* WDT Count register. Read only */
#define MCHP_WDT_CNT_RO_REG_OFS		0x0Cul
#define MCHP_WDT_CNT_RO_REG_MASK	0xFFFFul

/* Status Register */
#define MCHP_WDT_STS_REG_OFS		0x10ul
#define MCHP_WDT_STS_REG_MASK		0x01ul
#define MCHP_WDT_STS_EVENT_IRQ_POS	0u
#define MCHP_WDT_STS_EVENT_IRQ		BIT(MCHP_WDT_STS_EVENT_IRQ_POS)

/* Interrupt Enable Register */
#define MCHP_WDT_IEN_REG_OFS		0x14ul
#define MCHP_WDT_IEN_REG_MASK		0x01ul
#define MCHP_WDT_IEN_EVENT_IRQ_POS	0u
#define MCHP_WDT_IEN_EVENT_IRQ_MASK	BIT(MCHP_WDT_IEN_EVENT_IRQ_POS)
#define MCHP_WDT_IEN_EVENT_IRQ_EN	BIT(MCHP_WDT_IEN_EVENT_IRQ_POS)

/* Register access */
#define MCHP_WDT_LOAD_REG_ADDR	(MCHP_WDT_BASE_ADDR + MCHP_WDT_LOAD_REG_OFS)
#define MCHP_WDT_CTRL_REG_ADDR	(MCHP_WDT_BASE_ADDR + MCHP_WDT_CTRL_REG_OFS)
#define MCHP_WDT_KICK_REG_ADDR	(MCHP_WDT_BASE_ADDR + MCHP_WDT_KICK_REG_OFS)
#define MCHP_WDT_STS_REG_ADDR	(MCHP_WDT_BASE_ADDR + MCHP_WDT_STS_REG_OFS)
#define MCHP_WDT_IEN_REG_ADDR	(MCHP_WDT_BASE_ADDR + MCHP_WDT_IEN_REG_OFS)

#define MCHP_WDT_LOAD()		REG16(MCHP_WDT_LOAD_REG_ADDR)
#define MCHP_WDT_CTRL()		REG16(MCHP_WDT_CTRL_REG_ADDR)
#define MCHP_WDT_KICK()		REG8(MCHP_WDT_KICK_REG_ADDR)
#define MCHP_WDT_CNT()		REG16(MCHP_WDT_CNT_REG_ADDR)
#define MCHP_WDT_STS()		REG8(MCHP_WDT_STS_REG_ADDR)
#define MCHP_WDT_IEN()		REG8(MCHP_WDT_IEN_REG_ADDR)

#endif	/* #ifndef _COMPONENT_WDT_H */
/* end wdt.h */
/**   @}
 */
