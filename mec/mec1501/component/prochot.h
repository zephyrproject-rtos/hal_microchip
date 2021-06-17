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

/** @file prochot.h
 *MEC1501 Processor temperature control registers
 */
/** @defgroup MEC1501 Peripherals PROCHOT
 */

#ifndef _PROCHOT_H
#define _PROCHOT_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 PROCHOT 			=========== */
/* =========================================================================*/

#define MCHP_PROCHOT_BASE_ADDR	0x40003400u

/*
 * PROCHOT interrupt signal:
 */
#define MCHP_PROCHOT_GIRQ		17u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_PROCHOT_GIRQ_POS		17

#define MCHP_PROCHOT_GIRQ_VAL		(1u << MCHP_PROCHOT_GIRQ_POS)

/* PROCHOT GIRQ aggregated NVIC input */
#define MCHP_PROCHOT_NVIC_AGGR		9u

/* PROCHOT direct NVIC inputs */
#define MCHP_PROCHOT_NVIC_DIRECT	87u

/* Cumulative Count register */
#define MCHP_PROCHOT_CCNT_REG_OFS	0
#define MCHP_PROCHOT_CCNT_REG_MASK	0x00ffffffu

/* Duty cycle count register */
#define MCHP_PROCHOT_DCCNT_REG_OFS	4
#define MCHP_PROCHOT_DCCNT_REG_MASK	0x00ffffffu

/* Duty cycle period register */
#define MCHP_PROCHOT_DCPER_REG_OFS	8
#define MCHP_PROCHOT_DCPER_REG_MASK	0x00ffffffu

/* Control and Status register */
#define MCHP_PROCHOT_CTRLS_REG_OFS		0x0c
#define MCHP_PROCHOT_CTRLS_REG_MASK		0x00000c3fu
#define MCHP_PROCHOT_CTRLS_EN_POS		0
#define MCHP_PROCHOT_CTRLS_EN			(1u << 0)
#define MCHP_PROCHOT_CTRLS_PIN_POS		1
#define MCHP_PROCHOT_CTRLS_PIN_HI		(1u << 1)
#define MCHP_PROCHOT_CTRLS_ASSERT_EN_POS	2
#define MCHP_PROCHOT_CTRLS_ASSERT_EN		(1u << 2)
#define MCHP_PROCHOT_CTRLS_PERIOD_EN_POS	3
#define MCHP_PROCHOT_CTRLS_PERIOD_EN		(1u << 3)
#define MCHP_PROCHOT_CTRLS_RESET_EN_POS		4
#define MCHP_PROCHOT_CTRLS_RESET_EN		(1u << 4)
#define MCHP_PROCHOT_CTRLS_FILT_EN_POS		5
#define MCHP_PROCHOT_CTRLS_FILT_EN		(1u << 5)

/* Assertion counter register */
#define MCHP_PROCHOT_ASSERT_CNT_REG_OFS		0x10
#define MCHP_PROCHOT_ASSERT_CNT_REG_MASK	0x0000ffffu

/* Assertion counter limit register */
#define MCHP_PROCHOT_ASSERT_LIM_REG_OFS		0x14
#define MCHP_PROCHOT_ASSERT_LIM_REG_MASK	0x0000ffffu

/**
  * @brief Processor Hot Interface (PROCHOT)
  */
typedef struct prochot_regs {
	__IOM uint32_t CUMUL_COUNT; /*!< (@ 0x0000) PROCHOT Cumulative Count */
	__IOM uint32_t DUTY_COUNT; /*!< (@ 0x0004) PROCHOT Duty cycle count */
	__IOM uint32_t DUTY_PERIOD; /*!< (@ 0x0008) PROCHOT Duty cycle period */
	__IOM uint32_t CTRL_STS; /*!< (@ 0x000c) PROCHOT Control and Status */
	__IOM uint32_t ASSERT_COUNT; /*!< (@ 0x0010) PROCHOT Assertion counter */
	__IOM uint32_t ASSERT_LIMIT; /*!< (@ 0x0014) PROCHOT Assertion counter limit */
} PROCHOT_Type;

#endif	/* #ifndef _PROCHOT_H */
/* end prochot.h */
/**   @}
 */
