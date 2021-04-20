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

/** @file gpio.h
 * MEC172x GPIO definitions
 */
/** @defgroup MEC172x Peripherals GPIO
 */

#ifndef _COMPONENT_GPIO_H
#define _COMPONENT_GPIO_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define NUM_MCHP_GPIO_PORTS	6u
#define MAX_NUM_MCHP_GPIO	(NUM_MCHP_GPIO_PORTS * 32u)

#define MCHP_GPIO_CTRL_BASE	0x40081000ul
#define MCHP_GPIO_PARIN_OFS	0x0300ul
#define MCHP_GPIO_PAROUT_OFS	0x0380ul
#define MCHP_GPIO_LOCK_OFS	0x03E8ul
#define MCHP_GPIO_CTRL2_OFS	0x0500ul

#define MCHP_GPIO_PARIN_BASE	(MCHP_GPIO_CTRL_BASE + MCHP_GPIO_PARIN_OFS)
#define MCHP_GPIO_PAROUT_BASE	(MCHP_GPIO_CTRL_BASE + MCHP_GPIO_PAROUT_OFS)
#define MCHP_GPIO_LOCK_BASE	(MCHP_GPIO_CTRL_BASE + MCHP_GPIO_LOCK_OFS)
#define MCHP_GPIO_CTRL2_BASE	(MCHP_GPIO_CTRL_BASE + MCHP_GPIO_CTRL2_OFS)

/*
 * !!! MEC data sheet pin numbering is octal !!!
 * n = pin number in octal or the equivalent in decimal or hex
 * Example: GPIO135
 * n = 0135 or n = 0x5D or n = 93
 */
#define MCHP_GPIO_CTRL_ADDR(n) \
	((uintptr_t)(MCHP_GPIO_CTRL_BASE) + ((uintptr_t)(n) * 4U))

#define MCHP_GPIO_CTRL2_ADDR(n)					   \
	((uintptr_t)(MCHP_GPIO_CTRL2_BASE + MCHP_GPIO_CTRL2_OFS) + \
	 ((uintptr_t)(n) * 4U))

/*
 * GPIO Parallel In registers.
 * Each register contains 32 GPIO's
 * PARIN0 for GPIO_0000 - 0037
 * PARIN1 for GPIO_0040 - 0077
 * PARIN2 for GPIO_0100 - 0137
 * PARIN3 for GPIO_0140 - 0177
 * PARIN4 for GPIO_0200 - 0237
 * PARIN5 for GPIO_0240 - 0277
 */
#define MCHP_GPIO_PARIN_ADDR(n) ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				 (uintptr_t)(MCHP_GPIO_PARIN_OFS) + ((n) * 4U))

#define MCHP_GPIO_PARIN0_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS))

#define MCHP_GPIO_PARIN1_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS) +0x04ul)

#define MCHP_GPIO_PARIN2_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS) +0x08ul)

#define MCHP_GPIO_PARIN3_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS) +0x0Cul)

#define MCHP_GPIO_PARIN4_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS) +0x10ul)

#define MCHP_GPIO_PARIN5_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
			       (uintptr_t)(MCHP_GPIO_PARIN_OFS) +0x14ul)

/*
 * GPIO Parallel Out registers.
 * Each register contains 32 GPIO's
 * PAROUT0 for GPIO_0000 - 0037
 * PAROUT1 for GPIO_0040 - 0077
 * PAROUT2 for GPIO_0100 - 0137
 * PAROUT3 for GPIO_0140 - 0177
 * PAROUT4 for GPIO_0200 - 0237
 * PAROUT5 for GPIO_0240 - 0277
 */
#define MCHP_GPIO_PAROUT_ADDR(n) ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				  (uintptr_t)(MCHP_GPIO_PAROUT_OFS) + \
				  ((n) * 4U))

#define MCHP_GPIO_PAROUT0_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS))

#define MCHP_GPIO_PAROUT1_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS) +0x04ul)

#define MCHP_GPIO_PAROUT2_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS) +0x08ul)

#define MCHP_GPIO_PAROUT3_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS) +0x0Cul)

#define MCHP_GPIO_PAROUT4_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS) +0x10ul)

#define MCHP_GPIO_PAROUT5_ADDR ((uintptr_t)(MCHP_GPIO_BASE_ADDR) + \
				(uintptr_t)(MCHP_GPIO_PAROUT_OFS) +0x14ul)

/*
 * MEC172XH-B0-SZ (144-pin)
 */
#define MCHP_GPIO_PORT_A_BITMAP 0x7FFFFF9Dul /* GPIO_0000 - 0036  GIRQ11 */
#define MCHP_GPIO_PORT_B_BITMAP 0x0FFFFFFDul /* GPIO_0040 - 0076  GIRQ10 */
#define MCHP_GPIO_PORT_C_BITMAP 0x07FF3CF7ul /* GPIO_0100 - 0136  GIRQ09 */
#define MCHP_GPIO_PORT_D_BITMAP 0x272EFFFFul /* GPIO_0140 - 0176  GIRQ08 */
#define MCHP_GPIO_PORT_E_BITMAP 0x00DE00FFul /* GPIO_0200 - 0236  GIRQ12 */
#define MCHP_GPIO_PORT_F_BITMAP 0x0000397Ful /* GPIO_0240 - 0276  GIRQ26 */

#define MCHP_GPIO_PORT_A_DRVSTR_BITMAP	0x7FFFFF9Dul
#define MCHP_GPIO_PORT_B_DRVSTR_BITMAP	0x0FFFFFFDul
#define MCHP_GPIO_PORT_C_DRVSTR_BITMAP	0x07FF3CF7ul
#define MCHP_GPIO_PORT_D_DRVSTR_BITMAP	0x272EFFFFul
#define MCHP_GPIO_PORT_E_DRVSTR_BITMAP	0x00DE00FFul
#define MCHP_GPIO_PORT_F_DRVSTR_BITMAP	0x0000397Ful

/* GPIO Port to ECIA GIRQ mapping */
#define MCHP_GPIO_PORT_A_GIRQ	11u
#define MCHP_GPIO_PORT_B_GIRQ	10u
#define MCHP_GPIO_PORT_C_GIRQ	9u
#define MCHP_GPIO_PORT_D_GIRQ	8u
#define MCHP_GPIO_PORT_E_GIRQ	12u
#define MCHP_GPIO_PORT_F_GIRQ	26u

/*
 * GPIO Port GIRQ to NVIC external input
 * GPIO GIRQ's are always aggregated.
 */
#define MCHP_GPIO_PORT_A_NVIC	3u
#define MCHP_GPIO_PORT_B_NVIC	2u
#define MCHP_GPIO_PORT_C_NVIC	1u
#define MCHP_GPIO_PORT_D_NVIC	0u
#define MCHP_GPIO_PORT_E_NVIC	4u
#define MCHP_GPIO_PORT_F_NVIC	17u

/* 32-bit Control register */
#define MCHP_GPIO_CTRL_MASK		0x0101FFFFul
/* bits[15:0] of Control register */
#define MCHP_GPIO_CTRL_CFG_MASK		0xFFFFul

/* Disable interrupt detect and pad */
#define MCHP_GPIO_CTRL_DIS_PIN		0x8040ul

#define MCHP_GPIO_CTRL_DFLT		0x8040ul
#define MCHP_GPIO_CTRL_DFLT_MASK	0xfffful

#define GPIO000_CTRL_DFLT	0x1040ul
#define GPIO062_CTRL_DFLT	0x8240ul
#define GPIO116_CTRL_DFLT	0x0041ul
#define GPIO161_CTRL_DFLT	0x1040ul
#define GPIO162_CTRL_DFLT	0x1040ul
#define GPIO170_CTRL_DFLT	0x0041ul
#define GPIO234_CTRL_DFLT	0x1040ul

/* GPIO Control register field definitions. */

/* bits[1:0] internal pull up/down selection */
#define MCHP_GPIO_CTRL_PUD_POS		0u
#define MCHP_GPIO_CTRL_PUD_MASK0	0x03ul
#define MCHP_GPIO_CTRL_PUD_MASK		0x03ul
#define MCHP_GPIO_CTRL_PUD_NONE		0x00ul
#define MCHP_GPIO_CTRL_PUD_PU		0x01ul
#define MCHP_GPIO_CTRL_PUD_PD		0x02ul
/* Repeater(keeper) mode */
#define MCHP_GPIO_CTRL_PUD_RPT		0x03ul

/* bits[3:2] power gating */
#define MCHP_GPIO_CTRL_PWRG_POS		2u
#define MCHP_GPIO_CTRL_PWRG_MASK0	0x03ul
#define MCHP_GPIO_CTRL_PWRG_VTR_IO	0x00U
#define MCHP_GPIO_CTRL_PWRG_VCC_IO	SHLU32(1U, MCHP_GPIO_CTRL_PWRG_POS)
#define MCHP_GPIO_CTRL_PWRG_OFF		SHLU32(2U, MCHP_GPIO_CTRL_PWRG_POS)
#define MCHP_GPIO_CTRL_PWRG_RSVD	SHLU32(3U, MCHP_GPIO_CTRL_PWRG_POS)
#define MCHP_GPIO_CTRL_PWRG_MASK	SHLU32(3U, MCHP_GPIO_CTRL_PWRG_POS)

/* bits[7:4] interrupt detection mode */
#define MCHP_GPIO_CTRL_IDET_POS		4u
#define MCHP_GPIO_CTRL_IDET_MASK0	0x0Ful
#define MCHP_GPIO_CTRL_IDET_LVL_LO	0x00U
#define MCHP_GPIO_CTRL_IDET_LVL_HI	SHLU32(1U, MCHP_GPIO_CTRL_IDET_POS)
#define MCHP_GPIO_CTRL_IDET_DISABLE	SHLU32(4U, MCHP_GPIO_CTRL_IDET_POS)
#define MCHP_GPIO_CTRL_IDET_REDGE	SHLU32(0xDU, MCHP_GPIO_CTRL_IDET_POS)
#define MCHP_GPIO_CTRL_IDET_FEDGE	SHLU32(0xEU, MCHP_GPIO_CTRL_IDET_POS)
#define MCHP_GPIO_CTRL_IDET_BEDGE	SHLU32(0xFU, MCHP_GPIO_CTRL_IDET_POS)
#define MCHP_GPIO_CTRL_IDET_MASK	SHLU32(0xFU, MCHP_GPIO_CTRL_IDET_POS)

/* bit[8] output buffer type: push-pull or open-drain */
#define MCHP_GPIO_CTRL_BUFT_POS		8u
#define MCHP_GPIO_CTRL_BUFT_MASK	BIT(MCHP_GPIO_CTRL_BUFT_POS)
#define MCHP_GPIO_CTRL_BUFT_OPENDRAIN	BIT(MCHP_GPIO_CTRL_BUFT_POS)
#define MCHP_GPIO_CTRL_BUFT_PUSHPULL	0x00U

/* bit[9] direction */
#define MCHP_GPIO_CTRL_DIR_POS		9u
#define MCHP_GPIO_CTRL_DIR_MASK		BIT(MCHP_GPIO_CTRL_DIR_POS)
#define MCHP_GPIO_CTRL_DIR_OUTPUT	BIT(MCHP_GPIO_CTRL_DIR_POS)
#define MCHP_GPIO_CTRL_DIR_INPUT	0U

/*
 * bit[10] Alternate output disable. Default==0(alternate output enabled)
 * GPIO output value is controlled by bit[16] of this register.
 * Set bit[10]=1 if you wish to control pin output using the parallel
 * GPIO output register bit for this pin.
 */
#define MCHP_GPIO_CTRL_AOD_POS		10u
#define MCHP_GPIO_CTRL_AOD_MASK		BIT(MCHP_GPIO_CTRL_AOD_POS)
#define MCHP_GPIO_CTRL_AOD_DIS		BIT(MCHP_GPIO_CTRL_AOD_POS)

/* bit[11] GPIO function output polarity */
#define MCHP_GPIO_CTRL_POL_POS		11u
#define MCHP_GPIO_CTRL_POL_INVERT	BIT(MCHP_GPIO_CTRL_POL_POS)

/* bits[14:12] pin mux (fucntion) */
#define MCHP_GPIO_CTRL_MUX_POS		12u
#define MCHP_GPIO_CTRL_MUX_MASK0	0x07ul
#define MCHP_GPIO_CTRL_MUX_MASK		SHLU32(0x7U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F0		0x00U
#define MCHP_GPIO_CTRL_MUX_GPIO		MCHP_GPIO_CTRL_MUX_F0
#define MCHP_GPIO_CTRL_MUX_F1		SHLU32(1U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F2		SHLU32(2U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F3		SHLU32(3U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F4		SHLU32(4U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F5		SHLU32(5U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F6		SHLU32(6U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX_F7		SHLU32(7U, MCHP_GPIO_CTRL_MUX_POS)
#define MCHP_GPIO_CTRL_MUX(n) SHLU32(((n) & 0x7u), MCHP_GPIO_CTRL_MUX_POS)

/*
 * bit[15] Disables input pad leaving output pad enabled
 * Useful for reducing power consumption of output only pins.
 */
#define MCHP_GPIO_CTRL_INPAD_DIS_POS	15u
#define MCHP_GPIO_CTRL_INPAD_DIS_MASK	BIT(MCHP_GPIO_CTRL_INPAD_DIS_POS)
#define MCHP_GPIO_CTRL_INPAD_DIS	BIT(MCHP_GPIO_CTRL_INPAD_DIS_POS)

/* bit[16]: Alternate output pin value. Enabled when bit[10]==0(default) */
#define MCHP_GPIO_CTRL_OUTVAL_POS	16u
#define MCHP_GPIO_CTRL_OUTV_HI		BIT(MCHP_GPIO_CTRL_OUTVAL_POS)

/* bit[24] Input pad value. Always live unless input pad is powered down */
#define MCHP_GPIO_CTRL_INPAD_VAL_POS	24u
#define MCHP_GPIO_CTRL_INPAD_VAL_HI	BIT(MCHP_GPIO_CTRL_INPAD_VAL_POS)

#define MCHP_GPIO_CTRL_DRIVE_OD_HI				     \
	(MCHP_GPIO_CTRL_BUFT_OPENDRAIN + MCHP_GPIO_CTRL_DIR_OUTPUT + \
	 MCHP_GPIO_CTRL_MUX_GPIO + MCHP_GPIO_CTRL_OUTV_HI)

/*
 * Each GPIO pin implements a second control register.
 * GPIO Control 2 register selects pin drive strength and slew rate.
 * bit[0] = slew rate: 0=slow, 1=fast
 * bits[5:4] = drive strength
 * 00b = 2mA (default)
 * 01b = 4mA
 * 10b = 8mA
 * 11b = 12mA
 */
#define MCHP_GPIO_CTRL2_OFFSET		0x0500ul
#define MCHP_GPIO_CTRL2_SLEW_POS	0ul
#define MCHP_GPIO_CTRL2_SLEW_MASK	0x01ul
#define MCHP_GPIO_CTRL2_SLEW_SLOW	0ul
#define MCHP_GPIO_CTRL2_SLEW_FAST	BIT(MCHP_GPIO_CTRL2_SLEW_POS)
#define MCHP_GPIO_CTRL2_DRV_STR_POS	4ul
#define MCHP_GPIO_CTRL2_DRV_STR_MASK	0x30ul
#define MCHP_GPIO_CTRL2_DRV_STR_2MA	0x00ul
#define MCHP_GPIO_CTRL2_DRV_STR_4MA	0x10ul
#define MCHP_GPIO_CTRL2_DRV_STR_8MA	0x20ul
#define MCHP_GPIO_CTRL2_DRV_STR_12MA	0x30ul

/* Interfaces to any C modules */
#ifdef __cplusplus
extern "C" {
#endif

/* GPIO pin numbers SZ (144-pin) package */
enum mec_gpio_idx {
	MCHP_GPIO_0000_ID = 0,
	MCHP_GPIO_0002_ID = 2,
	MCHP_GPIO_0003_ID,
	MCHP_GPIO_0004_ID,
	MCHP_GPIO_0007_ID = 7,
	MCHP_GPIO_0010_ID,
	MCHP_GPIO_0011_ID,
	MCHP_GPIO_0012_ID,
	MCHP_GPIO_0013_ID,
	MCHP_GPIO_0014_ID,
	MCHP_GPIO_0015_ID,
	MCHP_GPIO_0016_ID,
	MCHP_GPIO_0017_ID,
	MCHP_GPIO_0020_ID,
	MCHP_GPIO_0021_ID,
	MCHP_GPIO_0022_ID,
	MCHP_GPIO_0023_ID,
	MCHP_GPIO_0024_ID,
	MCHP_GPIO_0025_ID,
	MCHP_GPIO_0026_ID,
	MCHP_GPIO_0027_ID,
	MCHP_GPIO_0030_ID,
	MCHP_GPIO_0031_ID,
	MCHP_GPIO_0032_ID,
	MCHP_GPIO_0033_ID,
	MCHP_GPIO_0034_ID,
	MCHP_GPIO_0035_ID,
	MCHP_GPIO_0036_ID,
	MCHP_GPIO_0040_ID = 32,
	MCHP_GPIO_0042_ID = 34,
	MCHP_GPIO_0043_ID,
	MCHP_GPIO_0044_ID,
	MCHP_GPIO_0045_ID,
	MCHP_GPIO_0046_ID,
	MCHP_GPIO_0047_ID,
	MCHP_GPIO_0050_ID,
	MCHP_GPIO_0051_ID,
	MCHP_GPIO_0052_ID,
	MCHP_GPIO_0053_ID,
	MCHP_GPIO_0054_ID,
	MCHP_GPIO_0055_ID,
	MCHP_GPIO_0056_ID,
	MCHP_GPIO_0057_ID,
	MCHP_GPIO_0060_ID,
	MCHP_GPIO_0061_ID,
	MCHP_GPIO_0062_ID,
	MCHP_GPIO_0063_ID,
	MCHP_GPIO_0064_ID,
	MCHP_GPIO_0065_ID,
	MCHP_GPIO_0066_ID,
	MCHP_GPIO_0067_ID,
	MCHP_GPIO_0070_ID,
	MCHP_GPIO_0071_ID,
	MCHP_GPIO_0072_ID,
	MCHP_GPIO_0073_ID,
	MCHP_GPIO_0100_ID = 64,
	MCHP_GPIO_0101_ID,
	MCHP_GPIO_0102_ID,
	MCHP_GPIO_0104_ID = 68,
	MCHP_GPIO_0105_ID,
	MCHP_GPIO_0106_ID,
	MCHP_GPIO_0107_ID,
	MCHP_GPIO_0112_ID = 74,
	MCHP_GPIO_0113_ID,
	MCHP_GPIO_0114_ID,
	MCHP_GPIO_0115_ID,
	MCHP_GPIO_0120_ID = 80,
	MCHP_GPIO_0121_ID,
	MCHP_GPIO_0122_ID,
	MCHP_GPIO_0123_ID,
	MCHP_GPIO_0124_ID,
	MCHP_GPIO_0125_ID,
	MCHP_GPIO_0126_ID,
	MCHP_GPIO_0127_ID,
	MCHP_GPIO_0130_ID,
	MCHP_GPIO_0131_ID,
	MCHP_GPIO_0132_ID,
	MCHP_GPIO_0140_ID = 96,
	MCHP_GPIO_0141_ID,
	MCHP_GPIO_0142_ID,
	MCHP_GPIO_0143_ID,
	MCHP_GPIO_0144_ID,
	MCHP_GPIO_0145_ID,
	MCHP_GPIO_0146_ID,
	MCHP_GPIO_0147_ID,
	MCHP_GPIO_0150_ID,
	MCHP_GPIO_0151_ID,
	MCHP_GPIO_0152_ID,
	MCHP_GPIO_0153_ID,
	MCHP_GPIO_0154_ID,
	MCHP_GPIO_0155_ID,
	MCHP_GPIO_0156_ID,
	MCHP_GPIO_0157_ID,
	MCHP_GPIO_0161_ID = 113,
	MCHP_GPIO_0162_ID,
	MCHP_GPIO_0165_ID = 117,
	MCHP_GPIO_0170_ID = 120,
	MCHP_GPIO_0171_ID,
	MCHP_GPIO_0175_ID = 125,
	MCHP_GPIO_0200_ID = 128,
	MCHP_GPIO_0201_ID,
	MCHP_GPIO_0202_ID,
	MCHP_GPIO_0203_ID,
	MCHP_GPIO_0204_ID,
	MCHP_GPIO_0205_ID,
	MCHP_GPIO_0206_ID,
	MCHP_GPIO_0207_ID,
	MCHP_GPIO_0221_ID = 145,
	MCHP_GPIO_0222_ID,
	MCHP_GPIO_0223_ID,
	MCHP_GPIO_0224_ID,
	MCHP_GPIO_0226_ID = 150,
	MCHP_GPIO_0227_ID,
	MCHP_GPIO_0240_ID = 160,
	MCHP_GPIO_0241_ID,
	MCHP_GPIO_0242_ID,
	MCHP_GPIO_0243_ID,
	MCHP_GPIO_0244_ID,
	MCHP_GPIO_0245_ID,
	MCHP_GPIO_0246_ID,
	MCHP_GPIO_0254_ID = 172,
	MCHP_GPIO_0255_ID,
	MCHP_GPIO_MAX_ID
};

#define MCHP_GPIO_PIN2PORT(pin_id) ((uint32_t)(pin_id) >> 5)

#define MAX_MCHP_GPIO_BANK	6ul
#define MCHP_GPIO_LOCK5_IDX	0ul
#define MCHP_GPIO_LOCK4_IDX	1ul
#define MCHP_GPIO_LOCK3_IDX	2ul
#define MCHP_GPIO_LOCK2_IDX	3ul
#define MCHP_GPIO_LOCK1_IDX	4ul
#define MCHP_GPIO_LOCK0_IDX	5ul
#define MCHP_GPIO_LOCK_MAX_IDX	6ul

/* Helper functions */
enum mchp_gpio_pud {
	MCHP_GPIO_NO_PUD	= 0ul,
	MCHP_GPIO_PU_EN		= 1ul,
	MCHP_GPIO_PD_EN		= 2ul,
	MCHP_GPIO_RPT_EN	= 3ul,
};

enum mchp_gpio_pwrgate {
	MCHP_GPIO_PWRGT_VTR	= 0ul,
	MCHP_GPIO_PWRGT_VCC	= 1ul,
	MCHP_GPIO_PWRGD_OFF	= 2ul,
};

enum mchp_gpio_idet {
	MCHP_GPIO_IDET_LO_LVL		= 0x00ul,
	MCHP_GPIO_IDET_HI_LVL		= 0x01ul,
	MCHP_GPIO_IDET_DIS		= 0x04ul,
	MCHP_GPIO_IDET_RISING_EDGE	= 0x0Dul,
	MCHP_GPIO_IDET_FALLING_EDGE	= 0x0Eul,
	MCHP_GPIO_IDET_BOTH_EDGES	= 0x0Ful
};

enum mchp_gpio_outbuf {
	MCHP_GPIO_PUSH_PULL	= 0ul,
	MCHP_GPIO_OPEN_DRAIN	= 1ul,
};

enum mchp_gpio_dir {
	MCHP_GPIO_DIR_IN	= 0ul,
	MCHP_GPIO_DIR_OUT	= 1ul,
};

enum mchp_gpio_parout_en {
	MCHP_GPIO_PAROUT_DIS	= 0ul,
	MCHP_GPIO_PAROUT_EN	= 1ul,
};

enum mchp_gpio_pol {
	MCHP_GPIO_POL_NORM	= 0ul,
	MCHP_GPIO_POL_INV	= 1ul,
};

enum mchp_gpio_mux {
	MCHP_GPIO_MUX_GPIO = 0u,
	MCHP_GPIO_MUX_FUNC1,
	MCHP_GPIO_MUX_FUNC2,
	MCHP_GPIO_MUX_FUNC3,
	MCHP_GPIO_MUX_FUNC4,
	MCHP_GPIO_MUX_FUNC5,
	MCHP_GPIO_MUX_FUNC6,
	MCHP_GPIO_MUX_FUNC7,
	MCHP_GPIO_MUX_MAX
};

enum mchp_gpio_inpad_ctrl {
	MCHP_GPIO_INPAD_CTRL_EN		= 0ul,
	MCHP_GPIO_INPAD_CTRL_DIS	= 1ul,
};

enum mchp_gpio_alt_out {
	MCHP_GPIO_ALT_OUT_LO	= 0ul,
	MCHP_GPIO_ALT_OUT_HI	= 1ul,
};

enum mchp_gpio_slew {
	MCHP_GPIO_SLEW_SLOW	= 0ul,
	MCHP_GPIO_SLEW_FAST	= 1ul,
};

enum mchp_gpio_drv_str {
	MCHP_GPIO_DRV_STR_2MA	= 0ul,
	MCHP_GPIO_DRV_STR_4MA	= 1ul,
	MCHP_GPIO_DRV_STR_8MA	= 2ul,
	MCHP_GPIO_DRV_STR_12MA	= 3ul,
};

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _COMPONENT_GPIO_H */
/* end gpio.h */
/**   @}
 */
