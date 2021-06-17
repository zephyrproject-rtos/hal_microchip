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

/** @file tach.h
 *MEC1501 Tachometer registers
 */
/** @defgroup MEC1501 Peripherals TACH
 */

#ifndef _TACH_H
#define _TACH_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 TACH 				=========== */
/* =========================================================================*/

#define MCHP_TACH_BASE_ADDR		0x40006000u

#define MCHP_TACH_MAX_INSTANCES		4u
#define MCHP_TACH_INST_SPACING		0x10u
#define MCHP_TACH_INST_SPACING_P2	4u

#define MCHP_TACH_ADDR(n)		(MCHP_TACH_BASE_ADDR + \
					 ((n) << MCHP_TACH_INST_SPACING_P2))

/*
 * TACH interrupts
 */
#define MCHP_TACH0_GIRQ		17u
#define MCHP_TACH1_GIRQ		17u
#define MCHP_TACH2_GIRQ		17u
#define MCHP_TACH3_GIRQ		17u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_TACH0_GIRQ_POS	1u
#define MCHP_TACH1_GIRQ_POS	2u
#define MCHP_TACH2_GIRQ_POS	3u
#define MCHP_TACH3_GIRQ_POS	4u

#define MCHP_TACH0_GIRQ_VAL	(1u << MCHP_TACH0_GIRQ_POS)
#define MCHP_TACH1_GIRQ_VAL	(1u << MCHP_TACH1_GIRQ_POS)
#define MCHP_TACH2_GIRQ_VAL	(1u << MCHP_TACH2_GIRQ_POS)
#define MCHP_TACH3_GIRQ_VAL	(1u << MCHP_TACH3_GIRQ_POS)

/* TACH GIRQ aggregated NVIC input */
#define MCHP_TACH0_NVIC_AGGR	9u
#define MCHP_TACH1_NVIC_AGGR	9u
#define MCHP_TACH2_NVIC_AGGR	9u
#define MCHP_TACH3_NVIC_AGGR	9u

/* TACH direct NVIC inputs */
#define MCHP_TACH0_NVIC_DIRECT	71u
#define MCHP_TACH1_NVIC_DIRECT	72u
#define MCHP_TACH2_NVIC_DIRECT	73u
#define MCHP_TACH3_NVIC_DIRECT	159u

/*
 * TACH Control register
 */
#define MCHP_TACH_CONTROL_REG_OFS		0U
#define MCHP_TACH_CONTROL_MASK			0xffffdd03u
/* Enable exceed high or low limit detection */
#define MCHP_TACH_CTRL_EXCEED_LIM_EN_POS	0
#define MCHP_TACH_CTRL_EXCEED_LIM_EN	\
		(1u << MCHP_TACH_CTRL_EXCEED_LIM_EN_POS)
/* Enable TACH operation */
#define MCHP_TACH_CTRL_EN_POS		1
#define MCHP_TACH_CTRL_EN		(1u << MCHP_TACH_CTRL_EN_POS)
/* Enable input filter */
#define MCHP_TACH_CTRL_FILTER_EN_POS	8
#define MCHP_TACH_CTRL_FILTER_EN	(1u << MCHP_TACH_CTRL_FILTER_EN_POS)
/* Select read mode. Latch data on rising edge of selected trigger */
#define MCHP_TACH_CTRL_READ_MODE_SEL_POS	10
#define MCHP_TACH_CTRL_READ_MODE_INPUT	\
		(0u << MCHP_TACH_CTRL_READ_MODE_SEL_POS)
#define MCHP_TACH_CTRL_READ_MODE_100K_CLOCK	\
		(1u << MCHP_TACH_CTRL_READ_MODE_SEL_POS)
/* Select TACH edges for counter increment */
#define MCHP_TACH_CTRL_NUM_EDGES_POS	11
#define MCHP_TACH_CTRL_NUM_EDGES_MASK0	0x03u
#define MCHP_TACH_CTRL_NUM_EDGES_MASK	(MCHP_TACH_CTRL_NUM_EDGES_MASK0 \
					 << MCHP_TACH_CTRL_NUM_EDGES_POS)
#define MCHP_TACH_CTRL_EDGES_2	(0u << MCHP_TACH_CTRL_NUM_EDGES_POS)
#define MCHP_TACH_CTRL_EDGES_3	(1u << MCHP_TACH_CTRL_NUM_EDGES_POS)
#define MCHP_TACH_CTRL_EDGES_5	(2u << MCHP_TACH_CTRL_NUM_EDGES_POS)
#define MCHP_TACH_CTRL_EDGES_9	(3u << MCHP_TACH_CTRL_NUM_EDGES_POS)
/* Enable count ready interrupt */
#define MCHP_TACH_CTRL_CNT_RDY_INT_EN_POS	14
#define MCHP_TACH_CTRL_CNT_RDY_INT_EN	\
	(1u << MCHP_TACH_CTRL_CNT_RDY_INT_EN_POS)
/* Enable input toggle interrupt */
#define MCHP_TACH_CTRL_TOGGLE_INT_EN_POS	15
#define MCHP_TACH_CTRL_TOGGLE_INT_EN	\
	(1u << MCHP_TACH_CTRL_TOGGLE_INT_EN_POS)
/* Read-only latched TACH pulse counter */
#define MCHP_TACH_CTRL_COUNTER_POS	16
#define MCHP_TACH_CTRL_COUNTER_MASK0	0xffffu
#define MCHP_TACH_CTRL_COUNTER_MASK	\
	(MCHP_TACH_CTRL_COUNTER_MASK0 << MCHP_TACH_CTRL_COUNTER_POS)

/*
 * TACH Status register
 * bits[0, 2-3] are R/W1C
 * bit[1] is Read-Only
 */
#define MCHP_TACH_STATUS_REG_OFS	4U
#define MCHP_TACH_STATUS_MASK		0x0fu
#define MCHP_TACH_STS_EXCEED_LIMIT_POS	0
#define MCHP_TACH_STS_EXCEED_LIMIT	(1U << MCHP_TACH_STS_EXCEED_LIMIT_POS)
#define MCHP_TACH_STS_PIN_STATE_POS	1
#define MCHP_TACH_STS_PIN_STATE_HI	(1U << MCHP_TACH_STS_PIN_STATE_POS)
#define MCHP_TACH_STS_TOGGLE_POS	2
#define MCHP_TACH_STS_TOGGLE		(1U << MCHP_TACH_STS_TOGGLE_POS)
#define MCHP_TACH_STS_CNT_RDY_POS	3
#define MCHP_TACH_STS_CNT_RDY		(1U << MCHP_TACH_STS_CNT_RDY_POS)

/*
 * TACH High Limit Register
 */
#define MCHP_TACH_HI_LIMIT_REG_OFS	8U
#define MCHP_TACH_HI_LIMIT_MASK		0xffffu

/*
 * TACH Low Limit Register
 */
#define MCHP_TACH_LO_LIMIT_REG_OFS	0x0cu
#define MCHP_TACH_LO_LIMIT_MASK		0xffffu


/**
  * @brief Tachometer Registers (TACH)
  */
typedef struct tach_regs {
	__IOM uint32_t CONTROL;	/*!< (@ 0x0000) TACH Control b[31:0] */
	__IOM uint32_t STATUS;	/*!< (@ 0x0004) TACH Status b[7:0] */
	__IOM uint32_t LIMIT_HI; /*!< (@ 0x0008) TACH High LImit b[15:0] */
	__IOM uint32_t LIMIT_LO; /*!< (@ 0x000c) TACH Low Limit b[15:0] */
} TACH_Type;

#endif	/* #ifndef _TACH_H */
/* end tach.h */
/**   @}
 */
