/*
 * Component description for AC
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
#ifndef _PIC32CMPL10_AC_COMPONENT_H_
#define _PIC32CMPL10_AC_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                       SOFTWARE API DEFINITION FOR AC                       */
/* ************************************************************************** */

/* -------- AC_COMPCTRLA : (AC Offset: 0x00) (R/W 32) Comparator # Comparator Control A -------- */
#define AC_COMPCTRLA_RESETVALUE               _UINT32_(0x00)                                       /*  (AC_COMPCTRLA) Comparator # Comparator Control A  Reset Value */

#define AC_COMPCTRLA_ENABLE_Pos               _UINT32_(1)                                          /* (AC_COMPCTRLA) Comparator Enable Position */
#define AC_COMPCTRLA_ENABLE_Msk               (_UINT32_(0x1) << AC_COMPCTRLA_ENABLE_Pos)           /* (AC_COMPCTRLA) Comparator Enable Mask */
#define AC_COMPCTRLA_ENABLE(value)            (AC_COMPCTRLA_ENABLE_Msk & (_UINT32_(value) << AC_COMPCTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the AC_COMPCTRLA register */
#define AC_COMPCTRLA_OUT_Pos                  _UINT32_(2)                                          /* (AC_COMPCTRLA) Output Enable Position */
#define AC_COMPCTRLA_OUT_Msk                  (_UINT32_(0x1) << AC_COMPCTRLA_OUT_Pos)              /* (AC_COMPCTRLA) Output Enable Mask */
#define AC_COMPCTRLA_OUT(value)               (AC_COMPCTRLA_OUT_Msk & (_UINT32_(value) << AC_COMPCTRLA_OUT_Pos)) /* Assignment of value for OUT in the AC_COMPCTRLA register */
#define AC_COMPCTRLA_HYSTEN_Pos               _UINT32_(3)                                          /* (AC_COMPCTRLA) Hysteresis Enable Position */
#define AC_COMPCTRLA_HYSTEN_Msk               (_UINT32_(0x1) << AC_COMPCTRLA_HYSTEN_Pos)           /* (AC_COMPCTRLA) Hysteresis Enable Mask */
#define AC_COMPCTRLA_HYSTEN(value)            (AC_COMPCTRLA_HYSTEN_Msk & (_UINT32_(value) << AC_COMPCTRLA_HYSTEN_Pos)) /* Assignment of value for HYSTEN in the AC_COMPCTRLA register */
#define AC_COMPCTRLA_INTSEL_Pos               _UINT32_(4)                                          /* (AC_COMPCTRLA) Interrupt Selection Position */
#define AC_COMPCTRLA_INTSEL_Msk               (_UINT32_(0x3) << AC_COMPCTRLA_INTSEL_Pos)           /* (AC_COMPCTRLA) Interrupt Selection Mask */
#define AC_COMPCTRLA_INTSEL(value)            (AC_COMPCTRLA_INTSEL_Msk & (_UINT32_(value) << AC_COMPCTRLA_INTSEL_Pos)) /* Assignment of value for INTSEL in the AC_COMPCTRLA register */
#define   AC_COMPCTRLA_INTSEL_TOGGLE_Val      _UINT32_(0x0)                                        /* (AC_COMPCTRLA) Interrupt on comparator n output toggle  */
#define   AC_COMPCTRLA_INTSEL_RISING_Val      _UINT32_(0x1)                                        /* (AC_COMPCTRLA) Interrupt on comparator n output rising edge  */
#define   AC_COMPCTRLA_INTSEL_FALLING_Val     _UINT32_(0x2)                                        /* (AC_COMPCTRLA) Interrupt on comparator n output falling edge  */
#define AC_COMPCTRLA_INTSEL_TOGGLE            (AC_COMPCTRLA_INTSEL_TOGGLE_Val << AC_COMPCTRLA_INTSEL_Pos) /* (AC_COMPCTRLA) Interrupt on comparator n output toggle Position */
#define AC_COMPCTRLA_INTSEL_RISING            (AC_COMPCTRLA_INTSEL_RISING_Val << AC_COMPCTRLA_INTSEL_Pos) /* (AC_COMPCTRLA) Interrupt on comparator n output rising edge Position */
#define AC_COMPCTRLA_INTSEL_FALLING           (AC_COMPCTRLA_INTSEL_FALLING_Val << AC_COMPCTRLA_INTSEL_Pos) /* (AC_COMPCTRLA) Interrupt on comparator n output falling edge Position */
#define AC_COMPCTRLA_RUNSTDBY_Pos             _UINT32_(6)                                          /* (AC_COMPCTRLA) Run in Standby Position */
#define AC_COMPCTRLA_RUNSTDBY_Msk             (_UINT32_(0x1) << AC_COMPCTRLA_RUNSTDBY_Pos)         /* (AC_COMPCTRLA) Run in Standby Mask */
#define AC_COMPCTRLA_RUNSTDBY(value)          (AC_COMPCTRLA_RUNSTDBY_Msk & (_UINT32_(value) << AC_COMPCTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the AC_COMPCTRLA register */
#define AC_COMPCTRLA_MUXNEG_Pos               _UINT32_(8)                                          /* (AC_COMPCTRLA) Negative Input Selection Position */
#define AC_COMPCTRLA_MUXNEG_Msk               (_UINT32_(0x7) << AC_COMPCTRLA_MUXNEG_Pos)           /* (AC_COMPCTRLA) Negative Input Selection Mask */
#define AC_COMPCTRLA_MUXNEG(value)            (AC_COMPCTRLA_MUXNEG_Msk & (_UINT32_(value) << AC_COMPCTRLA_MUXNEG_Pos)) /* Assignment of value for MUXNEG in the AC_COMPCTRLA register */
#define   AC_COMPCTRLA_MUXNEG_AINN0_Val       _UINT32_(0x0)                                        /* (AC_COMPCTRLA) Negative pin 0  */
#define   AC_COMPCTRLA_MUXNEG_AINN1_Val       _UINT32_(0x1)                                        /* (AC_COMPCTRLA) Negative pin 1  */
#define   AC_COMPCTRLA_MUXNEG_AINN2_Val       _UINT32_(0x2)                                        /* (AC_COMPCTRLA) Negative pin 2  */
#define   AC_COMPCTRLA_MUXNEG_VREFSCALE_Val   _UINT32_(0x7)                                        /* (AC_COMPCTRLA) Voltage Reference Scaler  */
#define AC_COMPCTRLA_MUXNEG_AINN0             (AC_COMPCTRLA_MUXNEG_AINN0_Val << AC_COMPCTRLA_MUXNEG_Pos) /* (AC_COMPCTRLA) Negative pin 0 Position */
#define AC_COMPCTRLA_MUXNEG_AINN1             (AC_COMPCTRLA_MUXNEG_AINN1_Val << AC_COMPCTRLA_MUXNEG_Pos) /* (AC_COMPCTRLA) Negative pin 1 Position */
#define AC_COMPCTRLA_MUXNEG_AINN2             (AC_COMPCTRLA_MUXNEG_AINN2_Val << AC_COMPCTRLA_MUXNEG_Pos) /* (AC_COMPCTRLA) Negative pin 2 Position */
#define AC_COMPCTRLA_MUXNEG_VREFSCALE         (AC_COMPCTRLA_MUXNEG_VREFSCALE_Val << AC_COMPCTRLA_MUXNEG_Pos) /* (AC_COMPCTRLA) Voltage Reference Scaler Position */
#define AC_COMPCTRLA_MUXPOS_Pos               _UINT32_(12)                                         /* (AC_COMPCTRLA) Positive Input Selection Position */
#define AC_COMPCTRLA_MUXPOS_Msk               (_UINT32_(0x7) << AC_COMPCTRLA_MUXPOS_Pos)           /* (AC_COMPCTRLA) Positive Input Selection Mask */
#define AC_COMPCTRLA_MUXPOS(value)            (AC_COMPCTRLA_MUXPOS_Msk & (_UINT32_(value) << AC_COMPCTRLA_MUXPOS_Pos)) /* Assignment of value for MUXPOS in the AC_COMPCTRLA register */
#define   AC_COMPCTRLA_MUXPOS_AINP0_Val       _UINT32_(0x0)                                        /* (AC_COMPCTRLA) Positive pin 0  */
#define   AC_COMPCTRLA_MUXPOS_AINP1_Val       _UINT32_(0x1)                                        /* (AC_COMPCTRLA) Positive pin 1  */
#define   AC_COMPCTRLA_MUXPOS_AINP2_Val       _UINT32_(0x2)                                        /* (AC_COMPCTRLA) Positive pin 2  */
#define   AC_COMPCTRLA_MUXPOS_AINP3_Val       _UINT32_(0x3)                                        /* (AC_COMPCTRLA) Positive pin 3  */
#define   AC_COMPCTRLA_MUXPOS_AINP5_Val       _UINT32_(0x5)                                        /* (AC_COMPCTRLA) Positive pin 5  */
#define   AC_COMPCTRLA_MUXPOS_AINP6_Val       _UINT32_(0x6)                                        /* (AC_COMPCTRLA) Positive pin 6  */
#define   AC_COMPCTRLA_MUXPOS_VDDIO2DIV10_Val _UINT32_(0x7)                                        /* (AC_COMPCTRLA) VDDIO2 Div10  */
#define AC_COMPCTRLA_MUXPOS_AINP0             (AC_COMPCTRLA_MUXPOS_AINP0_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 0 Position */
#define AC_COMPCTRLA_MUXPOS_AINP1             (AC_COMPCTRLA_MUXPOS_AINP1_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 1 Position */
#define AC_COMPCTRLA_MUXPOS_AINP2             (AC_COMPCTRLA_MUXPOS_AINP2_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 2 Position */
#define AC_COMPCTRLA_MUXPOS_AINP3             (AC_COMPCTRLA_MUXPOS_AINP3_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 3 Position */
#define AC_COMPCTRLA_MUXPOS_AINP5             (AC_COMPCTRLA_MUXPOS_AINP5_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 5 Position */
#define AC_COMPCTRLA_MUXPOS_AINP6             (AC_COMPCTRLA_MUXPOS_AINP6_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) Positive pin 6 Position */
#define AC_COMPCTRLA_MUXPOS_VDDIO2DIV10       (AC_COMPCTRLA_MUXPOS_VDDIO2DIV10_Val << AC_COMPCTRLA_MUXPOS_Pos) /* (AC_COMPCTRLA) VDDIO2 Div10 Position */
#define AC_COMPCTRLA_Msk                      _UINT32_(0x0000777E)                                 /* (AC_COMPCTRLA) Register Mask  */


/* -------- AC_COMPCTRLB : (AC Offset: 0x04) (R/W 32) Comparator # Comparator Control B -------- */
#define AC_COMPCTRLB_RESETVALUE               _UINT32_(0x00)                                       /*  (AC_COMPCTRLB) Comparator # Comparator Control B  Reset Value */

#define AC_COMPCTRLB_REFSEL_Pos               _UINT32_(0)                                          /* (AC_COMPCTRLB) Reference Selection Position */
#define AC_COMPCTRLB_REFSEL_Msk               (_UINT32_(0x3) << AC_COMPCTRLB_REFSEL_Pos)           /* (AC_COMPCTRLB) Reference Selection Mask */
#define AC_COMPCTRLB_REFSEL(value)            (AC_COMPCTRLB_REFSEL_Msk & (_UINT32_(value) << AC_COMPCTRLB_REFSEL_Pos)) /* Assignment of value for REFSEL in the AC_COMPCTRLB register */
#define   AC_COMPCTRLB_REFSEL_VDD_Val         _UINT32_(0x0)                                        /* (AC_COMPCTRLB) VDD  */
#define   AC_COMPCTRLB_REFSEL_INTVREF_Val     _UINT32_(0x1)                                        /* (AC_COMPCTRLB) Internal reference voltage, as defined by the Internal Reference Selection bit field in the Control B register (CTRLB.INTREF)  */
#define   AC_COMPCTRLB_REFSEL_EXTVREF_Val     _UINT32_(0x2)                                        /* (AC_COMPCTRLB) External reference pin  */
#define AC_COMPCTRLB_REFSEL_VDD               (AC_COMPCTRLB_REFSEL_VDD_Val << AC_COMPCTRLB_REFSEL_Pos) /* (AC_COMPCTRLB) VDD Position */
#define AC_COMPCTRLB_REFSEL_INTVREF           (AC_COMPCTRLB_REFSEL_INTVREF_Val << AC_COMPCTRLB_REFSEL_Pos) /* (AC_COMPCTRLB) Internal reference voltage, as defined by the Internal Reference Selection bit field in the Control B register (CTRLB.INTREF) Position */
#define AC_COMPCTRLB_REFSEL_EXTVREF           (AC_COMPCTRLB_REFSEL_EXTVREF_Val << AC_COMPCTRLB_REFSEL_Pos) /* (AC_COMPCTRLB) External reference pin Position */
#define AC_COMPCTRLB_Msk                      _UINT32_(0x00000003)                                 /* (AC_COMPCTRLB) Register Mask  */


/* -------- AC_COMPSCALER : (AC Offset: 0x08) (R/W 32) Comparator # Comparator Scaler -------- */
#define AC_COMPSCALER_RESETVALUE              _UINT32_(0x00)                                       /*  (AC_COMPSCALER) Comparator # Comparator Scaler  Reset Value */

#define AC_COMPSCALER_VALUE_Pos               _UINT32_(0)                                          /* (AC_COMPSCALER) Scaled Reference Voltage Position */
#define AC_COMPSCALER_VALUE_Msk               (_UINT32_(0xFF) << AC_COMPSCALER_VALUE_Pos)          /* (AC_COMPSCALER) Scaled Reference Voltage Mask */
#define AC_COMPSCALER_VALUE(value)            (AC_COMPSCALER_VALUE_Msk & (_UINT32_(value) << AC_COMPSCALER_VALUE_Pos)) /* Assignment of value for VALUE in the AC_COMPSCALER register */
#define AC_COMPSCALER_Msk                     _UINT32_(0x000000FF)                                 /* (AC_COMPSCALER) Register Mask  */


/* -------- AC_CTRLA : (AC Offset: 0x00) (R/W 32) Control A -------- */
#define AC_CTRLA_RESETVALUE                   _UINT32_(0x00)                                       /*  (AC_CTRLA) Control A  Reset Value */

#define AC_CTRLA_SWRST_Pos                    _UINT32_(0)                                          /* (AC_CTRLA) Software Reset Position */
#define AC_CTRLA_SWRST_Msk                    (_UINT32_(0x1) << AC_CTRLA_SWRST_Pos)                /* (AC_CTRLA) Software Reset Mask */
#define AC_CTRLA_SWRST(value)                 (AC_CTRLA_SWRST_Msk & (_UINT32_(value) << AC_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the AC_CTRLA register */
#define AC_CTRLA_ENABLE_Pos                   _UINT32_(1)                                          /* (AC_CTRLA) Global Enable Position */
#define AC_CTRLA_ENABLE_Msk                   (_UINT32_(0x1) << AC_CTRLA_ENABLE_Pos)               /* (AC_CTRLA) Global Enable Mask */
#define AC_CTRLA_ENABLE(value)                (AC_CTRLA_ENABLE_Msk & (_UINT32_(value) << AC_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the AC_CTRLA register */
#define AC_CTRLA_Msk                          _UINT32_(0x00000003)                                 /* (AC_CTRLA) Register Mask  */


/* -------- AC_CTRLB : (AC Offset: 0x04) (R/W 32) Control B -------- */
#define AC_CTRLB_RESETVALUE                   _UINT32_(0x00)                                       /*  (AC_CTRLB) Control B  Reset Value */

#define AC_CTRLB_INTREF_Pos                   _UINT32_(0)                                          /* (AC_CTRLB) Internal Reference Selection Position */
#define AC_CTRLB_INTREF_Msk                   (_UINT32_(0x3) << AC_CTRLB_INTREF_Pos)               /* (AC_CTRLB) Internal Reference Selection Mask */
#define AC_CTRLB_INTREF(value)                (AC_CTRLB_INTREF_Msk & (_UINT32_(value) << AC_CTRLB_INTREF_Pos)) /* Assignment of value for INTREF in the AC_CTRLB register */
#define   AC_CTRLB_INTREF_1V024_Val           _UINT32_(0x0)                                        /* (AC_CTRLB) Internal 1.024V reference  */
#define   AC_CTRLB_INTREF_2V048_Val           _UINT32_(0x1)                                        /* (AC_CTRLB) Internal 2.048V reference  */
#define   AC_CTRLB_INTREF_4V096_Val           _UINT32_(0x2)                                        /* (AC_CTRLB) Internal 4.096V reference  */
#define   AC_CTRLB_INTREF_2V500_Val           _UINT32_(0x3)                                        /* (AC_CTRLB) Internal 2.500V reference  */
#define AC_CTRLB_INTREF_1V024                 (AC_CTRLB_INTREF_1V024_Val << AC_CTRLB_INTREF_Pos)   /* (AC_CTRLB) Internal 1.024V reference Position */
#define AC_CTRLB_INTREF_2V048                 (AC_CTRLB_INTREF_2V048_Val << AC_CTRLB_INTREF_Pos)   /* (AC_CTRLB) Internal 2.048V reference Position */
#define AC_CTRLB_INTREF_4V096                 (AC_CTRLB_INTREF_4V096_Val << AC_CTRLB_INTREF_Pos)   /* (AC_CTRLB) Internal 4.096V reference Position */
#define AC_CTRLB_INTREF_2V500                 (AC_CTRLB_INTREF_2V500_Val << AC_CTRLB_INTREF_Pos)   /* (AC_CTRLB) Internal 2.500V reference Position */
#define AC_CTRLB_Msk                          _UINT32_(0x00000003)                                 /* (AC_CTRLB) Register Mask  */


/* -------- AC_WINCTRL : (AC Offset: 0x14) (R/W 32) Window Control -------- */
#define AC_WINCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (AC_WINCTRL) Window Control  Reset Value */

#define AC_WINCTRL_WEN0_Pos                   _UINT32_(0)                                          /* (AC_WINCTRL) Window 0 Enable Position */
#define AC_WINCTRL_WEN0_Msk                   (_UINT32_(0x1) << AC_WINCTRL_WEN0_Pos)               /* (AC_WINCTRL) Window 0 Enable Mask */
#define AC_WINCTRL_WEN0(value)                (AC_WINCTRL_WEN0_Msk & (_UINT32_(value) << AC_WINCTRL_WEN0_Pos)) /* Assignment of value for WEN0 in the AC_WINCTRL register */
#define AC_WINCTRL_WINTSEL0_Pos               _UINT32_(1)                                          /* (AC_WINCTRL) Window 0 Interrupt Selection Position */
#define AC_WINCTRL_WINTSEL0_Msk               (_UINT32_(0x3) << AC_WINCTRL_WINTSEL0_Pos)           /* (AC_WINCTRL) Window 0 Interrupt Selection Mask */
#define AC_WINCTRL_WINTSEL0(value)            (AC_WINCTRL_WINTSEL0_Msk & (_UINT32_(value) << AC_WINCTRL_WINTSEL0_Pos)) /* Assignment of value for WINTSEL0 in the AC_WINCTRL register */
#define   AC_WINCTRL_WINTSEL0_ABOVE_Val       _UINT32_(0x0)                                        /* (AC_WINCTRL) Interrupt when the signal goes above the window  */
#define   AC_WINCTRL_WINTSEL0_INSIDE_Val      _UINT32_(0x1)                                        /* (AC_WINCTRL) Interrupt when the signal goes inside the window  */
#define   AC_WINCTRL_WINTSEL0_BELOW_Val       _UINT32_(0x2)                                        /* (AC_WINCTRL) Interrupt when the signal goes below the window  */
#define   AC_WINCTRL_WINTSEL0_OUTSIDE_Val     _UINT32_(0x3)                                        /* (AC_WINCTRL) Interrupt when the signal goes outside the window  */
#define AC_WINCTRL_WINTSEL0_ABOVE             (AC_WINCTRL_WINTSEL0_ABOVE_Val << AC_WINCTRL_WINTSEL0_Pos) /* (AC_WINCTRL) Interrupt when the signal goes above the window Position */
#define AC_WINCTRL_WINTSEL0_INSIDE            (AC_WINCTRL_WINTSEL0_INSIDE_Val << AC_WINCTRL_WINTSEL0_Pos) /* (AC_WINCTRL) Interrupt when the signal goes inside the window Position */
#define AC_WINCTRL_WINTSEL0_BELOW             (AC_WINCTRL_WINTSEL0_BELOW_Val << AC_WINCTRL_WINTSEL0_Pos) /* (AC_WINCTRL) Interrupt when the signal goes below the window Position */
#define AC_WINCTRL_WINTSEL0_OUTSIDE           (AC_WINCTRL_WINTSEL0_OUTSIDE_Val << AC_WINCTRL_WINTSEL0_Pos) /* (AC_WINCTRL) Interrupt when the signal goes outside the window Position */
#define AC_WINCTRL_Msk                        _UINT32_(0x00000007)                                 /* (AC_WINCTRL) Register Mask  */

#define AC_WINCTRL_WEN_Pos                    _UINT32_(0)                                          /* (AC_WINCTRL Position) Window x Enable */
#define AC_WINCTRL_WEN_Msk                    (_UINT32_(0x1) << AC_WINCTRL_WEN_Pos)                /* (AC_WINCTRL Mask) WEN */
#define AC_WINCTRL_WEN(value)                 (AC_WINCTRL_WEN_Msk & (_UINT32_(value) << AC_WINCTRL_WEN_Pos)) 

/* -------- AC_EVCTRL : (AC Offset: 0x20) (R/W 32) Event Control -------- */
#define AC_EVCTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (AC_EVCTRL) Event Control  Reset Value */

#define AC_EVCTRL_COMPEO0_Pos                 _UINT32_(0)                                          /* (AC_EVCTRL) Comparator 0 Event Output Enable Position */
#define AC_EVCTRL_COMPEO0_Msk                 (_UINT32_(0x1) << AC_EVCTRL_COMPEO0_Pos)             /* (AC_EVCTRL) Comparator 0 Event Output Enable Mask */
#define AC_EVCTRL_COMPEO0(value)              (AC_EVCTRL_COMPEO0_Msk & (_UINT32_(value) << AC_EVCTRL_COMPEO0_Pos)) /* Assignment of value for COMPEO0 in the AC_EVCTRL register */
#define AC_EVCTRL_COMPEO1_Pos                 _UINT32_(1)                                          /* (AC_EVCTRL) Comparator 1 Event Output Enable Position */
#define AC_EVCTRL_COMPEO1_Msk                 (_UINT32_(0x1) << AC_EVCTRL_COMPEO1_Pos)             /* (AC_EVCTRL) Comparator 1 Event Output Enable Mask */
#define AC_EVCTRL_COMPEO1(value)              (AC_EVCTRL_COMPEO1_Msk & (_UINT32_(value) << AC_EVCTRL_COMPEO1_Pos)) /* Assignment of value for COMPEO1 in the AC_EVCTRL register */
#define AC_EVCTRL_WINEO0_Pos                  _UINT32_(4)                                          /* (AC_EVCTRL) Window 0 Event Output Enable Position */
#define AC_EVCTRL_WINEO0_Msk                  (_UINT32_(0x1) << AC_EVCTRL_WINEO0_Pos)              /* (AC_EVCTRL) Window 0 Event Output Enable Mask */
#define AC_EVCTRL_WINEO0(value)               (AC_EVCTRL_WINEO0_Msk & (_UINT32_(value) << AC_EVCTRL_WINEO0_Pos)) /* Assignment of value for WINEO0 in the AC_EVCTRL register */
#define AC_EVCTRL_Msk                         _UINT32_(0x00000013)                                 /* (AC_EVCTRL) Register Mask  */

#define AC_EVCTRL_COMPEO_Pos                  _UINT32_(0)                                          /* (AC_EVCTRL Position) Comparator x Event Output Enable */
#define AC_EVCTRL_COMPEO_Msk                  (_UINT32_(0x3) << AC_EVCTRL_COMPEO_Pos)              /* (AC_EVCTRL Mask) COMPEO */
#define AC_EVCTRL_COMPEO(value)               (AC_EVCTRL_COMPEO_Msk & (_UINT32_(value) << AC_EVCTRL_COMPEO_Pos)) 
#define AC_EVCTRL_WINEO_Pos                   _UINT32_(4)                                          /* (AC_EVCTRL Position) Window x Event Output Enable */
#define AC_EVCTRL_WINEO_Msk                   (_UINT32_(0x1) << AC_EVCTRL_WINEO_Pos)               /* (AC_EVCTRL Mask) WINEO */
#define AC_EVCTRL_WINEO(value)                (AC_EVCTRL_WINEO_Msk & (_UINT32_(value) << AC_EVCTRL_WINEO_Pos)) 

/* -------- AC_INTENCLR : (AC Offset: 0x24) (R/W 32) Interrupt Enable Clear -------- */
#define AC_INTENCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (AC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define AC_INTENCLR_COMP0_Pos                 _UINT32_(0)                                          /* (AC_INTENCLR) Comparator 0 Interrupt Enable Position */
#define AC_INTENCLR_COMP0_Msk                 (_UINT32_(0x1) << AC_INTENCLR_COMP0_Pos)             /* (AC_INTENCLR) Comparator 0 Interrupt Enable Mask */
#define AC_INTENCLR_COMP0(value)              (AC_INTENCLR_COMP0_Msk & (_UINT32_(value) << AC_INTENCLR_COMP0_Pos)) /* Assignment of value for COMP0 in the AC_INTENCLR register */
#define AC_INTENCLR_COMP1_Pos                 _UINT32_(1)                                          /* (AC_INTENCLR) Comparator 1 Interrupt Enable Position */
#define AC_INTENCLR_COMP1_Msk                 (_UINT32_(0x1) << AC_INTENCLR_COMP1_Pos)             /* (AC_INTENCLR) Comparator 1 Interrupt Enable Mask */
#define AC_INTENCLR_COMP1(value)              (AC_INTENCLR_COMP1_Msk & (_UINT32_(value) << AC_INTENCLR_COMP1_Pos)) /* Assignment of value for COMP1 in the AC_INTENCLR register */
#define AC_INTENCLR_WIN0_Pos                  _UINT32_(4)                                          /* (AC_INTENCLR) Window 0 Interrupt Enable Position */
#define AC_INTENCLR_WIN0_Msk                  (_UINT32_(0x1) << AC_INTENCLR_WIN0_Pos)              /* (AC_INTENCLR) Window 0 Interrupt Enable Mask */
#define AC_INTENCLR_WIN0(value)               (AC_INTENCLR_WIN0_Msk & (_UINT32_(value) << AC_INTENCLR_WIN0_Pos)) /* Assignment of value for WIN0 in the AC_INTENCLR register */
#define AC_INTENCLR_Msk                       _UINT32_(0x00000013)                                 /* (AC_INTENCLR) Register Mask  */

#define AC_INTENCLR_COMP_Pos                  _UINT32_(0)                                          /* (AC_INTENCLR Position) Comparator x Interrupt Enable */
#define AC_INTENCLR_COMP_Msk                  (_UINT32_(0x3) << AC_INTENCLR_COMP_Pos)              /* (AC_INTENCLR Mask) COMP */
#define AC_INTENCLR_COMP(value)               (AC_INTENCLR_COMP_Msk & (_UINT32_(value) << AC_INTENCLR_COMP_Pos)) 
#define AC_INTENCLR_WIN_Pos                   _UINT32_(4)                                          /* (AC_INTENCLR Position) Window x Interrupt Enable */
#define AC_INTENCLR_WIN_Msk                   (_UINT32_(0x1) << AC_INTENCLR_WIN_Pos)               /* (AC_INTENCLR Mask) WIN */
#define AC_INTENCLR_WIN(value)                (AC_INTENCLR_WIN_Msk & (_UINT32_(value) << AC_INTENCLR_WIN_Pos)) 

/* -------- AC_INTENSET : (AC Offset: 0x28) (R/W 32) Interrupt Enable Set -------- */
#define AC_INTENSET_RESETVALUE                _UINT32_(0x00)                                       /*  (AC_INTENSET) Interrupt Enable Set  Reset Value */

#define AC_INTENSET_COMP0_Pos                 _UINT32_(0)                                          /* (AC_INTENSET) Comparator 0 Interrupt Enable Position */
#define AC_INTENSET_COMP0_Msk                 (_UINT32_(0x1) << AC_INTENSET_COMP0_Pos)             /* (AC_INTENSET) Comparator 0 Interrupt Enable Mask */
#define AC_INTENSET_COMP0(value)              (AC_INTENSET_COMP0_Msk & (_UINT32_(value) << AC_INTENSET_COMP0_Pos)) /* Assignment of value for COMP0 in the AC_INTENSET register */
#define AC_INTENSET_COMP1_Pos                 _UINT32_(1)                                          /* (AC_INTENSET) Comparator 1 Interrupt Enable Position */
#define AC_INTENSET_COMP1_Msk                 (_UINT32_(0x1) << AC_INTENSET_COMP1_Pos)             /* (AC_INTENSET) Comparator 1 Interrupt Enable Mask */
#define AC_INTENSET_COMP1(value)              (AC_INTENSET_COMP1_Msk & (_UINT32_(value) << AC_INTENSET_COMP1_Pos)) /* Assignment of value for COMP1 in the AC_INTENSET register */
#define AC_INTENSET_WIN0_Pos                  _UINT32_(4)                                          /* (AC_INTENSET) Window 0 Interrupt Enable Position */
#define AC_INTENSET_WIN0_Msk                  (_UINT32_(0x1) << AC_INTENSET_WIN0_Pos)              /* (AC_INTENSET) Window 0 Interrupt Enable Mask */
#define AC_INTENSET_WIN0(value)               (AC_INTENSET_WIN0_Msk & (_UINT32_(value) << AC_INTENSET_WIN0_Pos)) /* Assignment of value for WIN0 in the AC_INTENSET register */
#define AC_INTENSET_Msk                       _UINT32_(0x00000013)                                 /* (AC_INTENSET) Register Mask  */

#define AC_INTENSET_COMP_Pos                  _UINT32_(0)                                          /* (AC_INTENSET Position) Comparator x Interrupt Enable */
#define AC_INTENSET_COMP_Msk                  (_UINT32_(0x3) << AC_INTENSET_COMP_Pos)              /* (AC_INTENSET Mask) COMP */
#define AC_INTENSET_COMP(value)               (AC_INTENSET_COMP_Msk & (_UINT32_(value) << AC_INTENSET_COMP_Pos)) 
#define AC_INTENSET_WIN_Pos                   _UINT32_(4)                                          /* (AC_INTENSET Position) Window x Interrupt Enable */
#define AC_INTENSET_WIN_Msk                   (_UINT32_(0x1) << AC_INTENSET_WIN_Pos)               /* (AC_INTENSET Mask) WIN */
#define AC_INTENSET_WIN(value)                (AC_INTENSET_WIN_Msk & (_UINT32_(value) << AC_INTENSET_WIN_Pos)) 

/* -------- AC_INTFLAG : (AC Offset: 0x2C) (R/W 32) Interrupt Flag Status and Clear -------- */
#define AC_INTFLAG_RESETVALUE                 _UINT32_(0x00)                                       /*  (AC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define AC_INTFLAG_COMP0_Pos                  _UINT32_(0)                                          /* (AC_INTFLAG) Comparator 0 Interrupt Flag Position */
#define AC_INTFLAG_COMP0_Msk                  (_UINT32_(0x1) << AC_INTFLAG_COMP0_Pos)              /* (AC_INTFLAG) Comparator 0 Interrupt Flag Mask */
#define AC_INTFLAG_COMP0(value)               (AC_INTFLAG_COMP0_Msk & (_UINT32_(value) << AC_INTFLAG_COMP0_Pos)) /* Assignment of value for COMP0 in the AC_INTFLAG register */
#define AC_INTFLAG_COMP1_Pos                  _UINT32_(1)                                          /* (AC_INTFLAG) Comparator 1 Interrupt Flag Position */
#define AC_INTFLAG_COMP1_Msk                  (_UINT32_(0x1) << AC_INTFLAG_COMP1_Pos)              /* (AC_INTFLAG) Comparator 1 Interrupt Flag Mask */
#define AC_INTFLAG_COMP1(value)               (AC_INTFLAG_COMP1_Msk & (_UINT32_(value) << AC_INTFLAG_COMP1_Pos)) /* Assignment of value for COMP1 in the AC_INTFLAG register */
#define AC_INTFLAG_WIN0_Pos                   _UINT32_(4)                                          /* (AC_INTFLAG) Window 0 Interrupt Flag Position */
#define AC_INTFLAG_WIN0_Msk                   (_UINT32_(0x1) << AC_INTFLAG_WIN0_Pos)               /* (AC_INTFLAG) Window 0 Interrupt Flag Mask */
#define AC_INTFLAG_WIN0(value)                (AC_INTFLAG_WIN0_Msk & (_UINT32_(value) << AC_INTFLAG_WIN0_Pos)) /* Assignment of value for WIN0 in the AC_INTFLAG register */
#define AC_INTFLAG_Msk                        _UINT32_(0x00000013)                                 /* (AC_INTFLAG) Register Mask  */

#define AC_INTFLAG_COMP_Pos                   _UINT32_(0)                                          /* (AC_INTFLAG Position) Comparator x Interrupt Flag */
#define AC_INTFLAG_COMP_Msk                   (_UINT32_(0x3) << AC_INTFLAG_COMP_Pos)               /* (AC_INTFLAG Mask) COMP */
#define AC_INTFLAG_COMP(value)                (AC_INTFLAG_COMP_Msk & (_UINT32_(value) << AC_INTFLAG_COMP_Pos)) 
#define AC_INTFLAG_WIN_Pos                    _UINT32_(4)                                          /* (AC_INTFLAG Position) Window x Interrupt Flag */
#define AC_INTFLAG_WIN_Msk                    (_UINT32_(0x1) << AC_INTFLAG_WIN_Pos)                /* (AC_INTFLAG Mask) WIN */
#define AC_INTFLAG_WIN(value)                 (AC_INTFLAG_WIN_Msk & (_UINT32_(value) << AC_INTFLAG_WIN_Pos)) 

/* -------- AC_INTFLAGSET : (AC Offset: 0x30) (R/W 32) Interrupt Flag Set -------- */
#define AC_INTFLAGSET_RESETVALUE              _UINT32_(0x00)                                       /*  (AC_INTFLAGSET) Interrupt Flag Set  Reset Value */

#define AC_INTFLAGSET_COMP0_Pos               _UINT32_(0)                                          /* (AC_INTFLAGSET) Comparator 0 Interrupt Flag Position */
#define AC_INTFLAGSET_COMP0_Msk               (_UINT32_(0x1) << AC_INTFLAGSET_COMP0_Pos)           /* (AC_INTFLAGSET) Comparator 0 Interrupt Flag Mask */
#define AC_INTFLAGSET_COMP0(value)            (AC_INTFLAGSET_COMP0_Msk & (_UINT32_(value) << AC_INTFLAGSET_COMP0_Pos)) /* Assignment of value for COMP0 in the AC_INTFLAGSET register */
#define AC_INTFLAGSET_COMP1_Pos               _UINT32_(1)                                          /* (AC_INTFLAGSET) Comparator 1 Interrupt Flag Position */
#define AC_INTFLAGSET_COMP1_Msk               (_UINT32_(0x1) << AC_INTFLAGSET_COMP1_Pos)           /* (AC_INTFLAGSET) Comparator 1 Interrupt Flag Mask */
#define AC_INTFLAGSET_COMP1(value)            (AC_INTFLAGSET_COMP1_Msk & (_UINT32_(value) << AC_INTFLAGSET_COMP1_Pos)) /* Assignment of value for COMP1 in the AC_INTFLAGSET register */
#define AC_INTFLAGSET_WIN0_Pos                _UINT32_(4)                                          /* (AC_INTFLAGSET) Window 0 Interrupt Flag Position */
#define AC_INTFLAGSET_WIN0_Msk                (_UINT32_(0x1) << AC_INTFLAGSET_WIN0_Pos)            /* (AC_INTFLAGSET) Window 0 Interrupt Flag Mask */
#define AC_INTFLAGSET_WIN0(value)             (AC_INTFLAGSET_WIN0_Msk & (_UINT32_(value) << AC_INTFLAGSET_WIN0_Pos)) /* Assignment of value for WIN0 in the AC_INTFLAGSET register */
#define AC_INTFLAGSET_Msk                     _UINT32_(0x00000013)                                 /* (AC_INTFLAGSET) Register Mask  */

#define AC_INTFLAGSET_COMP_Pos                _UINT32_(0)                                          /* (AC_INTFLAGSET Position) Comparator x Interrupt Flag */
#define AC_INTFLAGSET_COMP_Msk                (_UINT32_(0x3) << AC_INTFLAGSET_COMP_Pos)            /* (AC_INTFLAGSET Mask) COMP */
#define AC_INTFLAGSET_COMP(value)             (AC_INTFLAGSET_COMP_Msk & (_UINT32_(value) << AC_INTFLAGSET_COMP_Pos)) 
#define AC_INTFLAGSET_WIN_Pos                 _UINT32_(4)                                          /* (AC_INTFLAGSET Position) Window x Interrupt Flag */
#define AC_INTFLAGSET_WIN_Msk                 (_UINT32_(0x1) << AC_INTFLAGSET_WIN_Pos)             /* (AC_INTFLAGSET Mask) WIN */
#define AC_INTFLAGSET_WIN(value)              (AC_INTFLAGSET_WIN_Msk & (_UINT32_(value) << AC_INTFLAGSET_WIN_Pos)) 

/* -------- AC_STATUS : (AC Offset: 0x34) ( R/ 32) Status -------- */
#define AC_STATUS_RESETVALUE                  _UINT32_(0x00)                                       /*  (AC_STATUS) Status  Reset Value */

#define AC_STATUS_COMPSTATE0_Pos              _UINT32_(0)                                          /* (AC_STATUS) Comparator 0 State Position */
#define AC_STATUS_COMPSTATE0_Msk              (_UINT32_(0x1) << AC_STATUS_COMPSTATE0_Pos)          /* (AC_STATUS) Comparator 0 State Mask */
#define AC_STATUS_COMPSTATE0(value)           (AC_STATUS_COMPSTATE0_Msk & (_UINT32_(value) << AC_STATUS_COMPSTATE0_Pos)) /* Assignment of value for COMPSTATE0 in the AC_STATUS register */
#define AC_STATUS_COMPSTATE1_Pos              _UINT32_(1)                                          /* (AC_STATUS) Comparator 1 State Position */
#define AC_STATUS_COMPSTATE1_Msk              (_UINT32_(0x1) << AC_STATUS_COMPSTATE1_Pos)          /* (AC_STATUS) Comparator 1 State Mask */
#define AC_STATUS_COMPSTATE1(value)           (AC_STATUS_COMPSTATE1_Msk & (_UINT32_(value) << AC_STATUS_COMPSTATE1_Pos)) /* Assignment of value for COMPSTATE1 in the AC_STATUS register */
#define AC_STATUS_WINSTATE0_Pos               _UINT32_(4)                                          /* (AC_STATUS) Window 0 State Position */
#define AC_STATUS_WINSTATE0_Msk               (_UINT32_(0x3) << AC_STATUS_WINSTATE0_Pos)           /* (AC_STATUS) Window 0 State Mask */
#define AC_STATUS_WINSTATE0(value)            (AC_STATUS_WINSTATE0_Msk & (_UINT32_(value) << AC_STATUS_WINSTATE0_Pos)) /* Assignment of value for WINSTATE0 in the AC_STATUS register */
#define   AC_STATUS_WINSTATE0_ABOVE_Val       _UINT32_(0x0)                                        /* (AC_STATUS) The input signal is above window n  */
#define   AC_STATUS_WINSTATE0_INSIDE_Val      _UINT32_(0x1)                                        /* (AC_STATUS) The input signal is inside window n  */
#define   AC_STATUS_WINSTATE0_BELOW_Val       _UINT32_(0x2)                                        /* (AC_STATUS) The input signal is below window n  */
#define AC_STATUS_WINSTATE0_ABOVE             (AC_STATUS_WINSTATE0_ABOVE_Val << AC_STATUS_WINSTATE0_Pos) /* (AC_STATUS) The input signal is above window n Position */
#define AC_STATUS_WINSTATE0_INSIDE            (AC_STATUS_WINSTATE0_INSIDE_Val << AC_STATUS_WINSTATE0_Pos) /* (AC_STATUS) The input signal is inside window n Position */
#define AC_STATUS_WINSTATE0_BELOW             (AC_STATUS_WINSTATE0_BELOW_Val << AC_STATUS_WINSTATE0_Pos) /* (AC_STATUS) The input signal is below window n Position */
#define AC_STATUS_Msk                         _UINT32_(0x00000033)                                 /* (AC_STATUS) Register Mask  */

#define AC_STATUS_COMPSTATE_Pos               _UINT32_(0)                                          /* (AC_STATUS Position) Comparator x State */
#define AC_STATUS_COMPSTATE_Msk               (_UINT32_(0x3) << AC_STATUS_COMPSTATE_Pos)           /* (AC_STATUS Mask) COMPSTATE */
#define AC_STATUS_COMPSTATE(value)            (AC_STATUS_COMPSTATE_Msk & (_UINT32_(value) << AC_STATUS_COMPSTATE_Pos)) 

/* -------- AC_WPCTRL : (AC Offset: 0x80) (R/W 32) Write Protection Control -------- */
#define AC_WPCTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (AC_WPCTRL) Write Protection Control  Reset Value */

#define AC_WPCTRL_WPEN_Pos                    _UINT32_(0)                                          /* (AC_WPCTRL) Write Protection Enable Position */
#define AC_WPCTRL_WPEN_Msk                    (_UINT32_(0x1) << AC_WPCTRL_WPEN_Pos)                /* (AC_WPCTRL) Write Protection Enable Mask */
#define AC_WPCTRL_WPEN(value)                 (AC_WPCTRL_WPEN_Msk & (_UINT32_(value) << AC_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the AC_WPCTRL register */
#define AC_WPCTRL_WPLCK_Pos                   _UINT32_(1)                                          /* (AC_WPCTRL) Write Protection Lock Position */
#define AC_WPCTRL_WPLCK_Msk                   (_UINT32_(0x1) << AC_WPCTRL_WPLCK_Pos)               /* (AC_WPCTRL) Write Protection Lock Mask */
#define AC_WPCTRL_WPLCK(value)                (AC_WPCTRL_WPLCK_Msk & (_UINT32_(value) << AC_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the AC_WPCTRL register */
#define AC_WPCTRL_WPKEY_Pos                   _UINT32_(8)                                          /* (AC_WPCTRL) Write Protection Key Position */
#define AC_WPCTRL_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << AC_WPCTRL_WPKEY_Pos)          /* (AC_WPCTRL) Write Protection Key Mask */
#define AC_WPCTRL_WPKEY(value)                (AC_WPCTRL_WPKEY_Msk & (_UINT32_(value) << AC_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the AC_WPCTRL register */
#define   AC_WPCTRL_WPKEY_KEY_Val             _UINT32_(0x414320)                                   /* (AC_WPCTRL) Allow writes to the WPCTRL register  */
#define AC_WPCTRL_WPKEY_KEY                   (AC_WPCTRL_WPKEY_KEY_Val << AC_WPCTRL_WPKEY_Pos)     /* (AC_WPCTRL) Allow writes to the WPCTRL register Position */
#define AC_WPCTRL_Msk                         _UINT32_(0xFFFFFF03)                                 /* (AC_WPCTRL) Register Mask  */


/* AC register offsets definitions */
#define AC_COMPCTRLA_REG_OFST          _UINT32_(0x00)      /* (AC_COMPCTRLA) Comparator # Comparator Control A Offset */
#define AC_COMPCTRLB_REG_OFST          _UINT32_(0x04)      /* (AC_COMPCTRLB) Comparator # Comparator Control B Offset */
#define AC_COMPSCALER_REG_OFST         _UINT32_(0x08)      /* (AC_COMPSCALER) Comparator # Comparator Scaler Offset */
#define AC_CTRLA_REG_OFST              _UINT32_(0x00)      /* (AC_CTRLA) Control A Offset */
#define AC_CTRLB_REG_OFST              _UINT32_(0x04)      /* (AC_CTRLB) Control B Offset */
#define AC_WINCTRL_REG_OFST            _UINT32_(0x14)      /* (AC_WINCTRL) Window Control Offset */
#define AC_EVCTRL_REG_OFST             _UINT32_(0x20)      /* (AC_EVCTRL) Event Control Offset */
#define AC_INTENCLR_REG_OFST           _UINT32_(0x24)      /* (AC_INTENCLR) Interrupt Enable Clear Offset */
#define AC_INTENSET_REG_OFST           _UINT32_(0x28)      /* (AC_INTENSET) Interrupt Enable Set Offset */
#define AC_INTFLAG_REG_OFST            _UINT32_(0x2C)      /* (AC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define AC_INTFLAGSET_REG_OFST         _UINT32_(0x30)      /* (AC_INTFLAGSET) Interrupt Flag Set Offset */
#define AC_STATUS_REG_OFST             _UINT32_(0x34)      /* (AC_STATUS) Status Offset */
#define AC_WPCTRL_REG_OFST             _UINT32_(0x80)      /* (AC_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* COMP register API structure */
typedef struct
{
  __IO  uint32_t                       AC_COMPCTRLA;       /* Offset: 0x00 (R/W  32) Comparator # Comparator Control A */
  __IO  uint32_t                       AC_COMPCTRLB;       /* Offset: 0x04 (R/W  32) Comparator # Comparator Control B */
  __IO  uint32_t                       AC_COMPSCALER;      /* Offset: 0x08 (R/W  32) Comparator # Comparator Scaler */
  __I   uint8_t                        Reserved1[0x04];
} ac_comp_registers_t;

#define AC_COMP_NUMBER 2

/* AC register API structure */
typedef struct
{  /* Analog Comparator */
  __IO  uint32_t                       AC_CTRLA;           /* Offset: 0x00 (R/W  32) Control A */
  __IO  uint32_t                       AC_CTRLB;           /* Offset: 0x04 (R/W  32) Control B */
  __I   uint8_t                        Reserved1[0x0C];
  __IO  uint32_t                       AC_WINCTRL;         /* Offset: 0x14 (R/W  32) Window Control */
  __I   uint8_t                        Reserved2[0x08];
  __IO  uint32_t                       AC_EVCTRL;          /* Offset: 0x20 (R/W  32) Event Control */
  __IO  uint32_t                       AC_INTENCLR;        /* Offset: 0x24 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       AC_INTENSET;        /* Offset: 0x28 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       AC_INTFLAG;         /* Offset: 0x2C (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       AC_INTFLAGSET;      /* Offset: 0x30 (R/W  32) Interrupt Flag Set */
  __I   uint32_t                       AC_STATUS;          /* Offset: 0x34 (R/   32) Status */
  __I   uint8_t                        Reserved3[0x08];
        ac_comp_registers_t            COMP[AC_COMP_NUMBER]; /* Offset: 0x40  */
  __I   uint8_t                        Reserved4[0x20];
  __IO  uint32_t                       AC_WPCTRL;          /* Offset: 0x80 (R/W  32) Write Protection Control */
} ac_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_AC_COMPONENT_H_ */
