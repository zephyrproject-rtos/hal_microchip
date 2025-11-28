/*
 * Peripheral I/O description for pic32ck1012gc01048
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*  file generated from device description file (ATDF) version 2025-04-07T17:07:27Z  */
#ifndef _pic32ck1012gc01048_GPIO_H_
#define _pic32ck1012gc01048_GPIO_H_

/* ======================= Peripheral I/O pin numbers ======================= */
#define PIN_PA00                    (    0)  /* Pin Number for PA00 */
#define PIN_PA01                    (    1)  /* Pin Number for PA01 */
#define PIN_PA02                    (    2)  /* Pin Number for PA02 */
#define PIN_PA03                    (    3)  /* Pin Number for PA03 */
#define PIN_PA06                    (    6)  /* Pin Number for PA06 */
#define PIN_PA07                    (    7)  /* Pin Number for PA07 */
#define PIN_PA09                    (    9)  /* Pin Number for PA09 */
#define PIN_PA10                    (   10)  /* Pin Number for PA10 */
#define PIN_PA11                    (   11)  /* Pin Number for PA11 */
#define PIN_PA12                    (   12)  /* Pin Number for PA12 */
#define PIN_PB00                    (   32)  /* Pin Number for PB00 */
#define PIN_PB01                    (   33)  /* Pin Number for PB01 */
#define PIN_PB02                    (   34)  /* Pin Number for PB02 */
#define PIN_PB03                    (   35)  /* Pin Number for PB03 */
#define PIN_PB04                    (   36)  /* Pin Number for PB04 */
#define PIN_PB05                    (   37)  /* Pin Number for PB05 */
#define PIN_PB06                    (   38)  /* Pin Number for PB06 */
#define PIN_PC00                    (   64)  /* Pin Number for PC00 */
#define PIN_PC01                    (   65)  /* Pin Number for PC01 */
#define PIN_PC02                    (   66)  /* Pin Number for PC02 */
#define PIN_PC03                    (   67)  /* Pin Number for PC03 */
#define PIN_PC05                    (   69)  /* Pin Number for PC05 */
#define PIN_PC06                    (   70)  /* Pin Number for PC06 */
#define PIN_PC07                    (   71)  /* Pin Number for PC07 */
#define PIN_PC10                    (   74)  /* Pin Number for PC10 */
#define PIN_PC11                    (   75)  /* Pin Number for PC11 */
#define PIN_PD00                    (   96)  /* Pin Number for PD00 */
#define PIN_PD01                    (   97)  /* Pin Number for PD01 */
#define PIN_PD02                    (   98)  /* Pin Number for PD02 */
#define PIN_PD03                    (   99)  /* Pin Number for PD03 */
#define PIN_PD04                    (  100)  /* Pin Number for PD04 */
#define PIN_PD06                    (  102)  /* Pin Number for PD06 */
#define PIN_PD07                    (  103)  /* Pin Number for PD07 */

/* ========================== Peripheral I/O masks ========================== */
#define PORT_PA00                   (_UINT32_(1) << 0) /* PORT mask for PA00 */
#define PORT_PA01                   (_UINT32_(1) << 1) /* PORT mask for PA01 */
#define PORT_PA02                   (_UINT32_(1) << 2) /* PORT mask for PA02 */
#define PORT_PA03                   (_UINT32_(1) << 3) /* PORT mask for PA03 */
#define PORT_PA06                   (_UINT32_(1) << 6) /* PORT mask for PA06 */
#define PORT_PA07                   (_UINT32_(1) << 7) /* PORT mask for PA07 */
#define PORT_PA09                   (_UINT32_(1) << 9) /* PORT mask for PA09 */
#define PORT_PA10                   (_UINT32_(1) << 10) /* PORT mask for PA10 */
#define PORT_PA11                   (_UINT32_(1) << 11) /* PORT mask for PA11 */
#define PORT_PA12                   (_UINT32_(1) << 12) /* PORT mask for PA12 */
#define PORT_PB00                   (_UINT32_(1) << 0) /* PORT mask for PB00 */
#define PORT_PB01                   (_UINT32_(1) << 1) /* PORT mask for PB01 */
#define PORT_PB02                   (_UINT32_(1) << 2) /* PORT mask for PB02 */
#define PORT_PB03                   (_UINT32_(1) << 3) /* PORT mask for PB03 */
#define PORT_PB04                   (_UINT32_(1) << 4) /* PORT mask for PB04 */
#define PORT_PB05                   (_UINT32_(1) << 5) /* PORT mask for PB05 */
#define PORT_PB06                   (_UINT32_(1) << 6) /* PORT mask for PB06 */
#define PORT_PC00                   (_UINT32_(1) << 0) /* PORT mask for PC00 */
#define PORT_PC01                   (_UINT32_(1) << 1) /* PORT mask for PC01 */
#define PORT_PC02                   (_UINT32_(1) << 2) /* PORT mask for PC02 */
#define PORT_PC03                   (_UINT32_(1) << 3) /* PORT mask for PC03 */
#define PORT_PC05                   (_UINT32_(1) << 5) /* PORT mask for PC05 */
#define PORT_PC06                   (_UINT32_(1) << 6) /* PORT mask for PC06 */
#define PORT_PC07                   (_UINT32_(1) << 7) /* PORT mask for PC07 */
#define PORT_PC10                   (_UINT32_(1) << 10) /* PORT mask for PC10 */
#define PORT_PC11                   (_UINT32_(1) << 11) /* PORT mask for PC11 */
#define PORT_PD00                   (_UINT32_(1) << 0) /* PORT mask for PD00 */
#define PORT_PD01                   (_UINT32_(1) << 1) /* PORT mask for PD01 */
#define PORT_PD02                   (_UINT32_(1) << 2) /* PORT mask for PD02 */
#define PORT_PD03                   (_UINT32_(1) << 3) /* PORT mask for PD03 */
#define PORT_PD04                   (_UINT32_(1) << 4) /* PORT mask for PD04 */
#define PORT_PD06                   (_UINT32_(1) << 6) /* PORT mask for PD06 */
#define PORT_PD07                   (_UINT32_(1) << 7) /* PORT mask for PD07 */

/* =================== PORT definition for AC peripheral ==================== */
#define PIN_PA06B_AC_AIN0                          _UINT32_(6) 
#define MUX_PA06B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PA06B_AC_AIN0                       ((PIN_PA06B_AC_AIN0 << 16) | MUX_PA06B_AC_AIN0)
#define PORT_PA06B_AC_AIN0                         (_UINT32_(1) << 6)

#define PIN_PA09B_AC_AIN0                          _UINT32_(9) 
#define MUX_PA09B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PA09B_AC_AIN0                       ((PIN_PA09B_AC_AIN0 << 16) | MUX_PA09B_AC_AIN0)
#define PORT_PA09B_AC_AIN0                         (_UINT32_(1) << 9)

#define PIN_PA07B_AC_AIN1                          _UINT32_(7) 
#define MUX_PA07B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PA07B_AC_AIN1                       ((PIN_PA07B_AC_AIN1 << 16) | MUX_PA07B_AC_AIN1)
#define PORT_PA07B_AC_AIN1                         (_UINT32_(1) << 7)

#define PIN_PA10B_AC_AIN1                          _UINT32_(10)
#define MUX_PA10B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PA10B_AC_AIN1                       ((PIN_PA10B_AC_AIN1 << 16) | MUX_PA10B_AC_AIN1)
#define PORT_PA10B_AC_AIN1                         (_UINT32_(1) << 10)

#define PIN_PC06B_AC_AIN2                          _UINT32_(70)
#define MUX_PC06B_AC_AIN2                          _UINT32_(1) 
#define PINMUX_PC06B_AC_AIN2                       ((PIN_PC06B_AC_AIN2 << 16) | MUX_PC06B_AC_AIN2)
#define PORT_PC06B_AC_AIN2                         (_UINT32_(1) << 6)

#define PIN_PC07B_AC_AIN3                          _UINT32_(71)
#define MUX_PC07B_AC_AIN3                          _UINT32_(1) 
#define PINMUX_PC07B_AC_AIN3                       ((PIN_PC07B_AC_AIN3 << 16) | MUX_PC07B_AC_AIN3)
#define PORT_PC07B_AC_AIN3                         (_UINT32_(1) << 7)

#define PIN_PA11M_AC_CMP0                          _UINT32_(11)
#define MUX_PA11M_AC_CMP0                          _UINT32_(12)
#define PINMUX_PA11M_AC_CMP0                       ((PIN_PA11M_AC_CMP0 << 16) | MUX_PA11M_AC_CMP0)
#define PORT_PA11M_AC_CMP0                         (_UINT32_(1) << 11)

#define PIN_PA12M_AC_CMP1                          _UINT32_(12)
#define MUX_PA12M_AC_CMP1                          _UINT32_(12)
#define PINMUX_PA12M_AC_CMP1                       ((PIN_PA12M_AC_CMP1 << 16) | MUX_PA12M_AC_CMP1)
#define PORT_PA12M_AC_CMP1                         (_UINT32_(1) << 12)

/* =================== PORT definition for ADC peripheral =================== */
#define PIN_PA07B_ADC_VINM2                        _UINT32_(7) 
#define MUX_PA07B_ADC_VINM2                        _UINT32_(1) 
#define PINMUX_PA07B_ADC_VINM2                     ((PIN_PA07B_ADC_VINM2 << 16) | MUX_PA07B_ADC_VINM2)
#define PORT_PA07B_ADC_VINM2                       (_UINT32_(1) << 7)

#define PIN_PA06B_ADC_VINP2                        _UINT32_(6) 
#define MUX_PA06B_ADC_VINP2                        _UINT32_(1) 
#define PINMUX_PA06B_ADC_VINP2                     ((PIN_PA06B_ADC_VINP2 << 16) | MUX_PA06B_ADC_VINP2)
#define PORT_PA06B_ADC_VINP2                       (_UINT32_(1) << 6)

#define PIN_PA07B_ADC_VINP3                        _UINT32_(7) 
#define MUX_PA07B_ADC_VINP3                        _UINT32_(1) 
#define PINMUX_PA07B_ADC_VINP3                     ((PIN_PA07B_ADC_VINP3 << 16) | MUX_PA07B_ADC_VINP3)
#define PORT_PA07B_ADC_VINP3                       (_UINT32_(1) << 7)

#define PIN_PA09B_ADC_VINP5                        _UINT32_(9) 
#define MUX_PA09B_ADC_VINP5                        _UINT32_(1) 
#define PINMUX_PA09B_ADC_VINP5                     ((PIN_PA09B_ADC_VINP5 << 16) | MUX_PA09B_ADC_VINP5)
#define PORT_PA09B_ADC_VINP5                       (_UINT32_(1) << 9)

#define PIN_PA10B_ADC_VINP6                        _UINT32_(10)
#define MUX_PA10B_ADC_VINP6                        _UINT32_(1) 
#define PINMUX_PA10B_ADC_VINP6                     ((PIN_PA10B_ADC_VINP6 << 16) | MUX_PA10B_ADC_VINP6)
#define PORT_PA10B_ADC_VINP6                       (_UINT32_(1) << 10)

#define PIN_PA11B_ADC_VINP7                        _UINT32_(11)
#define MUX_PA11B_ADC_VINP7                        _UINT32_(1) 
#define PINMUX_PA11B_ADC_VINP7                     ((PIN_PA11B_ADC_VINP7 << 16) | MUX_PA11B_ADC_VINP7)
#define PORT_PA11B_ADC_VINP7                       (_UINT32_(1) << 11)

#define PIN_PA12B_ADC_VINP8                        _UINT32_(12)
#define MUX_PA12B_ADC_VINP8                        _UINT32_(1) 
#define PINMUX_PA12B_ADC_VINP8                     ((PIN_PA12B_ADC_VINP8 << 16) | MUX_PA12B_ADC_VINP8)
#define PORT_PA12B_ADC_VINP8                       (_UINT32_(1) << 12)

#define PIN_PB00B_ADC_VINP9                        _UINT32_(32)
#define MUX_PB00B_ADC_VINP9                        _UINT32_(1) 
#define PINMUX_PB00B_ADC_VINP9                     ((PIN_PB00B_ADC_VINP9 << 16) | MUX_PB00B_ADC_VINP9)
#define PORT_PB00B_ADC_VINP9                       (_UINT32_(1) << 0)

#define PIN_PB01B_ADC_VREFP0                       _UINT32_(33)
#define MUX_PB01B_ADC_VREFP0                       _UINT32_(1) 
#define PINMUX_PB01B_ADC_VREFP0                    ((PIN_PB01B_ADC_VREFP0 << 16) | MUX_PB01B_ADC_VREFP0)
#define PORT_PB01B_ADC_VREFP0                      (_UINT32_(1) << 1)

/* ================== PORT definition for BSDAP peripheral ================== */
#define PIN_PA03G_BSDAP_TCK_SWCLK                  _UINT32_(3) 
#define MUX_PA03G_BSDAP_TCK_SWCLK                  _UINT32_(6) 
#define PINMUX_PA03G_BSDAP_TCK_SWCLK               ((PIN_PA03G_BSDAP_TCK_SWCLK << 16) | MUX_PA03G_BSDAP_TCK_SWCLK)
#define PORT_PA03G_BSDAP_TCK_SWCLK                 (_UINT32_(1) << 3)

#define PIN_PA00G_BSDAP_TDI                        _UINT32_(0) 
#define MUX_PA00G_BSDAP_TDI                        _UINT32_(6) 
#define PINMUX_PA00G_BSDAP_TDI                     ((PIN_PA00G_BSDAP_TDI << 16) | MUX_PA00G_BSDAP_TDI)
#define PORT_PA00G_BSDAP_TDI                       (_UINT32_(1) << 0)

#define PIN_PA01G_BSDAP_TDO                        _UINT32_(1) 
#define MUX_PA01G_BSDAP_TDO                        _UINT32_(6) 
#define PINMUX_PA01G_BSDAP_TDO                     ((PIN_PA01G_BSDAP_TDO << 16) | MUX_PA01G_BSDAP_TDO)
#define PORT_PA01G_BSDAP_TDO                       (_UINT32_(1) << 1)

#define PIN_PA02G_BSDAP_TMS_SWDIO                  _UINT32_(2) 
#define MUX_PA02G_BSDAP_TMS_SWDIO                  _UINT32_(6) 
#define PINMUX_PA02G_BSDAP_TMS_SWDIO               ((PIN_PA02G_BSDAP_TMS_SWDIO << 16) | MUX_PA02G_BSDAP_TMS_SWDIO)
#define PORT_PA02G_BSDAP_TMS_SWDIO                 (_UINT32_(1) << 2)

/* ================== PORT definition for CAN0 peripheral =================== */
#define PIN_PB01H_CAN0_RX                          _UINT32_(33)
#define MUX_PB01H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PB01H_CAN0_RX                       ((PIN_PB01H_CAN0_RX << 16) | MUX_PB01H_CAN0_RX)
#define PORT_PB01H_CAN0_RX                         (_UINT32_(1) << 1)

#define PIN_PC03H_CAN0_RX                          _UINT32_(67)
#define MUX_PC03H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PC03H_CAN0_RX                       ((PIN_PC03H_CAN0_RX << 16) | MUX_PC03H_CAN0_RX)
#define PORT_PC03H_CAN0_RX                         (_UINT32_(1) << 3)

#define PIN_PC07H_CAN0_RX                          _UINT32_(71)
#define MUX_PC07H_CAN0_RX                          _UINT32_(7) 
#define PINMUX_PC07H_CAN0_RX                       ((PIN_PC07H_CAN0_RX << 16) | MUX_PC07H_CAN0_RX)
#define PORT_PC07H_CAN0_RX                         (_UINT32_(1) << 7)

#define PIN_PB00H_CAN0_TX                          _UINT32_(32)
#define MUX_PB00H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PB00H_CAN0_TX                       ((PIN_PB00H_CAN0_TX << 16) | MUX_PB00H_CAN0_TX)
#define PORT_PB00H_CAN0_TX                         (_UINT32_(1) << 0)

#define PIN_PC02H_CAN0_TX                          _UINT32_(66)
#define MUX_PC02H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PC02H_CAN0_TX                       ((PIN_PC02H_CAN0_TX << 16) | MUX_PC02H_CAN0_TX)
#define PORT_PC02H_CAN0_TX                         (_UINT32_(1) << 2)

#define PIN_PC06H_CAN0_TX                          _UINT32_(70)
#define MUX_PC06H_CAN0_TX                          _UINT32_(7) 
#define PINMUX_PC06H_CAN0_TX                       ((PIN_PC06H_CAN0_TX << 16) | MUX_PC06H_CAN0_TX)
#define PORT_PC06H_CAN0_TX                         (_UINT32_(1) << 6)

/* =================== PORT definition for CCL peripheral =================== */
#define PIN_PB02M_CCL_IN0                          _UINT32_(34)
#define MUX_PB02M_CCL_IN0                          _UINT32_(12)
#define PINMUX_PB02M_CCL_IN0                       ((PIN_PB02M_CCL_IN0 << 16) | MUX_PB02M_CCL_IN0)
#define PORT_PB02M_CCL_IN0                         (_UINT32_(1) << 2)

#define PIN_PB03M_CCL_IN1                          _UINT32_(35)
#define MUX_PB03M_CCL_IN1                          _UINT32_(12)
#define PINMUX_PB03M_CCL_IN1                       ((PIN_PB03M_CCL_IN1 << 16) | MUX_PB03M_CCL_IN1)
#define PORT_PB03M_CCL_IN1                         (_UINT32_(1) << 3)

#define PIN_PD02M_CCL_IN2                          _UINT32_(98)
#define MUX_PD02M_CCL_IN2                          _UINT32_(12)
#define PINMUX_PD02M_CCL_IN2                       ((PIN_PD02M_CCL_IN2 << 16) | MUX_PD02M_CCL_IN2)
#define PORT_PD02M_CCL_IN2                         (_UINT32_(1) << 2)

#define PIN_PC10M_CCL_IN3                          _UINT32_(74)
#define MUX_PC10M_CCL_IN3                          _UINT32_(12)
#define PINMUX_PC10M_CCL_IN3                       ((PIN_PC10M_CCL_IN3 << 16) | MUX_PC10M_CCL_IN3)
#define PORT_PC10M_CCL_IN3                         (_UINT32_(1) << 10)

#define PIN_PC11M_CCL_IN4                          _UINT32_(75)
#define MUX_PC11M_CCL_IN4                          _UINT32_(12)
#define PINMUX_PC11M_CCL_IN4                       ((PIN_PC11M_CCL_IN4 << 16) | MUX_PC11M_CCL_IN4)
#define PORT_PC11M_CCL_IN4                         (_UINT32_(1) << 11)

#define PIN_PC06M_CCL_IN5                          _UINT32_(70)
#define MUX_PC06M_CCL_IN5                          _UINT32_(12)
#define PINMUX_PC06M_CCL_IN5                       ((PIN_PC06M_CCL_IN5 << 16) | MUX_PC06M_CCL_IN5)
#define PORT_PC06M_CCL_IN5                         (_UINT32_(1) << 6)

#define PIN_PB00M_CCL_IN6                          _UINT32_(32)
#define MUX_PB00M_CCL_IN6                          _UINT32_(12)
#define PINMUX_PB00M_CCL_IN6                       ((PIN_PB00M_CCL_IN6 << 16) | MUX_PB00M_CCL_IN6)
#define PORT_PB00M_CCL_IN6                         (_UINT32_(1) << 0)

#define PIN_PB01M_CCL_IN7                          _UINT32_(33)
#define MUX_PB01M_CCL_IN7                          _UINT32_(12)
#define PINMUX_PB01M_CCL_IN7                       ((PIN_PB01M_CCL_IN7 << 16) | MUX_PB01M_CCL_IN7)
#define PORT_PB01M_CCL_IN7                         (_UINT32_(1) << 1)

#define PIN_PB04M_CCL_IN8                          _UINT32_(36)
#define MUX_PB04M_CCL_IN8                          _UINT32_(12)
#define PINMUX_PB04M_CCL_IN8                       ((PIN_PB04M_CCL_IN8 << 16) | MUX_PB04M_CCL_IN8)
#define PORT_PB04M_CCL_IN8                         (_UINT32_(1) << 4)

#define PIN_PA06M_CCL_IN11                         _UINT32_(6) 
#define MUX_PA06M_CCL_IN11                         _UINT32_(12)
#define PINMUX_PA06M_CCL_IN11                      ((PIN_PA06M_CCL_IN11 << 16) | MUX_PA06M_CCL_IN11)
#define PORT_PA06M_CCL_IN11                        (_UINT32_(1) << 6)

#define PIN_PB06M_CCL_OUT0                         _UINT32_(38)
#define MUX_PB06M_CCL_OUT0                         _UINT32_(12)
#define PINMUX_PB06M_CCL_OUT0                      ((PIN_PB06M_CCL_OUT0 << 16) | MUX_PB06M_CCL_OUT0)
#define PORT_PB06M_CCL_OUT0                        (_UINT32_(1) << 6)

#define PIN_PA00M_CCL_OUT1                         _UINT32_(0) 
#define MUX_PA00M_CCL_OUT1                         _UINT32_(12)
#define PINMUX_PA00M_CCL_OUT1                      ((PIN_PA00M_CCL_OUT1 << 16) | MUX_PA00M_CCL_OUT1)
#define PORT_PA00M_CCL_OUT1                        (_UINT32_(1) << 0)

#define PIN_PC07M_CCL_OUT2                         _UINT32_(71)
#define MUX_PC07M_CCL_OUT2                         _UINT32_(12)
#define PINMUX_PC07M_CCL_OUT2                      ((PIN_PC07M_CCL_OUT2 << 16) | MUX_PC07M_CCL_OUT2)
#define PORT_PC07M_CCL_OUT2                        (_UINT32_(1) << 7)

#define PIN_PA07M_CCL_OUT3                         _UINT32_(7) 
#define MUX_PA07M_CCL_OUT3                         _UINT32_(12)
#define PINMUX_PA07M_CCL_OUT3                      ((PIN_PA07M_CCL_OUT3 << 16) | MUX_PA07M_CCL_OUT3)
#define PORT_PA07M_CCL_OUT3                        (_UINT32_(1) << 7)

#define PIN_PB05M_CCL_OUT3                         _UINT32_(37)
#define MUX_PB05M_CCL_OUT3                         _UINT32_(12)
#define PINMUX_PB05M_CCL_OUT3                      ((PIN_PB05M_CCL_OUT3 << 16) | MUX_PB05M_CCL_OUT3)
#define PORT_PB05M_CCL_OUT3                        (_UINT32_(1) << 5)

/* =================== PORT definition for EIC peripheral =================== */
#define PIN_PB00A_EIC_EXTINT0                      _UINT32_(32)
#define MUX_PB00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB00A_EIC_EXTINT0                   ((PIN_PB00A_EIC_EXTINT0 << 16) | MUX_PB00A_EIC_EXTINT0)
#define PORT_PB00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PB00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB00 External Interrupt Line */

#define PIN_PC00A_EIC_EXTINT0                      _UINT32_(64)
#define MUX_PC00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PC00A_EIC_EXTINT0                   ((PIN_PC00A_EIC_EXTINT0 << 16) | MUX_PC00A_EIC_EXTINT0)
#define PORT_PC00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PC00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PC00 External Interrupt Line */

#define PIN_PD00A_EIC_EXTINT0                      _UINT32_(96)
#define MUX_PD00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PD00A_EIC_EXTINT0                   ((PIN_PD00A_EIC_EXTINT0 << 16) | MUX_PD00A_EIC_EXTINT0)
#define PORT_PD00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PD00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PD00 External Interrupt Line */

#define PIN_PA01A_EIC_EXTINT1                      _UINT32_(1) 
#define MUX_PA01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA01A_EIC_EXTINT1                   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PA01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA01 External Interrupt Line */

#define PIN_PB01A_EIC_EXTINT1                      _UINT32_(33)
#define MUX_PB01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB01A_EIC_EXTINT1                   ((PIN_PB01A_EIC_EXTINT1 << 16) | MUX_PB01A_EIC_EXTINT1)
#define PORT_PB01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PB01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB01 External Interrupt Line */

#define PIN_PC01A_EIC_EXTINT1                      _UINT32_(65)
#define MUX_PC01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PC01A_EIC_EXTINT1                   ((PIN_PC01A_EIC_EXTINT1 << 16) | MUX_PC01A_EIC_EXTINT1)
#define PORT_PC01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PC01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PC01 External Interrupt Line */

#define PIN_PD01A_EIC_EXTINT1                      _UINT32_(97)
#define MUX_PD01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PD01A_EIC_EXTINT1                   ((PIN_PD01A_EIC_EXTINT1 << 16) | MUX_PD01A_EIC_EXTINT1)
#define PORT_PD01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PD01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PD01 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PB02A_EIC_EXTINT2                      _UINT32_(34)
#define MUX_PB02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PB02A_EIC_EXTINT2                   ((PIN_PB02A_EIC_EXTINT2 << 16) | MUX_PB02A_EIC_EXTINT2)
#define PORT_PB02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PB02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PB02 External Interrupt Line */

#define PIN_PC02A_EIC_EXTINT2                      _UINT32_(66)
#define MUX_PC02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PC02A_EIC_EXTINT2                   ((PIN_PC02A_EIC_EXTINT2 << 16) | MUX_PC02A_EIC_EXTINT2)
#define PORT_PC02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PC02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PC02 External Interrupt Line */

#define PIN_PA03A_EIC_EXTINT3                      _UINT32_(3) 
#define MUX_PA03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA03A_EIC_EXTINT3                   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PA03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA03 External Interrupt Line */

#define PIN_PB03A_EIC_EXTINT3                      _UINT32_(35)
#define MUX_PB03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PB03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PB03 External Interrupt Line */

#define PIN_PC03A_EIC_EXTINT3                      _UINT32_(67)
#define MUX_PC03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PC03A_EIC_EXTINT3                   ((PIN_PC03A_EIC_EXTINT3 << 16) | MUX_PC03A_EIC_EXTINT3)
#define PORT_PC03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PC03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PC03 External Interrupt Line */

#define PIN_PD03A_EIC_EXTINT3                      _UINT32_(99)
#define MUX_PD03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PD03A_EIC_EXTINT3                   ((PIN_PD03A_EIC_EXTINT3 << 16) | MUX_PD03A_EIC_EXTINT3)
#define PORT_PD03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PD03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PD03 External Interrupt Line */

#define PIN_PB04A_EIC_EXTINT4                      _UINT32_(36)
#define MUX_PB04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PB04A_EIC_EXTINT4                   ((PIN_PB04A_EIC_EXTINT4 << 16) | MUX_PB04A_EIC_EXTINT4)
#define PORT_PB04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PB04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PB04 External Interrupt Line */

#define PIN_PD04A_EIC_EXTINT4                      _UINT32_(100)
#define MUX_PD04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PD04A_EIC_EXTINT4                   ((PIN_PD04A_EIC_EXTINT4 << 16) | MUX_PD04A_EIC_EXTINT4)
#define PORT_PD04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PD04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PD04 External Interrupt Line */

#define PIN_PB05A_EIC_EXTINT5                      _UINT32_(37)
#define MUX_PB05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PB05A_EIC_EXTINT5                   ((PIN_PB05A_EIC_EXTINT5 << 16) | MUX_PB05A_EIC_EXTINT5)
#define PORT_PB05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PB05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PB05 External Interrupt Line */

#define PIN_PC05A_EIC_EXTINT5                      _UINT32_(69)
#define MUX_PC05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PC05A_EIC_EXTINT5                   ((PIN_PC05A_EIC_EXTINT5 << 16) | MUX_PC05A_EIC_EXTINT5)
#define PORT_PC05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PC05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PC05 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UINT32_(6) 
#define MUX_PA06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PB06A_EIC_EXTINT6                      _UINT32_(38)
#define MUX_PB06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PB06A_EIC_EXTINT6                   ((PIN_PB06A_EIC_EXTINT6 << 16) | MUX_PB06A_EIC_EXTINT6)
#define PORT_PB06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PB06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PB06 External Interrupt Line */

#define PIN_PC06A_EIC_EXTINT6                      _UINT32_(70)
#define MUX_PC06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PC06A_EIC_EXTINT6                   ((PIN_PC06A_EIC_EXTINT6 << 16) | MUX_PC06A_EIC_EXTINT6)
#define PORT_PC06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PC06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PC06 External Interrupt Line */

#define PIN_PD06A_EIC_EXTINT6                      _UINT32_(102)
#define MUX_PD06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PD06A_EIC_EXTINT6                   ((PIN_PD06A_EIC_EXTINT6 << 16) | MUX_PD06A_EIC_EXTINT6)
#define PORT_PD06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PD06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PD06 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _UINT32_(7) 
#define MUX_PA07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PC07A_EIC_EXTINT7                      _UINT32_(71)
#define MUX_PC07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PC07A_EIC_EXTINT7                   ((PIN_PC07A_EIC_EXTINT7 << 16) | MUX_PC07A_EIC_EXTINT7)
#define PORT_PC07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PC07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PC07 External Interrupt Line */

#define PIN_PD07A_EIC_EXTINT7                      _UINT32_(103)
#define MUX_PD07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PD07A_EIC_EXTINT7                   ((PIN_PD07A_EIC_EXTINT7 << 16) | MUX_PD07A_EIC_EXTINT7)
#define PORT_PD07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PD07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PD07 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UINT32_(10)
#define MUX_PA10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PC10A_EIC_EXTINT10                     _UINT32_(74)
#define MUX_PC10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PC10A_EIC_EXTINT10                  ((PIN_PC10A_EIC_EXTINT10 << 16) | MUX_PC10A_EIC_EXTINT10)
#define PORT_PC10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PC10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PC10 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UINT32_(11)
#define MUX_PA11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PC11A_EIC_EXTINT11                     _UINT32_(75)
#define MUX_PC11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PC11A_EIC_EXTINT11                  ((PIN_PC11A_EIC_EXTINT11 << 16) | MUX_PC11A_EIC_EXTINT11)
#define PORT_PC11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PC11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PC11 External Interrupt Line */

#define PIN_PA12A_EIC_EXTINT12                     _UINT32_(12)
#define MUX_PA12A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PA12A_EIC_EXTINT12                  ((PIN_PA12A_EIC_EXTINT12 << 16) | MUX_PA12A_EIC_EXTINT12)
#define PORT_PA12A_EIC_EXTINT12                    (_UINT32_(1) << 12)
#define PIN_PA12A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PA12 External Interrupt Line */

#define PIN_PA00A_EIC_EXTINT14                     _UINT32_(0) 
#define MUX_PA00A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PA00A_EIC_EXTINT14                  ((PIN_PA00A_EIC_EXTINT14 << 16) | MUX_PA00A_EIC_EXTINT14)
#define PORT_PA00A_EIC_EXTINT14                    (_UINT32_(1) << 0)
#define PIN_PA00A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PA00 External Interrupt Line */

#define PIN_PD02A_EIC_NMI                          _UINT32_(98)
#define MUX_PD02A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PD02A_EIC_NMI                       ((PIN_PD02A_EIC_NMI << 16) | MUX_PD02A_EIC_NMI)
#define PORT_PD02A_EIC_NMI                         (_UINT32_(1) << 2)

/* =================== PORT definition for ETH peripheral =================== */
#define PIN_PA11O_ETH_MDC                          _UINT32_(11)
#define MUX_PA11O_ETH_MDC                          _UINT32_(14)
#define PINMUX_PA11O_ETH_MDC                       ((PIN_PA11O_ETH_MDC << 16) | MUX_PA11O_ETH_MDC)
#define PORT_PA11O_ETH_MDC                         (_UINT32_(1) << 11)

#define PIN_PD07O_ETH_MDC                          _UINT32_(103)
#define MUX_PD07O_ETH_MDC                          _UINT32_(14)
#define PINMUX_PD07O_ETH_MDC                       ((PIN_PD07O_ETH_MDC << 16) | MUX_PD07O_ETH_MDC)
#define PORT_PD07O_ETH_MDC                         (_UINT32_(1) << 7)

#define PIN_PA11L_ETH_MDC                          _UINT32_(11)
#define MUX_PA11L_ETH_MDC                          _UINT32_(11)
#define PINMUX_PA11L_ETH_MDC                       ((PIN_PA11L_ETH_MDC << 16) | MUX_PA11L_ETH_MDC)
#define PORT_PA11L_ETH_MDC                         (_UINT32_(1) << 11)

#define PIN_PC03L_ETH_MDC                          _UINT32_(67)
#define MUX_PC03L_ETH_MDC                          _UINT32_(11)
#define PINMUX_PC03L_ETH_MDC                       ((PIN_PC03L_ETH_MDC << 16) | MUX_PC03L_ETH_MDC)
#define PORT_PC03L_ETH_MDC                         (_UINT32_(1) << 3)

#define PIN_PD07L_ETH_MDC                          _UINT32_(103)
#define MUX_PD07L_ETH_MDC                          _UINT32_(11)
#define PINMUX_PD07L_ETH_MDC                       ((PIN_PD07L_ETH_MDC << 16) | MUX_PD07L_ETH_MDC)
#define PORT_PD07L_ETH_MDC                         (_UINT32_(1) << 7)

#define PIN_PA12O_ETH_MDIO                         _UINT32_(12)
#define MUX_PA12O_ETH_MDIO                         _UINT32_(14)
#define PINMUX_PA12O_ETH_MDIO                      ((PIN_PA12O_ETH_MDIO << 16) | MUX_PA12O_ETH_MDIO)
#define PORT_PA12O_ETH_MDIO                        (_UINT32_(1) << 12)

#define PIN_PD06O_ETH_MDIO                         _UINT32_(102)
#define MUX_PD06O_ETH_MDIO                         _UINT32_(14)
#define PINMUX_PD06O_ETH_MDIO                      ((PIN_PD06O_ETH_MDIO << 16) | MUX_PD06O_ETH_MDIO)
#define PORT_PD06O_ETH_MDIO                        (_UINT32_(1) << 6)

#define PIN_PA12L_ETH_MDIO                         _UINT32_(12)
#define MUX_PA12L_ETH_MDIO                         _UINT32_(11)
#define PINMUX_PA12L_ETH_MDIO                      ((PIN_PA12L_ETH_MDIO << 16) | MUX_PA12L_ETH_MDIO)
#define PORT_PA12L_ETH_MDIO                        (_UINT32_(1) << 12)

#define PIN_PC02L_ETH_MDIO                         _UINT32_(66)
#define MUX_PC02L_ETH_MDIO                         _UINT32_(11)
#define PINMUX_PC02L_ETH_MDIO                      ((PIN_PC02L_ETH_MDIO << 16) | MUX_PC02L_ETH_MDIO)
#define PORT_PC02L_ETH_MDIO                        (_UINT32_(1) << 2)

#define PIN_PD06L_ETH_MDIO                         _UINT32_(102)
#define MUX_PD06L_ETH_MDIO                         _UINT32_(11)
#define PINMUX_PD06L_ETH_MDIO                      ((PIN_PD06L_ETH_MDIO << 16) | MUX_PD06L_ETH_MDIO)
#define PORT_PD06L_ETH_MDIO                        (_UINT32_(1) << 6)

#define PIN_PC00L_ETH_REF_CLK                      _UINT32_(64)
#define MUX_PC00L_ETH_REF_CLK                      _UINT32_(11)
#define PINMUX_PC00L_ETH_REF_CLK                   ((PIN_PC00L_ETH_REF_CLK << 16) | MUX_PC00L_ETH_REF_CLK)
#define PORT_PC00L_ETH_REF_CLK                     (_UINT32_(1) << 0)

#define PIN_PC02O_ETH_RXD0                         _UINT32_(66)
#define MUX_PC02O_ETH_RXD0                         _UINT32_(14)
#define PINMUX_PC02O_ETH_RXD0                      ((PIN_PC02O_ETH_RXD0 << 16) | MUX_PC02O_ETH_RXD0)
#define PORT_PC02O_ETH_RXD0                        (_UINT32_(1) << 2)

#define PIN_PC07L_ETH_RXD0                         _UINT32_(71)
#define MUX_PC07L_ETH_RXD0                         _UINT32_(11)
#define PINMUX_PC07L_ETH_RXD0                      ((PIN_PC07L_ETH_RXD0 << 16) | MUX_PC07L_ETH_RXD0)
#define PORT_PC07L_ETH_RXD0                        (_UINT32_(1) << 7)

#define PIN_PC01O_ETH_RXD1                         _UINT32_(65)
#define MUX_PC01O_ETH_RXD1                         _UINT32_(14)
#define PINMUX_PC01O_ETH_RXD1                      ((PIN_PC01O_ETH_RXD1 << 16) | MUX_PC01O_ETH_RXD1)
#define PORT_PC01O_ETH_RXD1                        (_UINT32_(1) << 1)

#define PIN_PC06L_ETH_RXD1                         _UINT32_(70)
#define MUX_PC06L_ETH_RXD1                         _UINT32_(11)
#define PINMUX_PC06L_ETH_RXD1                      ((PIN_PC06L_ETH_RXD1 << 16) | MUX_PC06L_ETH_RXD1)
#define PORT_PC06L_ETH_RXD1                        (_UINT32_(1) << 6)

#define PIN_PC05L_ETH_RXD2                         _UINT32_(69)
#define MUX_PC05L_ETH_RXD2                         _UINT32_(11)
#define PINMUX_PC05L_ETH_RXD2                      ((PIN_PC05L_ETH_RXD2 << 16) | MUX_PC05L_ETH_RXD2)
#define PORT_PC05L_ETH_RXD2                        (_UINT32_(1) << 5)

#define PIN_PC10O_ETH_RXDV                         _UINT32_(74)
#define MUX_PC10O_ETH_RXDV                         _UINT32_(14)
#define PINMUX_PC10O_ETH_RXDV                      ((PIN_PC10O_ETH_RXDV << 16) | MUX_PC10O_ETH_RXDV)
#define PORT_PC10O_ETH_RXDV                        (_UINT32_(1) << 10)

#define PIN_PC10L_ETH_RXDV                         _UINT32_(74)
#define MUX_PC10L_ETH_RXDV                         _UINT32_(11)
#define PINMUX_PC10L_ETH_RXDV                      ((PIN_PC10L_ETH_RXDV << 16) | MUX_PC10L_ETH_RXDV)
#define PORT_PC10L_ETH_RXDV                        (_UINT32_(1) << 10)

#define PIN_PC03O_ETH_RXER                         _UINT32_(67)
#define MUX_PC03O_ETH_RXER                         _UINT32_(14)
#define PINMUX_PC03O_ETH_RXER                      ((PIN_PC03O_ETH_RXER << 16) | MUX_PC03O_ETH_RXER)
#define PORT_PC03O_ETH_RXER                        (_UINT32_(1) << 3)

#define PIN_PD02O_ETH_TSUCOMP                      _UINT32_(98)
#define MUX_PD02O_ETH_TSUCOMP                      _UINT32_(14)
#define PINMUX_PD02O_ETH_TSUCOMP                   ((PIN_PD02O_ETH_TSUCOMP << 16) | MUX_PD02O_ETH_TSUCOMP)
#define PORT_PD02O_ETH_TSUCOMP                     (_UINT32_(1) << 2)

#define PIN_PD02L_ETH_TSUCOMP                      _UINT32_(98)
#define MUX_PD02L_ETH_TSUCOMP                      _UINT32_(11)
#define PINMUX_PD02L_ETH_TSUCOMP                   ((PIN_PD02L_ETH_TSUCOMP << 16) | MUX_PD02L_ETH_TSUCOMP)
#define PORT_PD02L_ETH_TSUCOMP                     (_UINT32_(1) << 2)

#define PIN_PC06O_ETH_TXD0                         _UINT32_(70)
#define MUX_PC06O_ETH_TXD0                         _UINT32_(14)
#define PINMUX_PC06O_ETH_TXD0                      ((PIN_PC06O_ETH_TXD0 << 16) | MUX_PC06O_ETH_TXD0)
#define PORT_PC06O_ETH_TXD0                        (_UINT32_(1) << 6)

#define PIN_PC07O_ETH_TXD1                         _UINT32_(71)
#define MUX_PC07O_ETH_TXD1                         _UINT32_(14)
#define PINMUX_PC07O_ETH_TXD1                      ((PIN_PC07O_ETH_TXD1 << 16) | MUX_PC07O_ETH_TXD1)
#define PORT_PC07O_ETH_TXD1                        (_UINT32_(1) << 7)

#define PIN_PC05O_ETH_TXEN                         _UINT32_(69)
#define MUX_PC05O_ETH_TXEN                         _UINT32_(14)
#define PINMUX_PC05O_ETH_TXEN                      ((PIN_PC05O_ETH_TXEN << 16) | MUX_PC05O_ETH_TXEN)
#define PORT_PC05O_ETH_TXEN                        (_UINT32_(1) << 5)

#define PIN_PC11L_ETH_TXEN                         _UINT32_(75)
#define MUX_PC11L_ETH_TXEN                         _UINT32_(11)
#define PINMUX_PC11L_ETH_TXEN                      ((PIN_PC11L_ETH_TXEN << 16) | MUX_PC11L_ETH_TXEN)
#define PORT_PC11L_ETH_TXEN                        (_UINT32_(1) << 11)

#define PIN_PC00O_ETH_TX_CLK                       _UINT32_(64)
#define MUX_PC00O_ETH_TX_CLK                       _UINT32_(14)
#define PINMUX_PC00O_ETH_TX_CLK                    ((PIN_PC00O_ETH_TX_CLK << 16) | MUX_PC00O_ETH_TX_CLK)
#define PORT_PC00O_ETH_TX_CLK                      (_UINT32_(1) << 0)

#define PIN_PC00L_ETH_TX_CLK                       _UINT32_(64)
#define MUX_PC00L_ETH_TX_CLK                       _UINT32_(11)
#define PINMUX_PC00L_ETH_TX_CLK                    ((PIN_PC00L_ETH_TX_CLK << 16) | MUX_PC00L_ETH_TX_CLK)
#define PORT_PC00L_ETH_TX_CLK                      (_UINT32_(1) << 0)

/* ================== PORT definition for GCLK peripheral =================== */
#define PIN_PA09M_GCLK_IO0                         _UINT32_(9) 
#define MUX_PA09M_GCLK_IO0                         _UINT32_(12)
#define PINMUX_PA09M_GCLK_IO0                      ((PIN_PA09M_GCLK_IO0 << 16) | MUX_PA09M_GCLK_IO0)
#define PORT_PA09M_GCLK_IO0                        (_UINT32_(1) << 9)

#define PIN_PA03M_GCLK_IO0                         _UINT32_(3) 
#define MUX_PA03M_GCLK_IO0                         _UINT32_(12)
#define PINMUX_PA03M_GCLK_IO0                      ((PIN_PA03M_GCLK_IO0 << 16) | MUX_PA03M_GCLK_IO0)
#define PORT_PA03M_GCLK_IO0                        (_UINT32_(1) << 3)

#define PIN_PA01M_GCLK_IO1                         _UINT32_(1) 
#define MUX_PA01M_GCLK_IO1                         _UINT32_(12)
#define PINMUX_PA01M_GCLK_IO1                      ((PIN_PA01M_GCLK_IO1 << 16) | MUX_PA01M_GCLK_IO1)
#define PORT_PA01M_GCLK_IO1                        (_UINT32_(1) << 1)

#define PIN_PA10M_GCLK_IO1                         _UINT32_(10)
#define MUX_PA10M_GCLK_IO1                         _UINT32_(12)
#define PINMUX_PA10M_GCLK_IO1                      ((PIN_PA10M_GCLK_IO1 << 16) | MUX_PA10M_GCLK_IO1)
#define PORT_PA10M_GCLK_IO1                        (_UINT32_(1) << 10)

#define PIN_PC00M_GCLK_IO2                         _UINT32_(64)
#define MUX_PC00M_GCLK_IO2                         _UINT32_(12)
#define PINMUX_PC00M_GCLK_IO2                      ((PIN_PC00M_GCLK_IO2 << 16) | MUX_PC00M_GCLK_IO2)
#define PORT_PC00M_GCLK_IO2                        (_UINT32_(1) << 0)

#define PIN_PC01M_GCLK_IO3                         _UINT32_(65)
#define MUX_PC01M_GCLK_IO3                         _UINT32_(12)
#define PINMUX_PC01M_GCLK_IO3                      ((PIN_PC01M_GCLK_IO3 << 16) | MUX_PC01M_GCLK_IO3)
#define PORT_PC01M_GCLK_IO3                        (_UINT32_(1) << 1)

#define PIN_PC02M_GCLK_IO4                         _UINT32_(66)
#define MUX_PC02M_GCLK_IO4                         _UINT32_(12)
#define PINMUX_PC02M_GCLK_IO4                      ((PIN_PC02M_GCLK_IO4 << 16) | MUX_PC02M_GCLK_IO4)
#define PORT_PC02M_GCLK_IO4                        (_UINT32_(1) << 2)

#define PIN_PD06M_GCLK_IO4                         _UINT32_(102)
#define MUX_PD06M_GCLK_IO4                         _UINT32_(12)
#define PINMUX_PD06M_GCLK_IO4                      ((PIN_PD06M_GCLK_IO4 << 16) | MUX_PD06M_GCLK_IO4)
#define PORT_PD06M_GCLK_IO4                        (_UINT32_(1) << 6)

#define PIN_PC03M_GCLK_IO5                         _UINT32_(67)
#define MUX_PC03M_GCLK_IO5                         _UINT32_(12)
#define PINMUX_PC03M_GCLK_IO5                      ((PIN_PC03M_GCLK_IO5 << 16) | MUX_PC03M_GCLK_IO5)
#define PORT_PC03M_GCLK_IO5                        (_UINT32_(1) << 3)

#define PIN_PD07M_GCLK_IO5                         _UINT32_(103)
#define MUX_PD07M_GCLK_IO5                         _UINT32_(12)
#define PINMUX_PD07M_GCLK_IO5                      ((PIN_PD07M_GCLK_IO5 << 16) | MUX_PD07M_GCLK_IO5)
#define PORT_PD07M_GCLK_IO5                        (_UINT32_(1) << 7)

#define PIN_PC05M_GCLK_IO7                         _UINT32_(69)
#define MUX_PC05M_GCLK_IO7                         _UINT32_(12)
#define PINMUX_PC05M_GCLK_IO7                      ((PIN_PC05M_GCLK_IO7 << 16) | MUX_PC05M_GCLK_IO7)
#define PORT_PC05M_GCLK_IO7                        (_UINT32_(1) << 5)

/* =================== PORT definition for PCC peripheral =================== */
#define PIN_PC05K_PCC_CLK                          _UINT32_(69)
#define MUX_PC05K_PCC_CLK                          _UINT32_(10)
#define PINMUX_PC05K_PCC_CLK                       ((PIN_PC05K_PCC_CLK << 16) | MUX_PC05K_PCC_CLK)
#define PORT_PC05K_PCC_CLK                         (_UINT32_(1) << 5)

#define PIN_PC01K_PCC_DATA0                        _UINT32_(65)
#define MUX_PC01K_PCC_DATA0                        _UINT32_(10)
#define PINMUX_PC01K_PCC_DATA0                     ((PIN_PC01K_PCC_DATA0 << 16) | MUX_PC01K_PCC_DATA0)
#define PORT_PC01K_PCC_DATA0                       (_UINT32_(1) << 1)

#define PIN_PC02K_PCC_DATA1                        _UINT32_(66)
#define MUX_PC02K_PCC_DATA1                        _UINT32_(10)
#define PINMUX_PC02K_PCC_DATA1                     ((PIN_PC02K_PCC_DATA1 << 16) | MUX_PC02K_PCC_DATA1)
#define PORT_PC02K_PCC_DATA1                       (_UINT32_(1) << 2)

#define PIN_PC03K_PCC_DATA2                        _UINT32_(67)
#define MUX_PC03K_PCC_DATA2                        _UINT32_(10)
#define PINMUX_PC03K_PCC_DATA2                     ((PIN_PC03K_PCC_DATA2 << 16) | MUX_PC03K_PCC_DATA2)
#define PORT_PC03K_PCC_DATA2                       (_UINT32_(1) << 3)

#define PIN_PC06K_PCC_DATA3                        _UINT32_(70)
#define MUX_PC06K_PCC_DATA3                        _UINT32_(10)
#define PINMUX_PC06K_PCC_DATA3                     ((PIN_PC06K_PCC_DATA3 << 16) | MUX_PC06K_PCC_DATA3)
#define PORT_PC06K_PCC_DATA3                       (_UINT32_(1) << 6)

#define PIN_PC07K_PCC_DATA4                        _UINT32_(71)
#define MUX_PC07K_PCC_DATA4                        _UINT32_(10)
#define PINMUX_PC07K_PCC_DATA4                     ((PIN_PC07K_PCC_DATA4 << 16) | MUX_PC07K_PCC_DATA4)
#define PORT_PC07K_PCC_DATA4                       (_UINT32_(1) << 7)

#define PIN_PC10K_PCC_DATA5                        _UINT32_(74)
#define MUX_PC10K_PCC_DATA5                        _UINT32_(10)
#define PINMUX_PC10K_PCC_DATA5                     ((PIN_PC10K_PCC_DATA5 << 16) | MUX_PC10K_PCC_DATA5)
#define PORT_PC10K_PCC_DATA5                       (_UINT32_(1) << 10)

#define PIN_PC11K_PCC_DATA6                        _UINT32_(75)
#define MUX_PC11K_PCC_DATA6                        _UINT32_(10)
#define PINMUX_PC11K_PCC_DATA6                     ((PIN_PC11K_PCC_DATA6 << 16) | MUX_PC11K_PCC_DATA6)
#define PORT_PC11K_PCC_DATA6                       (_UINT32_(1) << 11)

#define PIN_PC00K_PCC_DATA7                        _UINT32_(64)
#define MUX_PC00K_PCC_DATA7                        _UINT32_(10)
#define PINMUX_PC00K_PCC_DATA7                     ((PIN_PC00K_PCC_DATA7 << 16) | MUX_PC00K_PCC_DATA7)
#define PORT_PC00K_PCC_DATA7                       (_UINT32_(1) << 0)

#define PIN_PA10K_PCC_DEN1                         _UINT32_(10)
#define MUX_PA10K_PCC_DEN1                         _UINT32_(10)
#define PINMUX_PA10K_PCC_DEN1                      ((PIN_PA10K_PCC_DEN1 << 16) | MUX_PA10K_PCC_DEN1)
#define PORT_PA10K_PCC_DEN1                        (_UINT32_(1) << 10)

#define PIN_PD02K_PCC_DEN2                         _UINT32_(98)
#define MUX_PD02K_PCC_DEN2                         _UINT32_(10)
#define PINMUX_PD02K_PCC_DEN2                      ((PIN_PD02K_PCC_DEN2 << 16) | MUX_PD02K_PCC_DEN2)
#define PORT_PD02K_PCC_DEN2                        (_UINT32_(1) << 2)

/* ================== PORT definition for PDEC peripheral =================== */
#define PIN_PB04G_PDEC_QDI0                        _UINT32_(36)
#define MUX_PB04G_PDEC_QDI0                        _UINT32_(6) 
#define PINMUX_PB04G_PDEC_QDI0                     ((PIN_PB04G_PDEC_QDI0 << 16) | MUX_PB04G_PDEC_QDI0)
#define PORT_PB04G_PDEC_QDI0                       (_UINT32_(1) << 4)

#define PIN_PB05G_PDEC_QDI1                        _UINT32_(37)
#define MUX_PB05G_PDEC_QDI1                        _UINT32_(6) 
#define PINMUX_PB05G_PDEC_QDI1                     ((PIN_PB05G_PDEC_QDI1 << 16) | MUX_PB05G_PDEC_QDI1)
#define PORT_PB05G_PDEC_QDI1                       (_UINT32_(1) << 5)

#define PIN_PB06G_PDEC_QDI2                        _UINT32_(38)
#define MUX_PB06G_PDEC_QDI2                        _UINT32_(6) 
#define PINMUX_PB06G_PDEC_QDI2                     ((PIN_PB06G_PDEC_QDI2 << 16) | MUX_PB06G_PDEC_QDI2)
#define PORT_PB06G_PDEC_QDI2                       (_UINT32_(1) << 6)

/* =================== PORT definition for PTC peripheral =================== */
#define PIN_PA09N_PTC_DRV0                         _UINT32_(9) 
#define MUX_PA09N_PTC_DRV0                         _UINT32_(13)
#define PINMUX_PA09N_PTC_DRV0                      ((PIN_PA09N_PTC_DRV0 << 16) | MUX_PA09N_PTC_DRV0)
#define PORT_PA09N_PTC_DRV0                        (_UINT32_(1) << 9)

#define PIN_PA10N_PTC_DRV1                         _UINT32_(10)
#define MUX_PA10N_PTC_DRV1                         _UINT32_(13)
#define PINMUX_PA10N_PTC_DRV1                      ((PIN_PA10N_PTC_DRV1 << 16) | MUX_PA10N_PTC_DRV1)
#define PORT_PA10N_PTC_DRV1                        (_UINT32_(1) << 10)

#define PIN_PA11N_PTC_DRV2                         _UINT32_(11)
#define MUX_PA11N_PTC_DRV2                         _UINT32_(13)
#define PINMUX_PA11N_PTC_DRV2                      ((PIN_PA11N_PTC_DRV2 << 16) | MUX_PA11N_PTC_DRV2)
#define PORT_PA11N_PTC_DRV2                        (_UINT32_(1) << 11)

#define PIN_PA12N_PTC_DRV3                         _UINT32_(12)
#define MUX_PA12N_PTC_DRV3                         _UINT32_(13)
#define PINMUX_PA12N_PTC_DRV3                      ((PIN_PA12N_PTC_DRV3 << 16) | MUX_PA12N_PTC_DRV3)
#define PORT_PA12N_PTC_DRV3                        (_UINT32_(1) << 12)

#define PIN_PB00N_PTC_DRV4                         _UINT32_(32)
#define MUX_PB00N_PTC_DRV4                         _UINT32_(13)
#define PINMUX_PB00N_PTC_DRV4                      ((PIN_PB00N_PTC_DRV4 << 16) | MUX_PB00N_PTC_DRV4)
#define PORT_PB00N_PTC_DRV4                        (_UINT32_(1) << 0)

#define PIN_PB01N_PTC_DRV5                         _UINT32_(33)
#define MUX_PB01N_PTC_DRV5                         _UINT32_(13)
#define PINMUX_PB01N_PTC_DRV5                      ((PIN_PB01N_PTC_DRV5 << 16) | MUX_PB01N_PTC_DRV5)
#define PORT_PB01N_PTC_DRV5                        (_UINT32_(1) << 1)

#define PIN_PC00N_PTC_DRV10                        _UINT32_(64)
#define MUX_PC00N_PTC_DRV10                        _UINT32_(13)
#define PINMUX_PC00N_PTC_DRV10                     ((PIN_PC00N_PTC_DRV10 << 16) | MUX_PC00N_PTC_DRV10)
#define PORT_PC00N_PTC_DRV10                       (_UINT32_(1) << 0)

#define PIN_PC01N_PTC_DRV11                        _UINT32_(65)
#define MUX_PC01N_PTC_DRV11                        _UINT32_(13)
#define PINMUX_PC01N_PTC_DRV11                     ((PIN_PC01N_PTC_DRV11 << 16) | MUX_PC01N_PTC_DRV11)
#define PORT_PC01N_PTC_DRV11                       (_UINT32_(1) << 1)

#define PIN_PC02N_PTC_DRV12                        _UINT32_(66)
#define MUX_PC02N_PTC_DRV12                        _UINT32_(13)
#define PINMUX_PC02N_PTC_DRV12                     ((PIN_PC02N_PTC_DRV12 << 16) | MUX_PC02N_PTC_DRV12)
#define PORT_PC02N_PTC_DRV12                       (_UINT32_(1) << 2)

#define PIN_PC03N_PTC_DRV13                        _UINT32_(67)
#define MUX_PC03N_PTC_DRV13                        _UINT32_(13)
#define PINMUX_PC03N_PTC_DRV13                     ((PIN_PC03N_PTC_DRV13 << 16) | MUX_PC03N_PTC_DRV13)
#define PORT_PC03N_PTC_DRV13                       (_UINT32_(1) << 3)

#define PIN_PC05N_PTC_DRV15                        _UINT32_(69)
#define MUX_PC05N_PTC_DRV15                        _UINT32_(13)
#define PINMUX_PC05N_PTC_DRV15                     ((PIN_PC05N_PTC_DRV15 << 16) | MUX_PC05N_PTC_DRV15)
#define PORT_PC05N_PTC_DRV15                       (_UINT32_(1) << 5)

#define PIN_PC06N_PTC_DRV16                        _UINT32_(70)
#define MUX_PC06N_PTC_DRV16                        _UINT32_(13)
#define PINMUX_PC06N_PTC_DRV16                     ((PIN_PC06N_PTC_DRV16 << 16) | MUX_PC06N_PTC_DRV16)
#define PORT_PC06N_PTC_DRV16                       (_UINT32_(1) << 6)

#define PIN_PC07N_PTC_DRV17                        _UINT32_(71)
#define MUX_PC07N_PTC_DRV17                        _UINT32_(13)
#define PINMUX_PC07N_PTC_DRV17                     ((PIN_PC07N_PTC_DRV17 << 16) | MUX_PC07N_PTC_DRV17)
#define PORT_PC07N_PTC_DRV17                       (_UINT32_(1) << 7)

#define PIN_PC10N_PTC_DRV20                        _UINT32_(74)
#define MUX_PC10N_PTC_DRV20                        _UINT32_(13)
#define PINMUX_PC10N_PTC_DRV20                     ((PIN_PC10N_PTC_DRV20 << 16) | MUX_PC10N_PTC_DRV20)
#define PORT_PC10N_PTC_DRV20                       (_UINT32_(1) << 10)

#define PIN_PC11N_PTC_DRV21                        _UINT32_(75)
#define MUX_PC11N_PTC_DRV21                        _UINT32_(13)
#define PINMUX_PC11N_PTC_DRV21                     ((PIN_PC11N_PTC_DRV21 << 16) | MUX_PC11N_PTC_DRV21)
#define PORT_PC11N_PTC_DRV21                       (_UINT32_(1) << 11)

/* ================= PORT definition for SDMMC0 peripheral ================== */
#define PIN_PA10I_SDMMC0_SDCD                      _UINT32_(10)
#define MUX_PA10I_SDMMC0_SDCD                      _UINT32_(8) 
#define PINMUX_PA10I_SDMMC0_SDCD                   ((PIN_PA10I_SDMMC0_SDCD << 16) | MUX_PA10I_SDMMC0_SDCD)
#define PORT_PA10I_SDMMC0_SDCD                     (_UINT32_(1) << 10)

#define PIN_PA12I_SDMMC0_SDCD                      _UINT32_(12)
#define MUX_PA12I_SDMMC0_SDCD                      _UINT32_(8) 
#define PINMUX_PA12I_SDMMC0_SDCD                   ((PIN_PA12I_SDMMC0_SDCD << 16) | MUX_PA12I_SDMMC0_SDCD)
#define PORT_PA12I_SDMMC0_SDCD                     (_UINT32_(1) << 12)

#define PIN_PC10I_SDMMC0_SDCD                      _UINT32_(74)
#define MUX_PC10I_SDMMC0_SDCD                      _UINT32_(8) 
#define PINMUX_PC10I_SDMMC0_SDCD                   ((PIN_PC10I_SDMMC0_SDCD << 16) | MUX_PC10I_SDMMC0_SDCD)
#define PORT_PC10I_SDMMC0_SDCD                     (_UINT32_(1) << 10)

#define PIN_PC05I_SDMMC0_SDCK                      _UINT32_(69)
#define MUX_PC05I_SDMMC0_SDCK                      _UINT32_(8) 
#define PINMUX_PC05I_SDMMC0_SDCK                   ((PIN_PC05I_SDMMC0_SDCK << 16) | MUX_PC05I_SDMMC0_SDCK)
#define PORT_PC05I_SDMMC0_SDCK                     (_UINT32_(1) << 5)

#define PIN_PC06I_SDMMC0_SDCMD                     _UINT32_(70)
#define MUX_PC06I_SDMMC0_SDCMD                     _UINT32_(8) 
#define PINMUX_PC06I_SDMMC0_SDCMD                  ((PIN_PC06I_SDMMC0_SDCMD << 16) | MUX_PC06I_SDMMC0_SDCMD)
#define PORT_PC06I_SDMMC0_SDCMD                    (_UINT32_(1) << 6)

#define PIN_PD06I_SDMMC0_SDCMD                     _UINT32_(102)
#define MUX_PD06I_SDMMC0_SDCMD                     _UINT32_(8) 
#define PINMUX_PD06I_SDMMC0_SDCMD                  ((PIN_PD06I_SDMMC0_SDCMD << 16) | MUX_PD06I_SDMMC0_SDCMD)
#define PORT_PD06I_SDMMC0_SDCMD                    (_UINT32_(1) << 6)

#define PIN_PC07I_SDMMC0_SDDAT0                    _UINT32_(71)
#define MUX_PC07I_SDMMC0_SDDAT0                    _UINT32_(8) 
#define PINMUX_PC07I_SDMMC0_SDDAT0                 ((PIN_PC07I_SDMMC0_SDDAT0 << 16) | MUX_PC07I_SDMMC0_SDDAT0)
#define PORT_PC07I_SDMMC0_SDDAT0                   (_UINT32_(1) << 7)

#define PIN_PD07I_SDMMC0_SDDAT0                    _UINT32_(103)
#define MUX_PD07I_SDMMC0_SDDAT0                    _UINT32_(8) 
#define PINMUX_PD07I_SDMMC0_SDDAT0                 ((PIN_PD07I_SDMMC0_SDDAT0 << 16) | MUX_PD07I_SDMMC0_SDDAT0)
#define PORT_PD07I_SDMMC0_SDDAT0                   (_UINT32_(1) << 7)

#define PIN_PC00I_SDMMC0_SDDAT1                    _UINT32_(64)
#define MUX_PC00I_SDMMC0_SDDAT1                    _UINT32_(8) 
#define PINMUX_PC00I_SDMMC0_SDDAT1                 ((PIN_PC00I_SDMMC0_SDDAT1 << 16) | MUX_PC00I_SDMMC0_SDDAT1)
#define PORT_PC00I_SDMMC0_SDDAT1                   (_UINT32_(1) << 0)

#define PIN_PC01I_SDMMC0_SDDAT2                    _UINT32_(65)
#define MUX_PC01I_SDMMC0_SDDAT2                    _UINT32_(8) 
#define PINMUX_PC01I_SDMMC0_SDDAT2                 ((PIN_PC01I_SDMMC0_SDDAT2 << 16) | MUX_PC01I_SDMMC0_SDDAT2)
#define PORT_PC01I_SDMMC0_SDDAT2                   (_UINT32_(1) << 1)

#define PIN_PC02I_SDMMC0_SDDAT3                    _UINT32_(66)
#define MUX_PC02I_SDMMC0_SDDAT3                    _UINT32_(8) 
#define PINMUX_PC02I_SDMMC0_SDDAT3                 ((PIN_PC02I_SDMMC0_SDDAT3 << 16) | MUX_PC02I_SDMMC0_SDDAT3)
#define PORT_PC02I_SDMMC0_SDDAT3                   (_UINT32_(1) << 2)

#define PIN_PB00I_SDMMC0_SDWP                      _UINT32_(32)
#define MUX_PB00I_SDMMC0_SDWP                      _UINT32_(8) 
#define PINMUX_PB00I_SDMMC0_SDWP                   ((PIN_PB00I_SDMMC0_SDWP << 16) | MUX_PB00I_SDMMC0_SDWP)
#define PORT_PB00I_SDMMC0_SDWP                     (_UINT32_(1) << 0)

#define PIN_PC03I_SDMMC0_SDWP                      _UINT32_(67)
#define MUX_PC03I_SDMMC0_SDWP                      _UINT32_(8) 
#define PINMUX_PC03I_SDMMC0_SDWP                   ((PIN_PC03I_SDMMC0_SDWP << 16) | MUX_PC03I_SDMMC0_SDWP)
#define PORT_PC03I_SDMMC0_SDWP                     (_UINT32_(1) << 3)

/* ================= PORT definition for SERCOM0 peripheral ================= */
#define PIN_PC10C_SERCOM0_PAD0                     _UINT32_(74)
#define MUX_PC10C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PC10C_SERCOM0_PAD0                  ((PIN_PC10C_SERCOM0_PAD0 << 16) | MUX_PC10C_SERCOM0_PAD0)
#define PORT_PC10C_SERCOM0_PAD0                    (_UINT32_(1) << 10)

#define PIN_PD06C_SERCOM0_PAD0                     _UINT32_(102)
#define MUX_PD06C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PD06C_SERCOM0_PAD0                  ((PIN_PD06C_SERCOM0_PAD0 << 16) | MUX_PD06C_SERCOM0_PAD0)
#define PORT_PD06C_SERCOM0_PAD0                    (_UINT32_(1) << 6)

#define PIN_PC11C_SERCOM0_PAD1                     _UINT32_(75)
#define MUX_PC11C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PC11C_SERCOM0_PAD1                  ((PIN_PC11C_SERCOM0_PAD1 << 16) | MUX_PC11C_SERCOM0_PAD1)
#define PORT_PC11C_SERCOM0_PAD1                    (_UINT32_(1) << 11)

#define PIN_PD07C_SERCOM0_PAD1                     _UINT32_(103)
#define MUX_PD07C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PD07C_SERCOM0_PAD1                  ((PIN_PD07C_SERCOM0_PAD1 << 16) | MUX_PD07C_SERCOM0_PAD1)
#define PORT_PD07C_SERCOM0_PAD1                    (_UINT32_(1) << 7)

#define PIN_PA00C_SERCOM0_PAD2                     _UINT32_(0) 
#define MUX_PA00C_SERCOM0_PAD2                     _UINT32_(2) 
#define PINMUX_PA00C_SERCOM0_PAD2                  ((PIN_PA00C_SERCOM0_PAD2 << 16) | MUX_PA00C_SERCOM0_PAD2)
#define PORT_PA00C_SERCOM0_PAD2                    (_UINT32_(1) << 0)

#define PIN_PA01C_SERCOM0_PAD3                     _UINT32_(1) 
#define MUX_PA01C_SERCOM0_PAD3                     _UINT32_(2) 
#define PINMUX_PA01C_SERCOM0_PAD3                  ((PIN_PA01C_SERCOM0_PAD3 << 16) | MUX_PA01C_SERCOM0_PAD3)
#define PORT_PA01C_SERCOM0_PAD3                    (_UINT32_(1) << 1)

/* ================= PORT definition for SERCOM1 peripheral ================= */
#define PIN_PA00D_SERCOM1_PAD0                     _UINT32_(0) 
#define MUX_PA00D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PA00D_SERCOM1_PAD0                  ((PIN_PA00D_SERCOM1_PAD0 << 16) | MUX_PA00D_SERCOM1_PAD0)
#define PORT_PA00D_SERCOM1_PAD0                    (_UINT32_(1) << 0)

#define PIN_PA01D_SERCOM1_PAD1                     _UINT32_(1) 
#define MUX_PA01D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PA01D_SERCOM1_PAD1                  ((PIN_PA01D_SERCOM1_PAD1 << 16) | MUX_PA01D_SERCOM1_PAD1)
#define PORT_PA01D_SERCOM1_PAD1                    (_UINT32_(1) << 1)

#define PIN_PD06D_SERCOM1_PAD2                     _UINT32_(102)
#define MUX_PD06D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PD06D_SERCOM1_PAD2                  ((PIN_PD06D_SERCOM1_PAD2 << 16) | MUX_PD06D_SERCOM1_PAD2)
#define PORT_PD06D_SERCOM1_PAD2                    (_UINT32_(1) << 6)

#define PIN_PD07D_SERCOM1_PAD3                     _UINT32_(103)
#define MUX_PD07D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PD07D_SERCOM1_PAD3                  ((PIN_PD07D_SERCOM1_PAD3 << 16) | MUX_PD07D_SERCOM1_PAD3)
#define PORT_PD07D_SERCOM1_PAD3                    (_UINT32_(1) << 7)

/* ================= PORT definition for SERCOM2 peripheral ================= */
#define PIN_PC11D_SERCOM2_PAD0                     _UINT32_(75)
#define MUX_PC11D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PC11D_SERCOM2_PAD0                  ((PIN_PC11D_SERCOM2_PAD0 << 16) | MUX_PC11D_SERCOM2_PAD0)
#define PORT_PC11D_SERCOM2_PAD0                    (_UINT32_(1) << 11)

#define PIN_PC06C_SERCOM2_PAD0                     _UINT32_(70)
#define MUX_PC06C_SERCOM2_PAD0                     _UINT32_(2) 
#define PINMUX_PC06C_SERCOM2_PAD0                  ((PIN_PC06C_SERCOM2_PAD0 << 16) | MUX_PC06C_SERCOM2_PAD0)
#define PORT_PC06C_SERCOM2_PAD0                    (_UINT32_(1) << 6)

#define PIN_PC10D_SERCOM2_PAD1                     _UINT32_(74)
#define MUX_PC10D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PC10D_SERCOM2_PAD1                  ((PIN_PC10D_SERCOM2_PAD1 << 16) | MUX_PC10D_SERCOM2_PAD1)
#define PORT_PC10D_SERCOM2_PAD1                    (_UINT32_(1) << 10)

#define PIN_PC07C_SERCOM2_PAD1                     _UINT32_(71)
#define MUX_PC07C_SERCOM2_PAD1                     _UINT32_(2) 
#define PINMUX_PC07C_SERCOM2_PAD1                  ((PIN_PC07C_SERCOM2_PAD1 << 16) | MUX_PC07C_SERCOM2_PAD1)
#define PORT_PC07C_SERCOM2_PAD1                    (_UINT32_(1) << 7)

#define PIN_PC05D_SERCOM2_PAD2                     _UINT32_(69)
#define MUX_PC05D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PC05D_SERCOM2_PAD2                  ((PIN_PC05D_SERCOM2_PAD2 << 16) | MUX_PC05D_SERCOM2_PAD2)
#define PORT_PC05D_SERCOM2_PAD2                    (_UINT32_(1) << 5)

#define PIN_PC02D_SERCOM2_PAD3                     _UINT32_(66)
#define MUX_PC02D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PC02D_SERCOM2_PAD3                  ((PIN_PC02D_SERCOM2_PAD3 << 16) | MUX_PC02D_SERCOM2_PAD3)
#define PORT_PC02D_SERCOM2_PAD3                    (_UINT32_(1) << 2)

/* ================= PORT definition for SERCOM3 peripheral ================= */
#define PIN_PC07D_SERCOM3_PAD0                     _UINT32_(71)
#define MUX_PC07D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PC07D_SERCOM3_PAD0                  ((PIN_PC07D_SERCOM3_PAD0 << 16) | MUX_PC07D_SERCOM3_PAD0)
#define PORT_PC07D_SERCOM3_PAD0                    (_UINT32_(1) << 7)

#define PIN_PC02C_SERCOM3_PAD0                     _UINT32_(66)
#define MUX_PC02C_SERCOM3_PAD0                     _UINT32_(2) 
#define PINMUX_PC02C_SERCOM3_PAD0                  ((PIN_PC02C_SERCOM3_PAD0 << 16) | MUX_PC02C_SERCOM3_PAD0)
#define PORT_PC02C_SERCOM3_PAD0                    (_UINT32_(1) << 2)

#define PIN_PC06D_SERCOM3_PAD1                     _UINT32_(70)
#define MUX_PC06D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PC06D_SERCOM3_PAD1                  ((PIN_PC06D_SERCOM3_PAD1 << 16) | MUX_PC06D_SERCOM3_PAD1)
#define PORT_PC06D_SERCOM3_PAD1                    (_UINT32_(1) << 6)

#define PIN_PC03C_SERCOM3_PAD1                     _UINT32_(67)
#define MUX_PC03C_SERCOM3_PAD1                     _UINT32_(2) 
#define PINMUX_PC03C_SERCOM3_PAD1                  ((PIN_PC03C_SERCOM3_PAD1 << 16) | MUX_PC03C_SERCOM3_PAD1)
#define PORT_PC03C_SERCOM3_PAD1                    (_UINT32_(1) << 3)

#define PIN_PC01D_SERCOM3_PAD2                     _UINT32_(65)
#define MUX_PC01D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PC01D_SERCOM3_PAD2                  ((PIN_PC01D_SERCOM3_PAD2 << 16) | MUX_PC01D_SERCOM3_PAD2)
#define PORT_PC01D_SERCOM3_PAD2                    (_UINT32_(1) << 1)

#define PIN_PC00D_SERCOM3_PAD3                     _UINT32_(64)
#define MUX_PC00D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PC00D_SERCOM3_PAD3                  ((PIN_PC00D_SERCOM3_PAD3 << 16) | MUX_PC00D_SERCOM3_PAD3)
#define PORT_PC00D_SERCOM3_PAD3                    (_UINT32_(1) << 0)

#define PIN_PC05C_SERCOM3_PAD3                     _UINT32_(69)
#define MUX_PC05C_SERCOM3_PAD3                     _UINT32_(2) 
#define PINMUX_PC05C_SERCOM3_PAD3                  ((PIN_PC05C_SERCOM3_PAD3 << 16) | MUX_PC05C_SERCOM3_PAD3)
#define PORT_PC05C_SERCOM3_PAD3                    (_UINT32_(1) << 5)

/* ================= PORT definition for SERCOM4 peripheral ================= */
#define PIN_PB04D_SERCOM4_PAD0                     _UINT32_(36)
#define MUX_PB04D_SERCOM4_PAD0                     _UINT32_(3) 
#define PINMUX_PB04D_SERCOM4_PAD0                  ((PIN_PB04D_SERCOM4_PAD0 << 16) | MUX_PB04D_SERCOM4_PAD0)
#define PORT_PB04D_SERCOM4_PAD0                    (_UINT32_(1) << 4)

#define PIN_PB04C_SERCOM4_PAD0                     _UINT32_(36)
#define MUX_PB04C_SERCOM4_PAD0                     _UINT32_(2) 
#define PINMUX_PB04C_SERCOM4_PAD0                  ((PIN_PB04C_SERCOM4_PAD0 << 16) | MUX_PB04C_SERCOM4_PAD0)
#define PORT_PB04C_SERCOM4_PAD0                    (_UINT32_(1) << 4)

#define PIN_PB05D_SERCOM4_PAD1                     _UINT32_(37)
#define MUX_PB05D_SERCOM4_PAD1                     _UINT32_(3) 
#define PINMUX_PB05D_SERCOM4_PAD1                  ((PIN_PB05D_SERCOM4_PAD1 << 16) | MUX_PB05D_SERCOM4_PAD1)
#define PORT_PB05D_SERCOM4_PAD1                    (_UINT32_(1) << 5)

#define PIN_PB05C_SERCOM4_PAD1                     _UINT32_(37)
#define MUX_PB05C_SERCOM4_PAD1                     _UINT32_(2) 
#define PINMUX_PB05C_SERCOM4_PAD1                  ((PIN_PB05C_SERCOM4_PAD1 << 16) | MUX_PB05C_SERCOM4_PAD1)
#define PORT_PB05C_SERCOM4_PAD1                    (_UINT32_(1) << 5)

#define PIN_PA10D_SERCOM4_PAD2                     _UINT32_(10)
#define MUX_PA10D_SERCOM4_PAD2                     _UINT32_(3) 
#define PINMUX_PA10D_SERCOM4_PAD2                  ((PIN_PA10D_SERCOM4_PAD2 << 16) | MUX_PA10D_SERCOM4_PAD2)
#define PORT_PA10D_SERCOM4_PAD2                    (_UINT32_(1) << 10)

#define PIN_PC00C_SERCOM4_PAD2                     _UINT32_(64)
#define MUX_PC00C_SERCOM4_PAD2                     _UINT32_(2) 
#define PINMUX_PC00C_SERCOM4_PAD2                  ((PIN_PC00C_SERCOM4_PAD2 << 16) | MUX_PC00C_SERCOM4_PAD2)
#define PORT_PC00C_SERCOM4_PAD2                    (_UINT32_(1) << 0)

#define PIN_PB06D_SERCOM4_PAD3                     _UINT32_(38)
#define MUX_PB06D_SERCOM4_PAD3                     _UINT32_(3) 
#define PINMUX_PB06D_SERCOM4_PAD3                  ((PIN_PB06D_SERCOM4_PAD3 << 16) | MUX_PB06D_SERCOM4_PAD3)
#define PORT_PB06D_SERCOM4_PAD3                    (_UINT32_(1) << 6)

#define PIN_PB06C_SERCOM4_PAD3                     _UINT32_(38)
#define MUX_PB06C_SERCOM4_PAD3                     _UINT32_(2) 
#define PINMUX_PB06C_SERCOM4_PAD3                  ((PIN_PB06C_SERCOM4_PAD3 << 16) | MUX_PB06C_SERCOM4_PAD3)
#define PORT_PB06C_SERCOM4_PAD3                    (_UINT32_(1) << 6)

#define PIN_PC01C_SERCOM4_PAD3                     _UINT32_(65)
#define MUX_PC01C_SERCOM4_PAD3                     _UINT32_(2) 
#define PINMUX_PC01C_SERCOM4_PAD3                  ((PIN_PC01C_SERCOM4_PAD3 << 16) | MUX_PC01C_SERCOM4_PAD3)
#define PORT_PC01C_SERCOM4_PAD3                    (_UINT32_(1) << 1)

/* ================= PORT definition for SERCOM5 peripheral ================= */
#define PIN_PA11C_SERCOM5_PAD0                     _UINT32_(11)
#define MUX_PA11C_SERCOM5_PAD0                     _UINT32_(2) 
#define PINMUX_PA11C_SERCOM5_PAD0                  ((PIN_PA11C_SERCOM5_PAD0 << 16) | MUX_PA11C_SERCOM5_PAD0)
#define PORT_PA11C_SERCOM5_PAD0                    (_UINT32_(1) << 11)

#define PIN_PA06D_SERCOM5_PAD1                     _UINT32_(6) 
#define MUX_PA06D_SERCOM5_PAD1                     _UINT32_(3) 
#define PINMUX_PA06D_SERCOM5_PAD1                  ((PIN_PA06D_SERCOM5_PAD1 << 16) | MUX_PA06D_SERCOM5_PAD1)
#define PORT_PA06D_SERCOM5_PAD1                    (_UINT32_(1) << 6)

#define PIN_PA12C_SERCOM5_PAD1                     _UINT32_(12)
#define MUX_PA12C_SERCOM5_PAD1                     _UINT32_(2) 
#define PINMUX_PA12C_SERCOM5_PAD1                  ((PIN_PA12C_SERCOM5_PAD1 << 16) | MUX_PA12C_SERCOM5_PAD1)
#define PORT_PA12C_SERCOM5_PAD1                    (_UINT32_(1) << 12)

#define PIN_PA07D_SERCOM5_PAD2                     _UINT32_(7) 
#define MUX_PA07D_SERCOM5_PAD2                     _UINT32_(3) 
#define PINMUX_PA07D_SERCOM5_PAD2                  ((PIN_PA07D_SERCOM5_PAD2 << 16) | MUX_PA07D_SERCOM5_PAD2)
#define PORT_PA07D_SERCOM5_PAD2                    (_UINT32_(1) << 7)

#define PIN_PB00C_SERCOM5_PAD2                     _UINT32_(32)
#define MUX_PB00C_SERCOM5_PAD2                     _UINT32_(2) 
#define PINMUX_PB00C_SERCOM5_PAD2                  ((PIN_PB00C_SERCOM5_PAD2 << 16) | MUX_PB00C_SERCOM5_PAD2)
#define PORT_PB00C_SERCOM5_PAD2                    (_UINT32_(1) << 0)

#define PIN_PB01C_SERCOM5_PAD3                     _UINT32_(33)
#define MUX_PB01C_SERCOM5_PAD3                     _UINT32_(2) 
#define PINMUX_PB01C_SERCOM5_PAD3                  ((PIN_PB01C_SERCOM5_PAD3 << 16) | MUX_PB01C_SERCOM5_PAD3)
#define PORT_PB01C_SERCOM5_PAD3                    (_UINT32_(1) << 1)

/* ================= PORT definition for SPI_IXS peripheral ================= */
#define PIN_PA09J_SPI_IXS_FSYNC                    _UINT32_(9) 
#define MUX_PA09J_SPI_IXS_FSYNC                    _UINT32_(9) 
#define PINMUX_PA09J_SPI_IXS_FSYNC                 ((PIN_PA09J_SPI_IXS_FSYNC << 16) | MUX_PA09J_SPI_IXS_FSYNC)
#define PORT_PA09J_SPI_IXS_FSYNC                   (_UINT32_(1) << 9)

#define PIN_PD06J_SPI_IXS_FSYNC                    _UINT32_(102)
#define MUX_PD06J_SPI_IXS_FSYNC                    _UINT32_(9) 
#define PINMUX_PD06J_SPI_IXS_FSYNC                 ((PIN_PD06J_SPI_IXS_FSYNC << 16) | MUX_PD06J_SPI_IXS_FSYNC)
#define PORT_PD06J_SPI_IXS_FSYNC                   (_UINT32_(1) << 6)

#define PIN_PA11J_SPI_IXS_SCK                      _UINT32_(11)
#define MUX_PA11J_SPI_IXS_SCK                      _UINT32_(9) 
#define PINMUX_PA11J_SPI_IXS_SCK                   ((PIN_PA11J_SPI_IXS_SCK << 16) | MUX_PA11J_SPI_IXS_SCK)
#define PORT_PA11J_SPI_IXS_SCK                     (_UINT32_(1) << 11)

#define PIN_PA12J_SPI_IXS_SDI                      _UINT32_(12)
#define MUX_PA12J_SPI_IXS_SDI                      _UINT32_(9) 
#define PINMUX_PA12J_SPI_IXS_SDI                   ((PIN_PA12J_SPI_IXS_SDI << 16) | MUX_PA12J_SPI_IXS_SDI)
#define PORT_PA12J_SPI_IXS_SDI                     (_UINT32_(1) << 12)

#define PIN_PD07J_SPI_IXS_SDI                      _UINT32_(103)
#define MUX_PD07J_SPI_IXS_SDI                      _UINT32_(9) 
#define PINMUX_PD07J_SPI_IXS_SDI                   ((PIN_PD07J_SPI_IXS_SDI << 16) | MUX_PD07J_SPI_IXS_SDI)
#define PORT_PD07J_SPI_IXS_SDI                     (_UINT32_(1) << 7)

#define PIN_PB00J_SPI_IXS_SDO                      _UINT32_(32)
#define MUX_PB00J_SPI_IXS_SDO                      _UINT32_(9) 
#define PINMUX_PB00J_SPI_IXS_SDO                   ((PIN_PB00J_SPI_IXS_SDO << 16) | MUX_PB00J_SPI_IXS_SDO)
#define PORT_PB00J_SPI_IXS_SDO                     (_UINT32_(1) << 0)

/* =================== PORT definition for SQI peripheral =================== */
#define PIN_PC06P_SQI_CLK                          _UINT32_(70)
#define MUX_PC06P_SQI_CLK                          _UINT32_(15)
#define PINMUX_PC06P_SQI_CLK                       ((PIN_PC06P_SQI_CLK << 16) | MUX_PC06P_SQI_CLK)
#define PORT_PC06P_SQI_CLK                         (_UINT32_(1) << 6)

#define PIN_PC01P_SQI_CS0                          _UINT32_(65)
#define MUX_PC01P_SQI_CS0                          _UINT32_(15)
#define PINMUX_PC01P_SQI_CS0                       ((PIN_PC01P_SQI_CS0 << 16) | MUX_PC01P_SQI_CS0)
#define PORT_PC01P_SQI_CS0                         (_UINT32_(1) << 1)

#define PIN_PD06H_SQI_CS0                          _UINT32_(102)
#define MUX_PD06H_SQI_CS0                          _UINT32_(7) 
#define PINMUX_PD06H_SQI_CS0                       ((PIN_PD06H_SQI_CS0 << 16) | MUX_PD06H_SQI_CS0)
#define PORT_PD06H_SQI_CS0                         (_UINT32_(1) << 6)

#define PIN_PC00P_SQI_CS1                          _UINT32_(64)
#define MUX_PC00P_SQI_CS1                          _UINT32_(15)
#define PINMUX_PC00P_SQI_CS1                       ((PIN_PC00P_SQI_CS1 << 16) | MUX_PC00P_SQI_CS1)
#define PORT_PC00P_SQI_CS1                         (_UINT32_(1) << 0)

#define PIN_PA10H_SQI_CS2                          _UINT32_(10)
#define MUX_PA10H_SQI_CS2                          _UINT32_(7) 
#define PINMUX_PA10H_SQI_CS2                       ((PIN_PA10H_SQI_CS2 << 16) | MUX_PA10H_SQI_CS2)
#define PORT_PA10H_SQI_CS2                         (_UINT32_(1) << 10)

#define PIN_PC02P_SQI_DATA0                        _UINT32_(66)
#define MUX_PC02P_SQI_DATA0                        _UINT32_(15)
#define PINMUX_PC02P_SQI_DATA0                     ((PIN_PC02P_SQI_DATA0 << 16) | MUX_PC02P_SQI_DATA0)
#define PORT_PC02P_SQI_DATA0                       (_UINT32_(1) << 2)

#define PIN_PD07H_SQI_DATA0                        _UINT32_(103)
#define MUX_PD07H_SQI_DATA0                        _UINT32_(7) 
#define PINMUX_PD07H_SQI_DATA0                     ((PIN_PD07H_SQI_DATA0 << 16) | MUX_PD07H_SQI_DATA0)
#define PORT_PD07H_SQI_DATA0                       (_UINT32_(1) << 7)

#define PIN_PC07P_SQI_DATA1                        _UINT32_(71)
#define MUX_PC07P_SQI_DATA1                        _UINT32_(15)
#define PINMUX_PC07P_SQI_DATA1                     ((PIN_PC07P_SQI_DATA1 << 16) | MUX_PC07P_SQI_DATA1)
#define PORT_PC07P_SQI_DATA1                       (_UINT32_(1) << 7)

#define PIN_PC03P_SQI_DATA2                        _UINT32_(67)
#define MUX_PC03P_SQI_DATA2                        _UINT32_(15)
#define PINMUX_PC03P_SQI_DATA2                     ((PIN_PC03P_SQI_DATA2 << 16) | MUX_PC03P_SQI_DATA2)
#define PORT_PC03P_SQI_DATA2                       (_UINT32_(1) << 3)

#define PIN_PC05P_SQI_DATA3                        _UINT32_(69)
#define MUX_PC05P_SQI_DATA3                        _UINT32_(15)
#define PINMUX_PC05P_SQI_DATA3                     ((PIN_PC05P_SQI_DATA3 << 16) | MUX_PC05P_SQI_DATA3)
#define PORT_PC05P_SQI_DATA3                       (_UINT32_(1) << 5)

/* ================== PORT definition for TCC0 peripheral =================== */
#define PIN_PB04F_TCC0_WO0                         _UINT32_(36)
#define MUX_PB04F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PB04F_TCC0_WO0                      ((PIN_PB04F_TCC0_WO0 << 16) | MUX_PB04F_TCC0_WO0)
#define PORT_PB04F_TCC0_WO0                        (_UINT32_(1) << 4)

#define PIN_PC00G_TCC0_WO1                         _UINT32_(64)
#define MUX_PC00G_TCC0_WO1                         _UINT32_(6) 
#define PINMUX_PC00G_TCC0_WO1                      ((PIN_PC00G_TCC0_WO1 << 16) | MUX_PC00G_TCC0_WO1)
#define PORT_PC00G_TCC0_WO1                        (_UINT32_(1) << 0)

#define PIN_PB05F_TCC0_WO1                         _UINT32_(37)
#define MUX_PB05F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PB05F_TCC0_WO1                      ((PIN_PB05F_TCC0_WO1 << 16) | MUX_PB05F_TCC0_WO1)
#define PORT_PB05F_TCC0_WO1                        (_UINT32_(1) << 5)

#define PIN_PC01G_TCC0_WO2                         _UINT32_(65)
#define MUX_PC01G_TCC0_WO2                         _UINT32_(6) 
#define PINMUX_PC01G_TCC0_WO2                      ((PIN_PC01G_TCC0_WO2 << 16) | MUX_PC01G_TCC0_WO2)
#define PORT_PC01G_TCC0_WO2                        (_UINT32_(1) << 1)

#define PIN_PC02G_TCC0_WO3                         _UINT32_(66)
#define MUX_PC02G_TCC0_WO3                         _UINT32_(6) 
#define PINMUX_PC02G_TCC0_WO3                      ((PIN_PC02G_TCC0_WO3 << 16) | MUX_PC02G_TCC0_WO3)
#define PORT_PC02G_TCC0_WO3                        (_UINT32_(1) << 2)

#define PIN_PB06F_TCC0_WO3                         _UINT32_(38)
#define MUX_PB06F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PB06F_TCC0_WO3                      ((PIN_PB06F_TCC0_WO3 << 16) | MUX_PB06F_TCC0_WO3)
#define PORT_PB06F_TCC0_WO3                        (_UINT32_(1) << 6)

#define PIN_PC03G_TCC0_WO4                         _UINT32_(67)
#define MUX_PC03G_TCC0_WO4                         _UINT32_(6) 
#define PINMUX_PC03G_TCC0_WO4                      ((PIN_PC03G_TCC0_WO4 << 16) | MUX_PC03G_TCC0_WO4)
#define PORT_PC03G_TCC0_WO4                        (_UINT32_(1) << 3)

/* ================== PORT definition for TCC1 peripheral =================== */
#define PIN_PC05G_TCC1_WO0                         _UINT32_(69)
#define MUX_PC05G_TCC1_WO0                         _UINT32_(6) 
#define PINMUX_PC05G_TCC1_WO0                      ((PIN_PC05G_TCC1_WO0 << 16) | MUX_PC05G_TCC1_WO0)
#define PORT_PC05G_TCC1_WO0                        (_UINT32_(1) << 5)

#define PIN_PC06G_TCC1_WO1                         _UINT32_(70)
#define MUX_PC06G_TCC1_WO1                         _UINT32_(6) 
#define PINMUX_PC06G_TCC1_WO1                      ((PIN_PC06G_TCC1_WO1 << 16) | MUX_PC06G_TCC1_WO1)
#define PORT_PC06G_TCC1_WO1                        (_UINT32_(1) << 6)

#define PIN_PC07G_TCC1_WO2                         _UINT32_(71)
#define MUX_PC07G_TCC1_WO2                         _UINT32_(6) 
#define PINMUX_PC07G_TCC1_WO2                      ((PIN_PC07G_TCC1_WO2 << 16) | MUX_PC07G_TCC1_WO2)
#define PORT_PC07G_TCC1_WO2                        (_UINT32_(1) << 7)

#define PIN_PC10G_TCC1_WO5                         _UINT32_(74)
#define MUX_PC10G_TCC1_WO5                         _UINT32_(6) 
#define PINMUX_PC10G_TCC1_WO5                      ((PIN_PC10G_TCC1_WO5 << 16) | MUX_PC10G_TCC1_WO5)
#define PORT_PC10G_TCC1_WO5                        (_UINT32_(1) << 10)

#define PIN_PC11G_TCC1_WO6                         _UINT32_(75)
#define MUX_PC11G_TCC1_WO6                         _UINT32_(6) 
#define PINMUX_PC11G_TCC1_WO6                      ((PIN_PC11G_TCC1_WO6 << 16) | MUX_PC11G_TCC1_WO6)
#define PORT_PC11G_TCC1_WO6                        (_UINT32_(1) << 11)

/* ================== PORT definition for TCC2 peripheral =================== */
#define PIN_PA00F_TCC2_WO0                         _UINT32_(0) 
#define MUX_PA00F_TCC2_WO0                         _UINT32_(5) 
#define PINMUX_PA00F_TCC2_WO0                      ((PIN_PA00F_TCC2_WO0 << 16) | MUX_PA00F_TCC2_WO0)
#define PORT_PA00F_TCC2_WO0                        (_UINT32_(1) << 0)

#define PIN_PD06G_TCC2_WO1                         _UINT32_(102)
#define MUX_PD06G_TCC2_WO1                         _UINT32_(6) 
#define PINMUX_PD06G_TCC2_WO1                      ((PIN_PD06G_TCC2_WO1 << 16) | MUX_PD06G_TCC2_WO1)
#define PORT_PD06G_TCC2_WO1                        (_UINT32_(1) << 6)

#define PIN_PC11F_TCC2_WO1                         _UINT32_(75)
#define MUX_PC11F_TCC2_WO1                         _UINT32_(5) 
#define PINMUX_PC11F_TCC2_WO1                      ((PIN_PC11F_TCC2_WO1 << 16) | MUX_PC11F_TCC2_WO1)
#define PORT_PC11F_TCC2_WO1                        (_UINT32_(1) << 11)

#define PIN_PD07G_TCC2_WO2                         _UINT32_(103)
#define MUX_PD07G_TCC2_WO2                         _UINT32_(6) 
#define PINMUX_PD07G_TCC2_WO2                      ((PIN_PD07G_TCC2_WO2 << 16) | MUX_PD07G_TCC2_WO2)
#define PORT_PD07G_TCC2_WO2                        (_UINT32_(1) << 7)

#define PIN_PC10F_TCC2_WO2                         _UINT32_(74)
#define MUX_PC10F_TCC2_WO2                         _UINT32_(5) 
#define PINMUX_PC10F_TCC2_WO2                      ((PIN_PC10F_TCC2_WO2 << 16) | MUX_PC10F_TCC2_WO2)
#define PORT_PC10F_TCC2_WO2                        (_UINT32_(1) << 10)

#define PIN_PA01F_TCC2_WO3                         _UINT32_(1) 
#define MUX_PA01F_TCC2_WO3                         _UINT32_(5) 
#define PINMUX_PA01F_TCC2_WO3                      ((PIN_PA01F_TCC2_WO3 << 16) | MUX_PA01F_TCC2_WO3)
#define PORT_PA01F_TCC2_WO3                        (_UINT32_(1) << 1)

#define PIN_PD06F_TCC2_WO4                         _UINT32_(102)
#define MUX_PD06F_TCC2_WO4                         _UINT32_(5) 
#define PINMUX_PD06F_TCC2_WO4                      ((PIN_PD06F_TCC2_WO4 << 16) | MUX_PD06F_TCC2_WO4)
#define PORT_PD06F_TCC2_WO4                        (_UINT32_(1) << 6)

#define PIN_PD07F_TCC2_WO5                         _UINT32_(103)
#define MUX_PD07F_TCC2_WO5                         _UINT32_(5) 
#define PINMUX_PD07F_TCC2_WO5                      ((PIN_PD07F_TCC2_WO5 << 16) | MUX_PD07F_TCC2_WO5)
#define PORT_PD07F_TCC2_WO5                        (_UINT32_(1) << 7)

/* ================== PORT definition for TCC3 peripheral =================== */
#define PIN_PA09G_TCC3_WO0                         _UINT32_(9) 
#define MUX_PA09G_TCC3_WO0                         _UINT32_(6) 
#define PINMUX_PA09G_TCC3_WO0                      ((PIN_PA09G_TCC3_WO0 << 16) | MUX_PA09G_TCC3_WO0)
#define PORT_PA09G_TCC3_WO0                        (_UINT32_(1) << 9)

#define PIN_PA10G_TCC3_WO1                         _UINT32_(10)
#define MUX_PA10G_TCC3_WO1                         _UINT32_(6) 
#define PINMUX_PA10G_TCC3_WO1                      ((PIN_PA10G_TCC3_WO1 << 16) | MUX_PA10G_TCC3_WO1)
#define PORT_PA10G_TCC3_WO1                        (_UINT32_(1) << 10)

#define PIN_PA11G_TCC3_WO2                         _UINT32_(11)
#define MUX_PA11G_TCC3_WO2                         _UINT32_(6) 
#define PINMUX_PA11G_TCC3_WO2                      ((PIN_PA11G_TCC3_WO2 << 16) | MUX_PA11G_TCC3_WO2)
#define PORT_PA11G_TCC3_WO2                        (_UINT32_(1) << 11)

#define PIN_PA06F_TCC3_WO2                         _UINT32_(6) 
#define MUX_PA06F_TCC3_WO2                         _UINT32_(5) 
#define PINMUX_PA06F_TCC3_WO2                      ((PIN_PA06F_TCC3_WO2 << 16) | MUX_PA06F_TCC3_WO2)
#define PORT_PA06F_TCC3_WO2                        (_UINT32_(1) << 6)

#define PIN_PA12G_TCC3_WO3                         _UINT32_(12)
#define MUX_PA12G_TCC3_WO3                         _UINT32_(6) 
#define PINMUX_PA12G_TCC3_WO3                      ((PIN_PA12G_TCC3_WO3 << 16) | MUX_PA12G_TCC3_WO3)
#define PORT_PA12G_TCC3_WO3                        (_UINT32_(1) << 12)

#define PIN_PA07F_TCC3_WO3                         _UINT32_(7) 
#define MUX_PA07F_TCC3_WO3                         _UINT32_(5) 
#define PINMUX_PA07F_TCC3_WO3                      ((PIN_PA07F_TCC3_WO3 << 16) | MUX_PA07F_TCC3_WO3)
#define PORT_PA07F_TCC3_WO3                        (_UINT32_(1) << 7)

#define PIN_PB00G_TCC3_WO4                         _UINT32_(32)
#define MUX_PB00G_TCC3_WO4                         _UINT32_(6) 
#define PINMUX_PB00G_TCC3_WO4                      ((PIN_PB00G_TCC3_WO4 << 16) | MUX_PB00G_TCC3_WO4)
#define PORT_PB00G_TCC3_WO4                        (_UINT32_(1) << 0)

#define PIN_PB01G_TCC3_WO5                         _UINT32_(33)
#define MUX_PB01G_TCC3_WO5                         _UINT32_(6) 
#define PINMUX_PB01G_TCC3_WO5                      ((PIN_PB01G_TCC3_WO5 << 16) | MUX_PB01G_TCC3_WO5)
#define PORT_PB01G_TCC3_WO5                        (_UINT32_(1) << 1)

#define PIN_PA06G_TCC3_WO6                         _UINT32_(6) 
#define MUX_PA06G_TCC3_WO6                         _UINT32_(6) 
#define PINMUX_PA06G_TCC3_WO6                      ((PIN_PA06G_TCC3_WO6 << 16) | MUX_PA06G_TCC3_WO6)
#define PORT_PA06G_TCC3_WO6                        (_UINT32_(1) << 6)

#define PIN_PA07G_TCC3_WO7                         _UINT32_(7) 
#define MUX_PA07G_TCC3_WO7                         _UINT32_(6) 
#define PINMUX_PA07G_TCC3_WO7                      ((PIN_PA07G_TCC3_WO7 << 16) | MUX_PA07G_TCC3_WO7)
#define PORT_PA07G_TCC3_WO7                        (_UINT32_(1) << 7)

/* ================== PORT definition for TCC4 peripheral =================== */
#define PIN_PA11F_TCC4_WO0                         _UINT32_(11)
#define MUX_PA11F_TCC4_WO0                         _UINT32_(5) 
#define PINMUX_PA11F_TCC4_WO0                      ((PIN_PA11F_TCC4_WO0 << 16) | MUX_PA11F_TCC4_WO0)
#define PORT_PA11F_TCC4_WO0                        (_UINT32_(1) << 11)

#define PIN_PA12F_TCC4_WO1                         _UINT32_(12)
#define MUX_PA12F_TCC4_WO1                         _UINT32_(5) 
#define PINMUX_PA12F_TCC4_WO1                      ((PIN_PA12F_TCC4_WO1 << 16) | MUX_PA12F_TCC4_WO1)
#define PORT_PA12F_TCC4_WO1                        (_UINT32_(1) << 12)

/* ================== PORT definition for TCC5 peripheral =================== */
#define PIN_PB00F_TCC5_WO0                         _UINT32_(32)
#define MUX_PB00F_TCC5_WO0                         _UINT32_(5) 
#define PINMUX_PB00F_TCC5_WO0                      ((PIN_PB00F_TCC5_WO0 << 16) | MUX_PB00F_TCC5_WO0)
#define PORT_PB00F_TCC5_WO0                        (_UINT32_(1) << 0)

#define PIN_PB01F_TCC5_WO1                         _UINT32_(33)
#define MUX_PB01F_TCC5_WO1                         _UINT32_(5) 
#define PINMUX_PB01F_TCC5_WO1                      ((PIN_PB01F_TCC5_WO1 << 16) | MUX_PB01F_TCC5_WO1)
#define PORT_PB01F_TCC5_WO1                        (_UINT32_(1) << 1)

/* =================== PORT definition for USB peripheral =================== */
#define PIN_PD03H_USB_DM                           _UINT32_(99)
#define MUX_PD03H_USB_DM                           _UINT32_(7) 
#define PINMUX_PD03H_USB_DM                        ((PIN_PD03H_USB_DM << 16) | MUX_PD03H_USB_DM)
#define PORT_PD03H_USB_DM                          (_UINT32_(1) << 3)

#define PIN_PD04H_USB_DP                           _UINT32_(100)
#define MUX_PD04H_USB_DP                           _UINT32_(7) 
#define PINMUX_PD04H_USB_DP                        ((PIN_PD04H_USB_DP << 16) | MUX_PD04H_USB_DP)
#define PORT_PD04H_USB_DP                          (_UINT32_(1) << 4)

#define PIN_PC01H_USB_SOF_1KHZ                     _UINT32_(65)
#define MUX_PC01H_USB_SOF_1KHZ                     _UINT32_(7) 
#define PINMUX_PC01H_USB_SOF_1KHZ                  ((PIN_PC01H_USB_SOF_1KHZ << 16) | MUX_PC01H_USB_SOF_1KHZ)
#define PORT_PC01H_USB_SOF_1KHZ                    (_UINT32_(1) << 1)

#define PIN_PD02H_USB_SOF_1KHZ                     _UINT32_(98)
#define MUX_PD02H_USB_SOF_1KHZ                     _UINT32_(7) 
#define PINMUX_PD02H_USB_SOF_1KHZ                  ((PIN_PD02H_USB_SOF_1KHZ << 16) | MUX_PD02H_USB_SOF_1KHZ)
#define PORT_PD02H_USB_SOF_1KHZ                    (_UINT32_(1) << 2)



#endif /* _pic32ck1012gc01048_GPIO_H_ */

