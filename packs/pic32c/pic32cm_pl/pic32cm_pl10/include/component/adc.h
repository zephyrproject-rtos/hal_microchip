/*
 * Component description for ADC
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
#ifndef _PIC32CMPL10_ADC_COMPONENT_H_
#define _PIC32CMPL10_ADC_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR ADC                       */
/* ************************************************************************** */

/* -------- ADC_CTRLA : (ADC Offset: 0x00) (R/W 32) Control A -------- */
#define ADC_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_CTRLA) Control A  Reset Value */

#define ADC_CTRLA_SWRST_Pos                   _UINT32_(0)                                          /* (ADC_CTRLA) Software Reset Position */
#define ADC_CTRLA_SWRST_Msk                   (_UINT32_(0x1) << ADC_CTRLA_SWRST_Pos)               /* (ADC_CTRLA) Software Reset Mask */
#define ADC_CTRLA_SWRST(value)                (ADC_CTRLA_SWRST_Msk & (_UINT32_(value) << ADC_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the ADC_CTRLA register */
#define ADC_CTRLA_ENABLE_Pos                  _UINT32_(1)                                          /* (ADC_CTRLA) ADC Enable Position */
#define ADC_CTRLA_ENABLE_Msk                  (_UINT32_(0x1) << ADC_CTRLA_ENABLE_Pos)              /* (ADC_CTRLA) ADC Enable Mask */
#define ADC_CTRLA_ENABLE(value)               (ADC_CTRLA_ENABLE_Msk & (_UINT32_(value) << ADC_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the ADC_CTRLA register */
#define ADC_CTRLA_RUNSTDBY_Pos                _UINT32_(6)                                          /* (ADC_CTRLA) Run in Standby Position */
#define ADC_CTRLA_RUNSTDBY_Msk                (_UINT32_(0x1) << ADC_CTRLA_RUNSTDBY_Pos)            /* (ADC_CTRLA) Run in Standby Mask */
#define ADC_CTRLA_RUNSTDBY(value)             (ADC_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << ADC_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the ADC_CTRLA register */
#define ADC_CTRLA_ONDEMAND_Pos                _UINT32_(7)                                          /* (ADC_CTRLA) On Demand Position */
#define ADC_CTRLA_ONDEMAND_Msk                (_UINT32_(0x1) << ADC_CTRLA_ONDEMAND_Pos)            /* (ADC_CTRLA) On Demand Mask */
#define ADC_CTRLA_ONDEMAND(value)             (ADC_CTRLA_ONDEMAND_Msk & (_UINT32_(value) << ADC_CTRLA_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the ADC_CTRLA register */
#define ADC_CTRLA_Msk                         _UINT32_(0x000000C3)                                 /* (ADC_CTRLA) Register Mask  */


/* -------- ADC_CTRLB : (ADC Offset: 0x04) (R/W 32) Control B -------- */
#define ADC_CTRLB_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_CTRLB) Control B  Reset Value */

#define ADC_CTRLB_PRESCALER_Pos               _UINT32_(0)                                          /* (ADC_CTRLB) Prescaler Position */
#define ADC_CTRLB_PRESCALER_Msk               (_UINT32_(0x1F) << ADC_CTRLB_PRESCALER_Pos)          /* (ADC_CTRLB) Prescaler Mask */
#define ADC_CTRLB_PRESCALER(value)            (ADC_CTRLB_PRESCALER_Msk & (_UINT32_(value) << ADC_CTRLB_PRESCALER_Pos)) /* Assignment of value for PRESCALER in the ADC_CTRLB register */
#define   ADC_CTRLB_PRESCALER_DIV2_Val        _UINT32_(0x0)                                        /* (ADC_CTRLB) APB clock divided by 2  */
#define   ADC_CTRLB_PRESCALER_DIV3_Val        _UINT32_(0x1)                                        /* (ADC_CTRLB) APB clock divided by 3  */
#define   ADC_CTRLB_PRESCALER_DIV4_Val        _UINT32_(0x2)                                        /* (ADC_CTRLB) APB clock divided by 4  */
#define   ADC_CTRLB_PRESCALER_DIV5_Val        _UINT32_(0x3)                                        /* (ADC_CTRLB) APB clock divided by 5  */
#define   ADC_CTRLB_PRESCALER_DIV6_Val        _UINT32_(0x4)                                        /* (ADC_CTRLB) APB clock divided by 6  */
#define   ADC_CTRLB_PRESCALER_DIV7_Val        _UINT32_(0x5)                                        /* (ADC_CTRLB) APB clock divided by 7  */
#define   ADC_CTRLB_PRESCALER_DIV8_Val        _UINT32_(0x6)                                        /* (ADC_CTRLB) APB clock divided by 8  */
#define   ADC_CTRLB_PRESCALER_DIV9_Val        _UINT32_(0x7)                                        /* (ADC_CTRLB) APB clock divided by 9  */
#define   ADC_CTRLB_PRESCALER_DIV10_Val       _UINT32_(0x8)                                        /* (ADC_CTRLB) APB clock divided by 10  */
#define   ADC_CTRLB_PRESCALER_DIV11_Val       _UINT32_(0x9)                                        /* (ADC_CTRLB) APB clock divided by 11  */
#define   ADC_CTRLB_PRESCALER_DIV12_Val       _UINT32_(0xA)                                        /* (ADC_CTRLB) APB clock divided by 12  */
#define   ADC_CTRLB_PRESCALER_DIV13_Val       _UINT32_(0xB)                                        /* (ADC_CTRLB) APB clock divided by 13  */
#define   ADC_CTRLB_PRESCALER_DIV14_Val       _UINT32_(0xC)                                        /* (ADC_CTRLB) APB clock divided by 14  */
#define   ADC_CTRLB_PRESCALER_DIV15_Val       _UINT32_(0xD)                                        /* (ADC_CTRLB) APB clock divided by 15  */
#define   ADC_CTRLB_PRESCALER_DIV16_Val       _UINT32_(0xE)                                        /* (ADC_CTRLB) APB clock divided by 16  */
#define   ADC_CTRLB_PRESCALER_DIV17_Val       _UINT32_(0xF)                                        /* (ADC_CTRLB) APB clock divided by 17  */
#define   ADC_CTRLB_PRESCALER_DIV18_Val       _UINT32_(0x10)                                       /* (ADC_CTRLB) APB clock divided by 18  */
#define   ADC_CTRLB_PRESCALER_DIV19_Val       _UINT32_(0x11)                                       /* (ADC_CTRLB) APB clock divided by 19  */
#define   ADC_CTRLB_PRESCALER_DIV20_Val       _UINT32_(0x12)                                       /* (ADC_CTRLB) APB clock divided by 20  */
#define   ADC_CTRLB_PRESCALER_DIV21_Val       _UINT32_(0x13)                                       /* (ADC_CTRLB) APB clock divided by 21  */
#define   ADC_CTRLB_PRESCALER_DIV22_Val       _UINT32_(0x14)                                       /* (ADC_CTRLB) APB clock divided by 22  */
#define   ADC_CTRLB_PRESCALER_DIV23_Val       _UINT32_(0x15)                                       /* (ADC_CTRLB) APB clock divided by 23  */
#define   ADC_CTRLB_PRESCALER_DIV24_Val       _UINT32_(0x16)                                       /* (ADC_CTRLB) APB clock divided by 24  */
#define   ADC_CTRLB_PRESCALER_DIV25_Val       _UINT32_(0x17)                                       /* (ADC_CTRLB) APB clock divided by 25  */
#define   ADC_CTRLB_PRESCALER_DIV26_Val       _UINT32_(0x18)                                       /* (ADC_CTRLB) APB clock divided by 26  */
#define   ADC_CTRLB_PRESCALER_DIV27_Val       _UINT32_(0x19)                                       /* (ADC_CTRLB) APB clock divided by 27  */
#define   ADC_CTRLB_PRESCALER_DIV28_Val       _UINT32_(0x1A)                                       /* (ADC_CTRLB) APB clock divided by 28  */
#define   ADC_CTRLB_PRESCALER_DIV29_Val       _UINT32_(0x1B)                                       /* (ADC_CTRLB) APB clock divided by 29  */
#define   ADC_CTRLB_PRESCALER_DIV30_Val       _UINT32_(0x1C)                                       /* (ADC_CTRLB) APB clock divided by 30  */
#define   ADC_CTRLB_PRESCALER_DIV31_Val       _UINT32_(0x1D)                                       /* (ADC_CTRLB) APB clock divided by 31  */
#define   ADC_CTRLB_PRESCALER_DIV32_Val       _UINT32_(0x1E)                                       /* (ADC_CTRLB) APB clock divided by 32  */
#define ADC_CTRLB_PRESCALER_DIV2              (ADC_CTRLB_PRESCALER_DIV2_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 2 Position */
#define ADC_CTRLB_PRESCALER_DIV3              (ADC_CTRLB_PRESCALER_DIV3_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 3 Position */
#define ADC_CTRLB_PRESCALER_DIV4              (ADC_CTRLB_PRESCALER_DIV4_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 4 Position */
#define ADC_CTRLB_PRESCALER_DIV5              (ADC_CTRLB_PRESCALER_DIV5_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 5 Position */
#define ADC_CTRLB_PRESCALER_DIV6              (ADC_CTRLB_PRESCALER_DIV6_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 6 Position */
#define ADC_CTRLB_PRESCALER_DIV7              (ADC_CTRLB_PRESCALER_DIV7_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 7 Position */
#define ADC_CTRLB_PRESCALER_DIV8              (ADC_CTRLB_PRESCALER_DIV8_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 8 Position */
#define ADC_CTRLB_PRESCALER_DIV9              (ADC_CTRLB_PRESCALER_DIV9_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 9 Position */
#define ADC_CTRLB_PRESCALER_DIV10             (ADC_CTRLB_PRESCALER_DIV10_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 10 Position */
#define ADC_CTRLB_PRESCALER_DIV11             (ADC_CTRLB_PRESCALER_DIV11_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 11 Position */
#define ADC_CTRLB_PRESCALER_DIV12             (ADC_CTRLB_PRESCALER_DIV12_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 12 Position */
#define ADC_CTRLB_PRESCALER_DIV13             (ADC_CTRLB_PRESCALER_DIV13_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 13 Position */
#define ADC_CTRLB_PRESCALER_DIV14             (ADC_CTRLB_PRESCALER_DIV14_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 14 Position */
#define ADC_CTRLB_PRESCALER_DIV15             (ADC_CTRLB_PRESCALER_DIV15_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 15 Position */
#define ADC_CTRLB_PRESCALER_DIV16             (ADC_CTRLB_PRESCALER_DIV16_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 16 Position */
#define ADC_CTRLB_PRESCALER_DIV17             (ADC_CTRLB_PRESCALER_DIV17_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 17 Position */
#define ADC_CTRLB_PRESCALER_DIV18             (ADC_CTRLB_PRESCALER_DIV18_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 18 Position */
#define ADC_CTRLB_PRESCALER_DIV19             (ADC_CTRLB_PRESCALER_DIV19_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 19 Position */
#define ADC_CTRLB_PRESCALER_DIV20             (ADC_CTRLB_PRESCALER_DIV20_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 20 Position */
#define ADC_CTRLB_PRESCALER_DIV21             (ADC_CTRLB_PRESCALER_DIV21_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 21 Position */
#define ADC_CTRLB_PRESCALER_DIV22             (ADC_CTRLB_PRESCALER_DIV22_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 22 Position */
#define ADC_CTRLB_PRESCALER_DIV23             (ADC_CTRLB_PRESCALER_DIV23_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 23 Position */
#define ADC_CTRLB_PRESCALER_DIV24             (ADC_CTRLB_PRESCALER_DIV24_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 24 Position */
#define ADC_CTRLB_PRESCALER_DIV25             (ADC_CTRLB_PRESCALER_DIV25_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 25 Position */
#define ADC_CTRLB_PRESCALER_DIV26             (ADC_CTRLB_PRESCALER_DIV26_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 26 Position */
#define ADC_CTRLB_PRESCALER_DIV27             (ADC_CTRLB_PRESCALER_DIV27_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 27 Position */
#define ADC_CTRLB_PRESCALER_DIV28             (ADC_CTRLB_PRESCALER_DIV28_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 28 Position */
#define ADC_CTRLB_PRESCALER_DIV29             (ADC_CTRLB_PRESCALER_DIV29_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 29 Position */
#define ADC_CTRLB_PRESCALER_DIV30             (ADC_CTRLB_PRESCALER_DIV30_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 30 Position */
#define ADC_CTRLB_PRESCALER_DIV31             (ADC_CTRLB_PRESCALER_DIV31_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 31 Position */
#define ADC_CTRLB_PRESCALER_DIV32             (ADC_CTRLB_PRESCALER_DIV32_Val << ADC_CTRLB_PRESCALER_Pos) /* (ADC_CTRLB) APB clock divided by 32 Position */
#define ADC_CTRLB_TIMEBASE_Pos                _UINT32_(8)                                          /* (ADC_CTRLB) Timebase Position */
#define ADC_CTRLB_TIMEBASE_Msk                (_UINT32_(0x1F) << ADC_CTRLB_TIMEBASE_Pos)           /* (ADC_CTRLB) Timebase Mask */
#define ADC_CTRLB_TIMEBASE(value)             (ADC_CTRLB_TIMEBASE_Msk & (_UINT32_(value) << ADC_CTRLB_TIMEBASE_Pos)) /* Assignment of value for TIMEBASE in the ADC_CTRLB register */
#define ADC_CTRLB_Msk                         _UINT32_(0x00001F1F)                                 /* (ADC_CTRLB) Register Mask  */


/* -------- ADC_CTRLC : (ADC Offset: 0x08) (R/W 32) Control C -------- */
#define ADC_CTRLC_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_CTRLC) Control C  Reset Value */

#define ADC_CTRLC_REFSEL_Pos                  _UINT32_(0)                                          /* (ADC_CTRLC) Reference Selection Position */
#define ADC_CTRLC_REFSEL_Msk                  (_UINT32_(0x7) << ADC_CTRLC_REFSEL_Pos)              /* (ADC_CTRLC) Reference Selection Mask */
#define ADC_CTRLC_REFSEL(value)               (ADC_CTRLC_REFSEL_Msk & (_UINT32_(value) << ADC_CTRLC_REFSEL_Pos)) /* Assignment of value for REFSEL in the ADC_CTRLC register */
#define   ADC_CTRLC_REFSEL_VDD_Val            _UINT32_(0x0)                                        /* (ADC_CTRLC) VDD  */
#define   ADC_CTRLC_REFSEL_EXTVREF_Val        _UINT32_(0x2)                                        /* (ADC_CTRLC) External pin used as reference  */
#define   ADC_CTRLC_REFSEL_1V024_Val          _UINT32_(0x4)                                        /* (ADC_CTRLC) Internal reference 1.024V  */
#define   ADC_CTRLC_REFSEL_2V048_Val          _UINT32_(0x5)                                        /* (ADC_CTRLC) Internal reference 2.048V  */
#define   ADC_CTRLC_REFSEL_4V096_Val          _UINT32_(0x6)                                        /* (ADC_CTRLC) Internal reference 4.096V  */
#define   ADC_CTRLC_REFSEL_2V500_Val          _UINT32_(0x7)                                        /* (ADC_CTRLC) Internal reference 2.500V  */
#define ADC_CTRLC_REFSEL_VDD                  (ADC_CTRLC_REFSEL_VDD_Val << ADC_CTRLC_REFSEL_Pos)   /* (ADC_CTRLC) VDD Position */
#define ADC_CTRLC_REFSEL_EXTVREF              (ADC_CTRLC_REFSEL_EXTVREF_Val << ADC_CTRLC_REFSEL_Pos) /* (ADC_CTRLC) External pin used as reference Position */
#define ADC_CTRLC_REFSEL_1V024                (ADC_CTRLC_REFSEL_1V024_Val << ADC_CTRLC_REFSEL_Pos) /* (ADC_CTRLC) Internal reference 1.024V Position */
#define ADC_CTRLC_REFSEL_2V048                (ADC_CTRLC_REFSEL_2V048_Val << ADC_CTRLC_REFSEL_Pos) /* (ADC_CTRLC) Internal reference 2.048V Position */
#define ADC_CTRLC_REFSEL_4V096                (ADC_CTRLC_REFSEL_4V096_Val << ADC_CTRLC_REFSEL_Pos) /* (ADC_CTRLC) Internal reference 4.096V Position */
#define ADC_CTRLC_REFSEL_2V500                (ADC_CTRLC_REFSEL_2V500_Val << ADC_CTRLC_REFSEL_Pos) /* (ADC_CTRLC) Internal reference 2.500V Position */
#define ADC_CTRLC_Msk                         _UINT32_(0x00000007)                                 /* (ADC_CTRLC) Register Mask  */


/* -------- ADC_CTRLD : (ADC Offset: 0x0C) (R/W 32) Control D -------- */
#define ADC_CTRLD_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_CTRLD) Control D  Reset Value */

#define ADC_CTRLD_SAMPNUM_Pos                 _UINT32_(0)                                          /* (ADC_CTRLD) Sample Accumulation Number Select Position */
#define ADC_CTRLD_SAMPNUM_Msk                 (_UINT32_(0xF) << ADC_CTRLD_SAMPNUM_Pos)             /* (ADC_CTRLD) Sample Accumulation Number Select Mask */
#define ADC_CTRLD_SAMPNUM(value)              (ADC_CTRLD_SAMPNUM_Msk & (_UINT32_(value) << ADC_CTRLD_SAMPNUM_Pos)) /* Assignment of value for SAMPNUM in the ADC_CTRLD register */
#define   ADC_CTRLD_SAMPNUM_NONE_Val          _UINT32_(0x0)                                        /* (ADC_CTRLD) No accumulation, single sample per conversion result  */
#define   ADC_CTRLD_SAMPNUM_ACC2_Val          _UINT32_(0x1)                                        /* (ADC_CTRLD) 2 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC4_Val          _UINT32_(0x2)                                        /* (ADC_CTRLD) 4 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC8_Val          _UINT32_(0x3)                                        /* (ADC_CTRLD) 8 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC16_Val         _UINT32_(0x4)                                        /* (ADC_CTRLD) 16 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC32_Val         _UINT32_(0x5)                                        /* (ADC_CTRLD) 32 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC64_Val         _UINT32_(0x6)                                        /* (ADC_CTRLD) 64 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC128_Val        _UINT32_(0x7)                                        /* (ADC_CTRLD) 128 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC256_Val        _UINT32_(0x8)                                        /* (ADC_CTRLD) 256 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC512_Val        _UINT32_(0x9)                                        /* (ADC_CTRLD) 512 samples accumulated  */
#define   ADC_CTRLD_SAMPNUM_ACC1024_Val       _UINT32_(0xA)                                        /* (ADC_CTRLD) 1024 samples accumulated  */
#define ADC_CTRLD_SAMPNUM_NONE                (ADC_CTRLD_SAMPNUM_NONE_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) No accumulation, single sample per conversion result Position */
#define ADC_CTRLD_SAMPNUM_ACC2                (ADC_CTRLD_SAMPNUM_ACC2_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 2 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC4                (ADC_CTRLD_SAMPNUM_ACC4_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 4 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC8                (ADC_CTRLD_SAMPNUM_ACC8_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 8 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC16               (ADC_CTRLD_SAMPNUM_ACC16_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 16 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC32               (ADC_CTRLD_SAMPNUM_ACC32_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 32 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC64               (ADC_CTRLD_SAMPNUM_ACC64_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 64 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC128              (ADC_CTRLD_SAMPNUM_ACC128_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 128 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC256              (ADC_CTRLD_SAMPNUM_ACC256_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 256 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC512              (ADC_CTRLD_SAMPNUM_ACC512_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 512 samples accumulated Position */
#define ADC_CTRLD_SAMPNUM_ACC1024             (ADC_CTRLD_SAMPNUM_ACC1024_Val << ADC_CTRLD_SAMPNUM_Pos) /* (ADC_CTRLD) 1024 samples accumulated Position */
#define ADC_CTRLD_RESOLUTION_Pos              _UINT32_(8)                                          /* (ADC_CTRLD) ADC Resolution Position */
#define ADC_CTRLD_RESOLUTION_Msk              (_UINT32_(0x3) << ADC_CTRLD_RESOLUTION_Pos)          /* (ADC_CTRLD) ADC Resolution Mask */
#define ADC_CTRLD_RESOLUTION(value)           (ADC_CTRLD_RESOLUTION_Msk & (_UINT32_(value) << ADC_CTRLD_RESOLUTION_Pos)) /* Assignment of value for RESOLUTION in the ADC_CTRLD register */
#define   ADC_CTRLD_RESOLUTION_12BIT_Val      _UINT32_(0x0)                                        /* (ADC_CTRLD) 12-bit ADC Result  */
#define   ADC_CTRLD_RESOLUTION_13BIT_Val      _UINT32_(0x1)                                        /* (ADC_CTRLD) 13-bit ADC Result  */
#define   ADC_CTRLD_RESOLUTION_10BIT_Val      _UINT32_(0x2)                                        /* (ADC_CTRLD) 10-bit ADC Result  */
#define   ADC_CTRLD_RESOLUTION_8BIT_Val       _UINT32_(0x3)                                        /* (ADC_CTRLD) 8-bit ADC Result  */
#define ADC_CTRLD_RESOLUTION_12BIT            (ADC_CTRLD_RESOLUTION_12BIT_Val << ADC_CTRLD_RESOLUTION_Pos) /* (ADC_CTRLD) 12-bit ADC Result Position */
#define ADC_CTRLD_RESOLUTION_13BIT            (ADC_CTRLD_RESOLUTION_13BIT_Val << ADC_CTRLD_RESOLUTION_Pos) /* (ADC_CTRLD) 13-bit ADC Result Position */
#define ADC_CTRLD_RESOLUTION_10BIT            (ADC_CTRLD_RESOLUTION_10BIT_Val << ADC_CTRLD_RESOLUTION_Pos) /* (ADC_CTRLD) 10-bit ADC Result Position */
#define ADC_CTRLD_RESOLUTION_8BIT             (ADC_CTRLD_RESOLUTION_8BIT_Val << ADC_CTRLD_RESOLUTION_Pos) /* (ADC_CTRLD) 8-bit ADC Result Position */
#define ADC_CTRLD_SCALING_Pos                 _UINT32_(10)                                         /* (ADC_CTRLD) Result Scaling Position */
#define ADC_CTRLD_SCALING_Msk                 (_UINT32_(0x3) << ADC_CTRLD_SCALING_Pos)             /* (ADC_CTRLD) Result Scaling Mask */
#define ADC_CTRLD_SCALING(value)              (ADC_CTRLD_SCALING_Msk & (_UINT32_(value) << ADC_CTRLD_SCALING_Pos)) /* Assignment of value for SCALING in the ADC_CTRLD register */
#define   ADC_CTRLD_SCALING_NORMAL_Val        _UINT32_(0x0)                                        /* (ADC_CTRLD) The ADC output of the sample or accumulated result is right adjusted  */
#define   ADC_CTRLD_SCALING_LEFTADJ_Val       _UINT32_(0x1)                                        /* (ADC_CTRLD) The ADC output is left adjusted  */
#define   ADC_CTRLD_SCALING_AVERAGE_Val       _UINT32_(0x2)                                        /* (ADC_CTRLD) The accumulated ADC result is averaged and right adjusted  */
#define ADC_CTRLD_SCALING_NORMAL              (ADC_CTRLD_SCALING_NORMAL_Val << ADC_CTRLD_SCALING_Pos) /* (ADC_CTRLD) The ADC output of the sample or accumulated result is right adjusted Position */
#define ADC_CTRLD_SCALING_LEFTADJ             (ADC_CTRLD_SCALING_LEFTADJ_Val << ADC_CTRLD_SCALING_Pos) /* (ADC_CTRLD) The ADC output is left adjusted Position */
#define ADC_CTRLD_SCALING_AVERAGE             (ADC_CTRLD_SCALING_AVERAGE_Val << ADC_CTRLD_SCALING_Pos) /* (ADC_CTRLD) The accumulated ADC result is averaged and right adjusted Position */
#define ADC_CTRLD_FREERUN_Pos                 _UINT32_(12)                                         /* (ADC_CTRLD) Free-Running Position */
#define ADC_CTRLD_FREERUN_Msk                 (_UINT32_(0x1) << ADC_CTRLD_FREERUN_Pos)             /* (ADC_CTRLD) Free-Running Mask */
#define ADC_CTRLD_FREERUN(value)              (ADC_CTRLD_FREERUN_Msk & (_UINT32_(value) << ADC_CTRLD_FREERUN_Pos)) /* Assignment of value for FREERUN in the ADC_CTRLD register */
#define ADC_CTRLD_CHOPPING_Pos                _UINT32_(13)                                         /* (ADC_CTRLD) Sign Chopping Position */
#define ADC_CTRLD_CHOPPING_Msk                (_UINT32_(0x1) << ADC_CTRLD_CHOPPING_Pos)            /* (ADC_CTRLD) Sign Chopping Mask */
#define ADC_CTRLD_CHOPPING(value)             (ADC_CTRLD_CHOPPING_Msk & (_UINT32_(value) << ADC_CTRLD_CHOPPING_Pos)) /* Assignment of value for CHOPPING in the ADC_CTRLD register */
#define ADC_CTRLD_FILTER_Pos                  _UINT32_(14)                                         /* (ADC_CTRLD) Low-Pass Filter Position */
#define ADC_CTRLD_FILTER_Msk                  (_UINT32_(0x1) << ADC_CTRLD_FILTER_Pos)              /* (ADC_CTRLD) Low-Pass Filter Mask */
#define ADC_CTRLD_FILTER(value)               (ADC_CTRLD_FILTER_Msk & (_UINT32_(value) << ADC_CTRLD_FILTER_Pos)) /* Assignment of value for FILTER in the ADC_CTRLD register */
#define ADC_CTRLD_VPD_Pos                     _UINT32_(16)                                         /* (ADC_CTRLD) Voltage Pump Disable Position */
#define ADC_CTRLD_VPD_Msk                     (_UINT32_(0x1) << ADC_CTRLD_VPD_Pos)                 /* (ADC_CTRLD) Voltage Pump Disable Mask */
#define ADC_CTRLD_VPD(value)                  (ADC_CTRLD_VPD_Msk & (_UINT32_(value) << ADC_CTRLD_VPD_Pos)) /* Assignment of value for VPD in the ADC_CTRLD register */
#define ADC_CTRLD_Msk                         _UINT32_(0x00017F0F)                                 /* (ADC_CTRLD) Register Mask  */


/* -------- ADC_CTRLE : (ADC Offset: 0x10) (R/W 32) Control E -------- */
#define ADC_CTRLE_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_CTRLE) Control E  Reset Value */

#define ADC_CTRLE_SAMPLEN_Pos                 _UINT32_(0)                                          /* (ADC_CTRLE) Sample Length Position */
#define ADC_CTRLE_SAMPLEN_Msk                 (_UINT32_(0xFF) << ADC_CTRLE_SAMPLEN_Pos)            /* (ADC_CTRLE) Sample Length Mask */
#define ADC_CTRLE_SAMPLEN(value)              (ADC_CTRLE_SAMPLEN_Msk & (_UINT32_(value) << ADC_CTRLE_SAMPLEN_Pos)) /* Assignment of value for SAMPLEN in the ADC_CTRLE register */
#define ADC_CTRLE_Msk                         _UINT32_(0x000000FF)                                 /* (ADC_CTRLE) Register Mask  */


/* -------- ADC_WINCTRL : (ADC Offset: 0x1C) (R/W 32) Window Control -------- */
#define ADC_WINCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_WINCTRL) Window Control  Reset Value */

#define ADC_WINCTRL_WINMODE_Pos               _UINT32_(0)                                          /* (ADC_WINCTRL) Window Comparator Mode Position */
#define ADC_WINCTRL_WINMODE_Msk               (_UINT32_(0x7) << ADC_WINCTRL_WINMODE_Pos)           /* (ADC_WINCTRL) Window Comparator Mode Mask */
#define ADC_WINCTRL_WINMODE(value)            (ADC_WINCTRL_WINMODE_Msk & (_UINT32_(value) << ADC_WINCTRL_WINMODE_Pos)) /* Assignment of value for WINMODE in the ADC_WINCTRL register */
#define   ADC_WINCTRL_WINMODE_NONE_Val        _UINT32_(0x0)                                        /* (ADC_WINCTRL) No Window Comparison  */
#define   ADC_WINCTRL_WINMODE_BELOW_Val       _UINT32_(0x1)                                        /* (ADC_WINCTRL) OUTPUT 'less than' WINLT  */
#define   ADC_WINCTRL_WINMODE_ABOVE_Val       _UINT32_(0x2)                                        /* (ADC_WINCTRL) OUTPUT 'greater than' WINHT  */
#define   ADC_WINCTRL_WINMODE_INSIDE_Val      _UINT32_(0x3)                                        /* (ADC_WINCTRL) WINLT 'less than' OUTPUT 'less than' WINHT  */
#define   ADC_WINCTRL_WINMODE_OUTSIDE_Val     _UINT32_(0x4)                                        /* (ADC_WINCTRL) OUTPUT 'less than' WINLT or OUTPUT 'greater than'WINHT  */
#define ADC_WINCTRL_WINMODE_NONE              (ADC_WINCTRL_WINMODE_NONE_Val << ADC_WINCTRL_WINMODE_Pos) /* (ADC_WINCTRL) No Window Comparison Position */
#define ADC_WINCTRL_WINMODE_BELOW             (ADC_WINCTRL_WINMODE_BELOW_Val << ADC_WINCTRL_WINMODE_Pos) /* (ADC_WINCTRL) OUTPUT 'less than' WINLT Position */
#define ADC_WINCTRL_WINMODE_ABOVE             (ADC_WINCTRL_WINMODE_ABOVE_Val << ADC_WINCTRL_WINMODE_Pos) /* (ADC_WINCTRL) OUTPUT 'greater than' WINHT Position */
#define ADC_WINCTRL_WINMODE_INSIDE            (ADC_WINCTRL_WINMODE_INSIDE_Val << ADC_WINCTRL_WINMODE_Pos) /* (ADC_WINCTRL) WINLT 'less than' OUTPUT 'less than' WINHT Position */
#define ADC_WINCTRL_WINMODE_OUTSIDE           (ADC_WINCTRL_WINMODE_OUTSIDE_Val << ADC_WINCTRL_WINMODE_Pos) /* (ADC_WINCTRL) OUTPUT 'less than' WINLT or OUTPUT 'greater than'WINHT Position */
#define ADC_WINCTRL_WINSRC_Pos                _UINT32_(3)                                          /* (ADC_WINCTRL) Window Mode Source Position */
#define ADC_WINCTRL_WINSRC_Msk                (_UINT32_(0x1) << ADC_WINCTRL_WINSRC_Pos)            /* (ADC_WINCTRL) Window Mode Source Mask */
#define ADC_WINCTRL_WINSRC(value)             (ADC_WINCTRL_WINSRC_Msk & (_UINT32_(value) << ADC_WINCTRL_WINSRC_Pos)) /* Assignment of value for WINSRC in the ADC_WINCTRL register */
#define   ADC_WINCTRL_WINSRC_RESULT_Val       _UINT32_(0x0)                                        /* (ADC_WINCTRL) Use RESULT[15:0] as Window Comparator source  */
#define   ADC_WINCTRL_WINSRC_SAMPLE_Val       _UINT32_(0x1)                                        /* (ADC_WINCTRL) Use SAMPLE[15:0] as Window Comparator source  */
#define ADC_WINCTRL_WINSRC_RESULT             (ADC_WINCTRL_WINSRC_RESULT_Val << ADC_WINCTRL_WINSRC_Pos) /* (ADC_WINCTRL) Use RESULT[15:0] as Window Comparator source Position */
#define ADC_WINCTRL_WINSRC_SAMPLE             (ADC_WINCTRL_WINSRC_SAMPLE_Val << ADC_WINCTRL_WINSRC_Pos) /* (ADC_WINCTRL) Use SAMPLE[15:0] as Window Comparator source Position */
#define ADC_WINCTRL_Msk                       _UINT32_(0x0000000F)                                 /* (ADC_WINCTRL) Register Mask  */


/* -------- ADC_WINLT : (ADC Offset: 0x20) (R/W 32) Window Low Threshold -------- */
#define ADC_WINLT_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_WINLT) Window Low Threshold  Reset Value */

#define ADC_WINLT_WINLT_Pos                   _UINT32_(0)                                          /* (ADC_WINLT) Window Low Threshold Position */
#define ADC_WINLT_WINLT_Msk                   (_UINT32_(0xFFFF) << ADC_WINLT_WINLT_Pos)            /* (ADC_WINLT) Window Low Threshold Mask */
#define ADC_WINLT_WINLT(value)                (ADC_WINLT_WINLT_Msk & (_UINT32_(value) << ADC_WINLT_WINLT_Pos)) /* Assignment of value for WINLT in the ADC_WINLT register */
#define ADC_WINLT_Msk                         _UINT32_(0x0000FFFF)                                 /* (ADC_WINLT) Register Mask  */


/* -------- ADC_WINHT : (ADC Offset: 0x24) (R/W 32) Window High Threshold -------- */
#define ADC_WINHT_RESETVALUE                  _UINT32_(0x00)                                       /*  (ADC_WINHT) Window High Threshold  Reset Value */

#define ADC_WINHT_WINHT_Pos                   _UINT32_(0)                                          /* (ADC_WINHT) Window High Threshold Position */
#define ADC_WINHT_WINHT_Msk                   (_UINT32_(0xFFFF) << ADC_WINHT_WINHT_Pos)            /* (ADC_WINHT) Window High Threshold Mask */
#define ADC_WINHT_WINHT(value)                (ADC_WINHT_WINHT_Msk & (_UINT32_(value) << ADC_WINHT_WINHT_Pos)) /* Assignment of value for WINHT in the ADC_WINHT register */
#define ADC_WINHT_Msk                         _UINT32_(0x0000FFFF)                                 /* (ADC_WINHT) Register Mask  */


/* -------- ADC_INPUTCTRL : (ADC Offset: 0x28) (R/W 32) Input Multiplexer Control -------- */
#define ADC_INPUTCTRL_RESETVALUE              _UINT32_(0x00)                                       /*  (ADC_INPUTCTRL) Input Multiplexer Control  Reset Value */

#define ADC_INPUTCTRL_MUXNEG_Pos              _UINT32_(0)                                          /* (ADC_INPUTCTRL) Negative Input Multiplexer Position */
#define ADC_INPUTCTRL_MUXNEG_Msk              (_UINT32_(0x7F) << ADC_INPUTCTRL_MUXNEG_Pos)         /* (ADC_INPUTCTRL) Negative Input Multiplexer Mask */
#define ADC_INPUTCTRL_MUXNEG(value)           (ADC_INPUTCTRL_MUXNEG_Msk & (_UINT32_(value) << ADC_INPUTCTRL_MUXNEG_Pos)) /* Assignment of value for MUXNEG in the ADC_INPUTCTRL register */
#define   ADC_INPUTCTRL_MUXNEG_AIN2_Val       _UINT32_(0x2)                                        /* (ADC_INPUTCTRL) ADC AIN2 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN3_Val       _UINT32_(0x3)                                        /* (ADC_INPUTCTRL) ADC AIN3 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN4_Val       _UINT32_(0x4)                                        /* (ADC_INPUTCTRL) ADC AIN4 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN5_Val       _UINT32_(0x5)                                        /* (ADC_INPUTCTRL) ADC AIN5 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN6_Val       _UINT32_(0x6)                                        /* (ADC_INPUTCTRL) ADC AIN6 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN7_Val       _UINT32_(0x7)                                        /* (ADC_INPUTCTRL) ADC AIN7 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN16_Val      _UINT32_(0x10)                                       /* (ADC_INPUTCTRL) ADC AIN16 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN17_Val      _UINT32_(0x11)                                       /* (ADC_INPUTCTRL) ADC AIN17 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN18_Val      _UINT32_(0x12)                                       /* (ADC_INPUTCTRL) ADC AIN18 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN19_Val      _UINT32_(0x13)                                       /* (ADC_INPUTCTRL) ADC AIN19 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN20_Val      _UINT32_(0x14)                                       /* (ADC_INPUTCTRL) ADC AIN20 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN21_Val      _UINT32_(0x15)                                       /* (ADC_INPUTCTRL) ADC AIN21 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN22_Val      _UINT32_(0x16)                                       /* (ADC_INPUTCTRL) ADC AIN22 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN23_Val      _UINT32_(0x17)                                       /* (ADC_INPUTCTRL) ADC AIN23 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN24_Val      _UINT32_(0x18)                                       /* (ADC_INPUTCTRL) ADC AIN24 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN25_Val      _UINT32_(0x19)                                       /* (ADC_INPUTCTRL) ADC AIN25 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN26_Val      _UINT32_(0x1A)                                       /* (ADC_INPUTCTRL) ADC AIN26 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN27_Val      _UINT32_(0x1B)                                       /* (ADC_INPUTCTRL) ADC AIN27 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN28_Val      _UINT32_(0x1C)                                       /* (ADC_INPUTCTRL) ADC AIN28 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN29_Val      _UINT32_(0x1D)                                       /* (ADC_INPUTCTRL) ADC AIN29 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN31_Val      _UINT32_(0x1F)                                       /* (ADC_INPUTCTRL) ADC AIN31 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN40_Val      _UINT32_(0x28)                                       /* (ADC_INPUTCTRL) ADC AIN40 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN41_Val      _UINT32_(0x29)                                       /* (ADC_INPUTCTRL) ADC AIN41 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN42_Val      _UINT32_(0x2A)                                       /* (ADC_INPUTCTRL) ADC AIN42 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN43_Val      _UINT32_(0x2B)                                       /* (ADC_INPUTCTRL) ADC AIN43 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN44_Val      _UINT32_(0x2C)                                       /* (ADC_INPUTCTRL) ADC AIN44 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN45_Val      _UINT32_(0x2D)                                       /* (ADC_INPUTCTRL) ADC AIN45 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN46_Val      _UINT32_(0x2E)                                       /* (ADC_INPUTCTRL) ADC AIN46 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_AIN47_Val      _UINT32_(0x2F)                                       /* (ADC_INPUTCTRL) ADC AIN47 Pin  */
#define   ADC_INPUTCTRL_MUXNEG_GND_Val        _UINT32_(0x60)                                       /* (ADC_INPUTCTRL) Analog Ground  */
#define   ADC_INPUTCTRL_MUXNEG_VREFP_Val      _UINT32_(0x61)                                       /* (ADC_INPUTCTRL) Positive Reference  */
#define ADC_INPUTCTRL_MUXNEG_AIN2             (ADC_INPUTCTRL_MUXNEG_AIN2_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN2 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN3             (ADC_INPUTCTRL_MUXNEG_AIN3_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN3 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN4             (ADC_INPUTCTRL_MUXNEG_AIN4_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN4 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN5             (ADC_INPUTCTRL_MUXNEG_AIN5_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN5 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN6             (ADC_INPUTCTRL_MUXNEG_AIN6_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN6 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN7             (ADC_INPUTCTRL_MUXNEG_AIN7_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN7 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN16            (ADC_INPUTCTRL_MUXNEG_AIN16_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN16 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN17            (ADC_INPUTCTRL_MUXNEG_AIN17_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN17 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN18            (ADC_INPUTCTRL_MUXNEG_AIN18_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN18 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN19            (ADC_INPUTCTRL_MUXNEG_AIN19_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN19 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN20            (ADC_INPUTCTRL_MUXNEG_AIN20_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN20 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN21            (ADC_INPUTCTRL_MUXNEG_AIN21_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN21 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN22            (ADC_INPUTCTRL_MUXNEG_AIN22_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN22 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN23            (ADC_INPUTCTRL_MUXNEG_AIN23_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN23 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN24            (ADC_INPUTCTRL_MUXNEG_AIN24_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN24 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN25            (ADC_INPUTCTRL_MUXNEG_AIN25_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN25 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN26            (ADC_INPUTCTRL_MUXNEG_AIN26_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN26 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN27            (ADC_INPUTCTRL_MUXNEG_AIN27_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN27 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN28            (ADC_INPUTCTRL_MUXNEG_AIN28_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN28 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN29            (ADC_INPUTCTRL_MUXNEG_AIN29_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN29 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN31            (ADC_INPUTCTRL_MUXNEG_AIN31_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN31 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN40            (ADC_INPUTCTRL_MUXNEG_AIN40_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN40 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN41            (ADC_INPUTCTRL_MUXNEG_AIN41_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN41 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN42            (ADC_INPUTCTRL_MUXNEG_AIN42_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN42 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN43            (ADC_INPUTCTRL_MUXNEG_AIN43_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN43 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN44            (ADC_INPUTCTRL_MUXNEG_AIN44_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN44 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN45            (ADC_INPUTCTRL_MUXNEG_AIN45_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN45 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN46            (ADC_INPUTCTRL_MUXNEG_AIN46_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN46 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_AIN47            (ADC_INPUTCTRL_MUXNEG_AIN47_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) ADC AIN47 Pin Position */
#define ADC_INPUTCTRL_MUXNEG_GND              (ADC_INPUTCTRL_MUXNEG_GND_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) Analog Ground Position */
#define ADC_INPUTCTRL_MUXNEG_VREFP            (ADC_INPUTCTRL_MUXNEG_VREFP_Val << ADC_INPUTCTRL_MUXNEG_Pos) /* (ADC_INPUTCTRL) Positive Reference Position */
#define ADC_INPUTCTRL_MUXPOS_Pos              _UINT32_(8)                                          /* (ADC_INPUTCTRL) Positive Input Multiplexer Position */
#define ADC_INPUTCTRL_MUXPOS_Msk              (_UINT32_(0x7F) << ADC_INPUTCTRL_MUXPOS_Pos)         /* (ADC_INPUTCTRL) Positive Input Multiplexer Mask */
#define ADC_INPUTCTRL_MUXPOS(value)           (ADC_INPUTCTRL_MUXPOS_Msk & (_UINT32_(value) << ADC_INPUTCTRL_MUXPOS_Pos)) /* Assignment of value for MUXPOS in the ADC_INPUTCTRL register */
#define   ADC_INPUTCTRL_MUXPOS_AIN2_Val       _UINT32_(0x2)                                        /* (ADC_INPUTCTRL) ADC AIN2 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN3_Val       _UINT32_(0x3)                                        /* (ADC_INPUTCTRL) ADC AIN3 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN4_Val       _UINT32_(0x4)                                        /* (ADC_INPUTCTRL) ADC AIN4 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN5_Val       _UINT32_(0x5)                                        /* (ADC_INPUTCTRL) ADC AIN5 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN6_Val       _UINT32_(0x6)                                        /* (ADC_INPUTCTRL) ADC AIN6 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN7_Val       _UINT32_(0x7)                                        /* (ADC_INPUTCTRL) ADC AIN7 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN16_Val      _UINT32_(0x10)                                       /* (ADC_INPUTCTRL) ADC AIN16 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN17_Val      _UINT32_(0x11)                                       /* (ADC_INPUTCTRL) ADC AIN17 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN18_Val      _UINT32_(0x12)                                       /* (ADC_INPUTCTRL) ADC AIN18 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN19_Val      _UINT32_(0x13)                                       /* (ADC_INPUTCTRL) ADC AIN19 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN20_Val      _UINT32_(0x14)                                       /* (ADC_INPUTCTRL) ADC AIN20 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN21_Val      _UINT32_(0x15)                                       /* (ADC_INPUTCTRL) ADC AIN21 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN22_Val      _UINT32_(0x16)                                       /* (ADC_INPUTCTRL) ADC AIN22 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN23_Val      _UINT32_(0x17)                                       /* (ADC_INPUTCTRL) ADC AIN23 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN24_Val      _UINT32_(0x18)                                       /* (ADC_INPUTCTRL) ADC AIN24 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN25_Val      _UINT32_(0x19)                                       /* (ADC_INPUTCTRL) ADC AIN25 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN26_Val      _UINT32_(0x1A)                                       /* (ADC_INPUTCTRL) ADC AIN26 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN27_Val      _UINT32_(0x1B)                                       /* (ADC_INPUTCTRL) ADC AIN27 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN28_Val      _UINT32_(0x1C)                                       /* (ADC_INPUTCTRL) ADC AIN28 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN29_Val      _UINT32_(0x1D)                                       /* (ADC_INPUTCTRL) ADC AIN29 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN31_Val      _UINT32_(0x1F)                                       /* (ADC_INPUTCTRL) ADC AIN31 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN40_Val      _UINT32_(0x28)                                       /* (ADC_INPUTCTRL) ADC AIN40 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN41_Val      _UINT32_(0x29)                                       /* (ADC_INPUTCTRL) ADC AIN41 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN42_Val      _UINT32_(0x2A)                                       /* (ADC_INPUTCTRL) ADC AIN42 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN43_Val      _UINT32_(0x2B)                                       /* (ADC_INPUTCTRL) ADC AIN43 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN44_Val      _UINT32_(0x2C)                                       /* (ADC_INPUTCTRL) ADC AIN44 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN45_Val      _UINT32_(0x2D)                                       /* (ADC_INPUTCTRL) ADC AIN45 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN46_Val      _UINT32_(0x2E)                                       /* (ADC_INPUTCTRL) ADC AIN46 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_AIN47_Val      _UINT32_(0x2F)                                       /* (ADC_INPUTCTRL) ADC AIN47 Pin  */
#define   ADC_INPUTCTRL_MUXPOS_GND_Val        _UINT32_(0x60)                                       /* (ADC_INPUTCTRL) Analog Ground  */
#define   ADC_INPUTCTRL_MUXPOS_VDDCOREDIV4_Val _UINT32_(0x61)                                       /* (ADC_INPUTCTRL) 1/4 Scaled Core Supply  */
#define   ADC_INPUTCTRL_MUXPOS_TEMPSENSE_Val  _UINT32_(0x62)                                       /* (ADC_INPUTCTRL) Temperature Sensor  */
#define   ADC_INPUTCTRL_MUXPOS_VDDIODIV10_Val _UINT32_(0x64)                                       /* (ADC_INPUTCTRL) 1/10 Scaled VDDIO Supply  */
#define   ADC_INPUTCTRL_MUXPOS_VDDIO2DIV10_Val _UINT32_(0x65)                                       /* (ADC_INPUTCTRL) 1/10 Scaled VDDIO2 Supply  */
#define   ADC_INPUTCTRL_MUXPOS_ACVREFSCALE0_Val _UINT32_(0x69)                                       /* (ADC_INPUTCTRL) Output from AC VREFSCALE0  */
#define   ADC_INPUTCTRL_MUXPOS_ACVREFSCALE1_Val _UINT32_(0x6A)                                       /* (ADC_INPUTCTRL) Output from AC VREFSCALE1  */
#define   ADC_INPUTCTRL_MUXPOS_TESTBUF_Val    _UINT32_(0x70)                                       /* (ADC_INPUTCTRL) Test Buffer  */
#define   ADC_INPUTCTRL_MUXPOS_PTC_Val        _UINT32_(0x7E)                                       /* (ADC_INPUTCTRL) PTC  */
#define ADC_INPUTCTRL_MUXPOS_AIN2             (ADC_INPUTCTRL_MUXPOS_AIN2_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN2 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN3             (ADC_INPUTCTRL_MUXPOS_AIN3_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN3 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN4             (ADC_INPUTCTRL_MUXPOS_AIN4_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN4 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN5             (ADC_INPUTCTRL_MUXPOS_AIN5_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN5 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN6             (ADC_INPUTCTRL_MUXPOS_AIN6_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN6 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN7             (ADC_INPUTCTRL_MUXPOS_AIN7_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN7 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN16            (ADC_INPUTCTRL_MUXPOS_AIN16_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN16 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN17            (ADC_INPUTCTRL_MUXPOS_AIN17_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN17 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN18            (ADC_INPUTCTRL_MUXPOS_AIN18_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN18 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN19            (ADC_INPUTCTRL_MUXPOS_AIN19_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN19 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN20            (ADC_INPUTCTRL_MUXPOS_AIN20_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN20 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN21            (ADC_INPUTCTRL_MUXPOS_AIN21_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN21 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN22            (ADC_INPUTCTRL_MUXPOS_AIN22_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN22 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN23            (ADC_INPUTCTRL_MUXPOS_AIN23_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN23 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN24            (ADC_INPUTCTRL_MUXPOS_AIN24_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN24 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN25            (ADC_INPUTCTRL_MUXPOS_AIN25_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN25 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN26            (ADC_INPUTCTRL_MUXPOS_AIN26_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN26 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN27            (ADC_INPUTCTRL_MUXPOS_AIN27_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN27 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN28            (ADC_INPUTCTRL_MUXPOS_AIN28_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN28 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN29            (ADC_INPUTCTRL_MUXPOS_AIN29_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN29 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN31            (ADC_INPUTCTRL_MUXPOS_AIN31_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN31 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN40            (ADC_INPUTCTRL_MUXPOS_AIN40_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN40 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN41            (ADC_INPUTCTRL_MUXPOS_AIN41_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN41 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN42            (ADC_INPUTCTRL_MUXPOS_AIN42_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN42 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN43            (ADC_INPUTCTRL_MUXPOS_AIN43_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN43 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN44            (ADC_INPUTCTRL_MUXPOS_AIN44_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN44 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN45            (ADC_INPUTCTRL_MUXPOS_AIN45_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN45 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN46            (ADC_INPUTCTRL_MUXPOS_AIN46_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN46 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_AIN47            (ADC_INPUTCTRL_MUXPOS_AIN47_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) ADC AIN47 Pin Position */
#define ADC_INPUTCTRL_MUXPOS_GND              (ADC_INPUTCTRL_MUXPOS_GND_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) Analog Ground Position */
#define ADC_INPUTCTRL_MUXPOS_VDDCOREDIV4      (ADC_INPUTCTRL_MUXPOS_VDDCOREDIV4_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) 1/4 Scaled Core Supply Position */
#define ADC_INPUTCTRL_MUXPOS_TEMPSENSE        (ADC_INPUTCTRL_MUXPOS_TEMPSENSE_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) Temperature Sensor Position */
#define ADC_INPUTCTRL_MUXPOS_VDDIODIV10       (ADC_INPUTCTRL_MUXPOS_VDDIODIV10_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) 1/10 Scaled VDDIO Supply Position */
#define ADC_INPUTCTRL_MUXPOS_VDDIO2DIV10      (ADC_INPUTCTRL_MUXPOS_VDDIO2DIV10_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) 1/10 Scaled VDDIO2 Supply Position */
#define ADC_INPUTCTRL_MUXPOS_ACVREFSCALE0     (ADC_INPUTCTRL_MUXPOS_ACVREFSCALE0_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) Output from AC VREFSCALE0 Position */
#define ADC_INPUTCTRL_MUXPOS_ACVREFSCALE1     (ADC_INPUTCTRL_MUXPOS_ACVREFSCALE1_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) Output from AC VREFSCALE1 Position */
#define ADC_INPUTCTRL_MUXPOS_TESTBUF          (ADC_INPUTCTRL_MUXPOS_TESTBUF_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) Test Buffer Position */
#define ADC_INPUTCTRL_MUXPOS_PTC              (ADC_INPUTCTRL_MUXPOS_PTC_Val << ADC_INPUTCTRL_MUXPOS_Pos) /* (ADC_INPUTCTRL) PTC Position */
#define ADC_INPUTCTRL_Msk                     _UINT32_(0x00007F7F)                                 /* (ADC_INPUTCTRL) Register Mask  */


/* -------- ADC_EVCTRL : (ADC Offset: 0x2C) (R/W 32) Event Control -------- */
#define ADC_EVCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_EVCTRL) Event Control  Reset Value */

#define ADC_EVCTRL_STARTEI_Pos                _UINT32_(0)                                          /* (ADC_EVCTRL) Conversion Start Event Input Enable Position */
#define ADC_EVCTRL_STARTEI_Msk                (_UINT32_(0x1) << ADC_EVCTRL_STARTEI_Pos)            /* (ADC_EVCTRL) Conversion Start Event Input Enable Mask */
#define ADC_EVCTRL_STARTEI(value)             (ADC_EVCTRL_STARTEI_Msk & (_UINT32_(value) << ADC_EVCTRL_STARTEI_Pos)) /* Assignment of value for STARTEI in the ADC_EVCTRL register */
#define ADC_EVCTRL_STARTINV_Pos               _UINT32_(4)                                          /* (ADC_EVCTRL) Conversion Start Event Input Invert Position */
#define ADC_EVCTRL_STARTINV_Msk               (_UINT32_(0x1) << ADC_EVCTRL_STARTINV_Pos)           /* (ADC_EVCTRL) Conversion Start Event Input Invert Mask */
#define ADC_EVCTRL_STARTINV(value)            (ADC_EVCTRL_STARTINV_Msk & (_UINT32_(value) << ADC_EVCTRL_STARTINV_Pos)) /* Assignment of value for STARTINV in the ADC_EVCTRL register */
#define ADC_EVCTRL_RESRDYEO_Pos               _UINT32_(8)                                          /* (ADC_EVCTRL) Result Ready Event Output Enable Position */
#define ADC_EVCTRL_RESRDYEO_Msk               (_UINT32_(0x1) << ADC_EVCTRL_RESRDYEO_Pos)           /* (ADC_EVCTRL) Result Ready Event Output Enable Mask */
#define ADC_EVCTRL_RESRDYEO(value)            (ADC_EVCTRL_RESRDYEO_Msk & (_UINT32_(value) << ADC_EVCTRL_RESRDYEO_Pos)) /* Assignment of value for RESRDYEO in the ADC_EVCTRL register */
#define ADC_EVCTRL_SAMPRDYEO_Pos              _UINT32_(9)                                          /* (ADC_EVCTRL) Sample Ready Event Output Enable Position */
#define ADC_EVCTRL_SAMPRDYEO_Msk              (_UINT32_(0x1) << ADC_EVCTRL_SAMPRDYEO_Pos)          /* (ADC_EVCTRL) Sample Ready Event Output Enable Mask */
#define ADC_EVCTRL_SAMPRDYEO(value)           (ADC_EVCTRL_SAMPRDYEO_Msk & (_UINT32_(value) << ADC_EVCTRL_SAMPRDYEO_Pos)) /* Assignment of value for SAMPRDYEO in the ADC_EVCTRL register */
#define ADC_EVCTRL_WCMPEO_Pos                 _UINT32_(10)                                         /* (ADC_EVCTRL) Window Comparator Event Output Enable Position */
#define ADC_EVCTRL_WCMPEO_Msk                 (_UINT32_(0x1) << ADC_EVCTRL_WCMPEO_Pos)             /* (ADC_EVCTRL) Window Comparator Event Output Enable Mask */
#define ADC_EVCTRL_WCMPEO(value)              (ADC_EVCTRL_WCMPEO_Msk & (_UINT32_(value) << ADC_EVCTRL_WCMPEO_Pos)) /* Assignment of value for WCMPEO in the ADC_EVCTRL register */
#define ADC_EVCTRL_Msk                        _UINT32_(0x00000711)                                 /* (ADC_EVCTRL) Register Mask  */


/* -------- ADC_INTENCLR : (ADC Offset: 0x30) (R/W 32) Interrupt Enable Clear -------- */
#define ADC_INTENCLR_RESETVALUE               _UINT32_(0x00)                                       /*  (ADC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define ADC_INTENCLR_RESRDY_Pos               _UINT32_(0)                                          /* (ADC_INTENCLR) Result Ready Interrupt Enable Position */
#define ADC_INTENCLR_RESRDY_Msk               (_UINT32_(0x1) << ADC_INTENCLR_RESRDY_Pos)           /* (ADC_INTENCLR) Result Ready Interrupt Enable Mask */
#define ADC_INTENCLR_RESRDY(value)            (ADC_INTENCLR_RESRDY_Msk & (_UINT32_(value) << ADC_INTENCLR_RESRDY_Pos)) /* Assignment of value for RESRDY in the ADC_INTENCLR register */
#define ADC_INTENCLR_SAMPRDY_Pos              _UINT32_(1)                                          /* (ADC_INTENCLR) Sample Ready Interrupt Enable Position */
#define ADC_INTENCLR_SAMPRDY_Msk              (_UINT32_(0x1) << ADC_INTENCLR_SAMPRDY_Pos)          /* (ADC_INTENCLR) Sample Ready Interrupt Enable Mask */
#define ADC_INTENCLR_SAMPRDY(value)           (ADC_INTENCLR_SAMPRDY_Msk & (_UINT32_(value) << ADC_INTENCLR_SAMPRDY_Pos)) /* Assignment of value for SAMPRDY in the ADC_INTENCLR register */
#define ADC_INTENCLR_WCMP_Pos                 _UINT32_(2)                                          /* (ADC_INTENCLR) Window Comparator Interrupt Enable Position */
#define ADC_INTENCLR_WCMP_Msk                 (_UINT32_(0x1) << ADC_INTENCLR_WCMP_Pos)             /* (ADC_INTENCLR) Window Comparator Interrupt Enable Mask */
#define ADC_INTENCLR_WCMP(value)              (ADC_INTENCLR_WCMP_Msk & (_UINT32_(value) << ADC_INTENCLR_WCMP_Pos)) /* Assignment of value for WCMP in the ADC_INTENCLR register */
#define ADC_INTENCLR_RESOVR_Pos               _UINT32_(3)                                          /* (ADC_INTENCLR) Result Overwrite Interrupt Enable Position */
#define ADC_INTENCLR_RESOVR_Msk               (_UINT32_(0x1) << ADC_INTENCLR_RESOVR_Pos)           /* (ADC_INTENCLR) Result Overwrite Interrupt Enable Mask */
#define ADC_INTENCLR_RESOVR(value)            (ADC_INTENCLR_RESOVR_Msk & (_UINT32_(value) << ADC_INTENCLR_RESOVR_Pos)) /* Assignment of value for RESOVR in the ADC_INTENCLR register */
#define ADC_INTENCLR_SAMPOVR_Pos              _UINT32_(4)                                          /* (ADC_INTENCLR) Sample Overwrite Interrupt Enable Position */
#define ADC_INTENCLR_SAMPOVR_Msk              (_UINT32_(0x1) << ADC_INTENCLR_SAMPOVR_Pos)          /* (ADC_INTENCLR) Sample Overwrite Interrupt Enable Mask */
#define ADC_INTENCLR_SAMPOVR(value)           (ADC_INTENCLR_SAMPOVR_Msk & (_UINT32_(value) << ADC_INTENCLR_SAMPOVR_Pos)) /* Assignment of value for SAMPOVR in the ADC_INTENCLR register */
#define ADC_INTENCLR_TRIGOVR_Pos              _UINT32_(5)                                          /* (ADC_INTENCLR) Trigger Overrun Interrupt Enable Position */
#define ADC_INTENCLR_TRIGOVR_Msk              (_UINT32_(0x1) << ADC_INTENCLR_TRIGOVR_Pos)          /* (ADC_INTENCLR) Trigger Overrun Interrupt Enable Mask */
#define ADC_INTENCLR_TRIGOVR(value)           (ADC_INTENCLR_TRIGOVR_Msk & (_UINT32_(value) << ADC_INTENCLR_TRIGOVR_Pos)) /* Assignment of value for TRIGOVR in the ADC_INTENCLR register */
#define ADC_INTENCLR_Msk                      _UINT32_(0x0000003F)                                 /* (ADC_INTENCLR) Register Mask  */


/* -------- ADC_INTENSET : (ADC Offset: 0x34) (R/W 32) Interrupt Enable Set -------- */
#define ADC_INTENSET_RESETVALUE               _UINT32_(0x00)                                       /*  (ADC_INTENSET) Interrupt Enable Set  Reset Value */

#define ADC_INTENSET_RESRDY_Pos               _UINT32_(0)                                          /* (ADC_INTENSET) Result Ready Interrupt Enable Position */
#define ADC_INTENSET_RESRDY_Msk               (_UINT32_(0x1) << ADC_INTENSET_RESRDY_Pos)           /* (ADC_INTENSET) Result Ready Interrupt Enable Mask */
#define ADC_INTENSET_RESRDY(value)            (ADC_INTENSET_RESRDY_Msk & (_UINT32_(value) << ADC_INTENSET_RESRDY_Pos)) /* Assignment of value for RESRDY in the ADC_INTENSET register */
#define ADC_INTENSET_SAMPRDY_Pos              _UINT32_(1)                                          /* (ADC_INTENSET) Sample Ready Interrupt Enable Position */
#define ADC_INTENSET_SAMPRDY_Msk              (_UINT32_(0x1) << ADC_INTENSET_SAMPRDY_Pos)          /* (ADC_INTENSET) Sample Ready Interrupt Enable Mask */
#define ADC_INTENSET_SAMPRDY(value)           (ADC_INTENSET_SAMPRDY_Msk & (_UINT32_(value) << ADC_INTENSET_SAMPRDY_Pos)) /* Assignment of value for SAMPRDY in the ADC_INTENSET register */
#define ADC_INTENSET_WCMP_Pos                 _UINT32_(2)                                          /* (ADC_INTENSET) Window Comparator Interrupt Enable Position */
#define ADC_INTENSET_WCMP_Msk                 (_UINT32_(0x1) << ADC_INTENSET_WCMP_Pos)             /* (ADC_INTENSET) Window Comparator Interrupt Enable Mask */
#define ADC_INTENSET_WCMP(value)              (ADC_INTENSET_WCMP_Msk & (_UINT32_(value) << ADC_INTENSET_WCMP_Pos)) /* Assignment of value for WCMP in the ADC_INTENSET register */
#define ADC_INTENSET_RESOVR_Pos               _UINT32_(3)                                          /* (ADC_INTENSET) Result Overwrite Interrupt Enable Position */
#define ADC_INTENSET_RESOVR_Msk               (_UINT32_(0x1) << ADC_INTENSET_RESOVR_Pos)           /* (ADC_INTENSET) Result Overwrite Interrupt Enable Mask */
#define ADC_INTENSET_RESOVR(value)            (ADC_INTENSET_RESOVR_Msk & (_UINT32_(value) << ADC_INTENSET_RESOVR_Pos)) /* Assignment of value for RESOVR in the ADC_INTENSET register */
#define ADC_INTENSET_SAMPOVR_Pos              _UINT32_(4)                                          /* (ADC_INTENSET) Sample Overwrite Interrupt Enable Position */
#define ADC_INTENSET_SAMPOVR_Msk              (_UINT32_(0x1) << ADC_INTENSET_SAMPOVR_Pos)          /* (ADC_INTENSET) Sample Overwrite Interrupt Enable Mask */
#define ADC_INTENSET_SAMPOVR(value)           (ADC_INTENSET_SAMPOVR_Msk & (_UINT32_(value) << ADC_INTENSET_SAMPOVR_Pos)) /* Assignment of value for SAMPOVR in the ADC_INTENSET register */
#define ADC_INTENSET_TRIGOVR_Pos              _UINT32_(5)                                          /* (ADC_INTENSET) Trigger Overrun Interrupt Enable Position */
#define ADC_INTENSET_TRIGOVR_Msk              (_UINT32_(0x1) << ADC_INTENSET_TRIGOVR_Pos)          /* (ADC_INTENSET) Trigger Overrun Interrupt Enable Mask */
#define ADC_INTENSET_TRIGOVR(value)           (ADC_INTENSET_TRIGOVR_Msk & (_UINT32_(value) << ADC_INTENSET_TRIGOVR_Pos)) /* Assignment of value for TRIGOVR in the ADC_INTENSET register */
#define ADC_INTENSET_Msk                      _UINT32_(0x0000003F)                                 /* (ADC_INTENSET) Register Mask  */


/* -------- ADC_INTFLAG : (ADC Offset: 0x38) (R/W 32) Interrupt Flag Status and Clear -------- */
#define ADC_INTFLAG_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define ADC_INTFLAG_RESRDY_Pos                _UINT32_(0)                                          /* (ADC_INTFLAG) Result Ready Interrupt Flag Position */
#define ADC_INTFLAG_RESRDY_Msk                (_UINT32_(0x1) << ADC_INTFLAG_RESRDY_Pos)            /* (ADC_INTFLAG) Result Ready Interrupt Flag Mask */
#define ADC_INTFLAG_RESRDY(value)             (ADC_INTFLAG_RESRDY_Msk & (_UINT32_(value) << ADC_INTFLAG_RESRDY_Pos)) /* Assignment of value for RESRDY in the ADC_INTFLAG register */
#define ADC_INTFLAG_SAMPRDY_Pos               _UINT32_(1)                                          /* (ADC_INTFLAG) Sample Ready Interrupt Flag Position */
#define ADC_INTFLAG_SAMPRDY_Msk               (_UINT32_(0x1) << ADC_INTFLAG_SAMPRDY_Pos)           /* (ADC_INTFLAG) Sample Ready Interrupt Flag Mask */
#define ADC_INTFLAG_SAMPRDY(value)            (ADC_INTFLAG_SAMPRDY_Msk & (_UINT32_(value) << ADC_INTFLAG_SAMPRDY_Pos)) /* Assignment of value for SAMPRDY in the ADC_INTFLAG register */
#define ADC_INTFLAG_WCMP_Pos                  _UINT32_(2)                                          /* (ADC_INTFLAG) Window Comparator Interrupt Flag Position */
#define ADC_INTFLAG_WCMP_Msk                  (_UINT32_(0x1) << ADC_INTFLAG_WCMP_Pos)              /* (ADC_INTFLAG) Window Comparator Interrupt Flag Mask */
#define ADC_INTFLAG_WCMP(value)               (ADC_INTFLAG_WCMP_Msk & (_UINT32_(value) << ADC_INTFLAG_WCMP_Pos)) /* Assignment of value for WCMP in the ADC_INTFLAG register */
#define ADC_INTFLAG_RESOVR_Pos                _UINT32_(3)                                          /* (ADC_INTFLAG) Result Overwrite Interrupt Flag Position */
#define ADC_INTFLAG_RESOVR_Msk                (_UINT32_(0x1) << ADC_INTFLAG_RESOVR_Pos)            /* (ADC_INTFLAG) Result Overwrite Interrupt Flag Mask */
#define ADC_INTFLAG_RESOVR(value)             (ADC_INTFLAG_RESOVR_Msk & (_UINT32_(value) << ADC_INTFLAG_RESOVR_Pos)) /* Assignment of value for RESOVR in the ADC_INTFLAG register */
#define ADC_INTFLAG_SAMPOVR_Pos               _UINT32_(4)                                          /* (ADC_INTFLAG) Sample Overwrite Interrupt Flag Position */
#define ADC_INTFLAG_SAMPOVR_Msk               (_UINT32_(0x1) << ADC_INTFLAG_SAMPOVR_Pos)           /* (ADC_INTFLAG) Sample Overwrite Interrupt Flag Mask */
#define ADC_INTFLAG_SAMPOVR(value)            (ADC_INTFLAG_SAMPOVR_Msk & (_UINT32_(value) << ADC_INTFLAG_SAMPOVR_Pos)) /* Assignment of value for SAMPOVR in the ADC_INTFLAG register */
#define ADC_INTFLAG_TRIGOVR_Pos               _UINT32_(5)                                          /* (ADC_INTFLAG) Trigger Overrun Interrupt Flag Position */
#define ADC_INTFLAG_TRIGOVR_Msk               (_UINT32_(0x1) << ADC_INTFLAG_TRIGOVR_Pos)           /* (ADC_INTFLAG) Trigger Overrun Interrupt Flag Mask */
#define ADC_INTFLAG_TRIGOVR(value)            (ADC_INTFLAG_TRIGOVR_Msk & (_UINT32_(value) << ADC_INTFLAG_TRIGOVR_Pos)) /* Assignment of value for TRIGOVR in the ADC_INTFLAG register */
#define ADC_INTFLAG_Msk                       _UINT32_(0x0000003F)                                 /* (ADC_INTFLAG) Register Mask  */


/* -------- ADC_INTFLAGSET : (ADC Offset: 0x3C) (R/W 32) Interrupt Flag Set -------- */
#define ADC_INTFLAGSET_RESETVALUE             _UINT32_(0x00)                                       /*  (ADC_INTFLAGSET) Interrupt Flag Set  Reset Value */

#define ADC_INTFLAGSET_RESRDY_Pos             _UINT32_(0)                                          /* (ADC_INTFLAGSET) Result Ready Interrupt Flag Position */
#define ADC_INTFLAGSET_RESRDY_Msk             (_UINT32_(0x1) << ADC_INTFLAGSET_RESRDY_Pos)         /* (ADC_INTFLAGSET) Result Ready Interrupt Flag Mask */
#define ADC_INTFLAGSET_RESRDY(value)          (ADC_INTFLAGSET_RESRDY_Msk & (_UINT32_(value) << ADC_INTFLAGSET_RESRDY_Pos)) /* Assignment of value for RESRDY in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_SAMPRDY_Pos            _UINT32_(1)                                          /* (ADC_INTFLAGSET) Sample Ready Interrupt Flag Position */
#define ADC_INTFLAGSET_SAMPRDY_Msk            (_UINT32_(0x1) << ADC_INTFLAGSET_SAMPRDY_Pos)        /* (ADC_INTFLAGSET) Sample Ready Interrupt Flag Mask */
#define ADC_INTFLAGSET_SAMPRDY(value)         (ADC_INTFLAGSET_SAMPRDY_Msk & (_UINT32_(value) << ADC_INTFLAGSET_SAMPRDY_Pos)) /* Assignment of value for SAMPRDY in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_WCMP_Pos               _UINT32_(2)                                          /* (ADC_INTFLAGSET) Window Comparator Interrupt Flag Position */
#define ADC_INTFLAGSET_WCMP_Msk               (_UINT32_(0x1) << ADC_INTFLAGSET_WCMP_Pos)           /* (ADC_INTFLAGSET) Window Comparator Interrupt Flag Mask */
#define ADC_INTFLAGSET_WCMP(value)            (ADC_INTFLAGSET_WCMP_Msk & (_UINT32_(value) << ADC_INTFLAGSET_WCMP_Pos)) /* Assignment of value for WCMP in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_RESOVR_Pos             _UINT32_(3)                                          /* (ADC_INTFLAGSET) Result Overwrite Interrupt Flag Position */
#define ADC_INTFLAGSET_RESOVR_Msk             (_UINT32_(0x1) << ADC_INTFLAGSET_RESOVR_Pos)         /* (ADC_INTFLAGSET) Result Overwrite Interrupt Flag Mask */
#define ADC_INTFLAGSET_RESOVR(value)          (ADC_INTFLAGSET_RESOVR_Msk & (_UINT32_(value) << ADC_INTFLAGSET_RESOVR_Pos)) /* Assignment of value for RESOVR in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_SAMPOVR_Pos            _UINT32_(4)                                          /* (ADC_INTFLAGSET) Sample Overwrite Interrupt Flag Position */
#define ADC_INTFLAGSET_SAMPOVR_Msk            (_UINT32_(0x1) << ADC_INTFLAGSET_SAMPOVR_Pos)        /* (ADC_INTFLAGSET) Sample Overwrite Interrupt Flag Mask */
#define ADC_INTFLAGSET_SAMPOVR(value)         (ADC_INTFLAGSET_SAMPOVR_Msk & (_UINT32_(value) << ADC_INTFLAGSET_SAMPOVR_Pos)) /* Assignment of value for SAMPOVR in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_TRIGOVR_Pos            _UINT32_(5)                                          /* (ADC_INTFLAGSET) Trigger Overrun Interrupt Flag Position */
#define ADC_INTFLAGSET_TRIGOVR_Msk            (_UINT32_(0x1) << ADC_INTFLAGSET_TRIGOVR_Pos)        /* (ADC_INTFLAGSET) Trigger Overrun Interrupt Flag Mask */
#define ADC_INTFLAGSET_TRIGOVR(value)         (ADC_INTFLAGSET_TRIGOVR_Msk & (_UINT32_(value) << ADC_INTFLAGSET_TRIGOVR_Pos)) /* Assignment of value for TRIGOVR in the ADC_INTFLAGSET register */
#define ADC_INTFLAGSET_Msk                    _UINT32_(0x0000003F)                                 /* (ADC_INTFLAGSET) Register Mask  */


/* -------- ADC_STATUS : (ADC Offset: 0x40) ( R/ 32) Status -------- */
#define ADC_STATUS_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_STATUS) Status  Reset Value */

#define ADC_STATUS_ADCBUSY_Pos                _UINT32_(0)                                          /* (ADC_STATUS) ADC Busy Position */
#define ADC_STATUS_ADCBUSY_Msk                (_UINT32_(0x1) << ADC_STATUS_ADCBUSY_Pos)            /* (ADC_STATUS) ADC Busy Mask */
#define ADC_STATUS_ADCBUSY(value)             (ADC_STATUS_ADCBUSY_Msk & (_UINT32_(value) << ADC_STATUS_ADCBUSY_Pos)) /* Assignment of value for ADCBUSY in the ADC_STATUS register */
#define ADC_STATUS_Msk                        _UINT32_(0x00000001)                                 /* (ADC_STATUS) Register Mask  */


/* -------- ADC_COMMAND : (ADC Offset: 0x48) (R/W 32) Command -------- */
#define ADC_COMMAND_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_COMMAND) Command  Reset Value */

#define ADC_COMMAND_START_Pos                 _UINT32_(0)                                          /* (ADC_COMMAND) Start Conversion Position */
#define ADC_COMMAND_START_Msk                 (_UINT32_(0x7) << ADC_COMMAND_START_Pos)             /* (ADC_COMMAND) Start Conversion Mask */
#define ADC_COMMAND_START(value)              (ADC_COMMAND_START_Msk & (_UINT32_(value) << ADC_COMMAND_START_Pos)) /* Assignment of value for START in the ADC_COMMAND register */
#define   ADC_COMMAND_START_STOP_Val          _UINT32_(0x0)                                        /* (ADC_COMMAND) Stop an ongoing conversion  */
#define   ADC_COMMAND_START_IMMEDIATE_Val     _UINT32_(0x1)                                        /* (ADC_COMMAND) Start a conversion immediately. This bit will be reset to STOP when the conversion is complete, unless Free-Running mode is enabled.  */
#define   ADC_COMMAND_START_INPUT_Val         _UINT32_(0x2)                                        /* (ADC_COMMAND) Start a conversion when a write to the INPUTCTRL register is performed  */
#define   ADC_COMMAND_START_EVENT_Val         _UINT32_(0x4)                                        /* (ADC_COMMAND) Start a conversion when an event is received by the ADC. This requires EVCTRL.STARTEI to be set to '1'.  */
#define ADC_COMMAND_START_STOP                (ADC_COMMAND_START_STOP_Val << ADC_COMMAND_START_Pos) /* (ADC_COMMAND) Stop an ongoing conversion Position */
#define ADC_COMMAND_START_IMMEDIATE           (ADC_COMMAND_START_IMMEDIATE_Val << ADC_COMMAND_START_Pos) /* (ADC_COMMAND) Start a conversion immediately. This bit will be reset to STOP when the conversion is complete, unless Free-Running mode is enabled. Position */
#define ADC_COMMAND_START_INPUT               (ADC_COMMAND_START_INPUT_Val << ADC_COMMAND_START_Pos) /* (ADC_COMMAND) Start a conversion when a write to the INPUTCTRL register is performed Position */
#define ADC_COMMAND_START_EVENT               (ADC_COMMAND_START_EVENT_Val << ADC_COMMAND_START_Pos) /* (ADC_COMMAND) Start a conversion when an event is received by the ADC. This requires EVCTRL.STARTEI to be set to '1'. Position */
#define ADC_COMMAND_MODE_Pos                  _UINT32_(4)                                          /* (ADC_COMMAND) Mode Position */
#define ADC_COMMAND_MODE_Msk                  (_UINT32_(0x7) << ADC_COMMAND_MODE_Pos)              /* (ADC_COMMAND) Mode Mask */
#define ADC_COMMAND_MODE(value)               (ADC_COMMAND_MODE_Msk & (_UINT32_(value) << ADC_COMMAND_MODE_Pos)) /* Assignment of value for MODE in the ADC_COMMAND register */
#define   ADC_COMMAND_MODE_NONE_Val           _UINT32_(0x0)                                        /* (ADC_COMMAND) None  */
#define   ADC_COMMAND_MODE_SINGLE_Val         _UINT32_(0x1)                                        /* (ADC_COMMAND) Single conversion  */
#define   ADC_COMMAND_MODE_SERIES_Val         _UINT32_(0x2)                                        /* (ADC_COMMAND) Series mode with accumulation, using a separate trigger for each conversion  */
#define   ADC_COMMAND_MODE_BURST_Val          _UINT32_(0x3)                                        /* (ADC_COMMAND) Burst mode with accumulation. A single trigger will initiate the number of conversions configured by CTRLD.SAMPNUM in one sequence.  */
#define   ADC_COMMAND_MODE_ACCTEST_Val        _UINT32_(0x7)                                        /* (ADC_COMMAND) Accumulator diagnostics mode  */
#define ADC_COMMAND_MODE_NONE                 (ADC_COMMAND_MODE_NONE_Val << ADC_COMMAND_MODE_Pos)  /* (ADC_COMMAND) None Position */
#define ADC_COMMAND_MODE_SINGLE               (ADC_COMMAND_MODE_SINGLE_Val << ADC_COMMAND_MODE_Pos) /* (ADC_COMMAND) Single conversion Position */
#define ADC_COMMAND_MODE_SERIES               (ADC_COMMAND_MODE_SERIES_Val << ADC_COMMAND_MODE_Pos) /* (ADC_COMMAND) Series mode with accumulation, using a separate trigger for each conversion Position */
#define ADC_COMMAND_MODE_BURST                (ADC_COMMAND_MODE_BURST_Val << ADC_COMMAND_MODE_Pos) /* (ADC_COMMAND) Burst mode with accumulation. A single trigger will initiate the number of conversions configured by CTRLD.SAMPNUM in one sequence. Position */
#define ADC_COMMAND_MODE_ACCTEST              (ADC_COMMAND_MODE_ACCTEST_Val << ADC_COMMAND_MODE_Pos) /* (ADC_COMMAND) Accumulator diagnostics mode Position */
#define ADC_COMMAND_DIFF_Pos                  _UINT32_(7)                                          /* (ADC_COMMAND) Differential Mode Position */
#define ADC_COMMAND_DIFF_Msk                  (_UINT32_(0x1) << ADC_COMMAND_DIFF_Pos)              /* (ADC_COMMAND) Differential Mode Mask */
#define ADC_COMMAND_DIFF(value)               (ADC_COMMAND_DIFF_Msk & (_UINT32_(value) << ADC_COMMAND_DIFF_Pos)) /* Assignment of value for DIFF in the ADC_COMMAND register */
#define ADC_COMMAND_Msk                       _UINT32_(0x000000F7)                                 /* (ADC_COMMAND) Register Mask  */


/* -------- ADC_RESULT : (ADC Offset: 0x50) (R/W 32) Result -------- */
#define ADC_RESULT_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_RESULT) Result  Reset Value */

#define ADC_RESULT_RESULT_Pos                 _UINT32_(0)                                          /* (ADC_RESULT) ADC Result Position */
#define ADC_RESULT_RESULT_Msk                 (_UINT32_(0xFFFFFFFF) << ADC_RESULT_RESULT_Pos)      /* (ADC_RESULT) ADC Result Mask */
#define ADC_RESULT_RESULT(value)              (ADC_RESULT_RESULT_Msk & (_UINT32_(value) << ADC_RESULT_RESULT_Pos)) /* Assignment of value for RESULT in the ADC_RESULT register */
#define ADC_RESULT_Msk                        _UINT32_(0xFFFFFFFF)                                 /* (ADC_RESULT) Register Mask  */


/* -------- ADC_SAMPLE : (ADC Offset: 0x54) (R/W 32) Sample -------- */
#define ADC_SAMPLE_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_SAMPLE) Sample  Reset Value */

#define ADC_SAMPLE_SAMPLE_Pos                 _UINT32_(0)                                          /* (ADC_SAMPLE) ADC Sample Position */
#define ADC_SAMPLE_SAMPLE_Msk                 (_UINT32_(0xFFFF) << ADC_SAMPLE_SAMPLE_Pos)          /* (ADC_SAMPLE) ADC Sample Mask */
#define ADC_SAMPLE_SAMPLE(value)              (ADC_SAMPLE_SAMPLE_Msk & (_UINT32_(value) << ADC_SAMPLE_SAMPLE_Pos)) /* Assignment of value for SAMPLE in the ADC_SAMPLE register */
#define ADC_SAMPLE_Msk                        _UINT32_(0x0000FFFF)                                 /* (ADC_SAMPLE) Register Mask  */


/* -------- ADC_DBGCTRL : (ADC Offset: 0x6C) (R/W 32) Debug Control -------- */
#define ADC_DBGCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (ADC_DBGCTRL) Debug Control  Reset Value */

#define ADC_DBGCTRL_DBGRUN_Pos                _UINT32_(0)                                          /* (ADC_DBGCTRL) Debug Run Position */
#define ADC_DBGCTRL_DBGRUN_Msk                (_UINT32_(0x1) << ADC_DBGCTRL_DBGRUN_Pos)            /* (ADC_DBGCTRL) Debug Run Mask */
#define ADC_DBGCTRL_DBGRUN(value)             (ADC_DBGCTRL_DBGRUN_Msk & (_UINT32_(value) << ADC_DBGCTRL_DBGRUN_Pos)) /* Assignment of value for DBGRUN in the ADC_DBGCTRL register */
#define ADC_DBGCTRL_Msk                       _UINT32_(0x00000001)                                 /* (ADC_DBGCTRL) Register Mask  */


/* -------- ADC_WPCTRL : (ADC Offset: 0x7C) (R/W 32) Write Protection Control -------- */
#define ADC_WPCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (ADC_WPCTRL) Write Protection Control  Reset Value */

#define ADC_WPCTRL_WPEN_Pos                   _UINT32_(0)                                          /* (ADC_WPCTRL) Write Protection Enable Position */
#define ADC_WPCTRL_WPEN_Msk                   (_UINT32_(0x1) << ADC_WPCTRL_WPEN_Pos)               /* (ADC_WPCTRL) Write Protection Enable Mask */
#define ADC_WPCTRL_WPEN(value)                (ADC_WPCTRL_WPEN_Msk & (_UINT32_(value) << ADC_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the ADC_WPCTRL register */
#define ADC_WPCTRL_WPLCK_Pos                  _UINT32_(1)                                          /* (ADC_WPCTRL) Write Protection Lock Position */
#define ADC_WPCTRL_WPLCK_Msk                  (_UINT32_(0x1) << ADC_WPCTRL_WPLCK_Pos)              /* (ADC_WPCTRL) Write Protection Lock Mask */
#define ADC_WPCTRL_WPLCK(value)               (ADC_WPCTRL_WPLCK_Msk & (_UINT32_(value) << ADC_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the ADC_WPCTRL register */
#define ADC_WPCTRL_WPKEY_Pos                  _UINT32_(8)                                          /* (ADC_WPCTRL) Write Protection Key Position */
#define ADC_WPCTRL_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << ADC_WPCTRL_WPKEY_Pos)         /* (ADC_WPCTRL) Write Protection Key Mask */
#define ADC_WPCTRL_WPKEY(value)               (ADC_WPCTRL_WPKEY_Msk & (_UINT32_(value) << ADC_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the ADC_WPCTRL register */
#define   ADC_WPCTRL_WPKEY_KEY_Val            _UINT32_(0x414443)                                   /* (ADC_WPCTRL) Allow writes to the WPCTRL register  */
#define ADC_WPCTRL_WPKEY_KEY                  (ADC_WPCTRL_WPKEY_KEY_Val << ADC_WPCTRL_WPKEY_Pos)   /* (ADC_WPCTRL) Allow writes to the WPCTRL register Position */
#define ADC_WPCTRL_Msk                        _UINT32_(0xFFFFFF03)                                 /* (ADC_WPCTRL) Register Mask  */


/* ADC register offsets definitions */
#define ADC_CTRLA_REG_OFST             _UINT32_(0x00)      /* (ADC_CTRLA) Control A Offset */
#define ADC_CTRLB_REG_OFST             _UINT32_(0x04)      /* (ADC_CTRLB) Control B Offset */
#define ADC_CTRLC_REG_OFST             _UINT32_(0x08)      /* (ADC_CTRLC) Control C Offset */
#define ADC_CTRLD_REG_OFST             _UINT32_(0x0C)      /* (ADC_CTRLD) Control D Offset */
#define ADC_CTRLE_REG_OFST             _UINT32_(0x10)      /* (ADC_CTRLE) Control E Offset */
#define ADC_WINCTRL_REG_OFST           _UINT32_(0x1C)      /* (ADC_WINCTRL) Window Control Offset */
#define ADC_WINLT_REG_OFST             _UINT32_(0x20)      /* (ADC_WINLT) Window Low Threshold Offset */
#define ADC_WINHT_REG_OFST             _UINT32_(0x24)      /* (ADC_WINHT) Window High Threshold Offset */
#define ADC_INPUTCTRL_REG_OFST         _UINT32_(0x28)      /* (ADC_INPUTCTRL) Input Multiplexer Control Offset */
#define ADC_EVCTRL_REG_OFST            _UINT32_(0x2C)      /* (ADC_EVCTRL) Event Control Offset */
#define ADC_INTENCLR_REG_OFST          _UINT32_(0x30)      /* (ADC_INTENCLR) Interrupt Enable Clear Offset */
#define ADC_INTENSET_REG_OFST          _UINT32_(0x34)      /* (ADC_INTENSET) Interrupt Enable Set Offset */
#define ADC_INTFLAG_REG_OFST           _UINT32_(0x38)      /* (ADC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define ADC_INTFLAGSET_REG_OFST        _UINT32_(0x3C)      /* (ADC_INTFLAGSET) Interrupt Flag Set Offset */
#define ADC_STATUS_REG_OFST            _UINT32_(0x40)      /* (ADC_STATUS) Status Offset */
#define ADC_COMMAND_REG_OFST           _UINT32_(0x48)      /* (ADC_COMMAND) Command Offset */
#define ADC_RESULT_REG_OFST            _UINT32_(0x50)      /* (ADC_RESULT) Result Offset */
#define ADC_SAMPLE_REG_OFST            _UINT32_(0x54)      /* (ADC_SAMPLE) Sample Offset */
#define ADC_DBGCTRL_REG_OFST           _UINT32_(0x6C)      /* (ADC_DBGCTRL) Debug Control Offset */
#define ADC_WPCTRL_REG_OFST            _UINT32_(0x7C)      /* (ADC_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* ADC register API structure */
typedef struct
{  /* Analog-to-Digital Converter */
  __IO  uint32_t                       ADC_CTRLA;          /* Offset: 0x00 (R/W  32) Control A */
  __IO  uint32_t                       ADC_CTRLB;          /* Offset: 0x04 (R/W  32) Control B */
  __IO  uint32_t                       ADC_CTRLC;          /* Offset: 0x08 (R/W  32) Control C */
  __IO  uint32_t                       ADC_CTRLD;          /* Offset: 0x0C (R/W  32) Control D */
  __IO  uint32_t                       ADC_CTRLE;          /* Offset: 0x10 (R/W  32) Control E */
  __I   uint8_t                        Reserved1[0x08];
  __IO  uint32_t                       ADC_WINCTRL;        /* Offset: 0x1C (R/W  32) Window Control */
  __IO  uint32_t                       ADC_WINLT;          /* Offset: 0x20 (R/W  32) Window Low Threshold */
  __IO  uint32_t                       ADC_WINHT;          /* Offset: 0x24 (R/W  32) Window High Threshold */
  __IO  uint32_t                       ADC_INPUTCTRL;      /* Offset: 0x28 (R/W  32) Input Multiplexer Control */
  __IO  uint32_t                       ADC_EVCTRL;         /* Offset: 0x2C (R/W  32) Event Control */
  __IO  uint32_t                       ADC_INTENCLR;       /* Offset: 0x30 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       ADC_INTENSET;       /* Offset: 0x34 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       ADC_INTFLAG;        /* Offset: 0x38 (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       ADC_INTFLAGSET;     /* Offset: 0x3C (R/W  32) Interrupt Flag Set */
  __I   uint32_t                       ADC_STATUS;         /* Offset: 0x40 (R/   32) Status */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       ADC_COMMAND;        /* Offset: 0x48 (R/W  32) Command */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       ADC_RESULT;         /* Offset: 0x50 (R/W  32) Result */
  __IO  uint32_t                       ADC_SAMPLE;         /* Offset: 0x54 (R/W  32) Sample */
  __I   uint8_t                        Reserved4[0x14];
  __IO  uint32_t                       ADC_DBGCTRL;        /* Offset: 0x6C (R/W  32) Debug Control */
  __I   uint8_t                        Reserved5[0x0C];
  __IO  uint32_t                       ADC_WPCTRL;         /* Offset: 0x7C (R/W  32) Write Protection Control */
} adc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_ADC_COMPONENT_H_ */
