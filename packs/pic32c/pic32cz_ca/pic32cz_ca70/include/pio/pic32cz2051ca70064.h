/*
 * Peripheral I/O description for pic32cz2051ca70064
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

/*  file generated from device description file (ATDF) version 2025-04-15T17:34:59Z  */
#ifndef _pic32cz2051ca70064_GPIO_H_
#define _pic32cz2051ca70064_GPIO_H_

/* ======================= Peripheral I/O pin numbers ======================= */
#define PIN_PA03                    (    3)  /* Pin Number for PA03 */
#define PIN_PA04                    (    4)  /* Pin Number for PA04 */
#define PIN_PA05                    (    5)  /* Pin Number for PA05 */
#define PIN_PA07                    (    7)  /* Pin Number for PA07 */
#define PIN_PA08                    (    8)  /* Pin Number for PA08 */
#define PIN_PA09                    (    9)  /* Pin Number for PA09 */
#define PIN_PA10                    (   10)  /* Pin Number for PA10 */
#define PIN_PA11                    (   11)  /* Pin Number for PA11 */
#define PIN_PA12                    (   12)  /* Pin Number for PA12 */
#define PIN_PA13                    (   13)  /* Pin Number for PA13 */
#define PIN_PA14                    (   14)  /* Pin Number for PA14 */
#define PIN_PA21                    (   21)  /* Pin Number for PA21 */
#define PIN_PA22                    (   22)  /* Pin Number for PA22 */
#define PIN_PA24                    (   24)  /* Pin Number for PA24 */
#define PIN_PA27                    (   27)  /* Pin Number for PA27 */
#define PIN_PB00                    (   32)  /* Pin Number for PB00 */
#define PIN_PB01                    (   33)  /* Pin Number for PB01 */
#define PIN_PB02                    (   34)  /* Pin Number for PB02 */
#define PIN_PB03                    (   35)  /* Pin Number for PB03 */
#define PIN_PB04                    (   36)  /* Pin Number for PB04 */
#define PIN_PB05                    (   37)  /* Pin Number for PB05 */
#define PIN_PB06                    (   38)  /* Pin Number for PB06 */
#define PIN_PB07                    (   39)  /* Pin Number for PB07 */
#define PIN_PB08                    (   40)  /* Pin Number for PB08 */
#define PIN_PB09                    (   41)  /* Pin Number for PB09 */
#define PIN_PB12                    (   44)  /* Pin Number for PB12 */
#define PIN_PD00                    (   96)  /* Pin Number for PD00 */
#define PIN_PD01                    (   97)  /* Pin Number for PD01 */
#define PIN_PD02                    (   98)  /* Pin Number for PD02 */
#define PIN_PD03                    (   99)  /* Pin Number for PD03 */
#define PIN_PD04                    (  100)  /* Pin Number for PD04 */
#define PIN_PD05                    (  101)  /* Pin Number for PD05 */
#define PIN_PD06                    (  102)  /* Pin Number for PD06 */
#define PIN_PD07                    (  103)  /* Pin Number for PD07 */
#define PIN_PD08                    (  104)  /* Pin Number for PD08 */
#define PIN_PD09                    (  105)  /* Pin Number for PD09 */
#define PIN_PD10                    (  106)  /* Pin Number for PD10 */
#define PIN_PD11                    (  107)  /* Pin Number for PD11 */
#define PIN_PD12                    (  108)  /* Pin Number for PD12 */
#define PIN_PD21                    (  117)  /* Pin Number for PD21 */
#define PIN_PD22                    (  118)  /* Pin Number for PD22 */
#define PIN_PD24                    (  120)  /* Pin Number for PD24 */
#define PIN_PD25                    (  121)  /* Pin Number for PD25 */
#define PIN_PD26                    (  122)  /* Pin Number for PD26 */
#define PIN_PD31                    (  127)  /* Pin Number for PD31 */

/* ========================== Peripheral I/O masks ========================== */
#define PIO_PA03                    (_UINT32_(1) << 3) /* PIO mask for PA03 */
#define PIO_PA04                    (_UINT32_(1) << 4) /* PIO mask for PA04 */
#define PIO_PA05                    (_UINT32_(1) << 5) /* PIO mask for PA05 */
#define PIO_PA07                    (_UINT32_(1) << 7) /* PIO mask for PA07 */
#define PIO_PA08                    (_UINT32_(1) << 8) /* PIO mask for PA08 */
#define PIO_PA09                    (_UINT32_(1) << 9) /* PIO mask for PA09 */
#define PIO_PA10                    (_UINT32_(1) << 10) /* PIO mask for PA10 */
#define PIO_PA11                    (_UINT32_(1) << 11) /* PIO mask for PA11 */
#define PIO_PA12                    (_UINT32_(1) << 12) /* PIO mask for PA12 */
#define PIO_PA13                    (_UINT32_(1) << 13) /* PIO mask for PA13 */
#define PIO_PA14                    (_UINT32_(1) << 14) /* PIO mask for PA14 */
#define PIO_PA21                    (_UINT32_(1) << 21) /* PIO mask for PA21 */
#define PIO_PA22                    (_UINT32_(1) << 22) /* PIO mask for PA22 */
#define PIO_PA24                    (_UINT32_(1) << 24) /* PIO mask for PA24 */
#define PIO_PA27                    (_UINT32_(1) << 27) /* PIO mask for PA27 */
#define PIO_PB00                    (_UINT32_(1) << 0) /* PIO mask for PB00 */
#define PIO_PB01                    (_UINT32_(1) << 1) /* PIO mask for PB01 */
#define PIO_PB02                    (_UINT32_(1) << 2) /* PIO mask for PB02 */
#define PIO_PB03                    (_UINT32_(1) << 3) /* PIO mask for PB03 */
#define PIO_PB04                    (_UINT32_(1) << 4) /* PIO mask for PB04 */
#define PIO_PB05                    (_UINT32_(1) << 5) /* PIO mask for PB05 */
#define PIO_PB06                    (_UINT32_(1) << 6) /* PIO mask for PB06 */
#define PIO_PB07                    (_UINT32_(1) << 7) /* PIO mask for PB07 */
#define PIO_PB08                    (_UINT32_(1) << 8) /* PIO mask for PB08 */
#define PIO_PB09                    (_UINT32_(1) << 9) /* PIO mask for PB09 */
#define PIO_PB12                    (_UINT32_(1) << 12) /* PIO mask for PB12 */
#define PIO_PD00                    (_UINT32_(1) << 0) /* PIO mask for PD00 */
#define PIO_PD01                    (_UINT32_(1) << 1) /* PIO mask for PD01 */
#define PIO_PD02                    (_UINT32_(1) << 2) /* PIO mask for PD02 */
#define PIO_PD03                    (_UINT32_(1) << 3) /* PIO mask for PD03 */
#define PIO_PD04                    (_UINT32_(1) << 4) /* PIO mask for PD04 */
#define PIO_PD05                    (_UINT32_(1) << 5) /* PIO mask for PD05 */
#define PIO_PD06                    (_UINT32_(1) << 6) /* PIO mask for PD06 */
#define PIO_PD07                    (_UINT32_(1) << 7) /* PIO mask for PD07 */
#define PIO_PD08                    (_UINT32_(1) << 8) /* PIO mask for PD08 */
#define PIO_PD09                    (_UINT32_(1) << 9) /* PIO mask for PD09 */
#define PIO_PD10                    (_UINT32_(1) << 10) /* PIO mask for PD10 */
#define PIO_PD11                    (_UINT32_(1) << 11) /* PIO mask for PD11 */
#define PIO_PD12                    (_UINT32_(1) << 12) /* PIO mask for PD12 */
#define PIO_PD21                    (_UINT32_(1) << 21) /* PIO mask for PD21 */
#define PIO_PD22                    (_UINT32_(1) << 22) /* PIO mask for PD22 */
#define PIO_PD24                    (_UINT32_(1) << 24) /* PIO mask for PD24 */
#define PIO_PD25                    (_UINT32_(1) << 25) /* PIO mask for PD25 */
#define PIO_PD26                    (_UINT32_(1) << 26) /* PIO mask for PD26 */
#define PIO_PD31                    (_UINT32_(1) << 31) /* PIO mask for PD31 */

/* ================== PIO definition for AFEC0 peripheral =================== */
#define PIN_PA21X1_AFEC0_AD1                       _UINT32_(21)         /* AFEC0 signal: AFEC0_AD1 on PA21 mux X1 */
#define PIO_PA21X1_AFEC0_AD1                       (_UINT32_(1) << 21)  /* AFEC0 signal: AFEC0_AD1 */

#define PIN_PB03X1_AFEC0_AD2                       _UINT32_(35)         /* AFEC0 signal: AFEC0_AD2 on PB03 mux X1 */
#define PIO_PB03X1_AFEC0_AD2                       (_UINT32_(1) << 3)   /* AFEC0 signal: AFEC0_AD2 */

#define PIN_PB02X1_AFEC0_AD5                       _UINT32_(34)         /* AFEC0 signal: AFEC0_AD5 on PB02 mux X1 */
#define PIO_PB02X1_AFEC0_AD5                       (_UINT32_(1) << 2)   /* AFEC0 signal: AFEC0_AD5 */

#define PIN_PB00X1_AFEC0_AD10                      _UINT32_(32)         /* AFEC0 signal: AFEC0_AD10 on PB00 mux X1 */
#define PIO_PB00X1_AFEC0_AD10                      (_UINT32_(1) << 0)   /* AFEC0 signal: AFEC0_AD10 */

#define PIN_PA08B_AFEC0_ADTRG                      _UINT32_(8)          /* AFEC0 signal: AFEC0_ADTRG on PA08 mux B */
#define MUX_PA08B_AFEC0_ADTRG                      _UINT32_(1)          /* AFEC0 signal line function value: AFEC0_ADTRG */
#define PIO_PA08B_AFEC0_ADTRG                      (_UINT32_(1) << 8)   /* AFEC0 signal: AFEC0_ADTRG */

/* ================== PIO definition for AFEC1 peripheral =================== */
#define PIN_PB01X1_AFEC1_AD0                       _UINT32_(33)         /* AFEC1 signal: AFEC1_AD0 on PB01 mux X1 */
#define PIO_PB01X1_AFEC1_AD0                       (_UINT32_(1) << 1)   /* AFEC1 signal: AFEC1_AD0 */

#define PIN_PD09C_AFEC1_ADTRG                      _UINT32_(105)        /* AFEC1 signal: AFEC1_ADTRG on PD09 mux C */
#define MUX_PD09C_AFEC1_ADTRG                      _UINT32_(2)          /* AFEC1 signal line function value: AFEC1_ADTRG */
#define PIO_PD09C_AFEC1_ADTRG                      (_UINT32_(1) << 9)   /* AFEC1 signal: AFEC1_ADTRG */

/* =================== PIO definition for DACC peripheral =================== */
#define PIN_PD00X1_DACC_DAC1                       _UINT32_(96)         /* DACC signal: DACC_DAC1 on PD00 mux X1 */
#define PIO_PD00X1_DACC_DAC1                       (_UINT32_(1) << 0)   /* DACC signal: DACC_DAC1 */

/* =================== PIO definition for EFC peripheral ==================== */
#define PIN_PB12X1_EFC_ERASE                       _UINT32_(44)         /* EFC signal: EFC_ERASE on PB12 mux X1 */
#define PIO_PB12X1_EFC_ERASE                       (_UINT32_(1) << 12)  /* EFC signal: EFC_ERASE */

/* =================== PIO definition for GMAC peripheral =================== */
#define PIN_PD10A_GMAC_GCRS                        _UINT32_(106)        /* GMAC signal: GMAC_GCRS on PD10 mux A */
#define MUX_PD10A_GMAC_GCRS                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GCRS */
#define PIO_PD10A_GMAC_GCRS                        (_UINT32_(1) << 10)  /* GMAC signal: GMAC_GCRS */

#define PIN_PD08A_GMAC_GMDC                        _UINT32_(104)        /* GMAC signal: GMAC_GMDC on PD08 mux A */
#define MUX_PD08A_GMAC_GMDC                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GMDC */
#define PIO_PD08A_GMAC_GMDC                        (_UINT32_(1) << 8)   /* GMAC signal: GMAC_GMDC */

#define PIN_PD09A_GMAC_GMDIO                       _UINT32_(105)        /* GMAC signal: GMAC_GMDIO on PD09 mux A */
#define MUX_PD09A_GMAC_GMDIO                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GMDIO */
#define PIO_PD09A_GMAC_GMDIO                       (_UINT32_(1) << 9)   /* GMAC signal: GMAC_GMDIO */

#define PIN_PD05A_GMAC_GRX0                        _UINT32_(101)        /* GMAC signal: GMAC_GRX0 on PD05 mux A */
#define MUX_PD05A_GMAC_GRX0                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX0 */
#define PIO_PD05A_GMAC_GRX0                        (_UINT32_(1) << 5)   /* GMAC signal: GMAC_GRX0 */

#define PIN_PD06A_GMAC_GRX1                        _UINT32_(102)        /* GMAC signal: GMAC_GRX1 on PD06 mux A */
#define MUX_PD06A_GMAC_GRX1                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX1 */
#define PIO_PD06A_GMAC_GRX1                        (_UINT32_(1) << 6)   /* GMAC signal: GMAC_GRX1 */

#define PIN_PD11A_GMAC_GRX2                        _UINT32_(107)        /* GMAC signal: GMAC_GRX2 on PD11 mux A */
#define MUX_PD11A_GMAC_GRX2                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX2 */
#define PIO_PD11A_GMAC_GRX2                        (_UINT32_(1) << 11)  /* GMAC signal: GMAC_GRX2 */

#define PIN_PD12A_GMAC_GRX3                        _UINT32_(108)        /* GMAC signal: GMAC_GRX3 on PD12 mux A */
#define MUX_PD12A_GMAC_GRX3                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GRX3 */
#define PIO_PD12A_GMAC_GRX3                        (_UINT32_(1) << 12)  /* GMAC signal: GMAC_GRX3 */

#define PIN_PD04A_GMAC_GRXDV                       _UINT32_(100)        /* GMAC signal: GMAC_GRXDV on PD04 mux A */
#define MUX_PD04A_GMAC_GRXDV                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GRXDV */
#define PIO_PD04A_GMAC_GRXDV                       (_UINT32_(1) << 4)   /* GMAC signal: GMAC_GRXDV */

#define PIN_PD07A_GMAC_GRXER                       _UINT32_(103)        /* GMAC signal: GMAC_GRXER on PD07 mux A */
#define MUX_PD07A_GMAC_GRXER                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GRXER */
#define PIO_PD07A_GMAC_GRXER                       (_UINT32_(1) << 7)   /* GMAC signal: GMAC_GRXER */

#define PIN_PB01B_GMAC_GTSUCOMP                    _UINT32_(33)         /* GMAC signal: GMAC_GTSUCOMP on PB01 mux B */
#define MUX_PB01B_GMAC_GTSUCOMP                    _UINT32_(1)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB01B_GMAC_GTSUCOMP                    (_UINT32_(1) << 1)   /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PB12B_GMAC_GTSUCOMP                    _UINT32_(44)         /* GMAC signal: GMAC_GTSUCOMP on PB12 mux B */
#define MUX_PB12B_GMAC_GTSUCOMP                    _UINT32_(1)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PB12B_GMAC_GTSUCOMP                    (_UINT32_(1) << 12)  /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PD11C_GMAC_GTSUCOMP                    _UINT32_(107)        /* GMAC signal: GMAC_GTSUCOMP on PD11 mux C */
#define MUX_PD11C_GMAC_GTSUCOMP                    _UINT32_(2)          /* GMAC signal line function value: GMAC_GTSUCOMP */
#define PIO_PD11C_GMAC_GTSUCOMP                    (_UINT32_(1) << 11)  /* GMAC signal: GMAC_GTSUCOMP */

#define PIN_PD02A_GMAC_GTX0                        _UINT32_(98)         /* GMAC signal: GMAC_GTX0 on PD02 mux A */
#define MUX_PD02A_GMAC_GTX0                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX0 */
#define PIO_PD02A_GMAC_GTX0                        (_UINT32_(1) << 2)   /* GMAC signal: GMAC_GTX0 */

#define PIN_PD03A_GMAC_GTX1                        _UINT32_(99)         /* GMAC signal: GMAC_GTX1 on PD03 mux A */
#define MUX_PD03A_GMAC_GTX1                        _UINT32_(0)          /* GMAC signal line function value: GMAC_GTX1 */
#define PIO_PD03A_GMAC_GTX1                        (_UINT32_(1) << 3)   /* GMAC signal: GMAC_GTX1 */

#define PIN_PD00A_GMAC_GTXCK                       _UINT32_(96)         /* GMAC signal: GMAC_GTXCK on PD00 mux A */
#define MUX_PD00A_GMAC_GTXCK                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GTXCK */
#define PIO_PD00A_GMAC_GTXCK                       (_UINT32_(1) << 0)   /* GMAC signal: GMAC_GTXCK */

#define PIN_PD01A_GMAC_GTXEN                       _UINT32_(97)         /* GMAC signal: GMAC_GTXEN on PD01 mux A */
#define MUX_PD01A_GMAC_GTXEN                       _UINT32_(0)          /* GMAC signal line function value: GMAC_GTXEN */
#define PIO_PD01A_GMAC_GTXEN                       (_UINT32_(1) << 1)   /* GMAC signal: GMAC_GTXEN */

/* =================== PIO definition for ISI peripheral ==================== */
#define PIN_PD22D_ISI_D0                           _UINT32_(118)        /* ISI signal: ISI_D0 on PD22 mux D */
#define MUX_PD22D_ISI_D0                           _UINT32_(3)          /* ISI signal line function value: ISI_D0 */
#define PIO_PD22D_ISI_D0                           (_UINT32_(1) << 22)  /* ISI signal: ISI_D0 */

#define PIN_PD21D_ISI_D1                           _UINT32_(117)        /* ISI signal: ISI_D1 on PD21 mux D */
#define MUX_PD21D_ISI_D1                           _UINT32_(3)          /* ISI signal line function value: ISI_D1 */
#define PIO_PD21D_ISI_D1                           (_UINT32_(1) << 21)  /* ISI signal: ISI_D1 */

#define PIN_PB03D_ISI_D2                           _UINT32_(35)         /* ISI signal: ISI_D2 on PB03 mux D */
#define MUX_PB03D_ISI_D2                           _UINT32_(3)          /* ISI signal line function value: ISI_D2 */
#define PIO_PB03D_ISI_D2                           (_UINT32_(1) << 3)   /* ISI signal: ISI_D2 */

#define PIN_PA09B_ISI_D3                           _UINT32_(9)          /* ISI signal: ISI_D3 on PA09 mux B */
#define MUX_PA09B_ISI_D3                           _UINT32_(1)          /* ISI signal line function value: ISI_D3 */
#define PIO_PA09B_ISI_D3                           (_UINT32_(1) << 9)   /* ISI signal: ISI_D3 */

#define PIN_PA05B_ISI_D4                           _UINT32_(5)          /* ISI signal: ISI_D4 on PA05 mux B */
#define MUX_PA05B_ISI_D4                           _UINT32_(1)          /* ISI signal line function value: ISI_D4 */
#define PIO_PA05B_ISI_D4                           (_UINT32_(1) << 5)   /* ISI signal: ISI_D4 */

#define PIN_PD11D_ISI_D5                           _UINT32_(107)        /* ISI signal: ISI_D5 on PD11 mux D */
#define MUX_PD11D_ISI_D5                           _UINT32_(3)          /* ISI signal line function value: ISI_D5 */
#define PIO_PD11D_ISI_D5                           (_UINT32_(1) << 11)  /* ISI signal: ISI_D5 */

#define PIN_PD12D_ISI_D6                           _UINT32_(108)        /* ISI signal: ISI_D6 on PD12 mux D */
#define MUX_PD12D_ISI_D6                           _UINT32_(3)          /* ISI signal line function value: ISI_D6 */
#define PIO_PD12D_ISI_D6                           (_UINT32_(1) << 12)  /* ISI signal: ISI_D6 */

#define PIN_PA27D_ISI_D7                           _UINT32_(27)         /* ISI signal: ISI_D7 on PA27 mux D */
#define MUX_PA27D_ISI_D7                           _UINT32_(3)          /* ISI signal line function value: ISI_D7 */
#define PIO_PA27D_ISI_D7                           (_UINT32_(1) << 27)  /* ISI signal: ISI_D7 */

#define PIN_PD31D_ISI_D11                          _UINT32_(127)        /* ISI signal: ISI_D11 on PD31 mux D */
#define MUX_PD31D_ISI_D11                          _UINT32_(3)          /* ISI signal line function value: ISI_D11 */
#define PIO_PD31D_ISI_D11                          (_UINT32_(1) << 31)  /* ISI signal: ISI_D11 */

#define PIN_PD24D_ISI_HSYNC                        _UINT32_(120)        /* ISI signal: ISI_HSYNC on PD24 mux D */
#define MUX_PD24D_ISI_HSYNC                        _UINT32_(3)          /* ISI signal line function value: ISI_HSYNC */
#define PIO_PD24D_ISI_HSYNC                        (_UINT32_(1) << 24)  /* ISI signal: ISI_HSYNC */

#define PIN_PA24D_ISI_PCK                          _UINT32_(24)         /* ISI signal: ISI_PCK on PA24 mux D */
#define MUX_PA24D_ISI_PCK                          _UINT32_(3)          /* ISI signal line function value: ISI_PCK */
#define PIO_PA24D_ISI_PCK                          (_UINT32_(1) << 24)  /* ISI signal: ISI_PCK */

#define PIN_PD25D_ISI_VSYNC                        _UINT32_(121)        /* ISI signal: ISI_VSYNC on PD25 mux D */
#define MUX_PD25D_ISI_VSYNC                        _UINT32_(3)          /* ISI signal line function value: ISI_VSYNC */
#define PIO_PD25D_ISI_VSYNC                        (_UINT32_(1) << 25)  /* ISI signal: ISI_VSYNC */

/* ================== PIO definition for MCAN0 peripheral =================== */
#define PIN_PB03A_MCAN0_CANRX0                     _UINT32_(35)         /* MCAN0 signal: MCAN0_CANRX0 on PB03 mux A */
#define MUX_PB03A_MCAN0_CANRX0                     _UINT32_(0)          /* MCAN0 signal line function value: MCAN0_CANRX0 */
#define PIO_PB03A_MCAN0_CANRX0                     (_UINT32_(1) << 3)   /* MCAN0 signal: MCAN0_CANRX0 */

#define PIN_PB02A_MCAN0_CANTX0                     _UINT32_(34)         /* MCAN0 signal: MCAN0_CANTX0 on PB02 mux A */
#define MUX_PB02A_MCAN0_CANTX0                     _UINT32_(0)          /* MCAN0 signal line function value: MCAN0_CANTX0 */
#define PIO_PB02A_MCAN0_CANTX0                     (_UINT32_(1) << 2)   /* MCAN0 signal: MCAN0_CANTX0 */

/* =================== PIO definition for MLB peripheral ==================== */
#define PIN_PB04C_MLB_MLBCLK                       _UINT32_(36)         /* MLB signal: MLB_MLBCLK on PB04 mux C */
#define MUX_PB04C_MLB_MLBCLK                       _UINT32_(2)          /* MLB signal line function value: MLB_MLBCLK */
#define PIO_PB04C_MLB_MLBCLK                       (_UINT32_(1) << 4)   /* MLB signal: MLB_MLBCLK */

#define PIN_PB05C_MLB_MLBDAT                       _UINT32_(37)         /* MLB signal: MLB_MLBDAT on PB05 mux C */
#define MUX_PB05C_MLB_MLBDAT                       _UINT32_(2)          /* MLB signal line function value: MLB_MLBDAT */
#define PIO_PB05C_MLB_MLBDAT                       (_UINT32_(1) << 5)   /* MLB signal: MLB_MLBDAT */

#define PIN_PD10D_MLB_MLBSIG                       _UINT32_(106)        /* MLB signal: MLB_MLBSIG on PD10 mux D */
#define MUX_PD10D_MLB_MLBSIG                       _UINT32_(3)          /* MLB signal line function value: MLB_MLBSIG */
#define PIO_PD10D_MLB_MLBSIG                       (_UINT32_(1) << 10)  /* MLB signal: MLB_MLBSIG */

/* =================== PIO definition for PMC peripheral ==================== */
#define PIN_PB12D_PMC_PCK0                         _UINT32_(44)         /* PMC signal: PMC_PCK0 on PB12 mux D */
#define MUX_PB12D_PMC_PCK0                         _UINT32_(3)          /* PMC signal line function value: PMC_PCK0 */
#define PIO_PB12D_PMC_PCK0                         (_UINT32_(1) << 12)  /* PMC signal: PMC_PCK0 */

#define PIN_PA21B_PMC_PCK1                         _UINT32_(21)         /* PMC signal: PMC_PCK1 on PA21 mux B */
#define MUX_PA21B_PMC_PCK1                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK1 */
#define PIO_PA21B_PMC_PCK1                         (_UINT32_(1) << 21)  /* PMC signal: PMC_PCK1 */

#define PIN_PA03C_PMC_PCK2                         _UINT32_(3)          /* PMC signal: PMC_PCK2 on PA03 mux C */
#define MUX_PA03C_PMC_PCK2                         _UINT32_(2)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PA03C_PMC_PCK2                         (_UINT32_(1) << 3)   /* PMC signal: PMC_PCK2 */

#define PIN_PB03B_PMC_PCK2                         _UINT32_(35)         /* PMC signal: PMC_PCK2 on PB03 mux B */
#define MUX_PB03B_PMC_PCK2                         _UINT32_(1)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PB03B_PMC_PCK2                         (_UINT32_(1) << 3)   /* PMC signal: PMC_PCK2 */

#define PIN_PD31C_PMC_PCK2                         _UINT32_(127)        /* PMC signal: PMC_PCK2 on PD31 mux C */
#define MUX_PD31C_PMC_PCK2                         _UINT32_(2)          /* PMC signal line function value: PMC_PCK2 */
#define PIO_PD31C_PMC_PCK2                         (_UINT32_(1) << 31)  /* PMC signal: PMC_PCK2 */

#define PIN_PB09X1_PMC_XIN                         _UINT32_(41)         /* PMC signal: PMC_XIN on PB09 mux X1 */
#define PIO_PB09X1_PMC_XIN                         (_UINT32_(1) << 9)   /* PMC signal: PMC_XIN */

#define PIN_PA07X1_PMC_XIN32                       _UINT32_(7)          /* PMC signal: PMC_XIN32 on PA07 mux X1 */
#define PIO_PA07X1_PMC_XIN32                       (_UINT32_(1) << 7)   /* PMC signal: PMC_XIN32 */

#define PIN_PB08X1_PMC_XOUT                        _UINT32_(40)         /* PMC signal: PMC_XOUT on PB08 mux X1 */
#define PIO_PB08X1_PMC_XOUT                        (_UINT32_(1) << 8)   /* PMC signal: PMC_XOUT */

#define PIN_PA08X1_PMC_XOUT32                      _UINT32_(8)          /* PMC signal: PMC_XOUT32 on PA08 mux X1 */
#define PIO_PA08X1_PMC_XOUT32                      (_UINT32_(1) << 8)   /* PMC signal: PMC_XOUT32 */

/* =================== PIO definition for PWM0 peripheral =================== */
#define PIN_PA10B_PWM0_PWMEXTRG0                   _UINT32_(10)         /* PWM0 signal: PWM0_PWMEXTRG0 on PA10 mux B */
#define MUX_PA10B_PWM0_PWMEXTRG0                   _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMEXTRG0 */
#define PIO_PA10B_PWM0_PWMEXTRG0                   (_UINT32_(1) << 10)  /* PWM0 signal: PWM0_PWMEXTRG0 */

#define PIN_PA22B_PWM0_PWMEXTRG1                   _UINT32_(22)         /* PWM0 signal: PWM0_PWMEXTRG1 on PA22 mux B */
#define MUX_PA22B_PWM0_PWMEXTRG1                   _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMEXTRG1 */
#define PIO_PA22B_PWM0_PWMEXTRG1                   (_UINT32_(1) << 22)  /* PWM0 signal: PWM0_PWMEXTRG1 */

#define PIN_PA09C_PWM0_PWMFI0                      _UINT32_(9)          /* PWM0 signal: PWM0_PWMFI0 on PA09 mux C */
#define MUX_PA09C_PWM0_PWMFI0                      _UINT32_(2)          /* PWM0 signal line function value: PWM0_PWMFI0 */
#define PIO_PA09C_PWM0_PWMFI0                      (_UINT32_(1) << 9)   /* PWM0 signal: PWM0_PWMFI0 */

#define PIN_PD08B_PWM0_PWMFI1                      _UINT32_(104)        /* PWM0 signal: PWM0_PWMFI1 on PD08 mux B */
#define MUX_PD08B_PWM0_PWMFI1                      _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMFI1 */
#define PIO_PD08B_PWM0_PWMFI1                      (_UINT32_(1) << 8)   /* PWM0 signal: PWM0_PWMFI1 */

#define PIN_PD09B_PWM0_PWMFI2                      _UINT32_(105)        /* PWM0 signal: PWM0_PWMFI2 on PD09 mux B */
#define MUX_PD09B_PWM0_PWMFI2                      _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMFI2 */
#define PIO_PD09B_PWM0_PWMFI2                      (_UINT32_(1) << 9)   /* PWM0 signal: PWM0_PWMFI2 */

#define PIN_PA11B_PWM0_PWMH0                       _UINT32_(11)         /* PWM0 signal: PWM0_PWMH0 on PA11 mux B */
#define MUX_PA11B_PWM0_PWMH0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PA11B_PWM0_PWMH0                       (_UINT32_(1) << 11)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PB00A_PWM0_PWMH0                       _UINT32_(32)         /* PWM0 signal: PWM0_PWMH0 on PB00 mux A */
#define MUX_PB00A_PWM0_PWMH0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PB00A_PWM0_PWMH0                       (_UINT32_(1) << 0)   /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PD11B_PWM0_PWMH0                       _UINT32_(107)        /* PWM0 signal: PWM0_PWMH0 on PD11 mux B */
#define MUX_PD11B_PWM0_PWMH0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH0 */
#define PIO_PD11B_PWM0_PWMH0                       (_UINT32_(1) << 11)  /* PWM0 signal: PWM0_PWMH0 */

#define PIN_PA12B_PWM0_PWMH1                       _UINT32_(12)         /* PWM0 signal: PWM0_PWMH1 on PA12 mux B */
#define MUX_PA12B_PWM0_PWMH1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA12B_PWM0_PWMH1                       (_UINT32_(1) << 12)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PA24B_PWM0_PWMH1                       _UINT32_(24)         /* PWM0 signal: PWM0_PWMH1 on PA24 mux B */
#define MUX_PA24B_PWM0_PWMH1                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PA24B_PWM0_PWMH1                       (_UINT32_(1) << 24)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PB01A_PWM0_PWMH1                       _UINT32_(33)         /* PWM0 signal: PWM0_PWMH1 on PB01 mux A */
#define MUX_PB01A_PWM0_PWMH1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PB01A_PWM0_PWMH1                       (_UINT32_(1) << 1)   /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PD21A_PWM0_PWMH1                       _UINT32_(117)        /* PWM0 signal: PWM0_PWMH1 on PD21 mux A */
#define MUX_PD21A_PWM0_PWMH1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH1 */
#define PIO_PD21A_PWM0_PWMH1                       (_UINT32_(1) << 21)  /* PWM0 signal: PWM0_PWMH1 */

#define PIN_PA13B_PWM0_PWMH2                       _UINT32_(13)         /* PWM0 signal: PWM0_PWMH2 on PA13 mux B */
#define MUX_PA13B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PA13B_PWM0_PWMH2                       (_UINT32_(1) << 13)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PB04B_PWM0_PWMH2                       _UINT32_(36)         /* PWM0 signal: PWM0_PWMH2 on PB04 mux B */
#define MUX_PB04B_PWM0_PWMH2                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PB04B_PWM0_PWMH2                       (_UINT32_(1) << 4)   /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PD22A_PWM0_PWMH2                       _UINT32_(118)        /* PWM0 signal: PWM0_PWMH2 on PD22 mux A */
#define MUX_PD22A_PWM0_PWMH2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWMH2 */
#define PIO_PD22A_PWM0_PWMH2                       (_UINT32_(1) << 22)  /* PWM0 signal: PWM0_PWMH2 */

#define PIN_PA07B_PWM0_PWMH3                       _UINT32_(7)          /* PWM0 signal: PWM0_PWMH3 on PA07 mux B */
#define MUX_PA07B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA07B_PWM0_PWMH3                       (_UINT32_(1) << 7)   /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PA14B_PWM0_PWMH3                       _UINT32_(14)         /* PWM0 signal: PWM0_PWMH3 on PA14 mux B */
#define MUX_PA14B_PWM0_PWMH3                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWMH3 */
#define PIO_PA14B_PWM0_PWMH3                       (_UINT32_(1) << 14)  /* PWM0 signal: PWM0_PWMH3 */

#define PIN_PB05B_PWM0_PWML0                       _UINT32_(37)         /* PWM0 signal: PWM0_PWML0 on PB05 mux B */
#define MUX_PB05B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PB05B_PWM0_PWML0                       (_UINT32_(1) << 5)   /* PWM0 signal: PWM0_PWML0 */

#define PIN_PD10B_PWM0_PWML0                       _UINT32_(106)        /* PWM0 signal: PWM0_PWML0 on PD10 mux B */
#define MUX_PD10B_PWM0_PWML0                       _UINT32_(1)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD10B_PWM0_PWML0                       (_UINT32_(1) << 10)  /* PWM0 signal: PWM0_PWML0 */

#define PIN_PD24A_PWM0_PWML0                       _UINT32_(120)        /* PWM0 signal: PWM0_PWML0 on PD24 mux A */
#define MUX_PD24A_PWM0_PWML0                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML0 */
#define PIO_PD24A_PWM0_PWML0                       (_UINT32_(1) << 24)  /* PWM0 signal: PWM0_PWML0 */

#define PIN_PB12A_PWM0_PWML1                       _UINT32_(44)         /* PWM0 signal: PWM0_PWML1 on PB12 mux A */
#define MUX_PB12A_PWM0_PWML1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PB12A_PWM0_PWML1                       (_UINT32_(1) << 12)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PD25A_PWM0_PWML1                       _UINT32_(121)        /* PWM0 signal: PWM0_PWML1 on PD25 mux A */
#define MUX_PD25A_PWM0_PWML1                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML1 */
#define PIO_PD25A_PWM0_PWML1                       (_UINT32_(1) << 25)  /* PWM0 signal: PWM0_PWML1 */

#define PIN_PD26A_PWM0_PWML2                       _UINT32_(122)        /* PWM0 signal: PWM0_PWML2 on PD26 mux A */
#define MUX_PD26A_PWM0_PWML2                       _UINT32_(0)          /* PWM0 signal line function value: PWM0_PWML2 */
#define PIO_PD26A_PWM0_PWML2                       (_UINT32_(1) << 26)  /* PWM0 signal: PWM0_PWML2 */

/* =================== PIO definition for PWM1 peripheral =================== */
#define PIN_PA21C_PWM1_PWMFI0                      _UINT32_(21)         /* PWM1 signal: PWM1_PWMFI0 on PA21 mux C */
#define MUX_PA21C_PWM1_PWMFI0                      _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMFI0 */
#define PIO_PA21C_PWM1_PWMFI0                      (_UINT32_(1) << 21)  /* PWM1 signal: PWM1_PWMFI0 */

#define PIN_PA12C_PWM1_PWMH0                       _UINT32_(12)         /* PWM1 signal: PWM1_PWMH0 on PA12 mux C */
#define MUX_PA12C_PWM1_PWMH0                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PA12C_PWM1_PWMH0                       (_UINT32_(1) << 12)  /* PWM1 signal: PWM1_PWMH0 */

#define PIN_PD01B_PWM1_PWMH0                       _UINT32_(97)         /* PWM1 signal: PWM1_PWMH0 on PD01 mux B */
#define MUX_PD01B_PWM1_PWMH0                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH0 */
#define PIO_PD01B_PWM1_PWMH0                       (_UINT32_(1) << 1)   /* PWM1 signal: PWM1_PWMH0 */

#define PIN_PA14C_PWM1_PWMH1                       _UINT32_(14)         /* PWM1 signal: PWM1_PWMH1 on PA14 mux C */
#define MUX_PA14C_PWM1_PWMH1                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PA14C_PWM1_PWMH1                       (_UINT32_(1) << 14)  /* PWM1 signal: PWM1_PWMH1 */

#define PIN_PD03B_PWM1_PWMH1                       _UINT32_(99)         /* PWM1 signal: PWM1_PWMH1 on PD03 mux B */
#define MUX_PD03B_PWM1_PWMH1                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH1 */
#define PIO_PD03B_PWM1_PWMH1                       (_UINT32_(1) << 3)   /* PWM1 signal: PWM1_PWMH1 */

#define PIN_PD05B_PWM1_PWMH2                       _UINT32_(101)        /* PWM1 signal: PWM1_PWMH2 on PD05 mux B */
#define MUX_PD05B_PWM1_PWMH2                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH2 */
#define PIO_PD05B_PWM1_PWMH2                       (_UINT32_(1) << 5)   /* PWM1 signal: PWM1_PWMH2 */

#define PIN_PA08A_PWM1_PWMH3                       _UINT32_(8)          /* PWM1 signal: PWM1_PWMH3 on PA08 mux A */
#define MUX_PA08A_PWM1_PWMH3                       _UINT32_(0)          /* PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PA08A_PWM1_PWMH3                       (_UINT32_(1) << 8)   /* PWM1 signal: PWM1_PWMH3 */

#define PIN_PD07B_PWM1_PWMH3                       _UINT32_(103)        /* PWM1 signal: PWM1_PWMH3 on PD07 mux B */
#define MUX_PD07B_PWM1_PWMH3                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWMH3 */
#define PIO_PD07B_PWM1_PWMH3                       (_UINT32_(1) << 7)   /* PWM1 signal: PWM1_PWMH3 */

#define PIN_PA11C_PWM1_PWML0                       _UINT32_(11)         /* PWM1 signal: PWM1_PWML0 on PA11 mux C */
#define MUX_PA11C_PWM1_PWML0                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PA11C_PWM1_PWML0                       (_UINT32_(1) << 11)  /* PWM1 signal: PWM1_PWML0 */

#define PIN_PD00B_PWM1_PWML0                       _UINT32_(96)         /* PWM1 signal: PWM1_PWML0 on PD00 mux B */
#define MUX_PD00B_PWM1_PWML0                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML0 */
#define PIO_PD00B_PWM1_PWML0                       (_UINT32_(1) << 0)   /* PWM1 signal: PWM1_PWML0 */

#define PIN_PA13C_PWM1_PWML1                       _UINT32_(13)         /* PWM1 signal: PWM1_PWML1 on PA13 mux C */
#define MUX_PA13C_PWM1_PWML1                       _UINT32_(2)          /* PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PA13C_PWM1_PWML1                       (_UINT32_(1) << 13)  /* PWM1 signal: PWM1_PWML1 */

#define PIN_PD02B_PWM1_PWML1                       _UINT32_(98)         /* PWM1 signal: PWM1_PWML1 on PD02 mux B */
#define MUX_PD02B_PWM1_PWML1                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML1 */
#define PIO_PD02B_PWM1_PWML1                       (_UINT32_(1) << 2)   /* PWM1 signal: PWM1_PWML1 */

#define PIN_PD04B_PWM1_PWML2                       _UINT32_(100)        /* PWM1 signal: PWM1_PWML2 on PD04 mux B */
#define MUX_PD04B_PWM1_PWML2                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML2 */
#define PIO_PD04B_PWM1_PWML2                       (_UINT32_(1) << 4)   /* PWM1 signal: PWM1_PWML2 */

#define PIN_PA05A_PWM1_PWML3                       _UINT32_(5)          /* PWM1 signal: PWM1_PWML3 on PA05 mux A */
#define MUX_PA05A_PWM1_PWML3                       _UINT32_(0)          /* PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PA05A_PWM1_PWML3                       (_UINT32_(1) << 5)   /* PWM1 signal: PWM1_PWML3 */

#define PIN_PD06B_PWM1_PWML3                       _UINT32_(102)        /* PWM1 signal: PWM1_PWML3 on PD06 mux B */
#define MUX_PD06B_PWM1_PWML3                       _UINT32_(1)          /* PWM1 signal line function value: PWM1_PWML3 */
#define PIO_PD06B_PWM1_PWML3                       (_UINT32_(1) << 6)   /* PWM1 signal: PWM1_PWML3 */

/* =================== PIO definition for QSPI peripheral =================== */
#define PIN_PA11A_QSPI_QCS                         _UINT32_(11)         /* QSPI signal: QSPI_QCS on PA11 mux A */
#define MUX_PA11A_QSPI_QCS                         _UINT32_(0)          /* QSPI signal line function value: QSPI_QCS */
#define PIO_PA11A_QSPI_QCS                         (_UINT32_(1) << 11)  /* QSPI signal: QSPI_QCS */

#define PIN_PA13A_QSPI_QIO0                        _UINT32_(13)         /* QSPI signal: QSPI_QIO0 on PA13 mux A */
#define MUX_PA13A_QSPI_QIO0                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO0 */
#define PIO_PA13A_QSPI_QIO0                        (_UINT32_(1) << 13)  /* QSPI signal: QSPI_QIO0 */

#define PIN_PA12A_QSPI_QIO1                        _UINT32_(12)         /* QSPI signal: QSPI_QIO1 on PA12 mux A */
#define MUX_PA12A_QSPI_QIO1                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO1 */
#define PIO_PA12A_QSPI_QIO1                        (_UINT32_(1) << 12)  /* QSPI signal: QSPI_QIO1 */

#define PIN_PD31A_QSPI_QIO3                        _UINT32_(127)        /* QSPI signal: QSPI_QIO3 on PD31 mux A */
#define MUX_PD31A_QSPI_QIO3                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QIO3 */
#define PIO_PD31A_QSPI_QIO3                        (_UINT32_(1) << 31)  /* QSPI signal: QSPI_QIO3 */

#define PIN_PA14A_QSPI_QSCK                        _UINT32_(14)         /* QSPI signal: QSPI_QSCK on PA14 mux A */
#define MUX_PA14A_QSPI_QSCK                        _UINT32_(0)          /* QSPI signal line function value: QSPI_QSCK */
#define PIO_PA14A_QSPI_QSCK                        (_UINT32_(1) << 14)  /* QSPI signal: QSPI_QSCK */

/* =================== PIO definition for RTC peripheral ==================== */
#define PIN_PB00X1_RTC_RTCOUT0                     _UINT32_(32)         /* RTC signal: RTC_RTCOUT0 on PB00 mux X1 */
#define PIO_PB00X1_RTC_RTCOUT0                     (_UINT32_(1) << 0)   /* RTC signal: RTC_RTCOUT0 */

#define PIN_PB01X1_RTC_RTCOUT1                     _UINT32_(33)         /* RTC signal: RTC_RTCOUT1 on PB01 mux X1 */
#define PIO_PB01X1_RTC_RTCOUT1                     (_UINT32_(1) << 1)   /* RTC signal: RTC_RTCOUT1 */

/* =================== PIO definition for SSC peripheral ==================== */
#define PIN_PA10C_SSC_RD                           _UINT32_(10)         /* SSC signal: SSC_RD on PA10 mux C */
#define MUX_PA10C_SSC_RD                           _UINT32_(2)          /* SSC signal line function value: SSC_RD */
#define PIO_PA10C_SSC_RD                           (_UINT32_(1) << 10)  /* SSC signal: SSC_RD */

#define PIN_PD24B_SSC_RF                           _UINT32_(120)        /* SSC signal: SSC_RF on PD24 mux B */
#define MUX_PD24B_SSC_RF                           _UINT32_(1)          /* SSC signal line function value: SSC_RF */
#define PIO_PD24B_SSC_RF                           (_UINT32_(1) << 24)  /* SSC signal: SSC_RF */

#define PIN_PA22A_SSC_RK                           _UINT32_(22)         /* SSC signal: SSC_RK on PA22 mux A */
#define MUX_PA22A_SSC_RK                           _UINT32_(0)          /* SSC signal line function value: SSC_RK */
#define PIO_PA22A_SSC_RK                           (_UINT32_(1) << 22)  /* SSC signal: SSC_RK */

#define PIN_PB05D_SSC_TD                           _UINT32_(37)         /* SSC signal: SSC_TD on PB05 mux D */
#define MUX_PB05D_SSC_TD                           _UINT32_(3)          /* SSC signal line function value: SSC_TD */
#define PIO_PB05D_SSC_TD                           (_UINT32_(1) << 5)   /* SSC signal: SSC_TD */

#define PIN_PD10C_SSC_TD                           _UINT32_(106)        /* SSC signal: SSC_TD on PD10 mux C */
#define MUX_PD10C_SSC_TD                           _UINT32_(2)          /* SSC signal line function value: SSC_TD */
#define PIO_PD10C_SSC_TD                           (_UINT32_(1) << 10)  /* SSC signal: SSC_TD */

#define PIN_PD26B_SSC_TD                           _UINT32_(122)        /* SSC signal: SSC_TD on PD26 mux B */
#define MUX_PD26B_SSC_TD                           _UINT32_(1)          /* SSC signal line function value: SSC_TD */
#define PIO_PD26B_SSC_TD                           (_UINT32_(1) << 26)  /* SSC signal: SSC_TD */

#define PIN_PB00D_SSC_TF                           _UINT32_(32)         /* SSC signal: SSC_TF on PB00 mux D */
#define MUX_PB00D_SSC_TF                           _UINT32_(3)          /* SSC signal line function value: SSC_TF */
#define PIO_PB00D_SSC_TF                           (_UINT32_(1) << 0)   /* SSC signal: SSC_TF */

#define PIN_PB01D_SSC_TK                           _UINT32_(33)         /* SSC signal: SSC_TK on PB01 mux D */
#define MUX_PB01D_SSC_TK                           _UINT32_(3)          /* SSC signal line function value: SSC_TK */
#define PIO_PB01D_SSC_TK                           (_UINT32_(1) << 1)   /* SSC signal: SSC_TK */

/* =================== PIO definition for SUPC peripheral =================== */
#define PIN_PA04X1_SUPC_WKUP3                      _UINT32_(4)          /* SUPC signal: SUPC_WKUP3 on PA04 mux X1 */
#define PIO_PA04X1_SUPC_WKUP3                      (_UINT32_(1) << 4)   /* SUPC signal: SUPC_WKUP3 */

#define PIN_PA05X1_SUPC_WKUP4                      _UINT32_(5)          /* SUPC signal: SUPC_WKUP4 on PA05 mux X1 */
#define PIO_PA05X1_SUPC_WKUP4                      (_UINT32_(1) << 5)   /* SUPC signal: SUPC_WKUP4 */

#define PIN_PA09X1_SUPC_WKUP6                      _UINT32_(9)          /* SUPC signal: SUPC_WKUP6 on PA09 mux X1 */
#define PIO_PA09X1_SUPC_WKUP6                      (_UINT32_(1) << 9)   /* SUPC signal: SUPC_WKUP6 */

#define PIN_PA11X1_SUPC_WKUP7                      _UINT32_(11)         /* SUPC signal: SUPC_WKUP7 on PA11 mux X1 */
#define PIO_PA11X1_SUPC_WKUP7                      (_UINT32_(1) << 11)  /* SUPC signal: SUPC_WKUP7 */

#define PIN_PA14X1_SUPC_WKUP8                      _UINT32_(14)         /* SUPC signal: SUPC_WKUP8 on PA14 mux X1 */
#define PIO_PA14X1_SUPC_WKUP8                      (_UINT32_(1) << 14)  /* SUPC signal: SUPC_WKUP8 */

#define PIN_PB03X1_SUPC_WKUP12                     _UINT32_(35)         /* SUPC signal: SUPC_WKUP12 on PB03 mux X1 */
#define PIO_PB03X1_SUPC_WKUP12                     (_UINT32_(1) << 3)   /* SUPC signal: SUPC_WKUP12 */

#define PIN_PB05X1_SUPC_WKUP13                     _UINT32_(37)         /* SUPC signal: SUPC_WKUP13 on PB05 mux X1 */
#define PIO_PB05X1_SUPC_WKUP13                     (_UINT32_(1) << 5)   /* SUPC signal: SUPC_WKUP13 */

/* =================== PIO definition for TC0 peripheral ==================== */
#define PIN_PA04B_TC0_TCLK0                        _UINT32_(4)          /* TC0 signal: TC0_TCLK0 on PA04 mux B */
#define MUX_PA04B_TC0_TCLK0                        _UINT32_(1)          /* TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA04B_TC0_TCLK0                        (_UINT32_(1) << 4)   /* TC0 signal: TC0_TCLK0 */

#define PIN_PA27B_TC0_TIOB2                        _UINT32_(27)         /* TC0 signal: TC0_TIOB2 on PA27 mux B */
#define MUX_PA27B_TC0_TIOB2                        _UINT32_(1)          /* TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA27B_TC0_TIOB2                        (_UINT32_(1) << 27)  /* TC0 signal: TC0_TIOB2 */

/* =================== PIO definition for TC3 peripheral ==================== */
#define PIN_PD24C_TC3_TCLK11                       _UINT32_(120)        /* TC3 signal: TC3_TCLK11 on PD24 mux C */
#define MUX_PD24C_TC3_TCLK11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TCLK11 */
#define PIO_PD24C_TC3_TCLK11                       (_UINT32_(1) << 24)  /* TC3 signal: TC3_TCLK11 */

#define PIN_PD21C_TC3_TIOA11                       _UINT32_(117)        /* TC3 signal: TC3_TIOA11 on PD21 mux C */
#define MUX_PD21C_TC3_TIOA11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TIOA11 */
#define PIO_PD21C_TC3_TIOA11                       (_UINT32_(1) << 21)  /* TC3 signal: TC3_TIOA11 */

#define PIN_PD22C_TC3_TIOB11                       _UINT32_(118)        /* TC3 signal: TC3_TIOB11 on PD22 mux C */
#define MUX_PD22C_TC3_TIOB11                       _UINT32_(2)          /* TC3 signal line function value: TC3_TIOB11 */
#define PIO_PD22C_TC3_TIOB11                       (_UINT32_(1) << 22)  /* TC3 signal: TC3_TIOB11 */

/* ================== PIO definition for TWIHS0 peripheral ================== */
#define PIN_PA04A_TWIHS0_TWCK0                     _UINT32_(4)          /* TWIHS0 signal: TWIHS0_TWCK0 on PA04 mux A */
#define MUX_PA04A_TWIHS0_TWCK0                     _UINT32_(0)          /* TWIHS0 signal line function value: TWIHS0_TWCK0 */
#define PIO_PA04A_TWIHS0_TWCK0                     (_UINT32_(1) << 4)   /* TWIHS0 signal: TWIHS0_TWCK0 */

#define PIN_PA03A_TWIHS0_TWD0                      _UINT32_(3)          /* TWIHS0 signal: TWIHS0_TWD0 on PA03 mux A */
#define MUX_PA03A_TWIHS0_TWD0                      _UINT32_(0)          /* TWIHS0 signal line function value: TWIHS0_TWD0 */
#define PIO_PA03A_TWIHS0_TWD0                      (_UINT32_(1) << 3)   /* TWIHS0 signal: TWIHS0_TWD0 */

/* ================== PIO definition for TWIHS1 peripheral ================== */
#define PIN_PB05A_TWIHS1_TWCK1                     _UINT32_(37)         /* TWIHS1 signal: TWIHS1_TWCK1 on PB05 mux A */
#define MUX_PB05A_TWIHS1_TWCK1                     _UINT32_(0)          /* TWIHS1 signal line function value: TWIHS1_TWCK1 */
#define PIO_PB05A_TWIHS1_TWCK1                     (_UINT32_(1) << 5)   /* TWIHS1 signal: TWIHS1_TWCK1 */

#define PIN_PB04A_TWIHS1_TWD1                      _UINT32_(36)         /* TWIHS1 signal: TWIHS1_TWD1 on PB04 mux A */
#define MUX_PB04A_TWIHS1_TWD1                      _UINT32_(0)          /* TWIHS1 signal line function value: TWIHS1_TWD1 */
#define PIO_PB04A_TWIHS1_TWD1                      (_UINT32_(1) << 4)   /* TWIHS1 signal: TWIHS1_TWD1 */

/* ================== PIO definition for UART0 peripheral =================== */
#define PIN_PA09A_UART0_URXD0                      _UINT32_(9)          /* UART0 signal: UART0_URXD0 on PA09 mux A */
#define MUX_PA09A_UART0_URXD0                      _UINT32_(0)          /* UART0 signal line function value: UART0_URXD0 */
#define PIO_PA09A_UART0_URXD0                      (_UINT32_(1) << 9)   /* UART0 signal: UART0_URXD0 */

#define PIN_PA10A_UART0_UTXD0                      _UINT32_(10)         /* UART0 signal: UART0_UTXD0 on PA10 mux A */
#define MUX_PA10A_UART0_UTXD0                      _UINT32_(0)          /* UART0 signal line function value: UART0_UTXD0 */
#define PIO_PA10A_UART0_UTXD0                      (_UINT32_(1) << 10)  /* UART0 signal: UART0_UTXD0 */

/* ================== PIO definition for UART1 peripheral =================== */
#define PIN_PA05C_UART1_URXD1                      _UINT32_(5)          /* UART1 signal: UART1_URXD1 on PA05 mux C */
#define MUX_PA05C_UART1_URXD1                      _UINT32_(2)          /* UART1 signal line function value: UART1_URXD1 */
#define PIO_PA05C_UART1_URXD1                      (_UINT32_(1) << 5)   /* UART1 signal: UART1_URXD1 */

#define PIN_PA04C_UART1_UTXD1                      _UINT32_(4)          /* UART1 signal: UART1_UTXD1 on PA04 mux C */
#define MUX_PA04C_UART1_UTXD1                      _UINT32_(2)          /* UART1 signal line function value: UART1_UTXD1 */
#define PIO_PA04C_UART1_UTXD1                      (_UINT32_(1) << 4)   /* UART1 signal: UART1_UTXD1 */

#define PIN_PD26D_UART1_UTXD1                      _UINT32_(122)        /* UART1 signal: UART1_UTXD1 on PD26 mux D */
#define MUX_PD26D_UART1_UTXD1                      _UINT32_(3)          /* UART1 signal line function value: UART1_UTXD1 */
#define PIO_PD26D_UART1_UTXD1                      (_UINT32_(1) << 26)  /* UART1 signal: UART1_UTXD1 */

/* ================== PIO definition for UART2 peripheral =================== */
#define PIN_PD25C_UART2_URXD2                      _UINT32_(121)        /* UART2 signal: UART2_URXD2 on PD25 mux C */
#define MUX_PD25C_UART2_URXD2                      _UINT32_(2)          /* UART2 signal line function value: UART2_URXD2 */
#define PIO_PD25C_UART2_URXD2                      (_UINT32_(1) << 25)  /* UART2 signal: UART2_URXD2 */

#define PIN_PD26C_UART2_UTXD2                      _UINT32_(122)        /* UART2 signal: UART2_UTXD2 on PD26 mux C */
#define MUX_PD26C_UART2_UTXD2                      _UINT32_(2)          /* UART2 signal line function value: UART2_UTXD2 */
#define PIO_PD26C_UART2_UTXD2                      (_UINT32_(1) << 26)  /* UART2 signal: UART2_UTXD2 */

/* ================== PIO definition for USART0 peripheral ================== */
#define PIN_PB02C_USART0_CTS0                      _UINT32_(34)         /* USART0 signal: USART0_CTS0 on PB02 mux C */
#define MUX_PB02C_USART0_CTS0                      _UINT32_(2)          /* USART0 signal line function value: USART0_CTS0 */
#define PIO_PB02C_USART0_CTS0                      (_UINT32_(1) << 2)   /* USART0 signal: USART0_CTS0 */

#define PIN_PD00D_USART0_DCD0                      _UINT32_(96)         /* USART0 signal: USART0_DCD0 on PD00 mux D */
#define MUX_PD00D_USART0_DCD0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DCD0 */
#define PIO_PD00D_USART0_DCD0                      (_UINT32_(1) << 0)   /* USART0 signal: USART0_DCD0 */

#define PIN_PD02D_USART0_DSR0                      _UINT32_(98)         /* USART0 signal: USART0_DSR0 on PD02 mux D */
#define MUX_PD02D_USART0_DSR0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DSR0 */
#define PIO_PD02D_USART0_DSR0                      (_UINT32_(1) << 2)   /* USART0 signal: USART0_DSR0 */

#define PIN_PD01D_USART0_DTR0                      _UINT32_(97)         /* USART0 signal: USART0_DTR0 on PD01 mux D */
#define MUX_PD01D_USART0_DTR0                      _UINT32_(3)          /* USART0 signal line function value: USART0_DTR0 */
#define PIO_PD01D_USART0_DTR0                      (_UINT32_(1) << 1)   /* USART0 signal: USART0_DTR0 */

#define PIN_PD03D_USART0_RI0                       _UINT32_(99)         /* USART0 signal: USART0_RI0 on PD03 mux D */
#define MUX_PD03D_USART0_RI0                       _UINT32_(3)          /* USART0 signal line function value: USART0_RI0 */
#define PIO_PD03D_USART0_RI0                       (_UINT32_(1) << 3)   /* USART0 signal: USART0_RI0 */

#define PIN_PB03C_USART0_RTS0                      _UINT32_(35)         /* USART0 signal: USART0_RTS0 on PB03 mux C */
#define MUX_PB03C_USART0_RTS0                      _UINT32_(2)          /* USART0 signal line function value: USART0_RTS0 */
#define PIO_PB03C_USART0_RTS0                      (_UINT32_(1) << 3)   /* USART0 signal: USART0_RTS0 */

#define PIN_PB00C_USART0_RXD0                      _UINT32_(32)         /* USART0 signal: USART0_RXD0 on PB00 mux C */
#define MUX_PB00C_USART0_RXD0                      _UINT32_(2)          /* USART0 signal line function value: USART0_RXD0 */
#define PIO_PB00C_USART0_RXD0                      (_UINT32_(1) << 0)   /* USART0 signal: USART0_RXD0 */

#define PIN_PB01C_USART0_TXD0                      _UINT32_(33)         /* USART0 signal: USART0_TXD0 on PB01 mux C */
#define MUX_PB01C_USART0_TXD0                      _UINT32_(2)          /* USART0 signal line function value: USART0_TXD0 */
#define PIO_PB01C_USART0_TXD0                      (_UINT32_(1) << 1)   /* USART0 signal: USART0_TXD0 */

/* ================== PIO definition for USART1 peripheral ================== */
#define PIN_PA27A_USART1_DTR1                      _UINT32_(27)         /* USART1 signal: USART1_DTR1 on PA27 mux A */
#define MUX_PA27A_USART1_DTR1                      _UINT32_(0)          /* USART1 signal line function value: USART1_DTR1 */
#define PIO_PA27A_USART1_DTR1                      (_UINT32_(1) << 27)  /* USART1 signal: USART1_DTR1 */

#define PIN_PA03B_USART1_LONCOL1                   _UINT32_(3)          /* USART1 signal: USART1_LONCOL1 on PA03 mux B */
#define MUX_PA03B_USART1_LONCOL1                   _UINT32_(1)          /* USART1 signal line function value: USART1_LONCOL1 */
#define PIO_PA03B_USART1_LONCOL1                   (_UINT32_(1) << 3)   /* USART1 signal: USART1_LONCOL1 */

#define PIN_PA24A_USART1_RTS1                      _UINT32_(24)         /* USART1 signal: USART1_RTS1 on PA24 mux A */
#define MUX_PA24A_USART1_RTS1                      _UINT32_(0)          /* USART1 signal line function value: USART1_RTS1 */
#define PIO_PA24A_USART1_RTS1                      (_UINT32_(1) << 24)  /* USART1 signal: USART1_RTS1 */

#define PIN_PA21A_USART1_RXD1                      _UINT32_(21)         /* USART1 signal: USART1_RXD1 on PA21 mux A */
#define MUX_PA21A_USART1_RXD1                      _UINT32_(0)          /* USART1 signal line function value: USART1_RXD1 */
#define PIO_PA21A_USART1_RXD1                      (_UINT32_(1) << 21)  /* USART1 signal: USART1_RXD1 */

#define PIN_PB04D_USART1_TXD1                      _UINT32_(36)         /* USART1 signal: USART1_TXD1 on PB04 mux D */
#define MUX_PB04D_USART1_TXD1                      _UINT32_(3)          /* USART1 signal line function value: USART1_TXD1 */
#define PIO_PB04D_USART1_TXD1                      (_UINT32_(1) << 4)   /* USART1 signal: USART1_TXD1 */

/* =================== PIO definition for ICE peripheral ==================== */
#define PIN_PB07X1_ICE_SWDCLK                      _UINT32_(39)         /* ICE signal: ICE_SWDCLK on PB07 mux X1 */
#define PIO_PB07X1_ICE_SWDCLK                      (_UINT32_(1) << 7)   /* ICE signal: ICE_SWDCLK */

#define PIN_PB06X1_ICE_SWDIO                       _UINT32_(38)         /* ICE signal: ICE_SWDIO on PB06 mux X1 */
#define PIO_PB06X1_ICE_SWDIO                       (_UINT32_(1) << 6)   /* ICE signal: ICE_SWDIO */

#define PIN_PB07X1_ICE_TCK                         _UINT32_(39)         /* ICE signal: ICE_TCK on PB07 mux X1 */
#define PIO_PB07X1_ICE_TCK                         (_UINT32_(1) << 7)   /* ICE signal: ICE_TCK */

#define PIN_PB04X1_ICE_TDI                         _UINT32_(36)         /* ICE signal: ICE_TDI on PB04 mux X1 */
#define PIO_PB04X1_ICE_TDI                         (_UINT32_(1) << 4)   /* ICE signal: ICE_TDI */

#define PIN_PB05X1_ICE_TDO                         _UINT32_(37)         /* ICE signal: ICE_TDO on PB05 mux X1 */
#define PIO_PB05X1_ICE_TDO                         (_UINT32_(1) << 5)   /* ICE signal: ICE_TDO */

#define PIN_PB06X1_ICE_TMS                         _UINT32_(38)         /* ICE signal: ICE_TMS on PB06 mux X1 */
#define PIO_PB06X1_ICE_TMS                         (_UINT32_(1) << 6)   /* ICE signal: ICE_TMS */

#define PIN_PB05X1_ICE_TRACESWO                    _UINT32_(37)         /* ICE signal: ICE_TRACESWO on PB05 mux X1 */
#define PIO_PB05X1_ICE_TRACESWO                    (_UINT32_(1) << 5)   /* ICE signal: ICE_TRACESWO */

/* =================== PIO definition for TPIU peripheral =================== */
#define PIN_PD08D_TPIU_TRACECLK                    _UINT32_(104)        /* TPIU signal: TPIU_TRACECLK on PD08 mux D */
#define MUX_PD08D_TPIU_TRACECLK                    _UINT32_(3)          /* TPIU signal line function value: TPIU_TRACECLK */
#define PIO_PD08D_TPIU_TRACECLK                    (_UINT32_(1) << 8)   /* TPIU signal: TPIU_TRACECLK */

#define PIN_PD04C_TPIU_TRACED0                     _UINT32_(100)        /* TPIU signal: TPIU_TRACED0 on PD04 mux C */
#define MUX_PD04C_TPIU_TRACED0                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED0 */
#define PIO_PD04C_TPIU_TRACED0                     (_UINT32_(1) << 4)   /* TPIU signal: TPIU_TRACED0 */

#define PIN_PD05C_TPIU_TRACED1                     _UINT32_(101)        /* TPIU signal: TPIU_TRACED1 on PD05 mux C */
#define MUX_PD05C_TPIU_TRACED1                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED1 */
#define PIO_PD05C_TPIU_TRACED1                     (_UINT32_(1) << 5)   /* TPIU signal: TPIU_TRACED1 */

#define PIN_PD06C_TPIU_TRACED2                     _UINT32_(102)        /* TPIU signal: TPIU_TRACED2 on PD06 mux C */
#define MUX_PD06C_TPIU_TRACED2                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED2 */
#define PIO_PD06C_TPIU_TRACED2                     (_UINT32_(1) << 6)   /* TPIU signal: TPIU_TRACED2 */

#define PIN_PD07C_TPIU_TRACED3                     _UINT32_(103)        /* TPIU signal: TPIU_TRACED3 on PD07 mux C */
#define MUX_PD07C_TPIU_TRACED3                     _UINT32_(2)          /* TPIU signal line function value: TPIU_TRACED3 */
#define PIO_PD07C_TPIU_TRACED3                     (_UINT32_(1) << 7)   /* TPIU signal: TPIU_TRACED3 */



#endif /* _pic32cz2051ca70064_GPIO_H_ */

