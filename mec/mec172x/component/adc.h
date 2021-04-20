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

/** @file peci.h
 * MEC172x Analog to Digital Converter registers
 */
/** @defgroup MEC172x Peripherals ADC
 */

#ifndef _ADC_H
#define _ADC_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

/* =========================================================================*/
/* ================		 ADC				=========== */
/* =========================================================================*/

#define MCHP_ADC_BASE_ADDR	0x40007C00ul

/*
 * ADC block implements two interrupt signals:
 * single conversion and repeat conversion done.
 */
#define MCHP_ADC_GIRQ		17u

/* Bit position in GIRQ Source, Enable-Set/Clr, and Result registers */
#define MCHP_ADC_SNG_DONE_GIRQ_POS	8
#define MCHP_ADC_RPT_DONE_GIRQ_POS	9

#define MCHP_ADC_SNG_DONE_GIRQ_VAL	BIT(MCHP_ADC_SNG_DONE_GIRQ_POS)
#define MCHP_ADC_RPT_DONE_GIRQ_VAL	BIT(MCHP_ADC_RPT_DONE_GIRQ_POS)

/* ADC GIRQ aggregated NVIC input */
#define MCHP_ADC_SNG_DONE_NVIC_AGGR	9u
#define MCHP_ADC_RPT_DONE_NVIC_AGGR	9u

/* ADC direct NVIC inputs */
#define MCHP_ADC_SNG_DONE_NVIC_DIRECT	78u
#define MCHP_ADC_RPT_DONE_NVIC_DIRECT	79u

/* Eight ADC channels numbered 0 - 7 */
#define MCHP_ADC_MAX_CHAN		8
#define MCHP_ADC_MAX_CHAN_MASK		0x07u

/* Control register */
#define MCHP_ADC_CTRL_REG_OFS		0

/* Delay register */
#define MCHP_ADC_DELAY_REG_OFS		4

/* Status register */
#define MCHP_ADC_STATUS_REG_OFS		8

/* Single Conversion Select register */
#define MCHP_ADC_SCS_REG_OFS		0x0C
#define MCHP_ADC_SCS_REG_MASK		0xffu
#define MCHP_ADC_SCS_CH_0_7		0xffu
#define MCHP_ADC_SCS_CH(n)		BIT(((n) & 0x07))

/* Repeat Conversion Select register */
#define MCHP_ADC_RCS_REG_OFS		0x10
#define MCHP_ADC_RCS_REG_MASK		0xffu
#define MCHP_ADC_RCS_CH_0_7		0xffu
#define MCHP_ADC_RCS_CH(n)		BIT(((n) & 0x07))

/* Channel reading registers */
#define MCHP_ADC_RDCH_REG_MASK		0xFFFul
#define MCHP_ADC_RDCH0_REG_OFS		0x14
#define MCHP_ADC_RDCH1_REG_OFS		0x18
#define MCHP_ADC_RDCH2_REG_OFS		0x1C
#define MCHP_ADC_RDCH3_REG_OFS		0x20
#define MCHP_ADC_RDCH4_REG_OFS		0x24
#define MCHP_ADC_RDCH5_REG_OFS		0x28
#define MCHP_ADC_RDCH6_REG_OFS		0x2C
#define MCHP_ADC_RDCH7_REG_OFS		0x30

/* Configuration register */
#define MCHP_ADC_CFG_REG_OFS		0x7Cu
#define MCHP_ADC_CFG_REG_MASK		0xffffu
#define MCHP_ADC_CFG_CLK_LO_TIME_POS	0
#define MCHP_ADC_CFG_CLK_LO_TIME_MASK0	0xffu
#define MCHP_ADC_CFG_CLK_LO_TIME_MASK	0xffu
#define MCHP_ADC_CFG_CLK_HI_TIME_POS	8
#define MCHP_ADC_CFG_CLK_HI_TIME_MASK0	0xffu
#define MCHP_ADC_CFG_CLK_HI_TIME_MASK	SHLU32(0xffu, 8)

/* Channel Vref Select register */
#define MCHP_ADC_CH_VREF_SEL_REG_OFS	0x80u
#define MCHP_ADC_CH_VREF_SEL_REG_MASK	0x00fffffful
#define MCHP_ADC_CH_VREF_SEL_MASK(n)	SHLU32(0x03u, (((n) & 0x07) * 2U))
#define MCHP_ADC_CH_VREF_SEL_PAD(n)	0u
#define MCHP_ADC_CH_VREF_SEL_GPIO(n)	SHLU32(0x01u, (((n) & 0x07) * 2U))

/* Vref Control register */
#define MCHP_ADC_VREF_CTRL_REG_OFS		0x84u
#define MCHP_ADC_VREF_CTRL_REG_MASK		0xffffffffu
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_POS		0
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_MASK0	0xffffu
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_MASK	0xffffu
#define MCHP_ADC_VREF_CTRL_SW_DEL_POS		16
#define MCHP_ADC_VREF_CTRL_SW_DEL_MASK0		0x1fffu
#define MCHP_ADC_VREF_CTRL_SW_DEL_MASK		SHLU32(0x1ffful, 16)
#define MCHP_ADC_VREF_CTRL_PAD_POS		29
#define MCHP_ADC_VREF_CTRL_PAD_UNUSED_FLOAT	0ul
#define MCHP_ADC_VREF_CTRL_PAD_UNUSED_DRIVE_LO	BIT(29)
#define MCHP_ADC_VREF_CTRL_SEL_STS_POS		30
#define MCHP_ADC_VREF_CTRL_SEL_STS_MASK0	0x03u
#define MCHP_ADC_VREF_CTRL_SEL_STS_MASK		SHLU32(0x03u, 30)

/* SAR ADC Control register */
#define MCHP_ADC_SAR_CTRL_REG_OFS	0x88u
#define MCHP_ADC_SAR_CTRL_REG_MASK	0x0001FF8Ful
/* Select single ended or differential operation */
#define MCHP_ADC_SAR_CTRL_SELDIFF_POS	0
#define MCHP_ADC_SAR_CTRL_SELDIFF_DIS	0ul
#define MCHP_ADC_SAR_CTRL_SELDIFF_EN	BIT(0)
/* Select resolution */
#define MCHP_ADC_SAR_CTRL_RES_POS	1
#define MCHP_ADC_SAR_CTRL_RES_MASK0	0x03u
#define MCHP_ADC_SAR_CTRL_RES_MASK	0x06u
#define MCHP_ADC_SAR_CTRL_RES_10_BITS	0x04u
#define MCHP_ADC_SAR_CTRL_RES_12_BITS	0x06u
/* Shift data in reading register */
#define MCHP_ADC_SAR_CTRL_SHIFTD_POS	3
#define MCHP_ADC_SAR_CTRL_SHIFTD_DIS	0ul
#define MCHP_ADC_SAR_CTRL_SHIFTD_EN	BIT(3)
/* Warm up delay in ADC clock cycles */
#define MCHP_ADC_SAR_CTRL_WUP_DLY_POS	7
#define MCHP_ADC_SAR_CTRL_WUP_DLY_MASK0 0x3fful
#define MCHP_ADC_SAR_CTRL_WUP_DLY_MASK	SHLU32(0x3ffu, 7)
#define MCHP_ADC_SAR_CTRL_WUP_DLY_DFLT	SHLU32(0x202u, 7)

/* Register interface */
#define MCHP_ADC_CH_NUM(n)	((n) & MCHP_ADC_MAX_CHAN_MASK)
#define MCHP_ADC_CH_OFS(n)	(MCHP_ADC_CH_NUM(n) * 4U)
#define MCHP_ADC_CH_ADDR(n)	(MCHP_ADC_BASE_ADDR + MCHP_ADC_CH_OFS(n))

#define MCHP_ADC_RD_CHAN(n)	REG32(MCHP_ADC_CH_ADDR(n))

#endif	/* #ifndef _ADC_H */
/* end adc.h */
/**   @}
 */
