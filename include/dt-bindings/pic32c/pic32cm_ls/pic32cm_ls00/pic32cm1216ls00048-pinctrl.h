/*
 * SPDX-FileCopyrightText: Copyright (c) 2026 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#ifndef MICROCHIP_PIC32CM1216LS00048_PINCTRL_H_
#define MICROCHIP_PIC32CM1216LS00048_PINCTRL_H_

#include <dt-bindings/pic32c/pic32cm_ls/common/mchp_pinctrl_pinmux_pic32c.h>

#define PA0_GPIO MCHP_PINMUX(a, 0, gpio, gpio)

#define PA0A_EIC_EXTINT0 MCHP_PINMUX(a, 0, a, periph)

#define PA0B_OPAMP_OANEG1 MCHP_PINMUX(a, 0, b, periph)

#define PA0B_PTC_X0 MCHP_PINMUX(a, 0, b, periph)

#define PA0B_PTC_Y0 MCHP_PINMUX(a, 0, b, periph)

#define PA0D_SERCOM1_PAD0 MCHP_PINMUX(a, 0, d, periph)

#define PA0F_PTC_DRV0 MCHP_PINMUX(a, 0, f, periph)

#define PA1_GPIO MCHP_PINMUX(a, 1, gpio, gpio)

#define PA1A_EIC_EXTINT1 MCHP_PINMUX(a, 1, a, periph)

#define PA1B_OPAMP_OAPOS1 MCHP_PINMUX(a, 1, b, periph)

#define PA1B_PTC_X1 MCHP_PINMUX(a, 1, b, periph)

#define PA1B_PTC_Y1 MCHP_PINMUX(a, 1, b, periph)

#define PA1D_SERCOM1_PAD1 MCHP_PINMUX(a, 1, d, periph)

#define PA1F_PTC_DRV1 MCHP_PINMUX(a, 1, f, periph)

#define PA2_GPIO MCHP_PINMUX(a, 2, gpio, gpio)

#define PA2A_EIC_EXTINT2 MCHP_PINMUX(a, 2, a, periph)

#define PA2B_ADC_AIN0 MCHP_PINMUX(a, 2, b, periph)

#define PA2B_DAC_VOUT0 MCHP_PINMUX(a, 2, b, periph)

#define PA2B_OPAMP_OANEG0 MCHP_PINMUX(a, 2, b, periph)

#define PA2B_PTC_X2 MCHP_PINMUX(a, 2, b, periph)

#define PA2B_PTC_Y2 MCHP_PINMUX(a, 2, b, periph)

#define PA2D_SERCOM0_PAD2 MCHP_PINMUX(a, 2, d, periph)

#define PA2F_PTC_DRV2 MCHP_PINMUX(a, 2, f, periph)

#define PA3_GPIO MCHP_PINMUX(a, 3, gpio, gpio)

#define PA3A_EIC_EXTINT3 MCHP_PINMUX(a, 3, a, periph)

#define PA3B_ADC_AIN1 MCHP_PINMUX(a, 3, b, periph)

#define PA3B_DAC_VREFP MCHP_PINMUX(a, 3, b, periph)

#define PA3B_OPAMP_OANEG2 MCHP_PINMUX(a, 3, b, periph)

#define PA3B_PTC_ECI0 MCHP_PINMUX(a, 3, b, periph)

#define PA3B_PTC_X3 MCHP_PINMUX(a, 3, b, periph)

#define PA3B_PTC_Y3 MCHP_PINMUX(a, 3, b, periph)

#define PA3D_SERCOM0_PAD3 MCHP_PINMUX(a, 3, d, periph)

#define PA3F_PTC_DRV3 MCHP_PINMUX(a, 3, f, periph)

#define PA4_GPIO MCHP_PINMUX(a, 4, gpio, gpio)

#define PA4A_EIC_EXTINT4 MCHP_PINMUX(a, 4, a, periph)

#define PA4B_AC_AIN0 MCHP_PINMUX(a, 4, b, periph)

#define PA4B_ADC_AIN2 MCHP_PINMUX(a, 4, b, periph)

#define PA4B_ADC_VREFP MCHP_PINMUX(a, 4, b, periph)

#define PA4B_OPAMP_OAOUT2 MCHP_PINMUX(a, 4, b, periph)

#define PA4B_PTC_ECI1 MCHP_PINMUX(a, 4, b, periph)

#define PA4D_SERCOM0_PAD0 MCHP_PINMUX(a, 4, d, periph)

#define PA4I_CCL_IN0 MCHP_PINMUX(a, 4, i, periph)

#define PA5_GPIO MCHP_PINMUX(a, 5, gpio, gpio)

#define PA5A_EIC_EXTINT5 MCHP_PINMUX(a, 5, a, periph)

#define PA5B_AC_AIN1 MCHP_PINMUX(a, 5, b, periph)

#define PA5B_ADC_AIN3 MCHP_PINMUX(a, 5, b, periph)

#define PA5B_OPAMP_OAPOS2 MCHP_PINMUX(a, 5, b, periph)

#define PA5B_PTC_ECI2 MCHP_PINMUX(a, 5, b, periph)

#define PA5B_PTC_X4 MCHP_PINMUX(a, 5, b, periph)

#define PA5B_PTC_Y4 MCHP_PINMUX(a, 5, b, periph)

#define PA5D_SERCOM0_PAD1 MCHP_PINMUX(a, 5, d, periph)

#define PA5F_PTC_DRV4 MCHP_PINMUX(a, 5, f, periph)

#define PA5I_CCL_IN1 MCHP_PINMUX(a, 5, i, periph)

#define PA6_GPIO MCHP_PINMUX(a, 6, gpio, gpio)

#define PA6A_EIC_EXTINT6 MCHP_PINMUX(a, 6, a, periph)

#define PA6B_AC_AIN2 MCHP_PINMUX(a, 6, b, periph)

#define PA6B_ADC_AIN4 MCHP_PINMUX(a, 6, b, periph)

#define PA6B_OPAMP_OAPOS0 MCHP_PINMUX(a, 6, b, periph)

#define PA6B_PTC_ECI3 MCHP_PINMUX(a, 6, b, periph)

#define PA6B_PTC_X5 MCHP_PINMUX(a, 6, b, periph)

#define PA6B_PTC_Y5 MCHP_PINMUX(a, 6, b, periph)

#define PA6D_SERCOM0_PAD2 MCHP_PINMUX(a, 6, d, periph)

#define PA6F_PTC_DRV5 MCHP_PINMUX(a, 6, f, periph)

#define PA6I_CCL_IN2 MCHP_PINMUX(a, 6, i, periph)

#define PA7_GPIO MCHP_PINMUX(a, 7, gpio, gpio)

#define PA7A_EIC_EXTINT7 MCHP_PINMUX(a, 7, a, periph)

#define PA7B_AC_AIN3 MCHP_PINMUX(a, 7, b, periph)

#define PA7B_ADC_AIN5 MCHP_PINMUX(a, 7, b, periph)

#define PA7B_DAC_VOUT1 MCHP_PINMUX(a, 7, b, periph)

#define PA7B_OPAMP_OAOUT0 MCHP_PINMUX(a, 7, b, periph)

#define PA7D_SERCOM0_PAD3 MCHP_PINMUX(a, 7, d, periph)

#define PA7I_CCL_OUT0 MCHP_PINMUX(a, 7, i, periph)

#define PA8_GPIO MCHP_PINMUX(a, 8, gpio, gpio)

#define PA8A_EIC_NMI MCHP_PINMUX(a, 8, a, periph)

#define PA8B_ADC_AIN6 MCHP_PINMUX(a, 8, b, periph)

#define PA8B_PTC_X6 MCHP_PINMUX(a, 8, b, periph)

#define PA8B_PTC_Y6 MCHP_PINMUX(a, 8, b, periph)

#define PA8C_SERCOM1_PAD0 MCHP_PINMUX(a, 8, c, periph)

#define PA8D_SERCOM2_PAD0 MCHP_PINMUX(a, 8, d, periph)

#define PA8F_PTC_DRV6 MCHP_PINMUX(a, 8, f, periph)

#define PA8G_RTC_IN0 MCHP_PINMUX(a, 8, g, periph)

#define PA8I_CCL_IN3 MCHP_PINMUX(a, 8, i, periph)

#define PA9_GPIO MCHP_PINMUX(a, 9, gpio, gpio)

#define PA9A_EIC_EXTINT0 MCHP_PINMUX(a, 9, a, periph)

#define PA9B_ADC_AIN7 MCHP_PINMUX(a, 9, b, periph)

#define PA9B_PTC_X7 MCHP_PINMUX(a, 9, b, periph)

#define PA9B_PTC_Y7 MCHP_PINMUX(a, 9, b, periph)

#define PA9C_SERCOM1_PAD1 MCHP_PINMUX(a, 9, c, periph)

#define PA9D_SERCOM2_PAD1 MCHP_PINMUX(a, 9, d, periph)

#define PA9F_PTC_DRV7 MCHP_PINMUX(a, 9, f, periph)

#define PA9G_RTC_IN1 MCHP_PINMUX(a, 9, g, periph)

#define PA9I_CCL_IN4 MCHP_PINMUX(a, 9, i, periph)

#define PA10_GPIO MCHP_PINMUX(a, 10, gpio, gpio)

#define PA10A_EIC_EXTINT1 MCHP_PINMUX(a, 10, a, periph)

#define PA10B_ADC_AIN8 MCHP_PINMUX(a, 10, b, periph)

#define PA10B_PTC_X8 MCHP_PINMUX(a, 10, b, periph)

#define PA10B_PTC_Y8 MCHP_PINMUX(a, 10, b, periph)

#define PA10C_SERCOM1_PAD2 MCHP_PINMUX(a, 10, c, periph)

#define PA10D_SERCOM2_PAD2 MCHP_PINMUX(a, 10, d, periph)

#define PA10F_PTC_DRV8 MCHP_PINMUX(a, 10, f, periph)

#define PA10H_GCLK_IO4 MCHP_PINMUX(a, 10, h, periph)

#define PA10I_CCL_IN5 MCHP_PINMUX(a, 10, i, periph)

#define PA11_GPIO MCHP_PINMUX(a, 11, gpio, gpio)

#define PA11A_EIC_EXTINT2 MCHP_PINMUX(a, 11, a, periph)

#define PA11B_ADC_AIN9 MCHP_PINMUX(a, 11, b, periph)

#define PA11B_PTC_X9 MCHP_PINMUX(a, 11, b, periph)

#define PA11B_PTC_Y9 MCHP_PINMUX(a, 11, b, periph)

#define PA11C_SERCOM1_PAD3 MCHP_PINMUX(a, 11, c, periph)

#define PA11D_SERCOM2_PAD3 MCHP_PINMUX(a, 11, d, periph)

#define PA11F_PTC_DRV9 MCHP_PINMUX(a, 11, f, periph)

#define PA11H_GCLK_IO3 MCHP_PINMUX(a, 11, h, periph)

#define PA11I_CCL_OUT1 MCHP_PINMUX(a, 11, i, periph)

#define PA12_GPIO MCHP_PINMUX(a, 12, gpio, gpio)

#define PA12C_SERCOM2_PAD0 MCHP_PINMUX(a, 12, c, periph)

#define PA12H_AC_CMP0 MCHP_PINMUX(a, 12, h, periph)

#define PA13_GPIO MCHP_PINMUX(a, 13, gpio, gpio)

#define PA13C_SERCOM2_PAD1 MCHP_PINMUX(a, 13, c, periph)

#define PA13H_AC_CMP1 MCHP_PINMUX(a, 13, h, periph)

#define PA14_GPIO MCHP_PINMUX(a, 14, gpio, gpio)

#define PA14A_EIC_EXTINT3 MCHP_PINMUX(a, 14, a, periph)

#define PA14B_PTC_X10 MCHP_PINMUX(a, 14, b, periph)

#define PA14B_PTC_Y10 MCHP_PINMUX(a, 14, b, periph)

#define PA14C_SERCOM2_PAD2 MCHP_PINMUX(a, 14, c, periph)

#define PA14D_SERCOM0_PAD2 MCHP_PINMUX(a, 14, d, periph)

#define PA14E_TC0_WO0 MCHP_PINMUX(a, 14, e, periph)

#define PA14F_PTC_DRV10 MCHP_PINMUX(a, 14, f, periph)

#define PA14H_GCLK_IO0 MCHP_PINMUX(a, 14, h, periph)

#define PA15_GPIO MCHP_PINMUX(a, 15, gpio, gpio)

#define PA15A_EIC_EXTINT4 MCHP_PINMUX(a, 15, a, periph)

#define PA15B_PTC_X11 MCHP_PINMUX(a, 15, b, periph)

#define PA15B_PTC_Y11 MCHP_PINMUX(a, 15, b, periph)

#define PA15C_SERCOM2_PAD3 MCHP_PINMUX(a, 15, c, periph)

#define PA15D_SERCOM0_PAD3 MCHP_PINMUX(a, 15, d, periph)

#define PA15E_TC0_WO1 MCHP_PINMUX(a, 15, e, periph)

#define PA15F_PTC_DRV11 MCHP_PINMUX(a, 15, f, periph)

#define PA15H_GCLK_IO1 MCHP_PINMUX(a, 15, h, periph)

#define PA16_GPIO MCHP_PINMUX(a, 16, gpio, gpio)

#define PA16A_EIC_EXTINT5 MCHP_PINMUX(a, 16, a, periph)

#define PA16B_PTC_X12 MCHP_PINMUX(a, 16, b, periph)

#define PA16B_PTC_Y12 MCHP_PINMUX(a, 16, b, periph)

#define PA16C_SERCOM1_PAD0 MCHP_PINMUX(a, 16, c, periph)

#define PA16D_SERCOM0_PAD0 MCHP_PINMUX(a, 16, d, periph)

#define PA16F_PTC_DRV12 MCHP_PINMUX(a, 16, f, periph)

#define PA16G_RTC_IN2 MCHP_PINMUX(a, 16, g, periph)

#define PA16H_GCLK_IO2 MCHP_PINMUX(a, 16, h, periph)

#define PA16I_CCL_IN0 MCHP_PINMUX(a, 16, i, periph)

#define PA17_GPIO MCHP_PINMUX(a, 17, gpio, gpio)

#define PA17A_EIC_EXTINT6 MCHP_PINMUX(a, 17, a, periph)

#define PA17B_PTC_X13 MCHP_PINMUX(a, 17, b, periph)

#define PA17B_PTC_Y13 MCHP_PINMUX(a, 17, b, periph)

#define PA17C_SERCOM1_PAD1 MCHP_PINMUX(a, 17, c, periph)

#define PA17D_SERCOM0_PAD1 MCHP_PINMUX(a, 17, d, periph)

#define PA17F_PTC_DRV13 MCHP_PINMUX(a, 17, f, periph)

#define PA17G_RTC_IN3 MCHP_PINMUX(a, 17, g, periph)

#define PA17H_GCLK_IO3 MCHP_PINMUX(a, 17, h, periph)

#define PA17I_CCL_IN1 MCHP_PINMUX(a, 17, i, periph)

#define PA18_GPIO MCHP_PINMUX(a, 18, gpio, gpio)

#define PA18A_EIC_EXTINT7 MCHP_PINMUX(a, 18, a, periph)

#define PA18B_PTC_X14 MCHP_PINMUX(a, 18, b, periph)

#define PA18B_PTC_Y14 MCHP_PINMUX(a, 18, b, periph)

#define PA18C_SERCOM1_PAD2 MCHP_PINMUX(a, 18, c, periph)

#define PA18D_SERCOM0_PAD2 MCHP_PINMUX(a, 18, d, periph)

#define PA18E_TC2_WO0 MCHP_PINMUX(a, 18, e, periph)

#define PA18F_PTC_DRV14 MCHP_PINMUX(a, 18, f, periph)

#define PA18G_RTC_OUT0 MCHP_PINMUX(a, 18, g, periph)

#define PA18H_AC_CMP0 MCHP_PINMUX(a, 18, h, periph)

#define PA18I_CCL_IN2 MCHP_PINMUX(a, 18, i, periph)

#define PA19_GPIO MCHP_PINMUX(a, 19, gpio, gpio)

#define PA19A_EIC_EXTINT0 MCHP_PINMUX(a, 19, a, periph)

#define PA19B_PTC_X15 MCHP_PINMUX(a, 19, b, periph)

#define PA19B_PTC_Y15 MCHP_PINMUX(a, 19, b, periph)

#define PA19C_SERCOM1_PAD3 MCHP_PINMUX(a, 19, c, periph)

#define PA19D_SERCOM0_PAD3 MCHP_PINMUX(a, 19, d, periph)

#define PA19E_TC2_WO1 MCHP_PINMUX(a, 19, e, periph)

#define PA19F_PTC_DRV15 MCHP_PINMUX(a, 19, f, periph)

#define PA19G_RTC_OUT1 MCHP_PINMUX(a, 19, g, periph)

#define PA19H_AC_CMP1 MCHP_PINMUX(a, 19, h, periph)

#define PA19I_CCL_OUT0 MCHP_PINMUX(a, 19, i, periph)

#define PA20_GPIO MCHP_PINMUX(a, 20, gpio, gpio)

#define PA20A_EIC_EXTINT4 MCHP_PINMUX(a, 20, a, periph)

#define PA20D_SERCOM2_PAD2 MCHP_PINMUX(a, 20, d, periph)

#define PA20E_TC1_WO0 MCHP_PINMUX(a, 20, e, periph)

#define PA20H_GCLK_IO4 MCHP_PINMUX(a, 20, h, periph)

#define PA20I_CCL_IN5 MCHP_PINMUX(a, 20, i, periph)

#define PA21_GPIO MCHP_PINMUX(a, 21, gpio, gpio)

#define PA21A_EIC_EXTINT5 MCHP_PINMUX(a, 21, a, periph)

#define PA21D_SERCOM2_PAD3 MCHP_PINMUX(a, 21, d, periph)

#define PA22_GPIO MCHP_PINMUX(a, 22, gpio, gpio)

#define PA22A_EIC_EXTINT1 MCHP_PINMUX(a, 22, a, periph)

#define PA22B_PTC_X16 MCHP_PINMUX(a, 22, b, periph)

#define PA22B_PTC_Y16 MCHP_PINMUX(a, 22, b, periph)

#define PA22C_SERCOM0_PAD0 MCHP_PINMUX(a, 22, c, periph)

#define PA22D_SERCOM2_PAD0 MCHP_PINMUX(a, 22, d, periph)

#define PA22E_TC0_WO0 MCHP_PINMUX(a, 22, e, periph)

#define PA22F_PTC_DRV16 MCHP_PINMUX(a, 22, f, periph)

#define PA22G_RTC_OUT2 MCHP_PINMUX(a, 22, g, periph)

#define PA22H_GCLK_IO2 MCHP_PINMUX(a, 22, h, periph)

#define PA23_GPIO MCHP_PINMUX(a, 23, gpio, gpio)

#define PA23A_EIC_EXTINT2 MCHP_PINMUX(a, 23, a, periph)

#define PA23B_PTC_X17 MCHP_PINMUX(a, 23, b, periph)

#define PA23B_PTC_Y17 MCHP_PINMUX(a, 23, b, periph)

#define PA23C_SERCOM0_PAD1 MCHP_PINMUX(a, 23, c, periph)

#define PA23D_SERCOM2_PAD1 MCHP_PINMUX(a, 23, d, periph)

#define PA23E_TC0_WO1 MCHP_PINMUX(a, 23, e, periph)

#define PA23F_PTC_DRV17 MCHP_PINMUX(a, 23, f, periph)

#define PA23G_RTC_OUT3 MCHP_PINMUX(a, 23, g, periph)

#define PA23H_GCLK_IO1 MCHP_PINMUX(a, 23, h, periph)

#define PA24_GPIO MCHP_PINMUX(a, 24, gpio, gpio)

#define PA24A_EIC_EXTINT3 MCHP_PINMUX(a, 24, a, periph)

#define PA24C_SERCOM0_PAD2 MCHP_PINMUX(a, 24, c, periph)

#define PA24D_SERCOM2_PAD2 MCHP_PINMUX(a, 24, d, periph)

#define PA24E_TC1_WO0 MCHP_PINMUX(a, 24, e, periph)

#define PA24G_USB_DM MCHP_PINMUX(a, 24, g, periph)

#define PA25_GPIO MCHP_PINMUX(a, 25, gpio, gpio)

#define PA25A_EIC_EXTINT4 MCHP_PINMUX(a, 25, a, periph)

#define PA25C_SERCOM0_PAD3 MCHP_PINMUX(a, 25, c, periph)

#define PA25D_SERCOM2_PAD3 MCHP_PINMUX(a, 25, d, periph)

#define PA25E_TC1_WO1 MCHP_PINMUX(a, 25, e, periph)

#define PA25G_USB_DP MCHP_PINMUX(a, 25, g, periph)

#define PA30_GPIO MCHP_PINMUX(a, 30, gpio, gpio)

#define PA30A_EIC_EXTINT6 MCHP_PINMUX(a, 30, a, periph)

#define PA30B_PTC_X18 MCHP_PINMUX(a, 30, b, periph)

#define PA30B_PTC_Y18 MCHP_PINMUX(a, 30, b, periph)

#define PA30D_SERCOM1_PAD2 MCHP_PINMUX(a, 30, d, periph)

#define PA30F_PTC_DRV18 MCHP_PINMUX(a, 30, f, periph)

#define PA30H_GCLK_IO0 MCHP_PINMUX(a, 30, h, periph)

#define PA30I_CCL_IN3 MCHP_PINMUX(a, 30, i, periph)

#define PA31_GPIO MCHP_PINMUX(a, 31, gpio, gpio)

#define PA31A_EIC_EXTINT7 MCHP_PINMUX(a, 31, a, periph)

#define PA31B_PTC_X19 MCHP_PINMUX(a, 31, b, periph)

#define PA31B_PTC_Y19 MCHP_PINMUX(a, 31, b, periph)

#define PA31D_SERCOM1_PAD3 MCHP_PINMUX(a, 31, d, periph)

#define PA31F_PTC_DRV19 MCHP_PINMUX(a, 31, f, periph)

#define PA31I_CCL_OUT1 MCHP_PINMUX(a, 31, i, periph)

#define PB2_GPIO MCHP_PINMUX(b, 2, gpio, gpio)

#define PB2A_EIC_EXTINT2 MCHP_PINMUX(b, 2, a, periph)

#define PB2E_TC2_WO0 MCHP_PINMUX(b, 2, e, periph)

#define PB2I_CCL_OUT0 MCHP_PINMUX(b, 2, i, periph)

#define PB3_GPIO MCHP_PINMUX(b, 3, gpio, gpio)

#define PB3A_EIC_EXTINT3 MCHP_PINMUX(b, 3, a, periph)

#define PB3E_TC2_WO1 MCHP_PINMUX(b, 3, e, periph)

#define PB8_GPIO MCHP_PINMUX(b, 8, gpio, gpio)

#define PB8E_TC0_WO0 MCHP_PINMUX(b, 8, e, periph)

#define PB9_GPIO MCHP_PINMUX(b, 9, gpio, gpio)

#define PB9E_TC0_WO1 MCHP_PINMUX(b, 9, e, periph)

#define PB22_GPIO MCHP_PINMUX(b, 22, gpio, gpio)

#define PB22A_EIC_EXTINT6 MCHP_PINMUX(b, 22, a, periph)

#define PB22C_SERCOM0_PAD2 MCHP_PINMUX(b, 22, c, periph)

#define PB22G_USB_SOF_1KHZ MCHP_PINMUX(b, 22, g, periph)

#define PB22H_GCLK_IO0 MCHP_PINMUX(b, 22, h, periph)

#define PB22I_CCL_IN0 MCHP_PINMUX(b, 22, i, periph)

#define PB23_GPIO MCHP_PINMUX(b, 23, gpio, gpio)

#define PB23A_EIC_EXTINT7 MCHP_PINMUX(b, 23, a, periph)

#define PB23C_SERCOM0_PAD3 MCHP_PINMUX(b, 23, c, periph)

#define PB23H_GCLK_IO1 MCHP_PINMUX(b, 23, h, periph)

#define PB23I_CCL_OUT0 MCHP_PINMUX(b, 23, i, periph)

#endif /* MICROCHIP_PIC32CM1216LS00048_PINCTRL_H_ */
