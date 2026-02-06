/*
 * Component description for OSC32KCTRL
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
#ifndef _PIC32CMPL10_OSC32KCTRL_COMPONENT_H_
#define _PIC32CMPL10_OSC32KCTRL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                   SOFTWARE API DEFINITION FOR OSC32KCTRL                   */
/* ************************************************************************** */

/* -------- OSC32KCTRL_INTENCLR : (OSC32KCTRL Offset: 0x04) (R/W 32) Interrupt Enable Clear -------- */
#define OSC32KCTRL_INTENCLR_RESETVALUE        _UINT32_(0x00)                                       /*  (OSC32KCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define OSC32KCTRL_INTENCLR_XOSC32KRDY_Pos    _UINT32_(0)                                          /* (OSC32KCTRL_INTENCLR) XOSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk    (_UINT32_(0x1) << OSC32KCTRL_INTENCLR_XOSC32KRDY_Pos) /* (OSC32KCTRL_INTENCLR) XOSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENCLR_XOSC32KRDY(value) (OSC32KCTRL_INTENCLR_XOSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTENCLR_XOSC32KRDY_Pos)) /* Assignment of value for XOSC32KRDY in the OSC32KCTRL_INTENCLR register */
#define OSC32KCTRL_INTENCLR_OSC32KRDY_Pos     _UINT32_(1)                                          /* (OSC32KCTRL_INTENCLR) OSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENCLR_OSC32KRDY_Msk     (_UINT32_(0x1) << OSC32KCTRL_INTENCLR_OSC32KRDY_Pos) /* (OSC32KCTRL_INTENCLR) OSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENCLR_OSC32KRDY(value)  (OSC32KCTRL_INTENCLR_OSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTENCLR_OSC32KRDY_Pos)) /* Assignment of value for OSC32KRDY in the OSC32KCTRL_INTENCLR register */
#define OSC32KCTRL_INTENCLR_CLKFAIL_Pos       _UINT32_(2)                                          /* (OSC32KCTRL_INTENCLR) XOSC32K Clock Failure Detection Interrupt Enable Position */
#define OSC32KCTRL_INTENCLR_CLKFAIL_Msk       (_UINT32_(0x1) << OSC32KCTRL_INTENCLR_CLKFAIL_Pos)   /* (OSC32KCTRL_INTENCLR) XOSC32K Clock Failure Detection Interrupt Enable Mask */
#define OSC32KCTRL_INTENCLR_CLKFAIL(value)    (OSC32KCTRL_INTENCLR_CLKFAIL_Msk & (_UINT32_(value) << OSC32KCTRL_INTENCLR_CLKFAIL_Pos)) /* Assignment of value for CLKFAIL in the OSC32KCTRL_INTENCLR register */
#define OSC32KCTRL_INTENCLR_Msk               _UINT32_(0x00000007)                                 /* (OSC32KCTRL_INTENCLR) Register Mask  */


/* -------- OSC32KCTRL_INTENSET : (OSC32KCTRL Offset: 0x08) (R/W 32) Interrupt Enable Set -------- */
#define OSC32KCTRL_INTENSET_RESETVALUE        _UINT32_(0x00)                                       /*  (OSC32KCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define OSC32KCTRL_INTENSET_XOSC32KRDY_Pos    _UINT32_(0)                                          /* (OSC32KCTRL_INTENSET) XOSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENSET_XOSC32KRDY_Msk    (_UINT32_(0x1) << OSC32KCTRL_INTENSET_XOSC32KRDY_Pos) /* (OSC32KCTRL_INTENSET) XOSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENSET_XOSC32KRDY(value) (OSC32KCTRL_INTENSET_XOSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTENSET_XOSC32KRDY_Pos)) /* Assignment of value for XOSC32KRDY in the OSC32KCTRL_INTENSET register */
#define OSC32KCTRL_INTENSET_OSC32KRDY_Pos     _UINT32_(1)                                          /* (OSC32KCTRL_INTENSET) OSC32K Ready Interrupt Enable Position */
#define OSC32KCTRL_INTENSET_OSC32KRDY_Msk     (_UINT32_(0x1) << OSC32KCTRL_INTENSET_OSC32KRDY_Pos) /* (OSC32KCTRL_INTENSET) OSC32K Ready Interrupt Enable Mask */
#define OSC32KCTRL_INTENSET_OSC32KRDY(value)  (OSC32KCTRL_INTENSET_OSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTENSET_OSC32KRDY_Pos)) /* Assignment of value for OSC32KRDY in the OSC32KCTRL_INTENSET register */
#define OSC32KCTRL_INTENSET_CLKFAIL_Pos       _UINT32_(2)                                          /* (OSC32KCTRL_INTENSET) XOSC32K Clock Failure Detection Interrupt Enable Position */
#define OSC32KCTRL_INTENSET_CLKFAIL_Msk       (_UINT32_(0x1) << OSC32KCTRL_INTENSET_CLKFAIL_Pos)   /* (OSC32KCTRL_INTENSET) XOSC32K Clock Failure Detection Interrupt Enable Mask */
#define OSC32KCTRL_INTENSET_CLKFAIL(value)    (OSC32KCTRL_INTENSET_CLKFAIL_Msk & (_UINT32_(value) << OSC32KCTRL_INTENSET_CLKFAIL_Pos)) /* Assignment of value for CLKFAIL in the OSC32KCTRL_INTENSET register */
#define OSC32KCTRL_INTENSET_Msk               _UINT32_(0x00000007)                                 /* (OSC32KCTRL_INTENSET) Register Mask  */


/* -------- OSC32KCTRL_INTFLAG : (OSC32KCTRL Offset: 0x0C) (R/W 32) Interrupt Flag Status and Clear -------- */
#define OSC32KCTRL_INTFLAG_RESETVALUE         _UINT32_(0x00)                                       /*  (OSC32KCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define OSC32KCTRL_INTFLAG_XOSC32KRDY_Pos     _UINT32_(0)                                          /* (OSC32KCTRL_INTFLAG) XOSC32K Ready Position */
#define OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk     (_UINT32_(0x1) << OSC32KCTRL_INTFLAG_XOSC32KRDY_Pos) /* (OSC32KCTRL_INTFLAG) XOSC32K Ready Mask */
#define OSC32KCTRL_INTFLAG_XOSC32KRDY(value)  (OSC32KCTRL_INTFLAG_XOSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAG_XOSC32KRDY_Pos)) /* Assignment of value for XOSC32KRDY in the OSC32KCTRL_INTFLAG register */
#define OSC32KCTRL_INTFLAG_OSC32KRDY_Pos      _UINT32_(1)                                          /* (OSC32KCTRL_INTFLAG) OSC32K Ready Position */
#define OSC32KCTRL_INTFLAG_OSC32KRDY_Msk      (_UINT32_(0x1) << OSC32KCTRL_INTFLAG_OSC32KRDY_Pos)  /* (OSC32KCTRL_INTFLAG) OSC32K Ready Mask */
#define OSC32KCTRL_INTFLAG_OSC32KRDY(value)   (OSC32KCTRL_INTFLAG_OSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAG_OSC32KRDY_Pos)) /* Assignment of value for OSC32KRDY in the OSC32KCTRL_INTFLAG register */
#define OSC32KCTRL_INTFLAG_CLKFAIL_Pos        _UINT32_(2)                                          /* (OSC32KCTRL_INTFLAG) XOSC32K Clock Failure Detected Position */
#define OSC32KCTRL_INTFLAG_CLKFAIL_Msk        (_UINT32_(0x1) << OSC32KCTRL_INTFLAG_CLKFAIL_Pos)    /* (OSC32KCTRL_INTFLAG) XOSC32K Clock Failure Detected Mask */
#define OSC32KCTRL_INTFLAG_CLKFAIL(value)     (OSC32KCTRL_INTFLAG_CLKFAIL_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAG_CLKFAIL_Pos)) /* Assignment of value for CLKFAIL in the OSC32KCTRL_INTFLAG register */
#define OSC32KCTRL_INTFLAG_Msk                _UINT32_(0x00000007)                                 /* (OSC32KCTRL_INTFLAG) Register Mask  */


/* -------- OSC32KCTRL_INTFLAGSET : (OSC32KCTRL Offset: 0x10) (R/W 32) Interrupt Flag Software Set -------- */
#define OSC32KCTRL_INTFLAGSET_RESETVALUE      _UINT32_(0x00)                                       /*  (OSC32KCTRL_INTFLAGSET) Interrupt Flag Software Set  Reset Value */

#define OSC32KCTRL_INTFLAGSET_XOSC32KRDY_Pos  _UINT32_(0)                                          /* (OSC32KCTRL_INTFLAGSET) XOSC32K Ready Position */
#define OSC32KCTRL_INTFLAGSET_XOSC32KRDY_Msk  (_UINT32_(0x1) << OSC32KCTRL_INTFLAGSET_XOSC32KRDY_Pos) /* (OSC32KCTRL_INTFLAGSET) XOSC32K Ready Mask */
#define OSC32KCTRL_INTFLAGSET_XOSC32KRDY(value) (OSC32KCTRL_INTFLAGSET_XOSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAGSET_XOSC32KRDY_Pos)) /* Assignment of value for XOSC32KRDY in the OSC32KCTRL_INTFLAGSET register */
#define OSC32KCTRL_INTFLAGSET_OSC32KRDY_Pos   _UINT32_(1)                                          /* (OSC32KCTRL_INTFLAGSET) OSC32K Ready Position */
#define OSC32KCTRL_INTFLAGSET_OSC32KRDY_Msk   (_UINT32_(0x1) << OSC32KCTRL_INTFLAGSET_OSC32KRDY_Pos) /* (OSC32KCTRL_INTFLAGSET) OSC32K Ready Mask */
#define OSC32KCTRL_INTFLAGSET_OSC32KRDY(value) (OSC32KCTRL_INTFLAGSET_OSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAGSET_OSC32KRDY_Pos)) /* Assignment of value for OSC32KRDY in the OSC32KCTRL_INTFLAGSET register */
#define OSC32KCTRL_INTFLAGSET_CLKFAIL_Pos     _UINT32_(2)                                          /* (OSC32KCTRL_INTFLAGSET) XOSC32K Clock Failure Detected Position */
#define OSC32KCTRL_INTFLAGSET_CLKFAIL_Msk     (_UINT32_(0x1) << OSC32KCTRL_INTFLAGSET_CLKFAIL_Pos) /* (OSC32KCTRL_INTFLAGSET) XOSC32K Clock Failure Detected Mask */
#define OSC32KCTRL_INTFLAGSET_CLKFAIL(value)  (OSC32KCTRL_INTFLAGSET_CLKFAIL_Msk & (_UINT32_(value) << OSC32KCTRL_INTFLAGSET_CLKFAIL_Pos)) /* Assignment of value for CLKFAIL in the OSC32KCTRL_INTFLAGSET register */
#define OSC32KCTRL_INTFLAGSET_Msk             _UINT32_(0x00000007)                                 /* (OSC32KCTRL_INTFLAGSET) Register Mask  */


/* -------- OSC32KCTRL_STATUS : (OSC32KCTRL Offset: 0x14) ( R/ 32) Status -------- */
#define OSC32KCTRL_STATUS_RESETVALUE          _UINT32_(0x00)                                       /*  (OSC32KCTRL_STATUS) Status  Reset Value */

#define OSC32KCTRL_STATUS_XOSC32KRDY_Pos      _UINT32_(0)                                          /* (OSC32KCTRL_STATUS) XOSC32K Ready Position */
#define OSC32KCTRL_STATUS_XOSC32KRDY_Msk      (_UINT32_(0x1) << OSC32KCTRL_STATUS_XOSC32KRDY_Pos)  /* (OSC32KCTRL_STATUS) XOSC32K Ready Mask */
#define OSC32KCTRL_STATUS_XOSC32KRDY(value)   (OSC32KCTRL_STATUS_XOSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_STATUS_XOSC32KRDY_Pos)) /* Assignment of value for XOSC32KRDY in the OSC32KCTRL_STATUS register */
#define OSC32KCTRL_STATUS_OSC32KRDY_Pos       _UINT32_(1)                                          /* (OSC32KCTRL_STATUS) OSC32K Ready Position */
#define OSC32KCTRL_STATUS_OSC32KRDY_Msk       (_UINT32_(0x1) << OSC32KCTRL_STATUS_OSC32KRDY_Pos)   /* (OSC32KCTRL_STATUS) OSC32K Ready Mask */
#define OSC32KCTRL_STATUS_OSC32KRDY(value)    (OSC32KCTRL_STATUS_OSC32KRDY_Msk & (_UINT32_(value) << OSC32KCTRL_STATUS_OSC32KRDY_Pos)) /* Assignment of value for OSC32KRDY in the OSC32KCTRL_STATUS register */
#define OSC32KCTRL_STATUS_CLKFAIL_Pos         _UINT32_(2)                                          /* (OSC32KCTRL_STATUS) XOSC32K Clock Failure Detected Position */
#define OSC32KCTRL_STATUS_CLKFAIL_Msk         (_UINT32_(0x1) << OSC32KCTRL_STATUS_CLKFAIL_Pos)     /* (OSC32KCTRL_STATUS) XOSC32K Clock Failure Detected Mask */
#define OSC32KCTRL_STATUS_CLKFAIL(value)      (OSC32KCTRL_STATUS_CLKFAIL_Msk & (_UINT32_(value) << OSC32KCTRL_STATUS_CLKFAIL_Pos)) /* Assignment of value for CLKFAIL in the OSC32KCTRL_STATUS register */
#define OSC32KCTRL_STATUS_CLKSW_Pos           _UINT32_(3)                                          /* (OSC32KCTRL_STATUS) XOSC32K Clock Switch Position */
#define OSC32KCTRL_STATUS_CLKSW_Msk           (_UINT32_(0x1) << OSC32KCTRL_STATUS_CLKSW_Pos)       /* (OSC32KCTRL_STATUS) XOSC32K Clock Switch Mask */
#define OSC32KCTRL_STATUS_CLKSW(value)        (OSC32KCTRL_STATUS_CLKSW_Msk & (_UINT32_(value) << OSC32KCTRL_STATUS_CLKSW_Pos)) /* Assignment of value for CLKSW in the OSC32KCTRL_STATUS register */
#define OSC32KCTRL_STATUS_Msk                 _UINT32_(0x0000000F)                                 /* (OSC32KCTRL_STATUS) Register Mask  */


/* -------- OSC32KCTRL_RTCCTRL : (OSC32KCTRL Offset: 0x18) (R/W 32) RTC Control -------- */
#define OSC32KCTRL_RTCCTRL_RESETVALUE         _UINT32_(0x00)                                       /*  (OSC32KCTRL_RTCCTRL) RTC Control  Reset Value */

#define OSC32KCTRL_RTCCTRL_RTCSEL_Pos         _UINT32_(0)                                          /* (OSC32KCTRL_RTCCTRL) RTC Clock Source Selection Position */
#define OSC32KCTRL_RTCCTRL_RTCSEL_Msk         (_UINT32_(0x7) << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)     /* (OSC32KCTRL_RTCCTRL) RTC Clock Source Selection Mask */
#define OSC32KCTRL_RTCCTRL_RTCSEL(value)      (OSC32KCTRL_RTCCTRL_RTCSEL_Msk & (_UINT32_(value) << OSC32KCTRL_RTCCTRL_RTCSEL_Pos)) /* Assignment of value for RTCSEL in the OSC32KCTRL_RTCCTRL register */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K_Val _UINT32_(0x2)                                        /* (OSC32KCTRL_RTCCTRL) 1.024 kHz from the internal 32.768 kHz oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K_Val _UINT32_(0x3)                                        /* (OSC32KCTRL_RTCCTRL) 32.768 kHz from the internal 32.768 kHz oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K_Val _UINT32_(0x4)                                        /* (OSC32KCTRL_RTCCTRL) 1.024 kHz from the external 32.768 kHz crystal oscillator  */
#define   OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K_Val _UINT32_(0x5)                                        /* (OSC32KCTRL_RTCCTRL) 32.768 kHz from the external 32.768 kHz crystal oscillator  */
#define OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K       (OSC32KCTRL_RTCCTRL_RTCSEL_OSC1K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos) /* (OSC32KCTRL_RTCCTRL) 1.024 kHz from the internal 32.768 kHz oscillator Position */
#define OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K      (OSC32KCTRL_RTCCTRL_RTCSEL_OSC32K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos) /* (OSC32KCTRL_RTCCTRL) 32.768 kHz from the internal 32.768 kHz oscillator Position */
#define OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K      (OSC32KCTRL_RTCCTRL_RTCSEL_XOSC1K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos) /* (OSC32KCTRL_RTCCTRL) 1.024 kHz from the external 32.768 kHz crystal oscillator Position */
#define OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K     (OSC32KCTRL_RTCCTRL_RTCSEL_XOSC32K_Val << OSC32KCTRL_RTCCTRL_RTCSEL_Pos) /* (OSC32KCTRL_RTCCTRL) 32.768 kHz from the external 32.768 kHz crystal oscillator Position */
#define OSC32KCTRL_RTCCTRL_Msk                _UINT32_(0x00000007)                                 /* (OSC32KCTRL_RTCCTRL) Register Mask  */


/* -------- OSC32KCTRL_XOSC32KCTRL : (OSC32KCTRL Offset: 0x1C) (R/W 32) XOSC32K Control -------- */
#define OSC32KCTRL_XOSC32KCTRL_RESETVALUE     _UINT32_(0x80)                                       /*  (OSC32KCTRL_XOSC32KCTRL) XOSC32K Control  Reset Value */

#define OSC32KCTRL_XOSC32KCTRL_ENABLE_Pos     _UINT32_(1)                                          /* (OSC32KCTRL_XOSC32KCTRL) Oscillator Enable Position */
#define OSC32KCTRL_XOSC32KCTRL_ENABLE_Msk     (_UINT32_(0x1) << OSC32KCTRL_XOSC32KCTRL_ENABLE_Pos) /* (OSC32KCTRL_XOSC32KCTRL) Oscillator Enable Mask */
#define OSC32KCTRL_XOSC32KCTRL_ENABLE(value)  (OSC32KCTRL_XOSC32KCTRL_ENABLE_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_ENABLE_Pos)) /* Assignment of value for ENABLE in the OSC32KCTRL_XOSC32KCTRL register */
#define OSC32KCTRL_XOSC32KCTRL_XTALEN_Pos     _UINT32_(2)                                          /* (OSC32KCTRL_XOSC32KCTRL) External Source Select Position */
#define OSC32KCTRL_XOSC32KCTRL_XTALEN_Msk     (_UINT32_(0x1) << OSC32KCTRL_XOSC32KCTRL_XTALEN_Pos) /* (OSC32KCTRL_XOSC32KCTRL) External Source Select Mask */
#define OSC32KCTRL_XOSC32KCTRL_XTALEN(value)  (OSC32KCTRL_XOSC32KCTRL_XTALEN_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_XTALEN_Pos)) /* Assignment of value for XTALEN in the OSC32KCTRL_XOSC32KCTRL register */
#define   OSC32KCTRL_XOSC32KCTRL_XTALEN_EXTCLK_Val _UINT32_(0x0)                                        /* (OSC32KCTRL_XOSC32KCTRL) External Clock on the XTAL32K1 pin. XTAL32K2 is available for other functions. The CSUT timer is disregarded, and no start-up time is used.  */
#define   OSC32KCTRL_XOSC32KCTRL_XTALEN_XTAL_Val _UINT32_(0x1)                                        /* (OSC32KCTRL_XOSC32KCTRL) External Crystal connected to the XTAL32K1 and XTAL32K2 pins  */
#define OSC32KCTRL_XOSC32KCTRL_XTALEN_EXTCLK  (OSC32KCTRL_XOSC32KCTRL_XTALEN_EXTCLK_Val << OSC32KCTRL_XOSC32KCTRL_XTALEN_Pos) /* (OSC32KCTRL_XOSC32KCTRL) External Clock on the XTAL32K1 pin. XTAL32K2 is available for other functions. The CSUT timer is disregarded, and no start-up time is used. Position */
#define OSC32KCTRL_XOSC32KCTRL_XTALEN_XTAL    (OSC32KCTRL_XOSC32KCTRL_XTALEN_XTAL_Val << OSC32KCTRL_XOSC32KCTRL_XTALEN_Pos) /* (OSC32KCTRL_XOSC32KCTRL) External Crystal connected to the XTAL32K1 and XTAL32K2 pins Position */
#define OSC32KCTRL_XOSC32KCTRL_ONDEMAND_Pos   _UINT32_(7)                                          /* (OSC32KCTRL_XOSC32KCTRL) On-Demand Operation Position */
#define OSC32KCTRL_XOSC32KCTRL_ONDEMAND_Msk   (_UINT32_(0x1) << OSC32KCTRL_XOSC32KCTRL_ONDEMAND_Pos) /* (OSC32KCTRL_XOSC32KCTRL) On-Demand Operation Mask */
#define OSC32KCTRL_XOSC32KCTRL_ONDEMAND(value) (OSC32KCTRL_XOSC32KCTRL_ONDEMAND_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the OSC32KCTRL_XOSC32KCTRL register */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_Pos       _UINT32_(8)                                          /* (OSC32KCTRL_XOSC32KCTRL) Crystal Oscillator Start-Up Time Position */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_Msk       (_UINT32_(0x3) << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos)   /* (OSC32KCTRL_XOSC32KCTRL) Crystal Oscillator Start-Up Time Mask */
#define OSC32KCTRL_XOSC32KCTRL_CSUT(value)    (OSC32KCTRL_XOSC32KCTRL_CSUT_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos)) /* Assignment of value for CSUT in the OSC32KCTRL_XOSC32KCTRL register */
#define   OSC32KCTRL_XOSC32KCTRL_CSUT_1K_Val  _UINT32_(0x0)                                        /* (OSC32KCTRL_XOSC32KCTRL) 1K XOSC32K cycles  */
#define   OSC32KCTRL_XOSC32KCTRL_CSUT_16K_Val _UINT32_(0x1)                                        /* (OSC32KCTRL_XOSC32KCTRL) 16K XOSC32K cycles  */
#define   OSC32KCTRL_XOSC32KCTRL_CSUT_32K_Val _UINT32_(0x2)                                        /* (OSC32KCTRL_XOSC32KCTRL) 32K XOSC32K cycles  */
#define   OSC32KCTRL_XOSC32KCTRL_CSUT_64K_Val _UINT32_(0x3)                                        /* (OSC32KCTRL_XOSC32KCTRL) 64K XOSC32K cycles  */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_1K        (OSC32KCTRL_XOSC32KCTRL_CSUT_1K_Val << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos) /* (OSC32KCTRL_XOSC32KCTRL) 1K XOSC32K cycles Position */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_16K       (OSC32KCTRL_XOSC32KCTRL_CSUT_16K_Val << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos) /* (OSC32KCTRL_XOSC32KCTRL) 16K XOSC32K cycles Position */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_32K       (OSC32KCTRL_XOSC32KCTRL_CSUT_32K_Val << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos) /* (OSC32KCTRL_XOSC32KCTRL) 32K XOSC32K cycles Position */
#define OSC32KCTRL_XOSC32KCTRL_CSUT_64K       (OSC32KCTRL_XOSC32KCTRL_CSUT_64K_Val << OSC32KCTRL_XOSC32KCTRL_CSUT_Pos) /* (OSC32KCTRL_XOSC32KCTRL) 64K XOSC32K cycles Position */
#define OSC32KCTRL_XOSC32KCTRL_LPMODE_Pos     _UINT32_(13)                                         /* (OSC32KCTRL_XOSC32KCTRL) Low Power Mode Position */
#define OSC32KCTRL_XOSC32KCTRL_LPMODE_Msk     (_UINT32_(0x1) << OSC32KCTRL_XOSC32KCTRL_LPMODE_Pos) /* (OSC32KCTRL_XOSC32KCTRL) Low Power Mode Mask */
#define OSC32KCTRL_XOSC32KCTRL_LPMODE(value)  (OSC32KCTRL_XOSC32KCTRL_LPMODE_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_LPMODE_Pos)) /* Assignment of value for LPMODE in the OSC32KCTRL_XOSC32KCTRL register */
#define OSC32KCTRL_XOSC32KCTRL_WRTLOCK_Pos    _UINT32_(31)                                         /* (OSC32KCTRL_XOSC32KCTRL) Write Lock Position */
#define OSC32KCTRL_XOSC32KCTRL_WRTLOCK_Msk    (_UINT32_(0x1) << OSC32KCTRL_XOSC32KCTRL_WRTLOCK_Pos) /* (OSC32KCTRL_XOSC32KCTRL) Write Lock Mask */
#define OSC32KCTRL_XOSC32KCTRL_WRTLOCK(value) (OSC32KCTRL_XOSC32KCTRL_WRTLOCK_Msk & (_UINT32_(value) << OSC32KCTRL_XOSC32KCTRL_WRTLOCK_Pos)) /* Assignment of value for WRTLOCK in the OSC32KCTRL_XOSC32KCTRL register */
#define OSC32KCTRL_XOSC32KCTRL_Msk            _UINT32_(0x80002386)                                 /* (OSC32KCTRL_XOSC32KCTRL) Register Mask  */


/* -------- OSC32KCTRL_CFDCTRL : (OSC32KCTRL Offset: 0x20) (R/W 32) Clock Failure Detector Control -------- */
#define OSC32KCTRL_CFDCTRL_RESETVALUE         _UINT32_(0x00)                                       /*  (OSC32KCTRL_CFDCTRL) Clock Failure Detector Control  Reset Value */

#define OSC32KCTRL_CFDCTRL_CFDEN_Pos          _UINT32_(0)                                          /* (OSC32KCTRL_CFDCTRL) Clock Failure Detector Enable Position */
#define OSC32KCTRL_CFDCTRL_CFDEN_Msk          (_UINT32_(0x1) << OSC32KCTRL_CFDCTRL_CFDEN_Pos)      /* (OSC32KCTRL_CFDCTRL) Clock Failure Detector Enable Mask */
#define OSC32KCTRL_CFDCTRL_CFDEN(value)       (OSC32KCTRL_CFDCTRL_CFDEN_Msk & (_UINT32_(value) << OSC32KCTRL_CFDCTRL_CFDEN_Pos)) /* Assignment of value for CFDEN in the OSC32KCTRL_CFDCTRL register */
#define OSC32KCTRL_CFDCTRL_SWBACK_Pos         _UINT32_(1)                                          /* (OSC32KCTRL_CFDCTRL) Clock Switch Back Enable Position */
#define OSC32KCTRL_CFDCTRL_SWBACK_Msk         (_UINT32_(0x1) << OSC32KCTRL_CFDCTRL_SWBACK_Pos)     /* (OSC32KCTRL_CFDCTRL) Clock Switch Back Enable Mask */
#define OSC32KCTRL_CFDCTRL_SWBACK(value)      (OSC32KCTRL_CFDCTRL_SWBACK_Msk & (_UINT32_(value) << OSC32KCTRL_CFDCTRL_SWBACK_Pos)) /* Assignment of value for SWBACK in the OSC32KCTRL_CFDCTRL register */
#define OSC32KCTRL_CFDCTRL_CFDPRESC_Pos       _UINT32_(2)                                          /* (OSC32KCTRL_CFDCTRL) Clock Failure Detector Prescaler Position */
#define OSC32KCTRL_CFDCTRL_CFDPRESC_Msk       (_UINT32_(0x1) << OSC32KCTRL_CFDCTRL_CFDPRESC_Pos)   /* (OSC32KCTRL_CFDCTRL) Clock Failure Detector Prescaler Mask */
#define OSC32KCTRL_CFDCTRL_CFDPRESC(value)    (OSC32KCTRL_CFDCTRL_CFDPRESC_Msk & (_UINT32_(value) << OSC32KCTRL_CFDCTRL_CFDPRESC_Pos)) /* Assignment of value for CFDPRESC in the OSC32KCTRL_CFDCTRL register */
#define OSC32KCTRL_CFDCTRL_Msk                _UINT32_(0x00000007)                                 /* (OSC32KCTRL_CFDCTRL) Register Mask  */


/* -------- OSC32KCTRL_EVCTRL : (OSC32KCTRL Offset: 0x24) (R/W 32) Event Control -------- */
#define OSC32KCTRL_EVCTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (OSC32KCTRL_EVCTRL) Event Control  Reset Value */

#define OSC32KCTRL_EVCTRL_CFDEO_Pos           _UINT32_(0)                                          /* (OSC32KCTRL_EVCTRL) Clock Failure Detector Event Output Enable Position */
#define OSC32KCTRL_EVCTRL_CFDEO_Msk           (_UINT32_(0x1) << OSC32KCTRL_EVCTRL_CFDEO_Pos)       /* (OSC32KCTRL_EVCTRL) Clock Failure Detector Event Output Enable Mask */
#define OSC32KCTRL_EVCTRL_CFDEO(value)        (OSC32KCTRL_EVCTRL_CFDEO_Msk & (_UINT32_(value) << OSC32KCTRL_EVCTRL_CFDEO_Pos)) /* Assignment of value for CFDEO in the OSC32KCTRL_EVCTRL register */
#define OSC32KCTRL_EVCTRL_Msk                 _UINT32_(0x00000001)                                 /* (OSC32KCTRL_EVCTRL) Register Mask  */


/* -------- OSC32KCTRL_OSC32KCTRL : (OSC32KCTRL Offset: 0x28) (R/W 32) 32.768 kHz Internal Oscillator (OSC32K) Control -------- */
#define OSC32KCTRL_OSC32KCTRL_RESETVALUE      _UINT32_(0x80)                                       /*  (OSC32KCTRL_OSC32KCTRL) 32.768 kHz Internal Oscillator (OSC32K) Control  Reset Value */

#define OSC32KCTRL_OSC32KCTRL_ONDEMAND_Pos    _UINT32_(7)                                          /* (OSC32KCTRL_OSC32KCTRL) On-Demand Operation Position */
#define OSC32KCTRL_OSC32KCTRL_ONDEMAND_Msk    (_UINT32_(0x1) << OSC32KCTRL_OSC32KCTRL_ONDEMAND_Pos) /* (OSC32KCTRL_OSC32KCTRL) On-Demand Operation Mask */
#define OSC32KCTRL_OSC32KCTRL_ONDEMAND(value) (OSC32KCTRL_OSC32KCTRL_ONDEMAND_Msk & (_UINT32_(value) << OSC32KCTRL_OSC32KCTRL_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the OSC32KCTRL_OSC32KCTRL register */
#define OSC32KCTRL_OSC32KCTRL_WRTLOCK_Pos     _UINT32_(31)                                         /* (OSC32KCTRL_OSC32KCTRL) Write Lock Position */
#define OSC32KCTRL_OSC32KCTRL_WRTLOCK_Msk     (_UINT32_(0x1) << OSC32KCTRL_OSC32KCTRL_WRTLOCK_Pos) /* (OSC32KCTRL_OSC32KCTRL) Write Lock Mask */
#define OSC32KCTRL_OSC32KCTRL_WRTLOCK(value)  (OSC32KCTRL_OSC32KCTRL_WRTLOCK_Msk & (_UINT32_(value) << OSC32KCTRL_OSC32KCTRL_WRTLOCK_Pos)) /* Assignment of value for WRTLOCK in the OSC32KCTRL_OSC32KCTRL register */
#define OSC32KCTRL_OSC32KCTRL_Msk             _UINT32_(0x80000080)                                 /* (OSC32KCTRL_OSC32KCTRL) Register Mask  */


/* -------- OSC32KCTRL_WPCTRL : (OSC32KCTRL Offset: 0x2C) (R/W 32) Write Protection Control -------- */
#define OSC32KCTRL_WPCTRL_RESETVALUE          _UINT32_(0x00)                                       /*  (OSC32KCTRL_WPCTRL) Write Protection Control  Reset Value */

#define OSC32KCTRL_WPCTRL_WPEN_Pos            _UINT32_(0)                                          /* (OSC32KCTRL_WPCTRL) Write Protection Enable Position */
#define OSC32KCTRL_WPCTRL_WPEN_Msk            (_UINT32_(0x1) << OSC32KCTRL_WPCTRL_WPEN_Pos)        /* (OSC32KCTRL_WPCTRL) Write Protection Enable Mask */
#define OSC32KCTRL_WPCTRL_WPEN(value)         (OSC32KCTRL_WPCTRL_WPEN_Msk & (_UINT32_(value) << OSC32KCTRL_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the OSC32KCTRL_WPCTRL register */
#define OSC32KCTRL_WPCTRL_WPLCK_Pos           _UINT32_(1)                                          /* (OSC32KCTRL_WPCTRL) Write Protection Lock Position */
#define OSC32KCTRL_WPCTRL_WPLCK_Msk           (_UINT32_(0x1) << OSC32KCTRL_WPCTRL_WPLCK_Pos)       /* (OSC32KCTRL_WPCTRL) Write Protection Lock Mask */
#define OSC32KCTRL_WPCTRL_WPLCK(value)        (OSC32KCTRL_WPCTRL_WPLCK_Msk & (_UINT32_(value) << OSC32KCTRL_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the OSC32KCTRL_WPCTRL register */
#define OSC32KCTRL_WPCTRL_WPKEY_Pos           _UINT32_(8)                                          /* (OSC32KCTRL_WPCTRL) Write Protection Key Position */
#define OSC32KCTRL_WPCTRL_WPKEY_Msk           (_UINT32_(0xFFFFFF) << OSC32KCTRL_WPCTRL_WPKEY_Pos)  /* (OSC32KCTRL_WPCTRL) Write Protection Key Mask */
#define OSC32KCTRL_WPCTRL_WPKEY(value)        (OSC32KCTRL_WPCTRL_WPKEY_Msk & (_UINT32_(value) << OSC32KCTRL_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the OSC32KCTRL_WPCTRL register */
#define   OSC32KCTRL_WPCTRL_WPKEY_KEY_Val     _UINT32_(0x4F5343)                                   /* (OSC32KCTRL_WPCTRL) Allow writes to the WPCTRL register  */
#define OSC32KCTRL_WPCTRL_WPKEY_KEY           (OSC32KCTRL_WPCTRL_WPKEY_KEY_Val << OSC32KCTRL_WPCTRL_WPKEY_Pos) /* (OSC32KCTRL_WPCTRL) Allow writes to the WPCTRL register Position */
#define OSC32KCTRL_WPCTRL_Msk                 _UINT32_(0xFFFFFF03)                                 /* (OSC32KCTRL_WPCTRL) Register Mask  */


/* OSC32KCTRL register offsets definitions */
#define OSC32KCTRL_INTENCLR_REG_OFST   _UINT32_(0x04)      /* (OSC32KCTRL_INTENCLR) Interrupt Enable Clear Offset */
#define OSC32KCTRL_INTENSET_REG_OFST   _UINT32_(0x08)      /* (OSC32KCTRL_INTENSET) Interrupt Enable Set Offset */
#define OSC32KCTRL_INTFLAG_REG_OFST    _UINT32_(0x0C)      /* (OSC32KCTRL_INTFLAG) Interrupt Flag Status and Clear Offset */
#define OSC32KCTRL_INTFLAGSET_REG_OFST _UINT32_(0x10)      /* (OSC32KCTRL_INTFLAGSET) Interrupt Flag Software Set Offset */
#define OSC32KCTRL_STATUS_REG_OFST     _UINT32_(0x14)      /* (OSC32KCTRL_STATUS) Status Offset */
#define OSC32KCTRL_RTCCTRL_REG_OFST    _UINT32_(0x18)      /* (OSC32KCTRL_RTCCTRL) RTC Control Offset */
#define OSC32KCTRL_XOSC32KCTRL_REG_OFST _UINT32_(0x1C)      /* (OSC32KCTRL_XOSC32KCTRL) XOSC32K Control Offset */
#define OSC32KCTRL_CFDCTRL_REG_OFST    _UINT32_(0x20)      /* (OSC32KCTRL_CFDCTRL) Clock Failure Detector Control Offset */
#define OSC32KCTRL_EVCTRL_REG_OFST     _UINT32_(0x24)      /* (OSC32KCTRL_EVCTRL) Event Control Offset */
#define OSC32KCTRL_OSC32KCTRL_REG_OFST _UINT32_(0x28)      /* (OSC32KCTRL_OSC32KCTRL) 32.768 kHz Internal Oscillator (OSC32K) Control Offset */
#define OSC32KCTRL_WPCTRL_REG_OFST     _UINT32_(0x2C)      /* (OSC32KCTRL_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* OSC32KCTRL register API structure */
typedef struct
{  /* 32.768 kHz Oscillators Controller */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       OSC32KCTRL_INTENCLR; /* Offset: 0x04 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       OSC32KCTRL_INTENSET; /* Offset: 0x08 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       OSC32KCTRL_INTFLAG; /* Offset: 0x0C (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       OSC32KCTRL_INTFLAGSET; /* Offset: 0x10 (R/W  32) Interrupt Flag Software Set */
  __I   uint32_t                       OSC32KCTRL_STATUS;  /* Offset: 0x14 (R/   32) Status */
  __IO  uint32_t                       OSC32KCTRL_RTCCTRL; /* Offset: 0x18 (R/W  32) RTC Control */
  __IO  uint32_t                       OSC32KCTRL_XOSC32KCTRL; /* Offset: 0x1C (R/W  32) XOSC32K Control */
  __IO  uint32_t                       OSC32KCTRL_CFDCTRL; /* Offset: 0x20 (R/W  32) Clock Failure Detector Control */
  __IO  uint32_t                       OSC32KCTRL_EVCTRL;  /* Offset: 0x24 (R/W  32) Event Control */
  __IO  uint32_t                       OSC32KCTRL_OSC32KCTRL; /* Offset: 0x28 (R/W  32) 32.768 kHz Internal Oscillator (OSC32K) Control */
  __IO  uint32_t                       OSC32KCTRL_WPCTRL;  /* Offset: 0x2C (R/W  32) Write Protection Control */
} osc32kctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_OSC32KCTRL_COMPONENT_H_ */
