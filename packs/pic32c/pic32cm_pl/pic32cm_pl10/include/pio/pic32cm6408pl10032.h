/*
 * Peripheral I/O description for pic32cm6408pl10032
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
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

/*      file generated from device description file (ATDF) version None       */
#ifndef _pic32cm6408pl10032_GPIO_H_
#define _pic32cm6408pl10032_GPIO_H_

/* ======================= Peripheral I/O pin numbers ======================= */
#define PIN_PA00                    (    0)  /* Pin Number for PA00 */
#define PIN_PA01                    (    1)  /* Pin Number for PA01 */
#define PIN_PA02                    (    2)  /* Pin Number for PA02 */
#define PIN_PA03                    (    3)  /* Pin Number for PA03 */
#define PIN_PA04                    (    4)  /* Pin Number for PA04 */
#define PIN_PA05                    (    5)  /* Pin Number for PA05 */
#define PIN_PA06                    (    6)  /* Pin Number for PA06 */
#define PIN_PA07                    (    7)  /* Pin Number for PA07 */
#define PIN_PA08                    (    8)  /* Pin Number for PA08 */
#define PIN_PA09                    (    9)  /* Pin Number for PA09 */
#define PIN_PA10                    (   10)  /* Pin Number for PA10 */
#define PIN_PA11                    (   11)  /* Pin Number for PA11 */
#define PIN_PA17                    (   17)  /* Pin Number for PA17 */
#define PIN_PA18                    (   18)  /* Pin Number for PA18 */
#define PIN_PA19                    (   19)  /* Pin Number for PA19 */
#define PIN_PA20                    (   20)  /* Pin Number for PA20 */
#define PIN_PA21                    (   21)  /* Pin Number for PA21 */
#define PIN_PA22                    (   22)  /* Pin Number for PA22 */
#define PIN_PA23                    (   23)  /* Pin Number for PA23 */
#define PIN_PA24                    (   24)  /* Pin Number for PA24 */
#define PIN_PA25                    (   25)  /* Pin Number for PA25 */
#define PIN_PA26                    (   26)  /* Pin Number for PA26 */
#define PIN_PA27                    (   27)  /* Pin Number for PA27 */
#define PIN_PA28                    (   28)  /* Pin Number for PA28 */
#define PIN_PA29                    (   29)  /* Pin Number for PA29 */
#define PIN_PA30                    (   30)  /* Pin Number for PA30 */
#define PIN_PA31                    (   31)  /* Pin Number for PA31 */

/* ========================== Peripheral I/O masks ========================== */
#define PORT_PA00                   (_UINT32_(1) << 0) /* PORT mask for PA00 */
#define PORT_PA01                   (_UINT32_(1) << 1) /* PORT mask for PA01 */
#define PORT_PA02                   (_UINT32_(1) << 2) /* PORT mask for PA02 */
#define PORT_PA03                   (_UINT32_(1) << 3) /* PORT mask for PA03 */
#define PORT_PA04                   (_UINT32_(1) << 4) /* PORT mask for PA04 */
#define PORT_PA05                   (_UINT32_(1) << 5) /* PORT mask for PA05 */
#define PORT_PA06                   (_UINT32_(1) << 6) /* PORT mask for PA06 */
#define PORT_PA07                   (_UINT32_(1) << 7) /* PORT mask for PA07 */
#define PORT_PA08                   (_UINT32_(1) << 8) /* PORT mask for PA08 */
#define PORT_PA09                   (_UINT32_(1) << 9) /* PORT mask for PA09 */
#define PORT_PA10                   (_UINT32_(1) << 10) /* PORT mask for PA10 */
#define PORT_PA11                   (_UINT32_(1) << 11) /* PORT mask for PA11 */
#define PORT_PA17                   (_UINT32_(1) << 17) /* PORT mask for PA17 */
#define PORT_PA18                   (_UINT32_(1) << 18) /* PORT mask for PA18 */
#define PORT_PA19                   (_UINT32_(1) << 19) /* PORT mask for PA19 */
#define PORT_PA20                   (_UINT32_(1) << 20) /* PORT mask for PA20 */
#define PORT_PA21                   (_UINT32_(1) << 21) /* PORT mask for PA21 */
#define PORT_PA22                   (_UINT32_(1) << 22) /* PORT mask for PA22 */
#define PORT_PA23                   (_UINT32_(1) << 23) /* PORT mask for PA23 */
#define PORT_PA24                   (_UINT32_(1) << 24) /* PORT mask for PA24 */
#define PORT_PA25                   (_UINT32_(1) << 25) /* PORT mask for PA25 */
#define PORT_PA26                   (_UINT32_(1) << 26) /* PORT mask for PA26 */
#define PORT_PA27                   (_UINT32_(1) << 27) /* PORT mask for PA27 */
#define PORT_PA28                   (_UINT32_(1) << 28) /* PORT mask for PA28 */
#define PORT_PA29                   (_UINT32_(1) << 29) /* PORT mask for PA29 */
#define PORT_PA30                   (_UINT32_(1) << 30) /* PORT mask for PA30 */
#define PORT_PA31                   (_UINT32_(1) << 31) /* PORT mask for PA31 */

/* =================== PORT definition for AC peripheral ==================== */
#define PIN_PA19B_AC_AC0N0                         _UINT32_(19)
#define MUX_PA19B_AC_AC0N0                         _UINT32_(1) 
#define PINMUX_PA19B_AC_AC0N0                      ((PIN_PA19B_AC_AC0N0 << 16) | MUX_PA19B_AC_AC0N0)
#define PORT_PA19B_AC_AC0N0                        (_UINT32_(1) << 19)

#define PIN_PA23B_AC_AC0N2                         _UINT32_(23)
#define MUX_PA23B_AC_AC0N2                         _UINT32_(1) 
#define PINMUX_PA23B_AC_AC0N2                      ((PIN_PA23B_AC_AC0N2 << 16) | MUX_PA23B_AC_AC0N2)
#define PORT_PA23B_AC_AC0N2                        (_UINT32_(1) << 23)

#define PIN_PA18B_AC_AC0P0                         _UINT32_(18)
#define MUX_PA18B_AC_AC0P0                         _UINT32_(1) 
#define PINMUX_PA18B_AC_AC0P0                      ((PIN_PA18B_AC_AC0P0 << 16) | MUX_PA18B_AC_AC0P0)
#define PORT_PA18B_AC_AC0P0                        (_UINT32_(1) << 18)

#define PIN_PA22B_AC_AC0P3                         _UINT32_(22)
#define MUX_PA22B_AC_AC0P3                         _UINT32_(1) 
#define PINMUX_PA22B_AC_AC0P3                      ((PIN_PA22B_AC_AC0P3 << 16) | MUX_PA22B_AC_AC0P3)
#define PORT_PA22B_AC_AC0P3                        (_UINT32_(1) << 22)

#define PIN_PA20B_AC_AC0P5                         _UINT32_(20)
#define MUX_PA20B_AC_AC0P5                         _UINT32_(1) 
#define PINMUX_PA20B_AC_AC0P5                      ((PIN_PA20B_AC_AC0P5 << 16) | MUX_PA20B_AC_AC0P5)
#define PORT_PA20B_AC_AC0P5                        (_UINT32_(1) << 20)

#define PIN_PA21B_AC_AC0P6                         _UINT32_(21)
#define MUX_PA21B_AC_AC0P6                         _UINT32_(1) 
#define PINMUX_PA21B_AC_AC0P6                      ((PIN_PA21B_AC_AC0P6 << 16) | MUX_PA21B_AC_AC0P6)
#define PORT_PA21B_AC_AC0P6                        (_UINT32_(1) << 21)

#define PIN_PA21B_AC_AC1N0                         _UINT32_(21)
#define MUX_PA21B_AC_AC1N0                         _UINT32_(1) 
#define PINMUX_PA21B_AC_AC1N0                      ((PIN_PA21B_AC_AC1N0 << 16) | MUX_PA21B_AC_AC1N0)
#define PORT_PA21B_AC_AC1N0                        (_UINT32_(1) << 21)

#define PIN_PA23B_AC_AC1N2                         _UINT32_(23)
#define MUX_PA23B_AC_AC1N2                         _UINT32_(1) 
#define PINMUX_PA23B_AC_AC1N2                      ((PIN_PA23B_AC_AC1N2 << 16) | MUX_PA23B_AC_AC1N2)
#define PORT_PA23B_AC_AC1N2                        (_UINT32_(1) << 23)

#define PIN_PA18B_AC_AC1P0                         _UINT32_(18)
#define MUX_PA18B_AC_AC1P0                         _UINT32_(1) 
#define PINMUX_PA18B_AC_AC1P0                      ((PIN_PA18B_AC_AC1P0 << 16) | MUX_PA18B_AC_AC1P0)
#define PORT_PA18B_AC_AC1P0                        (_UINT32_(1) << 18)

#define PIN_PA19B_AC_AC1P1                         _UINT32_(19)
#define MUX_PA19B_AC_AC1P1                         _UINT32_(1) 
#define PINMUX_PA19B_AC_AC1P1                      ((PIN_PA19B_AC_AC1P1 << 16) | MUX_PA19B_AC_AC1P1)
#define PORT_PA19B_AC_AC1P1                        (_UINT32_(1) << 19)

#define PIN_PA20B_AC_AC1P2                         _UINT32_(20)
#define MUX_PA20B_AC_AC1P2                         _UINT32_(1) 
#define PINMUX_PA20B_AC_AC1P2                      ((PIN_PA20B_AC_AC1P2 << 16) | MUX_PA20B_AC_AC1P2)
#define PORT_PA20B_AC_AC1P2                        (_UINT32_(1) << 20)

#define PIN_PA22B_AC_AC1P3                         _UINT32_(22)
#define MUX_PA22B_AC_AC1P3                         _UINT32_(1) 
#define PINMUX_PA22B_AC_AC1P3                      ((PIN_PA22B_AC_AC1P3 << 16) | MUX_PA22B_AC_AC1P3)
#define PORT_PA22B_AC_AC1P3                        (_UINT32_(1) << 22)

#define PIN_PA21B_AC_AC1P5                         _UINT32_(21)
#define MUX_PA21B_AC_AC1P5                         _UINT32_(1) 
#define PINMUX_PA21B_AC_AC1P5                      ((PIN_PA21B_AC_AC1P5 << 16) | MUX_PA21B_AC_AC1P5)
#define PORT_PA21B_AC_AC1P5                        (_UINT32_(1) << 21)

#define PIN_PA07H_AC_CMP0                          _UINT32_(7) 
#define MUX_PA07H_AC_CMP0                          _UINT32_(7) 
#define PINMUX_PA07H_AC_CMP0                       ((PIN_PA07H_AC_CMP0 << 16) | MUX_PA07H_AC_CMP0)
#define PORT_PA07H_AC_CMP0                         (_UINT32_(1) << 7)

#define PIN_PA05H_AC_CMP1                          _UINT32_(5) 
#define MUX_PA05H_AC_CMP1                          _UINT32_(7) 
#define PINMUX_PA05H_AC_CMP1                       ((PIN_PA05H_AC_CMP1 << 16) | MUX_PA05H_AC_CMP1)
#define PORT_PA05H_AC_CMP1                         (_UINT32_(1) << 5)

/* ================== PORT definition for ADC0 peripheral =================== */
#define PIN_PA02B_ADC0_AIN2                        _UINT32_(2) 
#define MUX_PA02B_ADC0_AIN2                        _UINT32_(1) 
#define PINMUX_PA02B_ADC0_AIN2                     ((PIN_PA02B_ADC0_AIN2 << 16) | MUX_PA02B_ADC0_AIN2)
#define PORT_PA02B_ADC0_AIN2                       (_UINT32_(1) << 2)

#define PIN_PA03B_ADC0_AIN3                        _UINT32_(3) 
#define MUX_PA03B_ADC0_AIN3                        _UINT32_(1) 
#define PINMUX_PA03B_ADC0_AIN3                     ((PIN_PA03B_ADC0_AIN3 << 16) | MUX_PA03B_ADC0_AIN3)
#define PORT_PA03B_ADC0_AIN3                       (_UINT32_(1) << 3)

#define PIN_PA04B_ADC0_AIN4                        _UINT32_(4) 
#define MUX_PA04B_ADC0_AIN4                        _UINT32_(1) 
#define PINMUX_PA04B_ADC0_AIN4                     ((PIN_PA04B_ADC0_AIN4 << 16) | MUX_PA04B_ADC0_AIN4)
#define PORT_PA04B_ADC0_AIN4                       (_UINT32_(1) << 4)

#define PIN_PA05B_ADC0_AIN5                        _UINT32_(5) 
#define MUX_PA05B_ADC0_AIN5                        _UINT32_(1) 
#define PINMUX_PA05B_ADC0_AIN5                     ((PIN_PA05B_ADC0_AIN5 << 16) | MUX_PA05B_ADC0_AIN5)
#define PORT_PA05B_ADC0_AIN5                       (_UINT32_(1) << 5)

#define PIN_PA06B_ADC0_AIN6                        _UINT32_(6) 
#define MUX_PA06B_ADC0_AIN6                        _UINT32_(1) 
#define PINMUX_PA06B_ADC0_AIN6                     ((PIN_PA06B_ADC0_AIN6 << 16) | MUX_PA06B_ADC0_AIN6)
#define PORT_PA06B_ADC0_AIN6                       (_UINT32_(1) << 6)

#define PIN_PA07B_ADC0_AIN7                        _UINT32_(7) 
#define MUX_PA07B_ADC0_AIN7                        _UINT32_(1) 
#define PINMUX_PA07B_ADC0_AIN7                     ((PIN_PA07B_ADC0_AIN7 << 16) | MUX_PA07B_ADC0_AIN7)
#define PORT_PA07B_ADC0_AIN7                       (_UINT32_(1) << 7)

#define PIN_PA17B_ADC0_AIN17                       _UINT32_(17)
#define MUX_PA17B_ADC0_AIN17                       _UINT32_(1) 
#define PINMUX_PA17B_ADC0_AIN17                    ((PIN_PA17B_ADC0_AIN17 << 16) | MUX_PA17B_ADC0_AIN17)
#define PORT_PA17B_ADC0_AIN17                      (_UINT32_(1) << 17)

#define PIN_PA18B_ADC0_AIN18                       _UINT32_(18)
#define MUX_PA18B_ADC0_AIN18                       _UINT32_(1) 
#define PINMUX_PA18B_ADC0_AIN18                    ((PIN_PA18B_ADC0_AIN18 << 16) | MUX_PA18B_ADC0_AIN18)
#define PORT_PA18B_ADC0_AIN18                      (_UINT32_(1) << 18)

#define PIN_PA19B_ADC0_AIN19                       _UINT32_(19)
#define MUX_PA19B_ADC0_AIN19                       _UINT32_(1) 
#define PINMUX_PA19B_ADC0_AIN19                    ((PIN_PA19B_ADC0_AIN19 << 16) | MUX_PA19B_ADC0_AIN19)
#define PORT_PA19B_ADC0_AIN19                      (_UINT32_(1) << 19)

#define PIN_PA20B_ADC0_AIN20                       _UINT32_(20)
#define MUX_PA20B_ADC0_AIN20                       _UINT32_(1) 
#define PINMUX_PA20B_ADC0_AIN20                    ((PIN_PA20B_ADC0_AIN20 << 16) | MUX_PA20B_ADC0_AIN20)
#define PORT_PA20B_ADC0_AIN20                      (_UINT32_(1) << 20)

#define PIN_PA21B_ADC0_AIN21                       _UINT32_(21)
#define MUX_PA21B_ADC0_AIN21                       _UINT32_(1) 
#define PINMUX_PA21B_ADC0_AIN21                    ((PIN_PA21B_ADC0_AIN21 << 16) | MUX_PA21B_ADC0_AIN21)
#define PORT_PA21B_ADC0_AIN21                      (_UINT32_(1) << 21)

#define PIN_PA22B_ADC0_AIN22                       _UINT32_(22)
#define MUX_PA22B_ADC0_AIN22                       _UINT32_(1) 
#define PINMUX_PA22B_ADC0_AIN22                    ((PIN_PA22B_ADC0_AIN22 << 16) | MUX_PA22B_ADC0_AIN22)
#define PORT_PA22B_ADC0_AIN22                      (_UINT32_(1) << 22)

#define PIN_PA23B_ADC0_AIN23                       _UINT32_(23)
#define MUX_PA23B_ADC0_AIN23                       _UINT32_(1) 
#define PINMUX_PA23B_ADC0_AIN23                    ((PIN_PA23B_ADC0_AIN23 << 16) | MUX_PA23B_ADC0_AIN23)
#define PORT_PA23B_ADC0_AIN23                      (_UINT32_(1) << 23)

#define PIN_PA24B_ADC0_AIN24                       _UINT32_(24)
#define MUX_PA24B_ADC0_AIN24                       _UINT32_(1) 
#define PINMUX_PA24B_ADC0_AIN24                    ((PIN_PA24B_ADC0_AIN24 << 16) | MUX_PA24B_ADC0_AIN24)
#define PORT_PA24B_ADC0_AIN24                      (_UINT32_(1) << 24)

#define PIN_PA25B_ADC0_AIN25                       _UINT32_(25)
#define MUX_PA25B_ADC0_AIN25                       _UINT32_(1) 
#define PINMUX_PA25B_ADC0_AIN25                    ((PIN_PA25B_ADC0_AIN25 << 16) | MUX_PA25B_ADC0_AIN25)
#define PORT_PA25B_ADC0_AIN25                      (_UINT32_(1) << 25)

#define PIN_PA26B_ADC0_AIN26                       _UINT32_(26)
#define MUX_PA26B_ADC0_AIN26                       _UINT32_(1) 
#define PINMUX_PA26B_ADC0_AIN26                    ((PIN_PA26B_ADC0_AIN26 << 16) | MUX_PA26B_ADC0_AIN26)
#define PORT_PA26B_ADC0_AIN26                      (_UINT32_(1) << 26)

#define PIN_PA27B_ADC0_AIN27                       _UINT32_(27)
#define MUX_PA27B_ADC0_AIN27                       _UINT32_(1) 
#define PINMUX_PA27B_ADC0_AIN27                    ((PIN_PA27B_ADC0_AIN27 << 16) | MUX_PA27B_ADC0_AIN27)
#define PORT_PA27B_ADC0_AIN27                      (_UINT32_(1) << 27)

#define PIN_PA28B_ADC0_AIN28                       _UINT32_(28)
#define MUX_PA28B_ADC0_AIN28                       _UINT32_(1) 
#define PINMUX_PA28B_ADC0_AIN28                    ((PIN_PA28B_ADC0_AIN28 << 16) | MUX_PA28B_ADC0_AIN28)
#define PORT_PA28B_ADC0_AIN28                      (_UINT32_(1) << 28)

#define PIN_PA29B_ADC0_AIN29                       _UINT32_(29)
#define MUX_PA29B_ADC0_AIN29                       _UINT32_(1) 
#define PINMUX_PA29B_ADC0_AIN29                    ((PIN_PA29B_ADC0_AIN29 << 16) | MUX_PA29B_ADC0_AIN29)
#define PORT_PA29B_ADC0_AIN29                      (_UINT32_(1) << 29)

#define PIN_PA31B_ADC0_AIN31                       _UINT32_(31)
#define MUX_PA31B_ADC0_AIN31                       _UINT32_(1) 
#define PINMUX_PA31B_ADC0_AIN31                    ((PIN_PA31B_ADC0_AIN31 << 16) | MUX_PA31B_ADC0_AIN31)
#define PORT_PA31B_ADC0_AIN31                      (_UINT32_(1) << 31)

#define PIN_PA23B_ADC0_VREFP                       _UINT32_(23)
#define MUX_PA23B_ADC0_VREFP                       _UINT32_(1) 
#define PINMUX_PA23B_ADC0_VREFP                    ((PIN_PA23B_ADC0_VREFP << 16) | MUX_PA23B_ADC0_VREFP)
#define PORT_PA23B_ADC0_VREFP                      (_UINT32_(1) << 23)

/* =================== PORT definition for CCL peripheral =================== */
#define PIN_PA00H_CCL_IN0                          _UINT32_(0) 
#define MUX_PA00H_CCL_IN0                          _UINT32_(7) 
#define PINMUX_PA00H_CCL_IN0                       ((PIN_PA00H_CCL_IN0 << 16) | MUX_PA00H_CCL_IN0)
#define PORT_PA00H_CCL_IN0                         (_UINT32_(1) << 0)

#define PIN_PA01H_CCL_IN1                          _UINT32_(1) 
#define MUX_PA01H_CCL_IN1                          _UINT32_(7) 
#define PINMUX_PA01H_CCL_IN1                       ((PIN_PA01H_CCL_IN1 << 16) | MUX_PA01H_CCL_IN1)
#define PORT_PA01H_CCL_IN1                         (_UINT32_(1) << 1)

#define PIN_PA02H_CCL_IN2                          _UINT32_(2) 
#define MUX_PA02H_CCL_IN2                          _UINT32_(7) 
#define PINMUX_PA02H_CCL_IN2                       ((PIN_PA02H_CCL_IN2 << 16) | MUX_PA02H_CCL_IN2)
#define PORT_PA02H_CCL_IN2                         (_UINT32_(1) << 2)

#define PIN_PA08H_CCL_IN3                          _UINT32_(8) 
#define MUX_PA08H_CCL_IN3                          _UINT32_(7) 
#define PINMUX_PA08H_CCL_IN3                       ((PIN_PA08H_CCL_IN3 << 16) | MUX_PA08H_CCL_IN3)
#define PORT_PA08H_CCL_IN3                         (_UINT32_(1) << 8)

#define PIN_PA09H_CCL_IN4                          _UINT32_(9) 
#define MUX_PA09H_CCL_IN4                          _UINT32_(7) 
#define PINMUX_PA09H_CCL_IN4                       ((PIN_PA09H_CCL_IN4 << 16) | MUX_PA09H_CCL_IN4)
#define PORT_PA09H_CCL_IN4                         (_UINT32_(1) << 9)

#define PIN_PA10H_CCL_IN5                          _UINT32_(10)
#define MUX_PA10H_CCL_IN5                          _UINT32_(7) 
#define PINMUX_PA10H_CCL_IN5                       ((PIN_PA10H_CCL_IN5 << 16) | MUX_PA10H_CCL_IN5)
#define PORT_PA10H_CCL_IN5                         (_UINT32_(1) << 10)

#define PIN_PA17H_CCL_IN7                          _UINT32_(17)
#define MUX_PA17H_CCL_IN7                          _UINT32_(7) 
#define PINMUX_PA17H_CCL_IN7                       ((PIN_PA17H_CCL_IN7 << 16) | MUX_PA17H_CCL_IN7)
#define PORT_PA17H_CCL_IN7                         (_UINT32_(1) << 17)

#define PIN_PA18H_CCL_IN8                          _UINT32_(18)
#define MUX_PA18H_CCL_IN8                          _UINT32_(7) 
#define PINMUX_PA18H_CCL_IN8                       ((PIN_PA18H_CCL_IN8 << 16) | MUX_PA18H_CCL_IN8)
#define PORT_PA18H_CCL_IN8                         (_UINT32_(1) << 18)

#define PIN_PA24H_CCL_IN9                          _UINT32_(24)
#define MUX_PA24H_CCL_IN9                          _UINT32_(7) 
#define PINMUX_PA24H_CCL_IN9                       ((PIN_PA24H_CCL_IN9 << 16) | MUX_PA24H_CCL_IN9)
#define PORT_PA24H_CCL_IN9                         (_UINT32_(1) << 24)

#define PIN_PA25H_CCL_IN10                         _UINT32_(25)
#define MUX_PA25H_CCL_IN10                         _UINT32_(7) 
#define PINMUX_PA25H_CCL_IN10                      ((PIN_PA25H_CCL_IN10 << 16) | MUX_PA25H_CCL_IN10)
#define PORT_PA25H_CCL_IN10                        (_UINT32_(1) << 25)

#define PIN_PA26H_CCL_IN11                         _UINT32_(26)
#define MUX_PA26H_CCL_IN11                         _UINT32_(7) 
#define PINMUX_PA26H_CCL_IN11                      ((PIN_PA26H_CCL_IN11 << 16) | MUX_PA26H_CCL_IN11)
#define PORT_PA26H_CCL_IN11                        (_UINT32_(1) << 26)

#define PIN_PA03H_CCL_OUT0                         _UINT32_(3) 
#define MUX_PA03H_CCL_OUT0                         _UINT32_(7) 
#define PINMUX_PA03H_CCL_OUT0                      ((PIN_PA03H_CCL_OUT0 << 16) | MUX_PA03H_CCL_OUT0)
#define PORT_PA03H_CCL_OUT0                        (_UINT32_(1) << 3)

#define PIN_PA06H_CCL_OUT0                         _UINT32_(6) 
#define MUX_PA06H_CCL_OUT0                         _UINT32_(7) 
#define PINMUX_PA06H_CCL_OUT0                      ((PIN_PA06H_CCL_OUT0 << 16) | MUX_PA06H_CCL_OUT0)
#define PORT_PA06H_CCL_OUT0                        (_UINT32_(1) << 6)

#define PIN_PA11H_CCL_OUT1                         _UINT32_(11)
#define MUX_PA11H_CCL_OUT1                         _UINT32_(7) 
#define PINMUX_PA11H_CCL_OUT1                      ((PIN_PA11H_CCL_OUT1 << 16) | MUX_PA11H_CCL_OUT1)
#define PORT_PA11H_CCL_OUT1                        (_UINT32_(1) << 11)

#define PIN_PA19H_CCL_OUT2                         _UINT32_(19)
#define MUX_PA19H_CCL_OUT2                         _UINT32_(7) 
#define PINMUX_PA19H_CCL_OUT2                      ((PIN_PA19H_CCL_OUT2 << 16) | MUX_PA19H_CCL_OUT2)
#define PORT_PA19H_CCL_OUT2                        (_UINT32_(1) << 19)

#define PIN_PA22H_CCL_OUT2                         _UINT32_(22)
#define MUX_PA22H_CCL_OUT2                         _UINT32_(7) 
#define PINMUX_PA22H_CCL_OUT2                      ((PIN_PA22H_CCL_OUT2 << 16) | MUX_PA22H_CCL_OUT2)
#define PORT_PA22H_CCL_OUT2                        (_UINT32_(1) << 22)

#define PIN_PA27H_CCL_OUT3                         _UINT32_(27)
#define MUX_PA27H_CCL_OUT3                         _UINT32_(7) 
#define PINMUX_PA27H_CCL_OUT3                      ((PIN_PA27H_CCL_OUT3 << 16) | MUX_PA27H_CCL_OUT3)
#define PORT_PA27H_CCL_OUT3                        (_UINT32_(1) << 27)

/* =================== PORT definition for EIC peripheral =================== */
#define PIN_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define MUX_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA00A_EIC_EXTINT0                   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PA00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA00 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _UINT32_(17)
#define MUX_PA17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _UINT32_(18)
#define MUX_PA18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PA03A_EIC_EXTINT3                      _UINT32_(3) 
#define MUX_PA03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA03A_EIC_EXTINT3                   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PA03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA03 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _UINT32_(19)
#define MUX_PA19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _UINT32_(4) 
#define MUX_PA04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA20A_EIC_EXTINT4                      _UINT32_(20)
#define MUX_PA20A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA20A_EIC_EXTINT4                   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4                     (_UINT32_(1) << 20)
#define PIN_PA20A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA20 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT5                      _UINT32_(5) 
#define MUX_PA05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA05A_EIC_EXTINT5                   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PA21A_EIC_EXTINT5                      _UINT32_(21)
#define MUX_PA21A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA21A_EIC_EXTINT5                   ((PIN_PA21A_EIC_EXTINT5 << 16) | MUX_PA21A_EIC_EXTINT5)
#define PORT_PA21A_EIC_EXTINT5                     (_UINT32_(1) << 21)
#define PIN_PA21A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA21 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UINT32_(6) 
#define MUX_PA06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PA22A_EIC_EXTINT6                      _UINT32_(22)
#define MUX_PA22A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA22A_EIC_EXTINT6                   ((PIN_PA22A_EIC_EXTINT6 << 16) | MUX_PA22A_EIC_EXTINT6)
#define PORT_PA22A_EIC_EXTINT6                     (_UINT32_(1) << 22)
#define PIN_PA22A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA22 External Interrupt Line */

#define PIN_PA23A_EIC_EXTINT7                      _UINT32_(23)
#define MUX_PA23A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA23A_EIC_EXTINT7                   ((PIN_PA23A_EIC_EXTINT7 << 16) | MUX_PA23A_EIC_EXTINT7)
#define PORT_PA23A_EIC_EXTINT7                     (_UINT32_(1) << 23)
#define PIN_PA23A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA23 External Interrupt Line */

#define PIN_PA08A_EIC_EXTINT8                      _UINT32_(8) 
#define MUX_PA08A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PA08A_EIC_EXTINT8                   ((PIN_PA08A_EIC_EXTINT8 << 16) | MUX_PA08A_EIC_EXTINT8)
#define PORT_PA08A_EIC_EXTINT8                     (_UINT32_(1) << 8)
#define PIN_PA08A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PA08 External Interrupt Line */

#define PIN_PA24A_EIC_EXTINT8                      _UINT32_(24)
#define MUX_PA24A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PA24A_EIC_EXTINT8                   ((PIN_PA24A_EIC_EXTINT8 << 16) | MUX_PA24A_EIC_EXTINT8)
#define PORT_PA24A_EIC_EXTINT8                     (_UINT32_(1) << 24)
#define PIN_PA24A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PA24 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PA25A_EIC_EXTINT9                      _UINT32_(25)
#define MUX_PA25A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA25A_EIC_EXTINT9                   ((PIN_PA25A_EIC_EXTINT9 << 16) | MUX_PA25A_EIC_EXTINT9)
#define PORT_PA25A_EIC_EXTINT9                     (_UINT32_(1) << 25)
#define PIN_PA25A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA25 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UINT32_(10)
#define MUX_PA10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PA26A_EIC_EXTINT10                     _UINT32_(26)
#define MUX_PA26A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA26A_EIC_EXTINT10                  ((PIN_PA26A_EIC_EXTINT10 << 16) | MUX_PA26A_EIC_EXTINT10)
#define PORT_PA26A_EIC_EXTINT10                    (_UINT32_(1) << 26)
#define PIN_PA26A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA26 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UINT32_(11)
#define MUX_PA11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PA27A_EIC_EXTINT11                     _UINT32_(27)
#define MUX_PA27A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA27A_EIC_EXTINT11                  ((PIN_PA27A_EIC_EXTINT11 << 16) | MUX_PA27A_EIC_EXTINT11)
#define PORT_PA27A_EIC_EXTINT11                    (_UINT32_(1) << 27)
#define PIN_PA27A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA27 External Interrupt Line */

#define PIN_PA28A_EIC_EXTINT12                     _UINT32_(28)
#define MUX_PA28A_EIC_EXTINT12                     _UINT32_(0) 
#define PINMUX_PA28A_EIC_EXTINT12                  ((PIN_PA28A_EIC_EXTINT12 << 16) | MUX_PA28A_EIC_EXTINT12)
#define PORT_PA28A_EIC_EXTINT12                    (_UINT32_(1) << 28)
#define PIN_PA28A_EIC_EXTINT_NUM                   _UINT32_(12) /* EIC signal: PIN_PA28 External Interrupt Line */

#define PIN_PA29A_EIC_EXTINT13                     _UINT32_(29)
#define MUX_PA29A_EIC_EXTINT13                     _UINT32_(0) 
#define PINMUX_PA29A_EIC_EXTINT13                  ((PIN_PA29A_EIC_EXTINT13 << 16) | MUX_PA29A_EIC_EXTINT13)
#define PORT_PA29A_EIC_EXTINT13                    (_UINT32_(1) << 29)
#define PIN_PA29A_EIC_EXTINT_NUM                   _UINT32_(13) /* EIC signal: PIN_PA29 External Interrupt Line */

#define PIN_PA31A_EIC_EXTINT15                     _UINT32_(31)
#define MUX_PA31A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PA31A_EIC_EXTINT15                  ((PIN_PA31A_EIC_EXTINT15 << 16) | MUX_PA31A_EIC_EXTINT15)
#define PORT_PA31A_EIC_EXTINT15                    (_UINT32_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PA31 External Interrupt Line */

#define PIN_PA01A_EIC_NMI                          _UINT32_(1) 
#define MUX_PA01A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PA01A_EIC_NMI                       ((PIN_PA01A_EIC_NMI << 16) | MUX_PA01A_EIC_NMI)
#define PORT_PA01A_EIC_NMI                         (_UINT32_(1) << 1)

#define PIN_PA07A_EIC_NMI                          _UINT32_(7) 
#define MUX_PA07A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PA07A_EIC_NMI                       ((PIN_PA07A_EIC_NMI << 16) | MUX_PA07A_EIC_NMI)
#define PORT_PA07A_EIC_NMI                         (_UINT32_(1) << 7)

#define PIN_PA30A_EIC_NMI                          _UINT32_(30)
#define MUX_PA30A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PA30A_EIC_NMI                       ((PIN_PA30A_EIC_NMI << 16) | MUX_PA30A_EIC_NMI)
#define PORT_PA30A_EIC_NMI                         (_UINT32_(1) << 30)

/* ================== PORT definition for GCLK peripheral =================== */
#define PIN_PA07I_GCLK_IO0                         _UINT32_(7) 
#define MUX_PA07I_GCLK_IO0                         _UINT32_(8) 
#define PINMUX_PA07I_GCLK_IO0                      ((PIN_PA07I_GCLK_IO0 << 16) | MUX_PA07I_GCLK_IO0)
#define PORT_PA07I_GCLK_IO0                        (_UINT32_(1) << 7)

#define PIN_PA23I_GCLK_IO0                         _UINT32_(23)
#define MUX_PA23I_GCLK_IO0                         _UINT32_(8) 
#define PINMUX_PA23I_GCLK_IO0                      ((PIN_PA23I_GCLK_IO0 << 16) | MUX_PA23I_GCLK_IO0)
#define PORT_PA23I_GCLK_IO0                        (_UINT32_(1) << 23)

#define PIN_PA31I_GCLK_IO0                         _UINT32_(31)
#define MUX_PA31I_GCLK_IO0                         _UINT32_(8) 
#define PINMUX_PA31I_GCLK_IO0                      ((PIN_PA31I_GCLK_IO0 << 16) | MUX_PA31I_GCLK_IO0)
#define PORT_PA31I_GCLK_IO0                        (_UINT32_(1) << 31)

#define PIN_PA03I_GCLK_IO0                         _UINT32_(3) 
#define MUX_PA03I_GCLK_IO0                         _UINT32_(8) 
#define PINMUX_PA03I_GCLK_IO0                      ((PIN_PA03I_GCLK_IO0 << 16) | MUX_PA03I_GCLK_IO0)
#define PORT_PA03I_GCLK_IO0                        (_UINT32_(1) << 3)

#define PIN_PA04I_GCLK_IO1                         _UINT32_(4) 
#define MUX_PA04I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA04I_GCLK_IO1                      ((PIN_PA04I_GCLK_IO1 << 16) | MUX_PA04I_GCLK_IO1)
#define PORT_PA04I_GCLK_IO1                        (_UINT32_(1) << 4)

#define PIN_PA08I_GCLK_IO1                         _UINT32_(8) 
#define MUX_PA08I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA08I_GCLK_IO1                      ((PIN_PA08I_GCLK_IO1 << 16) | MUX_PA08I_GCLK_IO1)
#define PORT_PA08I_GCLK_IO1                        (_UINT32_(1) << 8)

#define PIN_PA11I_GCLK_IO1                         _UINT32_(11)
#define MUX_PA11I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA11I_GCLK_IO1                      ((PIN_PA11I_GCLK_IO1 << 16) | MUX_PA11I_GCLK_IO1)
#define PORT_PA11I_GCLK_IO1                        (_UINT32_(1) << 11)

#define PIN_PA22I_GCLK_IO1                         _UINT32_(22)
#define MUX_PA22I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA22I_GCLK_IO1                      ((PIN_PA22I_GCLK_IO1 << 16) | MUX_PA22I_GCLK_IO1)
#define PORT_PA22I_GCLK_IO1                        (_UINT32_(1) << 22)

#define PIN_PA24I_GCLK_IO1                         _UINT32_(24)
#define MUX_PA24I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA24I_GCLK_IO1                      ((PIN_PA24I_GCLK_IO1 << 16) | MUX_PA24I_GCLK_IO1)
#define PORT_PA24I_GCLK_IO1                        (_UINT32_(1) << 24)

#define PIN_PA29I_GCLK_IO1                         _UINT32_(29)
#define MUX_PA29I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA29I_GCLK_IO1                      ((PIN_PA29I_GCLK_IO1 << 16) | MUX_PA29I_GCLK_IO1)
#define PORT_PA29I_GCLK_IO1                        (_UINT32_(1) << 29)

#define PIN_PA00I_GCLK_IO1                         _UINT32_(0) 
#define MUX_PA00I_GCLK_IO1                         _UINT32_(8) 
#define PINMUX_PA00I_GCLK_IO1                      ((PIN_PA00I_GCLK_IO1 << 16) | MUX_PA00I_GCLK_IO1)
#define PORT_PA00I_GCLK_IO1                        (_UINT32_(1) << 0)

#define PIN_PA05I_GCLK_IO2                         _UINT32_(5) 
#define MUX_PA05I_GCLK_IO2                         _UINT32_(8) 
#define PINMUX_PA05I_GCLK_IO2                      ((PIN_PA05I_GCLK_IO2 << 16) | MUX_PA05I_GCLK_IO2)
#define PORT_PA05I_GCLK_IO2                        (_UINT32_(1) << 5)

#define PIN_PA09I_GCLK_IO2                         _UINT32_(9) 
#define MUX_PA09I_GCLK_IO2                         _UINT32_(8) 
#define PINMUX_PA09I_GCLK_IO2                      ((PIN_PA09I_GCLK_IO2 << 16) | MUX_PA09I_GCLK_IO2)
#define PORT_PA09I_GCLK_IO2                        (_UINT32_(1) << 9)

#define PIN_PA20I_GCLK_IO2                         _UINT32_(20)
#define MUX_PA20I_GCLK_IO2                         _UINT32_(8) 
#define PINMUX_PA20I_GCLK_IO2                      ((PIN_PA20I_GCLK_IO2 << 16) | MUX_PA20I_GCLK_IO2)
#define PORT_PA20I_GCLK_IO2                        (_UINT32_(1) << 20)

#define PIN_PA25I_GCLK_IO2                         _UINT32_(25)
#define MUX_PA25I_GCLK_IO2                         _UINT32_(8) 
#define PINMUX_PA25I_GCLK_IO2                      ((PIN_PA25I_GCLK_IO2 << 16) | MUX_PA25I_GCLK_IO2)
#define PORT_PA25I_GCLK_IO2                        (_UINT32_(1) << 25)

#define PIN_PA01I_GCLK_IO2                         _UINT32_(1) 
#define MUX_PA01I_GCLK_IO2                         _UINT32_(8) 
#define PINMUX_PA01I_GCLK_IO2                      ((PIN_PA01I_GCLK_IO2 << 16) | MUX_PA01I_GCLK_IO2)
#define PORT_PA01I_GCLK_IO2                        (_UINT32_(1) << 1)

#define PIN_PA02I_GCLK_IO3                         _UINT32_(2) 
#define MUX_PA02I_GCLK_IO3                         _UINT32_(8) 
#define PINMUX_PA02I_GCLK_IO3                      ((PIN_PA02I_GCLK_IO3 << 16) | MUX_PA02I_GCLK_IO3)
#define PORT_PA02I_GCLK_IO3                        (_UINT32_(1) << 2)

#define PIN_PA06I_GCLK_IO3                         _UINT32_(6) 
#define MUX_PA06I_GCLK_IO3                         _UINT32_(8) 
#define PINMUX_PA06I_GCLK_IO3                      ((PIN_PA06I_GCLK_IO3 << 16) | MUX_PA06I_GCLK_IO3)
#define PORT_PA06I_GCLK_IO3                        (_UINT32_(1) << 6)

#define PIN_PA10I_GCLK_IO3                         _UINT32_(10)
#define MUX_PA10I_GCLK_IO3                         _UINT32_(8) 
#define PINMUX_PA10I_GCLK_IO3                      ((PIN_PA10I_GCLK_IO3 << 16) | MUX_PA10I_GCLK_IO3)
#define PORT_PA10I_GCLK_IO3                        (_UINT32_(1) << 10)

#define PIN_PA21I_GCLK_IO3                         _UINT32_(21)
#define MUX_PA21I_GCLK_IO3                         _UINT32_(8) 
#define PINMUX_PA21I_GCLK_IO3                      ((PIN_PA21I_GCLK_IO3 << 16) | MUX_PA21I_GCLK_IO3)
#define PORT_PA21I_GCLK_IO3                        (_UINT32_(1) << 21)

#define PIN_PA26I_GCLK_IO3                         _UINT32_(26)
#define MUX_PA26I_GCLK_IO3                         _UINT32_(8) 
#define PINMUX_PA26I_GCLK_IO3                      ((PIN_PA26I_GCLK_IO3 << 16) | MUX_PA26I_GCLK_IO3)
#define PORT_PA26I_GCLK_IO3                        (_UINT32_(1) << 26)

/* =================== PORT definition for PTC peripheral =================== */
#define PIN_PA02P_PTC_PAD2                         _UINT32_(2) 
#define MUX_PA02P_PTC_PAD2                         _UINT32_(15)
#define PINMUX_PA02P_PTC_PAD2                      ((PIN_PA02P_PTC_PAD2 << 16) | MUX_PA02P_PTC_PAD2)
#define PORT_PA02P_PTC_PAD2                        (_UINT32_(1) << 2)

#define PIN_PA03P_PTC_PAD3                         _UINT32_(3) 
#define MUX_PA03P_PTC_PAD3                         _UINT32_(15)
#define PINMUX_PA03P_PTC_PAD3                      ((PIN_PA03P_PTC_PAD3 << 16) | MUX_PA03P_PTC_PAD3)
#define PORT_PA03P_PTC_PAD3                        (_UINT32_(1) << 3)

#define PIN_PA04P_PTC_PAD4                         _UINT32_(4) 
#define MUX_PA04P_PTC_PAD4                         _UINT32_(15)
#define PINMUX_PA04P_PTC_PAD4                      ((PIN_PA04P_PTC_PAD4 << 16) | MUX_PA04P_PTC_PAD4)
#define PORT_PA04P_PTC_PAD4                        (_UINT32_(1) << 4)

#define PIN_PA05P_PTC_PAD5                         _UINT32_(5) 
#define MUX_PA05P_PTC_PAD5                         _UINT32_(15)
#define PINMUX_PA05P_PTC_PAD5                      ((PIN_PA05P_PTC_PAD5 << 16) | MUX_PA05P_PTC_PAD5)
#define PORT_PA05P_PTC_PAD5                        (_UINT32_(1) << 5)

#define PIN_PA06P_PTC_PAD6                         _UINT32_(6) 
#define MUX_PA06P_PTC_PAD6                         _UINT32_(15)
#define PINMUX_PA06P_PTC_PAD6                      ((PIN_PA06P_PTC_PAD6 << 16) | MUX_PA06P_PTC_PAD6)
#define PORT_PA06P_PTC_PAD6                        (_UINT32_(1) << 6)

#define PIN_PA07P_PTC_PAD7                         _UINT32_(7) 
#define MUX_PA07P_PTC_PAD7                         _UINT32_(15)
#define PINMUX_PA07P_PTC_PAD7                      ((PIN_PA07P_PTC_PAD7 << 16) | MUX_PA07P_PTC_PAD7)
#define PORT_PA07P_PTC_PAD7                        (_UINT32_(1) << 7)

#define PIN_PA17P_PTC_PAD17                        _UINT32_(17)
#define MUX_PA17P_PTC_PAD17                        _UINT32_(15)
#define PINMUX_PA17P_PTC_PAD17                     ((PIN_PA17P_PTC_PAD17 << 16) | MUX_PA17P_PTC_PAD17)
#define PORT_PA17P_PTC_PAD17                       (_UINT32_(1) << 17)

#define PIN_PA18P_PTC_PAD18                        _UINT32_(18)
#define MUX_PA18P_PTC_PAD18                        _UINT32_(15)
#define PINMUX_PA18P_PTC_PAD18                     ((PIN_PA18P_PTC_PAD18 << 16) | MUX_PA18P_PTC_PAD18)
#define PORT_PA18P_PTC_PAD18                       (_UINT32_(1) << 18)

#define PIN_PA19P_PTC_PAD19                        _UINT32_(19)
#define MUX_PA19P_PTC_PAD19                        _UINT32_(15)
#define PINMUX_PA19P_PTC_PAD19                     ((PIN_PA19P_PTC_PAD19 << 16) | MUX_PA19P_PTC_PAD19)
#define PORT_PA19P_PTC_PAD19                       (_UINT32_(1) << 19)

#define PIN_PA20P_PTC_PAD20                        _UINT32_(20)
#define MUX_PA20P_PTC_PAD20                        _UINT32_(15)
#define PINMUX_PA20P_PTC_PAD20                     ((PIN_PA20P_PTC_PAD20 << 16) | MUX_PA20P_PTC_PAD20)
#define PORT_PA20P_PTC_PAD20                       (_UINT32_(1) << 20)

#define PIN_PA21P_PTC_PAD21                        _UINT32_(21)
#define MUX_PA21P_PTC_PAD21                        _UINT32_(15)
#define PINMUX_PA21P_PTC_PAD21                     ((PIN_PA21P_PTC_PAD21 << 16) | MUX_PA21P_PTC_PAD21)
#define PORT_PA21P_PTC_PAD21                       (_UINT32_(1) << 21)

#define PIN_PA22P_PTC_PAD22                        _UINT32_(22)
#define MUX_PA22P_PTC_PAD22                        _UINT32_(15)
#define PINMUX_PA22P_PTC_PAD22                     ((PIN_PA22P_PTC_PAD22 << 16) | MUX_PA22P_PTC_PAD22)
#define PORT_PA22P_PTC_PAD22                       (_UINT32_(1) << 22)

#define PIN_PA23P_PTC_PAD23                        _UINT32_(23)
#define MUX_PA23P_PTC_PAD23                        _UINT32_(15)
#define PINMUX_PA23P_PTC_PAD23                     ((PIN_PA23P_PTC_PAD23 << 16) | MUX_PA23P_PTC_PAD23)
#define PORT_PA23P_PTC_PAD23                       (_UINT32_(1) << 23)

#define PIN_PA24P_PTC_PAD24                        _UINT32_(24)
#define MUX_PA24P_PTC_PAD24                        _UINT32_(15)
#define PINMUX_PA24P_PTC_PAD24                     ((PIN_PA24P_PTC_PAD24 << 16) | MUX_PA24P_PTC_PAD24)
#define PORT_PA24P_PTC_PAD24                       (_UINT32_(1) << 24)

#define PIN_PA25P_PTC_PAD25                        _UINT32_(25)
#define MUX_PA25P_PTC_PAD25                        _UINT32_(15)
#define PINMUX_PA25P_PTC_PAD25                     ((PIN_PA25P_PTC_PAD25 << 16) | MUX_PA25P_PTC_PAD25)
#define PORT_PA25P_PTC_PAD25                       (_UINT32_(1) << 25)

#define PIN_PA26P_PTC_PAD26                        _UINT32_(26)
#define MUX_PA26P_PTC_PAD26                        _UINT32_(15)
#define PINMUX_PA26P_PTC_PAD26                     ((PIN_PA26P_PTC_PAD26 << 16) | MUX_PA26P_PTC_PAD26)
#define PORT_PA26P_PTC_PAD26                       (_UINT32_(1) << 26)

#define PIN_PA27P_PTC_PAD27                        _UINT32_(27)
#define MUX_PA27P_PTC_PAD27                        _UINT32_(15)
#define PINMUX_PA27P_PTC_PAD27                     ((PIN_PA27P_PTC_PAD27 << 16) | MUX_PA27P_PTC_PAD27)
#define PORT_PA27P_PTC_PAD27                       (_UINT32_(1) << 27)

#define PIN_PA28P_PTC_PAD28                        _UINT32_(28)
#define MUX_PA28P_PTC_PAD28                        _UINT32_(15)
#define PINMUX_PA28P_PTC_PAD28                     ((PIN_PA28P_PTC_PAD28 << 16) | MUX_PA28P_PTC_PAD28)
#define PORT_PA28P_PTC_PAD28                       (_UINT32_(1) << 28)

#define PIN_PA29P_PTC_PAD29                        _UINT32_(29)
#define MUX_PA29P_PTC_PAD29                        _UINT32_(15)
#define PINMUX_PA29P_PTC_PAD29                     ((PIN_PA29P_PTC_PAD29 << 16) | MUX_PA29P_PTC_PAD29)
#define PORT_PA29P_PTC_PAD29                       (_UINT32_(1) << 29)

#define PIN_PA31P_PTC_PAD31                        _UINT32_(31)
#define MUX_PA31P_PTC_PAD31                        _UINT32_(15)
#define PINMUX_PA31P_PTC_PAD31                     ((PIN_PA31P_PTC_PAD31 << 16) | MUX_PA31P_PTC_PAD31)
#define PORT_PA31P_PTC_PAD31                       (_UINT32_(1) << 31)

#define PIN_PA21B_PTC_EXTCINT                      _UINT32_(21)
#define MUX_PA21B_PTC_EXTCINT                      _UINT32_(1) 
#define PINMUX_PA21B_PTC_EXTCINT                   ((PIN_PA21B_PTC_EXTCINT << 16) | MUX_PA21B_PTC_EXTCINT)
#define PORT_PA21B_PTC_EXTCINT                     (_UINT32_(1) << 21)

#define PIN_PA22B_PTC_EXTCINT1                     _UINT32_(22)
#define MUX_PA22B_PTC_EXTCINT1                     _UINT32_(1) 
#define PINMUX_PA22B_PTC_EXTCINT1                  ((PIN_PA22B_PTC_EXTCINT1 << 16) | MUX_PA22B_PTC_EXTCINT1)
#define PORT_PA22B_PTC_EXTCINT1                    (_UINT32_(1) << 22)

/* ================= PORT definition for SERCOM0 peripheral ================= */
#define PIN_PA10D_SERCOM0_PAD0                     _UINT32_(10)
#define MUX_PA10D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PA10D_SERCOM0_PAD0                  ((PIN_PA10D_SERCOM0_PAD0 << 16) | MUX_PA10D_SERCOM0_PAD0)
#define PORT_PA10D_SERCOM0_PAD0                    (_UINT32_(1) << 10)

#define PIN_PA00C_SERCOM0_PAD0                     _UINT32_(0) 
#define MUX_PA00C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PA00C_SERCOM0_PAD0                  ((PIN_PA00C_SERCOM0_PAD0 << 16) | MUX_PA00C_SERCOM0_PAD0)
#define PORT_PA00C_SERCOM0_PAD0                    (_UINT32_(1) << 0)

#define PIN_PA04C_SERCOM0_PAD0                     _UINT32_(4) 
#define MUX_PA04C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PA04C_SERCOM0_PAD0                  ((PIN_PA04C_SERCOM0_PAD0 << 16) | MUX_PA04C_SERCOM0_PAD0)
#define PORT_PA04C_SERCOM0_PAD0                    (_UINT32_(1) << 4)

#define PIN_PA11D_SERCOM0_PAD1                     _UINT32_(11)
#define MUX_PA11D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PA11D_SERCOM0_PAD1                  ((PIN_PA11D_SERCOM0_PAD1 << 16) | MUX_PA11D_SERCOM0_PAD1)
#define PORT_PA11D_SERCOM0_PAD1                    (_UINT32_(1) << 11)

#define PIN_PA01C_SERCOM0_PAD1                     _UINT32_(1) 
#define MUX_PA01C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PA01C_SERCOM0_PAD1                  ((PIN_PA01C_SERCOM0_PAD1 << 16) | MUX_PA01C_SERCOM0_PAD1)
#define PORT_PA01C_SERCOM0_PAD1                    (_UINT32_(1) << 1)

#define PIN_PA05C_SERCOM0_PAD1                     _UINT32_(5) 
#define MUX_PA05C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PA05C_SERCOM0_PAD1                  ((PIN_PA05C_SERCOM0_PAD1 << 16) | MUX_PA05C_SERCOM0_PAD1)
#define PORT_PA05C_SERCOM0_PAD1                    (_UINT32_(1) << 5)

#define PIN_PA08D_SERCOM0_PAD2                     _UINT32_(8) 
#define MUX_PA08D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PA08D_SERCOM0_PAD2                  ((PIN_PA08D_SERCOM0_PAD2 << 16) | MUX_PA08D_SERCOM0_PAD2)
#define PORT_PA08D_SERCOM0_PAD2                    (_UINT32_(1) << 8)

#define PIN_PA31D_SERCOM0_PAD2                     _UINT32_(31)
#define MUX_PA31D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PA31D_SERCOM0_PAD2                  ((PIN_PA31D_SERCOM0_PAD2 << 16) | MUX_PA31D_SERCOM0_PAD2)
#define PORT_PA31D_SERCOM0_PAD2                    (_UINT32_(1) << 31)

#define PIN_PA02C_SERCOM0_PAD2                     _UINT32_(2) 
#define MUX_PA02C_SERCOM0_PAD2                     _UINT32_(2) 
#define PINMUX_PA02C_SERCOM0_PAD2                  ((PIN_PA02C_SERCOM0_PAD2 << 16) | MUX_PA02C_SERCOM0_PAD2)
#define PORT_PA02C_SERCOM0_PAD2                    (_UINT32_(1) << 2)

#define PIN_PA06C_SERCOM0_PAD2                     _UINT32_(6) 
#define MUX_PA06C_SERCOM0_PAD2                     _UINT32_(2) 
#define PINMUX_PA06C_SERCOM0_PAD2                  ((PIN_PA06C_SERCOM0_PAD2 << 16) | MUX_PA06C_SERCOM0_PAD2)
#define PORT_PA06C_SERCOM0_PAD2                    (_UINT32_(1) << 6)

#define PIN_PA09D_SERCOM0_PAD3                     _UINT32_(9) 
#define MUX_PA09D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PA09D_SERCOM0_PAD3                  ((PIN_PA09D_SERCOM0_PAD3 << 16) | MUX_PA09D_SERCOM0_PAD3)
#define PORT_PA09D_SERCOM0_PAD3                    (_UINT32_(1) << 9)

#define PIN_PA03C_SERCOM0_PAD3                     _UINT32_(3) 
#define MUX_PA03C_SERCOM0_PAD3                     _UINT32_(2) 
#define PINMUX_PA03C_SERCOM0_PAD3                  ((PIN_PA03C_SERCOM0_PAD3 << 16) | MUX_PA03C_SERCOM0_PAD3)
#define PORT_PA03C_SERCOM0_PAD3                    (_UINT32_(1) << 3)

#define PIN_PA07C_SERCOM0_PAD3                     _UINT32_(7) 
#define MUX_PA07C_SERCOM0_PAD3                     _UINT32_(2) 
#define PINMUX_PA07C_SERCOM0_PAD3                  ((PIN_PA07C_SERCOM0_PAD3 << 16) | MUX_PA07C_SERCOM0_PAD3)
#define PORT_PA07C_SERCOM0_PAD3                    (_UINT32_(1) << 7)

/* ================= PORT definition for SERCOM1 peripheral ================= */
#define PIN_PA00D_SERCOM1_PAD0                     _UINT32_(0) 
#define MUX_PA00D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PA00D_SERCOM1_PAD0                  ((PIN_PA00D_SERCOM1_PAD0 << 16) | MUX_PA00D_SERCOM1_PAD0)
#define PORT_PA00D_SERCOM1_PAD0                    (_UINT32_(1) << 0)

#define PIN_PA26D_SERCOM1_PAD0                     _UINT32_(26)
#define MUX_PA26D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PA26D_SERCOM1_PAD0                  ((PIN_PA26D_SERCOM1_PAD0 << 16) | MUX_PA26D_SERCOM1_PAD0)
#define PORT_PA26D_SERCOM1_PAD0                    (_UINT32_(1) << 26)

#define PIN_PA10C_SERCOM1_PAD0                     _UINT32_(10)
#define MUX_PA10C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA10C_SERCOM1_PAD0                  ((PIN_PA10C_SERCOM1_PAD0 << 16) | MUX_PA10C_SERCOM1_PAD0)
#define PORT_PA10C_SERCOM1_PAD0                    (_UINT32_(1) << 10)

#define PIN_PA20C_SERCOM1_PAD0                     _UINT32_(20)
#define MUX_PA20C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA20C_SERCOM1_PAD0                  ((PIN_PA20C_SERCOM1_PAD0 << 16) | MUX_PA20C_SERCOM1_PAD0)
#define PORT_PA20C_SERCOM1_PAD0                    (_UINT32_(1) << 20)

#define PIN_PA31C_SERCOM1_PAD0                     _UINT32_(31)
#define MUX_PA31C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA31C_SERCOM1_PAD0                  ((PIN_PA31C_SERCOM1_PAD0 << 16) | MUX_PA31C_SERCOM1_PAD0)
#define PORT_PA31C_SERCOM1_PAD0                    (_UINT32_(1) << 31)

#define PIN_PA01D_SERCOM1_PAD1                     _UINT32_(1) 
#define MUX_PA01D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PA01D_SERCOM1_PAD1                  ((PIN_PA01D_SERCOM1_PAD1 << 16) | MUX_PA01D_SERCOM1_PAD1)
#define PORT_PA01D_SERCOM1_PAD1                    (_UINT32_(1) << 1)

#define PIN_PA27D_SERCOM1_PAD1                     _UINT32_(27)
#define MUX_PA27D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PA27D_SERCOM1_PAD1                  ((PIN_PA27D_SERCOM1_PAD1 << 16) | MUX_PA27D_SERCOM1_PAD1)
#define PORT_PA27D_SERCOM1_PAD1                    (_UINT32_(1) << 27)

#define PIN_PA11C_SERCOM1_PAD1                     _UINT32_(11)
#define MUX_PA11C_SERCOM1_PAD1                     _UINT32_(2) 
#define PINMUX_PA11C_SERCOM1_PAD1                  ((PIN_PA11C_SERCOM1_PAD1 << 16) | MUX_PA11C_SERCOM1_PAD1)
#define PORT_PA11C_SERCOM1_PAD1                    (_UINT32_(1) << 11)

#define PIN_PA02D_SERCOM1_PAD2                     _UINT32_(2) 
#define MUX_PA02D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PA02D_SERCOM1_PAD2                  ((PIN_PA02D_SERCOM1_PAD2 << 16) | MUX_PA02D_SERCOM1_PAD2)
#define PORT_PA02D_SERCOM1_PAD2                    (_UINT32_(1) << 2)

#define PIN_PA24D_SERCOM1_PAD2                     _UINT32_(24)
#define MUX_PA24D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PA24D_SERCOM1_PAD2                  ((PIN_PA24D_SERCOM1_PAD2 << 16) | MUX_PA24D_SERCOM1_PAD2)
#define PORT_PA24D_SERCOM1_PAD2                    (_UINT32_(1) << 24)

#define PIN_PA08C_SERCOM1_PAD2                     _UINT32_(8) 
#define MUX_PA08C_SERCOM1_PAD2                     _UINT32_(2) 
#define PINMUX_PA08C_SERCOM1_PAD2                  ((PIN_PA08C_SERCOM1_PAD2 << 16) | MUX_PA08C_SERCOM1_PAD2)
#define PORT_PA08C_SERCOM1_PAD2                    (_UINT32_(1) << 8)

#define PIN_PA22C_SERCOM1_PAD2                     _UINT32_(22)
#define MUX_PA22C_SERCOM1_PAD2                     _UINT32_(2) 
#define PINMUX_PA22C_SERCOM1_PAD2                  ((PIN_PA22C_SERCOM1_PAD2 << 16) | MUX_PA22C_SERCOM1_PAD2)
#define PORT_PA22C_SERCOM1_PAD2                    (_UINT32_(1) << 22)

#define PIN_PA03D_SERCOM1_PAD3                     _UINT32_(3) 
#define MUX_PA03D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PA03D_SERCOM1_PAD3                  ((PIN_PA03D_SERCOM1_PAD3 << 16) | MUX_PA03D_SERCOM1_PAD3)
#define PORT_PA03D_SERCOM1_PAD3                    (_UINT32_(1) << 3)

#define PIN_PA25D_SERCOM1_PAD3                     _UINT32_(25)
#define MUX_PA25D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PA25D_SERCOM1_PAD3                  ((PIN_PA25D_SERCOM1_PAD3 << 16) | MUX_PA25D_SERCOM1_PAD3)
#define PORT_PA25D_SERCOM1_PAD3                    (_UINT32_(1) << 25)

#define PIN_PA09C_SERCOM1_PAD3                     _UINT32_(9) 
#define MUX_PA09C_SERCOM1_PAD3                     _UINT32_(2) 
#define PINMUX_PA09C_SERCOM1_PAD3                  ((PIN_PA09C_SERCOM1_PAD3 << 16) | MUX_PA09C_SERCOM1_PAD3)
#define PORT_PA09C_SERCOM1_PAD3                    (_UINT32_(1) << 9)

#define PIN_PA23C_SERCOM1_PAD3                     _UINT32_(23)
#define MUX_PA23C_SERCOM1_PAD3                     _UINT32_(2) 
#define PINMUX_PA23C_SERCOM1_PAD3                  ((PIN_PA23C_SERCOM1_PAD3 << 16) | MUX_PA23C_SERCOM1_PAD3)
#define PORT_PA23C_SERCOM1_PAD3                    (_UINT32_(1) << 23)

/* =================== PORT definition for TC0 peripheral =================== */
#define PIN_PA00E_TC0_WO0                          _UINT32_(0) 
#define MUX_PA00E_TC0_WO0                          _UINT32_(4) 
#define PINMUX_PA00E_TC0_WO0                       ((PIN_PA00E_TC0_WO0 << 16) | MUX_PA00E_TC0_WO0)
#define PORT_PA00E_TC0_WO0                         (_UINT32_(1) << 0)

#define PIN_PA10E_TC0_WO0                          _UINT32_(10)
#define MUX_PA10E_TC0_WO0                          _UINT32_(4) 
#define PINMUX_PA10E_TC0_WO0                       ((PIN_PA10E_TC0_WO0 << 16) | MUX_PA10E_TC0_WO0)
#define PORT_PA10E_TC0_WO0                         (_UINT32_(1) << 10)

#define PIN_PA01E_TC0_WO1                          _UINT32_(1) 
#define MUX_PA01E_TC0_WO1                          _UINT32_(4) 
#define PINMUX_PA01E_TC0_WO1                       ((PIN_PA01E_TC0_WO1 << 16) | MUX_PA01E_TC0_WO1)
#define PORT_PA01E_TC0_WO1                         (_UINT32_(1) << 1)

#define PIN_PA11E_TC0_WO1                          _UINT32_(11)
#define MUX_PA11E_TC0_WO1                          _UINT32_(4) 
#define PINMUX_PA11E_TC0_WO1                       ((PIN_PA11E_TC0_WO1 << 16) | MUX_PA11E_TC0_WO1)
#define PORT_PA11E_TC0_WO1                         (_UINT32_(1) << 11)

/* =================== PORT definition for TC1 peripheral =================== */
#define PIN_PA02E_TC1_WO0                          _UINT32_(2) 
#define MUX_PA02E_TC1_WO0                          _UINT32_(4) 
#define PINMUX_PA02E_TC1_WO0                       ((PIN_PA02E_TC1_WO0 << 16) | MUX_PA02E_TC1_WO0)
#define PORT_PA02E_TC1_WO0                         (_UINT32_(1) << 2)

#define PIN_PA08E_TC1_WO0                          _UINT32_(8) 
#define MUX_PA08E_TC1_WO0                          _UINT32_(4) 
#define PINMUX_PA08E_TC1_WO0                       ((PIN_PA08E_TC1_WO0 << 16) | MUX_PA08E_TC1_WO0)
#define PORT_PA08E_TC1_WO0                         (_UINT32_(1) << 8)

#define PIN_PA03E_TC1_WO1                          _UINT32_(3) 
#define MUX_PA03E_TC1_WO1                          _UINT32_(4) 
#define PINMUX_PA03E_TC1_WO1                       ((PIN_PA03E_TC1_WO1 << 16) | MUX_PA03E_TC1_WO1)
#define PORT_PA03E_TC1_WO1                         (_UINT32_(1) << 3)

#define PIN_PA09E_TC1_WO1                          _UINT32_(9) 
#define MUX_PA09E_TC1_WO1                          _UINT32_(4) 
#define PINMUX_PA09E_TC1_WO1                       ((PIN_PA09E_TC1_WO1 << 16) | MUX_PA09E_TC1_WO1)
#define PORT_PA09E_TC1_WO1                         (_UINT32_(1) << 9)

/* =================== PORT definition for TC2 peripheral =================== */
#define PIN_PA20E_TC2_WO0                          _UINT32_(20)
#define MUX_PA20E_TC2_WO0                          _UINT32_(4) 
#define PINMUX_PA20E_TC2_WO0                       ((PIN_PA20E_TC2_WO0 << 16) | MUX_PA20E_TC2_WO0)
#define PORT_PA20E_TC2_WO0                         (_UINT32_(1) << 20)

#define PIN_PA21E_TC2_WO1                          _UINT32_(21)
#define MUX_PA21E_TC2_WO1                          _UINT32_(4) 
#define PINMUX_PA21E_TC2_WO1                       ((PIN_PA21E_TC2_WO1 << 16) | MUX_PA21E_TC2_WO1)
#define PORT_PA21E_TC2_WO1                         (_UINT32_(1) << 21)

/* ================== PORT definition for TCC0 peripheral =================== */
#define PIN_PA00F_TCC0_WO0                         _UINT32_(0) 
#define MUX_PA00F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA00F_TCC0_WO0                      ((PIN_PA00F_TCC0_WO0 << 16) | MUX_PA00F_TCC0_WO0)
#define PORT_PA00F_TCC0_WO0                        (_UINT32_(1) << 0)

#define PIN_PA08F_TCC0_WO0                         _UINT32_(8) 
#define MUX_PA08F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA08F_TCC0_WO0                      ((PIN_PA08F_TCC0_WO0 << 16) | MUX_PA08F_TCC0_WO0)
#define PORT_PA08F_TCC0_WO0                        (_UINT32_(1) << 8)

#define PIN_PA24F_TCC0_WO0                         _UINT32_(24)
#define MUX_PA24F_TCC0_WO0                         _UINT32_(5) 
#define PINMUX_PA24F_TCC0_WO0                      ((PIN_PA24F_TCC0_WO0 << 16) | MUX_PA24F_TCC0_WO0)
#define PORT_PA24F_TCC0_WO0                        (_UINT32_(1) << 24)

#define PIN_PA01F_TCC0_WO1                         _UINT32_(1) 
#define MUX_PA01F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA01F_TCC0_WO1                      ((PIN_PA01F_TCC0_WO1 << 16) | MUX_PA01F_TCC0_WO1)
#define PORT_PA01F_TCC0_WO1                        (_UINT32_(1) << 1)

#define PIN_PA09F_TCC0_WO1                         _UINT32_(9) 
#define MUX_PA09F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA09F_TCC0_WO1                      ((PIN_PA09F_TCC0_WO1 << 16) | MUX_PA09F_TCC0_WO1)
#define PORT_PA09F_TCC0_WO1                        (_UINT32_(1) << 9)

#define PIN_PA17F_TCC0_WO1                         _UINT32_(17)
#define MUX_PA17F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA17F_TCC0_WO1                      ((PIN_PA17F_TCC0_WO1 << 16) | MUX_PA17F_TCC0_WO1)
#define PORT_PA17F_TCC0_WO1                        (_UINT32_(1) << 17)

#define PIN_PA25F_TCC0_WO1                         _UINT32_(25)
#define MUX_PA25F_TCC0_WO1                         _UINT32_(5) 
#define PINMUX_PA25F_TCC0_WO1                      ((PIN_PA25F_TCC0_WO1 << 16) | MUX_PA25F_TCC0_WO1)
#define PORT_PA25F_TCC0_WO1                        (_UINT32_(1) << 25)

#define PIN_PA02F_TCC0_WO2                         _UINT32_(2) 
#define MUX_PA02F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA02F_TCC0_WO2                      ((PIN_PA02F_TCC0_WO2 << 16) | MUX_PA02F_TCC0_WO2)
#define PORT_PA02F_TCC0_WO2                        (_UINT32_(1) << 2)

#define PIN_PA10F_TCC0_WO2                         _UINT32_(10)
#define MUX_PA10F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA10F_TCC0_WO2                      ((PIN_PA10F_TCC0_WO2 << 16) | MUX_PA10F_TCC0_WO2)
#define PORT_PA10F_TCC0_WO2                        (_UINT32_(1) << 10)

#define PIN_PA18F_TCC0_WO2                         _UINT32_(18)
#define MUX_PA18F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA18F_TCC0_WO2                      ((PIN_PA18F_TCC0_WO2 << 16) | MUX_PA18F_TCC0_WO2)
#define PORT_PA18F_TCC0_WO2                        (_UINT32_(1) << 18)

#define PIN_PA26F_TCC0_WO2                         _UINT32_(26)
#define MUX_PA26F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA26F_TCC0_WO2                      ((PIN_PA26F_TCC0_WO2 << 16) | MUX_PA26F_TCC0_WO2)
#define PORT_PA26F_TCC0_WO2                        (_UINT32_(1) << 26)

#define PIN_PA03F_TCC0_WO3                         _UINT32_(3) 
#define MUX_PA03F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA03F_TCC0_WO3                      ((PIN_PA03F_TCC0_WO3 << 16) | MUX_PA03F_TCC0_WO3)
#define PORT_PA03F_TCC0_WO3                        (_UINT32_(1) << 3)

#define PIN_PA11F_TCC0_WO3                         _UINT32_(11)
#define MUX_PA11F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA11F_TCC0_WO3                      ((PIN_PA11F_TCC0_WO3 << 16) | MUX_PA11F_TCC0_WO3)
#define PORT_PA11F_TCC0_WO3                        (_UINT32_(1) << 11)

#define PIN_PA19F_TCC0_WO3                         _UINT32_(19)
#define MUX_PA19F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA19F_TCC0_WO3                      ((PIN_PA19F_TCC0_WO3 << 16) | MUX_PA19F_TCC0_WO3)
#define PORT_PA19F_TCC0_WO3                        (_UINT32_(1) << 19)

#define PIN_PA27F_TCC0_WO3                         _UINT32_(27)
#define MUX_PA27F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA27F_TCC0_WO3                      ((PIN_PA27F_TCC0_WO3 << 16) | MUX_PA27F_TCC0_WO3)
#define PORT_PA27F_TCC0_WO3                        (_UINT32_(1) << 27)



#endif /* _pic32cm6408pl10032_GPIO_H_ */

