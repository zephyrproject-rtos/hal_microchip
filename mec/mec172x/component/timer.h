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

/** @file timer.h
 * MEC172x Timer definitions
 */
/** @defgroup MEC172x Peripherals Timers
 */

#ifndef _COMPONENT_TIMER_H
#define _COMPONENT_TIMER_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/*
 * Basic timers base address
 * Offset between each timer block
 */
#define MCHP_B16TMR_BASE		0x40000C00ul
#define MCHP_B16TMR_INSTANCES		4u
#define MCHP_B32TMR_BASE		0x40000C80ul
#define MCHP_B32TMR_INSTANCES		2u

/* Offset between instances of the Basic Timer blocks */
#define MCHP_BTMR_INSTANCE_POS	5ul
#define MCHP_BTMR_INSTANCE_OFS	0x20U

/* Base frequency of all basic timers is AHB clock */
#define MCHP_BTMR_BASE_FREQ 48000000ul
#define MCHP_BTMR_MIN_FREQ (MCHP_BTMR_BASE_FREQ / 0x10000ul)

/* 0 <= n < MCHP_B16TMR_INSTANCES */
#define MCHP_B16TMR_ADDR(n) \
	(MCHP_B16TMR_BASE + ((uint32_t)(n) * MCHP_BTMR_INSTANCE_OFS))

#define MCHP_B16TMR0_ADDR	0x40000C00ul
#define MCHP_B16TMR1_ADDR	0x40000C20ul
#define MCHP_B16TMR2_ADDR	0x40000C40ul
#define MCHP_B16TMR3_ADDR	0x40000C60ul

/* 0 <= n < MCHP_B32TMR_INSTANCES */
#define MCHP_B32TMR_ADDR(n) \
	(MCHP_B32TMR_BASE + ((uint32_t)(n) << MCHP_BTMR_INSTANCE_POS))

#define MCHP_B32TMR0_ADDR	0x40000C80ul
#define MCHP_B32TMR1_ADDR	0x40000CA0ul

/*
 * Basic Timer Count Register (Offset +00h)
 * 32-bit R/W
 * 16-bit Basic timers: bits[15:0]=R/W, bits[31:15]=RO=0
 */
#define MCHP_BTMR_CNT_OFS	0x00ul

/*
 * Basic Timer Preload Register (Offset +04h)
 * 32-bit R/W
 * 16-bit Basic timers: bits[15:0]=R/W, bits[31:15]=RO=0
 */
#define MCHP_BTMR_PRELOAD_OFS	0x04

/* Basic Timer Status Register (Offset +08h)  R/W1C */
#define MCHP_BTMR_STS_OFS		0x08ul
#define MCHP_BTMR_STS_MASK		0x01ul
#define MCHP_BTMR_STS_ACTIVE_POS	0u
#define MCHP_BTMR_STS_ACTIVE		0x01ul

/* Basic Timer Interrupt Enable Register (Offset +0Ch) */
#define MCHP_BTMR_INTEN_OFS		0x0Cul
#define MCHP_BTMR_INTEN_MASK		0x01ul
#define MCHP_BTMR_INTEN_POS		0u
#define MCHP_BTMR_INTEN			0x01ul
#define MCHP_BTMR_INTDIS		0ul

/* Basic Timer Control Register (Offset +10h) */
#define MCHP_BTMR_CTRL_OFS		0x10ul
#define MCHP_BTMR_CTRL_MASK		0xFFFF00FDul

#define MCHP_BTMR_CTRL_PRESCALE_POS	16u
#define MCHP_BTMR_CTRL_PRESCALE_MASK0	0xFFFFul
#define MCHP_BTMR_CTRL_PRESCALE_MASK	0xFFFF0000ul

#define MCHP_BTMR_CTRL_HALT		0x80ul
#define MCHP_BTMR_CTRL_RELOAD		0x40ul
#define MCHP_BTMR_CTRL_START		0x20ul
#define MCHP_BTMR_CTRL_SOFT_RESET	0x10ul
#define MCHP_BTMR_CTRL_AUTO_RESTART	0x08ul
#define MCHP_BTMR_CTRL_COUNT_UP		0x04ul
#define MCHP_BTMR_CTRL_ENABLE		0x01ul
/* */
#define MCHP_BTMR_CTRL_HALT_POS		7u
#define MCHP_BTMR_CTRL_RELOAD_POS	6u
#define MCHP_BTMR_CTRL_START_POS	5u
#define MCHP_BTMR_CTRL_SRESET_POS	4u
#define MCHP_BTMR_CTRL_AUTO_RESTART_POS 3u
#define MCHP_BTMR_CTRL_COUNT_DIR_POS	2u
#define MCHP_BTMR_CTRL_ENABLE_POS	0u

/* Basic Timer interrupt routing */
#define MCHP_B16TMR0_GIRQ	23u
#define MCHP_B16TMR1_GIRQ	23u
#define MCHP_B32TMR0_GIRQ	23u
#define MCHP_B32TMR1_GIRQ	23u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_B16TMR0_GIRQ_POS	0u
#define MCHP_B16TMR1_GIRQ_POS	1u
#define MCHP_B32TMR0_GIRQ_POS	4u
#define MCHP_B32TMR1_GIRQ_POS	5u

#define MCHP_B16TMR0_GIRQ_VAL	BIT(0)
#define MCHP_B16TMR1_GIRQ_VAL	BIT(1)
#define MCHP_B16TMR2_GIRQ_VAL	BIT(2)
#define MCHP_B16TMR3_GIRQ_VAL	BIT(3)
#define MCHP_B32TMR0_GIRQ_VAL	BIT(4)
#define MCHP_B32TMR1_GIRQ_VAL	BIT(5)

/* Basic timer GIRQ aggregated NVIC input */
#define MCHP_B16TMR0_NVIC_AGGR	14u
#define MCHP_B16TMR1_NVIC_AGGR	14u
#define MCHP_B16TMR2_NVIC_AGGR	14u
#define MCHP_B16TMR3_NVIC_AGGR	14u
#define MCHP_B32TMR0_NVIC_AGGR	14u
#define MCHP_B32TMR1_NVIC_AGGR	14u

/* Basic timer direct NVIC inputs */
#define MCHP_B16TMR0_NVIC_DIRECT	136u
#define MCHP_B16TMR1_NVIC_DIRECT	137u
#define MCHP_B16TMR2_NVIC_DIRECT	138u
#define MCHP_B16TMR3_NVIC_DIRECT	139u
#define MCHP_B32TMR0_NVIC_DIRECT	140u
#define MCHP_B32TMR1_NVIC_DIRECT	141u

/* =========================================================================*/
/* ================	   16-bit Counter/Timer		   ================ */
/* =========================================================================*/
#define MCHP_CTMR_BASE		0x40000D00ul

/* Offset between instances of the Basic Timer blocks */
#define MCHP_CTMR_INSTANCE_POS	5ul
#define MCHP_CTMR_INSTANCE_OFS	0x20U

/* 0 <= n < MCHP_CTMR_INSTANCES */
#define MCHP_CTMR_ADDR(n) \
	(MCHP_CTMR_BASE + ((uint32_t)(n) * MCHP_CTMR_INSTANCE_OFS))

#define MCHP_CTMR0_ADDR		0x40000D00ul
#define MCHP_CTMR1_ADDR		0x40000D20ul
#define MCHP_CTMR2_ADDR		0x40000D40ul
#define MCHP_CTMR3_ADDR		0x40000D60ul

/* 16-bit Counter-Timer Control Register: offset 0x00 (RW and RO) */
#define MCHP_CTMR_CTRL_OFS		0x00U
#define MCHP_CTMR_CTRL_MASK		0x1fffU
#define MCHP_CTMR_CTRL_RW_MASK		0x07ffU
#define MCHP_CTMR_CTRL_RO_MASK		0x1800U
#define MCHP_CTMR_CTRL_EN_POS		0
#define MCHP_CTMR_CTRL_RESET_POS	1
#define MCHP_CTMR_CTRL_MODE_POS		2
#define MCHP_CTMR_CTRL_INPOL_POS	4
#define MCHP_CTMR_CTRL_UPDN_POS		5
#define MCHP_CTMR_CTRL_TOUT_EN_POS	6
#define MCHP_CTMR_CTRL_RLOAD_POS	7
#define MCHP_CTMR_CTRL_FILT_BYP_POS	8
#define MCHP_CTMR_CTRL_PD_POS		9
#define MCHP_CTMR_CTRL_TOUT_POL_POS	10
#define MCHP_CTMR_CTRL_SLP_EN_POS	11	/* RO */
#define MCHP_CTMR_CTRL_CLK_REQ_POS	12	/* RO */

#define MCHP_CTMR_CTRL_EN		BIT(MCHP_CTMR_CTRL_EN_POS)
#define MCHP_CTMR_CTRL_RESET		BIT(MCHP_CTMR_CTRL_RESET_POS)
#define MCHP_CTMR_CTRL_MODE_MASK	SHLU32(3u, 2)
#define MCHP_CTMR_CTRL_MODE_TIMER	0U
#define MCHP_CTMR_CTRL_MODE_EVENT	SHLU32(1u, 2)
#define MCHP_CTMR_CTRL_MODE_ONESHOT	SHLU32(2u, 2)
#define MCHP_CTMR_CTRL_MEAS_EVENT	SHLU32(3u, 2)
#define MCHP_CTMR_CTRL_INPOL_LO		BIT(MCHP_CTMR_CTRL_INPOL_POS)
#define MCHP_CTMR_CTRL_EV_UP		BIT(MCHP_CTMR_CTRL_UPDN_POS)
#define MCHP_CTMR_CTRL_TM_TIN_DE_PAUSE	BIT(MCHP_CTMR_CTRL_UPDN_POS)
#define MCHP_CTMR_CTRL_TOUT_EN		BIT(MCHP_CTMR_CTRL_TOUT_EN_POS)
#define MCHP_CTMR_CTRL_RLOAD_NOW	BIT(MCHP_CTMR_CTRL_RLOAD_POS)
#define MCHP_CTMR_CTRL_FILT_BYP_EN	BIT(MCHP_CTMR_CTRL_FILT_BYP_POS)
#define MCHP_CTMR_CTRL_PD_NOW		BIT(MCHP_CTMR_CTRL_PD_POS)
#define MCHP_CTMR_CTRL_TOUT_POL_LO	BIT(MCHP_CTMR_CTRL_TOUT_POL_POS)
#define MCHP_CTMR_CTRL_SLP_EN_ACT	BIT(MCHP_CTMR_CTRL_SLP_EN_POS)
#define MCHP_CTMR_CTRL_CLK_REQ_ACT	BIT(MCHP_CTMR_CTRL_CLK_REQ_POS)

/* 16-bit Counter-Timer Clock and Event Control Register: offset 0x04 (RW) */
#define MCHP_CTMR_CEVC_OFS		0x04U
#define MCHP_CTMR_CEVC_MASK		0x0fefU
#define MCHP_CTMR_CEVC_TCLK_POS		0
#define MCHP_CTMR_CEVC_EDGE_POS		5
#define MCHP_CTMR_CEVC_EVENT_POS	7
#define MCHP_CTMR_CEVC_FCLK_POS		8
#define MCHP_CTMR_CEVC_TCLK_MASK	0x0fU
#define MCHP_CTMR_CEVC_TCLK_DIV_1	0U
#define MCHP_CTMR_CEVC_TCLK_DIV_2	1U
#define MCHP_CTMR_CEVC_TCLK_DIV_3	2U
#define MCHP_CTMR_CEVC_TCLK_DIV_4	3U
#define MCHP_CTMR_CEVC_EDGE_NONE	SHLU32(3U, 5)
#define MCHP_CTMR_CEVC_EDGE_BOTH	SHLU32(2U, 5)
#define MCHP_CTMR_CEVC_EDGE_RISING	SHLU32(1U, 5)
#define MCHP_CTMR_CEVC_EDGE_FALLING	0U
#define MCHP_CTMR_CEVC_EVENT_TIN_EN	BIT(7)
#define MCHP_CTMR_CEVC_FCLK_DIV_1	0U
#define MCHP_CTMR_CEVC_FCLK_DIV_2	SHLU32(1U, 8)
#define MCHP_CTMR_CEVC_FCLK_DIV_3	SHLU32(2U, 8)
#define MCHP_CTMR_CEVC_FCLK_DIV_4	SHLU32(3U, 8)

/* 16-bit Counter-Timer Reload Register: Offset 0x08 (RW) */
#define MCHP_CTMR_RELOAD_OFS	0x08U

/* 16-bit Counter-Timer Count Register: Offset 0x0C (RO) */
#define MCHP_CTMR_COUNT_OFS	0x0CU


/* =========================================================================*/
/* ================	       HTMR			   ================ */
/* =========================================================================*/

#define MCHP_HTMR_BASE_ADDR		0x40009800ul
#define MCHP_HTMR_MAX_INSTANCES		2u
#define MCHP_HTMR_SPACING		0x20ul
#define MCHP_HTMR_SPACING_PWROF2	5u

#define MCHP_HTMR_ADDR(n) \
	(MCHP_HTMR_BASE_ADDR + ((uint32_t)(n) * MCHP_HTMR_SPACING))

#define MCHP_HTMR0_ADDR		0x40009800ul
#define MCHP_HTMR1_ADDR		0x40009820ul

/*
 * Set count resolution in bit[0]
 * 0 = 30.5 us (32786 Hz)
 * 1 = 125 ms (8 Hz)
 */
#define MCHP_HTMR_CTRL_REG_MASK		0x01ul
#define MCHP_HTMR_CTRL_RESOL_POS	0u
#define MCHP_HTMR_CTRL_RESOL_MASK	BIT(MCHP_HTMR_CTRL_EN_POS)
#define MCHP_HTMR_CTRL_RESOL_30US	0u
#define MCHP_HTMR_CTRL_RESOL_125MS	BIT(MCHP_HTMR_CTRL_EN_POS)

/*
 * Hibernation timer is started and stopped by writing a value
 * to the CNT (count) register.
 * Writing a non-zero value resets and start the counter counting down.
 * Writing 0 stops the timer.
 */
#define MCHP_HTMR_CNT_STOP_VALUE	0u

/* Hibernation timer interrupt routing */
#define MCHP_HTMR0_GIRQ		23u
#define MCHP_HTMR1_GIRQ		23u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_HTMR0_GIRQ_POS	16u
#define MCHP_HTMR1_GIRQ_POS	17u

#define MCHP_HTMR0_GIRQ_VAL	BIT(16)
#define MCHP_HTMR1_GIRQ_VAL	BIT(17)

/* Hibernation timer GIRQ aggregated NVIC input */
#define MCHP_HTMR0_NVIC_AGGR	14u
#define MCHP_HTMR1_NVIC_AGGR	14u

/* Hibernation timer direct NVIC inputs */
#define MCHP_HTMR0_NVIC_DIRECT	112u
#define MCHP_HTMR1_NVIC_DIRECT	113u

/* =========================================================================*/
/* ================   Capture/Compare Timer		   ================ */
/* =========================================================================*/

#define MCHP_CCT_BASE_ADDR	0x40001000ul
#define MCHP_CCT_MAX_INSTANCE	1u

/* Control register at offset 0x00. Must use 32-bit access */
#define MCHP_CCT_CTRL_ACTIVATE		BIT(0)
#define MCHP_CCT_CTRL_FRUN_EN		BIT(1)
#define MCHP_CCT_CTRL_FRUN_RESET	BIT(2)	/* self clearing bit */
#define MCHP_CCT_CTRL_TCLK_MASK0	0x07ul
#define MCHP_CCT_CTRL_TCLK_MASK		SHLU32(MCHP_CCT_CTRL_TCLK_MASK0, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_1	0ul
#define MCHP_CCT_CTRL_TCLK_DIV_2	SHLU32(1u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_4	SHLU32(2u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_8	SHLU32(3u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_16	SHLU32(4u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_32	SHLU32(5u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_64	SHLU32(6u, 4)
#define MCHP_CCT_CTRL_TCLK_DIV_128	SHLU32(7u, 4)
#define MCHP_CCT_CTRL_COMP0_EN		BIT(8)
#define MCHP_CCT_CTRL_COMP1_EN		BIT(9)
#define MCHP_CCT_CTRL_COMP1_SET		BIT(16) /* R/WS */
#define MCHP_CCT_CTRL_COMP0_SET		BIT(17) /* R/WS */
#define MCHP_CCT_CTRL_COMP1_CLR		BIT(24) /* R/W1C */
#define MCHP_CCT_CTRL_COMP0_CLR		BIT(25) /* R/W1C */


/* Capture Compare timer interrupt routing */
#define MCHP_CCT_GIRQ		18u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_CCT_TMR_GIRQ_POS	20u
#define MCHP_CCT_CAP0_GIRQ_POS	21u
#define MCHP_CCT_CAP1_GIRQ_POS	22u
#define MCHP_CCT_CAP2_GIRQ_POS	23u
#define MCHP_CCT_CAP3_GIRQ_POS	24u
#define MCHP_CCT_CAP4_GIRQ_POS	25u
#define MCHP_CCT_CAP5_GIRQ_POS	26u
#define MCHP_CCT_CMP0_GIRQ_POS	27u
#define MCHP_CCT_CMP1_GIRQ_POS	28u

#define MCHP_CCT_TMR_GIRQ_VAL	BIT(20)
#define MCHP_CCT_CAP0_GIRQ_VAL	BIT(21)
#define MCHP_CCT_CAP1_GIRQ_VAL	BIT(22)
#define MCHP_CCT_CAP2_GIRQ_VAL	BIT(23)
#define MCHP_CCT_CAP3_GIRQ_VAL	BIT(24)
#define MCHP_CCT_CAP4_GIRQ_VAL	BIT(25)
#define MCHP_CCT_CAP5_GIRQ_VAL	BIT(26)
#define MCHP_CCT_CMP0_GIRQ_VAL	BIT(27)
#define MCHP_CCT_CMP1_GIRQ_VAL	BIT(28)
#define MCHP_CCT_GIRQ_VAL_ALL	0x1FF00000ul

/* Capture Compare timer GIRQ aggregated NVIC input */
#define MCHP_CCT_NVIC_AGGR	10u

/* Capture Compare timer direct NVIC inputs */
#define MCHP_CCT_TMR_NVIC_DIRECT	146u
#define MCHP_CCT_CAP0_NVIC_DIRECT	147u
#define MCHP_CCT_CAP1_NVIC_DIRECT	148u
#define MCHP_CCT_CAP2_NVIC_DIRECT	149u
#define MCHP_CCT_CAP3_NVIC_DIRECT	150u
#define MCHP_CCT_CAP4_NVIC_DIRECT	151u
#define MCHP_CCT_CAP5_NVIC_DIRECT	152u
#define MCHP_CCT_CMP0_NVIC_DIRECT	153u
#define MCHP_CCT_CMP1_NVIC_DIRECT	154u

/* =========================================================================*/
/* ================	       RTMR			   ================ */
/* =========================================================================*/

#define MCHP_RTMR_BASE_ADDR		0x40007400ul

#define MCHP_RTMR_FREQ_HZ		32768ul

#define MCHP_RTMR_CTRL_MASK		0x1Ful
#define MCHP_RTMR_CTRL_BLK_EN_POS	0u
#define MCHP_RTMR_CTRL_BLK_EN_MASK	BIT(MCHP_RTMR_CTRL_BLK_EN_POS)
#define MCHP_RTMR_CTRL_BLK_EN		BIT(MCHP_RTMR_CTRL_BLK_EN_POS)

#define MCHP_RTMR_CTRL_AUTO_RELOAD_POS	1u
#define MCHP_RTMR_CTRL_AUTO_RELOAD_MASK BIT(MCHP_RTMR_CTRL_AUTO_RELOAD_POS)
#define MCHP_RTMR_CTRL_AUTO_RELOAD	BIT(MCHP_RTMR_CTRL_AUTO_RELOAD_POS)

#define MCHP_RTMR_CTRL_START_POS	2u
#define MCHP_RTMR_CTRL_START_MASK	BIT(MCHP_RTMR_CTRL_START_POS)
#define MCHP_RTMR_CTRL_START		BIT(MCHP_RTMR_CTRL_START_POS)

#define MCHP_RTMR_CTRL_HW_HALT_EN_POS	3u
#define MCHP_RTMR_CTRL_HW_HALT_EN_MASK	BIT(MCHP_RTMR_CTRL_HW_HALT_EN_POS)
#define MCHP_RTMR_CTRL_HW_HALT_EN	BIT(MCHP_RTMR_CTRL_HW_HALT_EN_POS)

#define MCHP_RTMR_CTRL_FW_HALT_EN_POS	4u
#define MCHP_RTMR_CTRL_FW_HALT_EN_MASK	BIT(MCHP_RTMR_CTRL_FW_HALT_EN_POS)
#define MCHP_RTMR_CTRL_FW_HALT_EN	BIT(MCHP_RTMR_CTRL_FW_HALT_EN_POS)

/* RTOS timer interrupt routing */
#define MCHP_RTMR_GIRQ		23u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_RTMR_GIRQ_POS	10u

#define MCHP_RTMR_GIRQ_VAL	BIT(10)

/* RTOS timer GIRQ aggregated NVIC input */
#define MCHP_RTMR_NVIC_AGGR	14u

/* RTOS timer direct NVIC inputs */
#define MCHP_RTMR_NVIC_DIRECT	111u

/* =========================================================================*/
/* ================	       WKTMR			   ================ */
/* =========================================================================*/

#define MCHP_WKTMR_BASE_ADDR		0x4000AC80ul

#define MCHP_WKTMR_CTRL_MASK		0x41ul
#define MCHP_WKTMR_CTRL_WT_EN_POS	0u
#define MCHP_WKTMR_CTRL_WT_EN_MASK	BIT(MCHP_WKTMR_CTRL_WT_EN_POS)
#define MCHP_WKTMR_CTRL_WT_EN		BIT(MCHP_WKTMR_CTRL_WT_EN_POS)
#define MCHP_WKTMR_CTRL_PWRUP_EV_EN_POS 6u
#define MCHP_WKTMR_CTRL_PWRUP_EV_EN_MASK BIT(MCHP_WKTMR_CTRL_PWRUP_EV_EN_POS)
#define MCHP_WKTMR_CTRL_PWRUP_EV_EN	BIT(MCHP_WKTMR_CTRL_PWRUP_EV_EN_POS)

#define MCHP_WKTMR_ALARM_CNT_MASK	0x0FFFFFFFul
#define MCHP_WKTMR_TMR_CMP_MASK		0x0FFFFFFFul
#define MCHP_WKTMR_CLK_DIV_MASK		0x7FFFul

#define MCHP_WKTMR_SS_MASK		0x0Ful
#define MCHP_WKTMR_SS_RATE_DIS		0x00ul
#define MCHP_WKTMR_SS_RATE_2HZ		0x01ul
#define MCHP_WKTMR_SS_RATE_4HZ		0x02ul
#define MCHP_WKTMR_SS_RATE_8HZ		0x03ul
#define MCHP_WKTMR_SS_RATE_16HZ		0x04ul
#define MCHP_WKTMR_SS_RATE_32HZ		0x05ul
#define MCHP_WKTMR_SS_RATE_64HZ		0x06ul
#define MCHP_WKTMR_SS_RATE_128HZ	0x07ul
#define MCHP_WKTMR_SS_RATE_256HZ	0x08ul
#define MCHP_WKTMR_SS_RATE_512HZ	0x09ul
#define MCHP_WKTMR_SS_RATE_1024HZ	0x0Aul
#define MCHP_WKTMR_SS_RATE_2048HZ	0x0Bul
#define MCHP_WKTMR_SS_RATE_4096HZ	0x0Cul
#define MCHP_WKTMR_SS_RATE_8192HZ	0x0Dul
#define MCHP_WKTMR_SS_RATE_16384HZ	0x0Eul
#define MCHP_WKTMR_SS_RATE_32768HZ	0x0Ful

#define MCHP_WKTMR_SWKC_MASK			0x3C3ul
#define MCHP_WKTMR_SWKC_PWRUP_EV_STS_POS	0ul
#define MCHP_WKTMR_SWKC_PWRUP_EV_STS_MASK	\
	BIT(MCHP_WKTMR_SWKC_PWRUP_EV_STS_POS)
#define MCHP_WKTMR_SWKC_PWRUP_EV_STS		\
	BIT(MCHP_WKTMR_SWKC_PWRUP_EV_STS_POS)
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_STS_POS	4ul
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_STS_MASK	\
	BIT(MCHP_WKTMR_SWKC_SYSPWR_PRES_STS_POS)
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_STS		\
	BIT(MCHP_WKTMR_SWKC_SYSPWR_PRES_STS_POS)
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_EN_POS	5ul
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_EN_MASK	\
	BIT(MCHP_WKTMR_SWKC_SYSPWR_PRES_EN_POS)
#define MCHP_WKTMR_SWKC_SYSPWR_PRES_EN		\
	BIT(MCHP_WKTMR_SWKC_SYSPWR_PRES_EN_POS)
#define MCHP_WKTMR_SWKC_AUTO_RELOAD_POS		6ul
#define MCHP_WKTMR_SWKC_AUTO_RELOAD_MASK	\
	BIT(MCHP_WKTMR_SWKC_AUTO_RELOAD_POS)
#define MCHP_WKTMR_SWKC_AUTO_RELOAD		\
	BIT(MCHP_WKTMR_SWKC_AUTO_RELOAD_POS)

/* Week timer interrupt routing */
#define MCHP_WKTMR_GIRQ		21u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_WKTMR_ALARM_GIRQ_POS	3u
#define MCHP_WKTMR_SUBWK_GIRQ_POS	4u
#define MCHP_WKTMR_ONESEC_GIRQ_POS	5u
#define MCHP_WKTMR_SUBSEC_GIRQ_POS	6u
#define MCHP_WKTMR_SUSPWR_GIRQ_POS	7u

#define MCHP_WKTMR_ALARM_GIRQ_VAL	BIT(3)
#define MCHP_WKTMR_SUBWK_GIRQ_VAL	BIT(4)
#define MCHP_WKTMR_ONESEC_GIRQ_VAL	BIT(5)
#define MCHP_WKTMR_SUBSEC_GIRQ_VAL	BIT(6)
#define MCHP_WKTMR_SUSPWR_GIRQ_VAL	BIT(7)

/* Capture Compare timer GIRQ aggregated NVIC input */
#define MCHP_WKTMR_NVIC_AGGR		13u

/* Capture Compare timer direct NVIC inputs */
#define MCHP_WKTMR_ALARM_NVIC_DIRECT	114u
#define MCHP_WKTMR_SUBWK_NVIC_DIRECT	115u
#define MCHP_WKTMR_ONESEC_NVIC_DIRECT	116u
#define MCHP_WKTMR_SUBSEC_NVIC_DIRECT	117u
#define MCHP_WKTMR_SUSPWR_NVIC_DIRECT	118u

#endif	/* #ifndef _COMPONENT_TIMER_H */
/* end timer.h */
/**   @}
 */
