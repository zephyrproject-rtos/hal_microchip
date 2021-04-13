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

/** @file prochot.h
 * MEC172x Processor temperature control registers
 */
/** @defgroup MEC172x Peripherals PROCHOT
 */

#ifndef _COMPONENT_PROCHOT_H
#define _COMPONENT_PROCHOT_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_PROCHOT_BASE_ADDR		0x40003400ul

/* PROCHOT interrupt signal */
#define MCHP_PROCHOT_GIRQ		17u
/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_PROCHOT_GIRQ_POS		17
#define MCHP_PROCHOT_GIRQ_VAL		BIT(MCHP_PROCHOT_GIRQ_POS)

/* PROCHOT GIRQ aggregated NVIC input */
#define MCHP_PROCHOT_NVIC_AGGR		9u
/* PROCHOT direct NVIC inputs */
#define MCHP_PROCHOT_NVIC_DIRECT	87u

/* Cumulative Count register */
#define MCHP_PROCHOT_CCNT_REG_OFS	0
#define MCHP_PROCHOT_CCNT_REG_MASK	0x00fffffful

/* Duty cycle count register */
#define MCHP_PROCHOT_DCCNT_REG_OFS	4
#define MCHP_PROCHOT_DCCNT_REG_MASK	0x00fffffful

/* Duty cycle period register */
#define MCHP_PROCHOT_DCPER_REG_OFS	8
#define MCHP_PROCHOT_DCPER_REG_MASK	0x00fffffful

/* Control and Status register */
#define MCHP_PROCHOT_CTRLS_REG_OFS		0x0C
#define MCHP_PROCHOT_CTRLS_REG_MASK		0x00000C3Ful
#define MCHP_PROCHOT_CTRLS_EN_POS		0
#define MCHP_PROCHOT_CTRLS_EN			BIT(MCHP_PROCHOT_CTRLS_EN_POS)
#define MCHP_PROCHOT_CTRLS_PIN_POS		1
#define MCHP_PROCHOT_CTRLS_PIN_HI		BIT(MCHP_PROCHOT_CTRLS_PIN_POS)
#define MCHP_PROCHOT_CTRLS_ASSERT_EN_POS	2
#define MCHP_PROCHOT_CTRLS_ASSERT_EN		\
	BIT(MCHP_PROCHOT_CTRLS_ASSERT_EN_POS)
#define MCHP_PROCHOT_CTRLS_PERIOD_EN_POS	3
#define MCHP_PROCHOT_CTRLS_PERIOD_EN		\
	BIT(MCHP_PROCHOT_CTRLS_PERIOD_EN_POS)
#define MCHP_PROCHOT_CTRLS_RESET_EN_POS		4
#define MCHP_PROCHOT_CTRLS_RESET_EN		\
	BIT(MCHP_PROCHOT_CTRLS_RESET_EN_POS)
#define MCHP_PROCHOT_CTRLS_FILT_EN_POS		5
#define MCHP_PROCHOT_CTRLS_FILT_EN		\
	BIT(MCHP_PROCHOT_CTRLS_FILT_EN_POS)

/* Assertion counter register */
#define MCHP_PROCHOT_ASSERT_CNT_REG_OFS		0x10
#define MCHP_PROCHOT_ASSERT_CNT_REG_MASK	0x0000fffful

/* Assertion counter limit register */
#define MCHP_PROCHOT_ASSERT_LIM_REG_OFS		0x14
#define MCHP_PROCHOT_ASSERT_LIM_REG_MASK	0x0000fffful

#endif	/* #ifndef _COMPONENT_PROCHOT_H */
/* end prochot.h */
/**   @}
 */
