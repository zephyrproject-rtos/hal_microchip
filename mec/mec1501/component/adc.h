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

/** @file peci.h
 *MEC1501 Analog to Digital Converter registers
 */
/** @defgroup MEC1501 Peripherals ADC
 */

#ifndef _ADC_H
#define _ADC_H

#include <stdint.h>
#include <stddef.h>

#include "regaccess.h"

/* =========================================================================*/
/* ================		 ADC 				=========== */
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

#define MCHP_ADC_SNG_DONE_GIRQ_VAL	(1ul << MCHP_ADC_SNG_DONE_GIRQ_POS)
#define MCHP_ADC_RPT_DONE_GIRQ_VAL	(1ul << MCHP_ADC_RPT_DONE_GIRQ_POS)

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
#define MCHP_ADC_SCS_CH(n)	(1ul << ((n) & 0x07))

/* Repeat Conversion Select register */
#define MCHP_ADC_RCS_REG_OFS		0x10
#define MCHP_ADC_RCS_REG_MASK		0xffu
#define MCHP_ADC_RCS_CH_0_7		0xffu
#define MCHP_ADC_RCS_CH(n)	(1ul << ((n) & 0x07))

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
#define MCHP_ADC_CFG_CLK_HI_TIME_MASK	(0xfful << 8)

/* Channel Vref Select register */
#define MCHP_ADC_CH_VREF_SEL_REG_OFS	0x80u
#define MCHP_ADC_CH_VREF_SEL_REG_MASK	0x00fffffful
#define MCHP_ADC_CH_VREF_SEL_MASK(n)	(0x03ul << (((n) & 0x07) << 1))
#define MCHP_ADC_CH_VREF_SEL_PAD(n)	(0x00ul << (((n) & 0x07) << 1))
#define MCHP_ADC_CH_VREF_SEL_GPIO(n)	(0x01ul << (((n) & 0x07) << 1))

/* Vref Control register */
#define MCHP_ADC_VREF_CTRL_REG_OFS		0x84u
#define MCHP_ADC_VREF_CTRL_REG_MASK		0xffffffffu
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_POS		0
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_MASK0	0xffffu
#define MCHP_ADC_VREF_CTRL_CHRG_DEL_MASK	0xffffu
#define MCHP_ADC_VREF_CTRL_SW_DEL_POS		16
#define MCHP_ADC_VREF_CTRL_SW_DEL_MASK0		0x1fffu
#define MCHP_ADC_VREF_CTRL_SW_DEL_MASK		(0x1ffful << 16)
#define MCHP_ADC_VREF_CTRL_PAD_POS		29
#define MCHP_ADC_VREF_CTRL_PAD_UNUSED_FLOAT	(0ul << 29)
#define MCHP_ADC_VREF_CTRL_PAD_UNUSED_DRIVE_LO	(1ul << 29)
#define MCHP_ADC_VREF_CTRL_SEL_STS_POS		30
#define MCHP_ADC_VREF_CTRL_SEL_STS_MASK0	0x03u
#define MCHP_ADC_VREF_CTRL_SEL_STS_MASK		(0x03ul << 30)

/* SAR ADC Control register */
#define MCHP_ADC_SAR_CTRL_REG_OFS	0x88u
#define MCHP_ADC_SAR_CTRL_REG_MASK	0x0001FF8Ful
/* Select single ended or differential operation */
#define MCHP_ADC_SAR_CTRL_SELDIFF_POS	0
#define MCHP_ADC_SAR_CTRL_SELDIFF_DIS	(0ul << 0)
#define MCHP_ADC_SAR_CTRL_SELDIFF_EN	(1ul << 0)
/* Select resolution */
#define MCHP_ADC_SAR_CTRL_RES_POS	1
#define MCHP_ADC_SAR_CTRL_RES_MASK0	0x03u
#define MCHP_ADC_SAR_CTRL_RES_MASK	(0x03ul << 1)
#define MCHP_ADC_SAR_CTRL_RES_10_BITS	(0x02ul << 1)
#define MCHP_ADC_SAR_CTRL_RES_12_BITS	(0x03ul << 1)
/* Shift data in reading register */
#define MCHP_ADC_SAR_CTRL_SHIFTD_POS	3
#define MCHP_ADC_SAR_CTRL_SHIFTD_DIS	(0ul << 3)
#define MCHP_ADC_SAR_CTRL_SHIFTD_EN	(1ul << 3)
/* Warm up delay in ADC clock cycles */
#define MCHP_ADC_SAR_CTRL_WUP_DLY_POS	7
#define MCHP_ADC_SAR_CTRL_WUP_DLY_MASK0	0x3fful
#define MCHP_ADC_SAR_CTRL_WUP_DLY_MASK	(0x3fful << 7)
#define MCHP_ADC_SAR_CTRL_WUP_DLY_DFLT	(0x202ul << 7)

/* Register interface */
#define MCHP_ADC_CH_NUM(n) ((n) & MCHP_ADC_MAX_CHAN_MASK)
#define MCHP_ADC_CH_OFS(n) (MCHP_ADC_CH_NUM(n) << 2)
#define MCHP_ADC_CH_ADDR(n) (MCHP_ADC_BASE_ADDR + MCHP_ADC_CH_OFS(n))

#define MCHP_ADC_RD_CHAN(n) REG32(MCHP_ADC_CH_ADDR(n))

/**
  * @brief Analog to Digital Converter Registers (ADC)
  */
typedef struct adc_regs {
	__IOM uint32_t CONTROL; /*!< (@ 0x0000) ADC Control */
	__IOM uint32_t DELAY; /*!< (@ 0x0004) ADC Delay */
	__IOM uint32_t STATUS; /*!< (@ 0x0008) ADC Status */
	__IOM uint32_t SINGLE; /*!< (@ 0x000C) ADC Single */
	__IOM uint32_t REPEAT; /*!< (@ 0x0010) ADC Repeat */
	__IOM uint32_t RDCH0; /*!< (@ 0x0014) ADC Chan0 Reading */
	__IOM uint32_t RDCH1; /*!< (@ 0x0018) ADC Chan1 Reading */
	__IOM uint32_t RDCH2; /*!< (@ 0x001C) ADC Chan2 Reading */
	__IOM uint32_t RDCH3; /*!< (@ 0x0020) ADC Chan3 Reading */
	__IOM uint32_t RDCH4; /*!< (@ 0x0024) ADC Chan4 Reading */
	__IOM uint32_t RDCH5; /*!< (@ 0x0028) ADC Chan5 Reading */
	__IOM uint32_t RDCH6; /*!< (@ 0x002C) ADC Chan6 Reading */
	__IOM uint32_t RDCH7; /*!< (@ 0x0030) ADC Chan7 Reading */
	uint8_t RSVD1[0x7C - 0x34];
	__IOM uint32_t CONFIG; /*!< (@ 0x007C) ADC Configuration */
	__IOM uint32_t VREF_CHAN_SEL; /*!< (@ 0x0080) ADC Vref Channel Sel. */
	__IOM uint32_t VREF_CTRL; /*!< (@ 0x0084) ADC Vref Control */
	__IOM uint32_t SARADC_CTRL; /*!< (@ 0x0088) SAR ARD Control */
} ADC_Type;

#endif	/* #ifndef _ADC_H */
/* end adc.h */
/**   @}
 */
