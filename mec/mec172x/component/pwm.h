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

/** @file pwm.h
 * MEC172x Pulse width modulator controller registers
 */
/** @defgroup MEC172x Peripherals PWM
 */

#ifndef _COMPONENT_PWM_H
#define _COMPONENT_PWM_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_PWM_BASE_ADDR		0x40005800ul

#define MCHP_PWM_INST_SPACING		0x10ul
#define MCHP_PWM_INST_SPACING_P2	4u

#define MCHP_PWM_ADDR(n)	(MCHP_PWM_BASE_ADDR + \
				 ((uint32_t)(n) * MCHP_PWM_INST_SPACING))

/* !!!! PWM does not generate interrupts. !!!! */

/* PWM Count On register */
#define MCHP_PWM_COUNT_ON_REG_OFS	0U
#define MCHP_PWM_COUNT_ON_MASK		0xffffU

/* PWM Count Off register */
#define MCHP_PWM_COUNT_OFF_REG_OFS	4U
#define MCHP_PWM_COUNT_OFF_MASK		0xffffU

/* PWM Configuration Register */
#define MCHP_PWM_CONFIG_REG_OFS		8U
#define MCHP_PWM_CONFIG_MASK		0x7FU
/*
 * Enable and start PWM. Clearing this bit resets internal counters.
 * COUNT_ON and COUNT_OFF registers are not affected by enable bit.
 */
#define MCHP_PWM_CFG_ENABLE_POS		0
#define MCHP_PWM_CFG_ENABLE		BIT(MCHP_PWM_CFG_ENABLE_POS)
/* Clock select */
#define MCHP_PWM_CFG_CLK_SEL_POS	1
#define MCHP_PWM_CFG_CLK_SEL_48M	0U
#define MCHP_PWM_CFG_CLK_SEL_100K	BIT(MCHP_PWM_CFG_CLK_SEL_POS)
/*
 * ON state polarity.
 * Default ON state is High.
 */
#define MCHP_PWM_CFG_ON_POL_POS		2
#define MCHP_PWM_CFG_ON_POL_HI		0U
#define MCHP_PWM_CFG_ON_POL_LO		BIT(MCHP_PWM_CFG_ON_POL_POS)
/*
 * Clock pre-divider
 * Clock divider value = pre-divider + 1
 */
#define MCHP_PWM_CFG_CLK_PRE_DIV_POS	3
#define MCHP_PWM_CFG_CLK_PRE_DIV_MASK0	0x0FU
#define MCHP_PWM_CFG_CLK_PRE_DIV_MASK \
	SHLU32(0x0Fu, MCHP_PWM_CFG_CLK_PRE_DIV_POS)

#define MCHP_PWM_CFG_CLK_PRE_DIV(n)		     \
	SHLU32((n) & MCHP_PWM_CFG_CLK_PRE_DIV_MASK0, \
	       MCHP_PWM_CFG_CLK_PRE_DIV_POS)

/* PWM input frequencies selected in configuration register. */
#define MCHP_PWM_INPUT_FREQ_HI	48000000U
#define MCHP_PWM_INPUT_FREQ_LO	100000U

/*
 * Register access
 * 0 <= n < MCHP_PWM_INSTANCES
 */
#define MCHP_PWM_COUNT_ON(n) \
	REG16(MCHP_PWM_ADDR(n) + MCHP_PWM_COUNT_ON_REG_OFS)

#define MCHP_PWM_COUNT_OFF(n) \
	REG16(MCHP_PWM_ADDR(n) + MCHP_PWM_COUNT_OFF_REG_OFS)

#define MCHP_PWM_CONFIG(n) \
	REG8(MCHP_PWM_ADDR(n) + MCHP_PWM_CONFIG_REG_OFS)

/*
 * PWM Frequency =
 * (1 / (pre_div + 1)) * PWM_INPUT_FREQ / ((COUNT_ON+1) + (COUNT_OFF+1))
 *
 * PWM Duty Cycle =
 * (COUNT_ON+1) / ((COUNT_ON+1) + (COUNT_OFF + 1))
 */

#endif	/* #ifndef _COMPONENT_PWM_H */
/* end pwm.h */
/**   @}
 */
