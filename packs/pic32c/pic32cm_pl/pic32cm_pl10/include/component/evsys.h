/*
 * Component description for EVSYS
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
#ifndef _PIC32CMPL10_EVSYS_COMPONENT_H_
#define _PIC32CMPL10_EVSYS_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR EVSYS                      */
/* ************************************************************************** */

/* -------- EVSYS_CTRLA : (EVSYS Offset: 0x00) ( /W 8) Control A -------- */
#define EVSYS_CTRLA_RESETVALUE                _UINT8_(0x00)                                        /*  (EVSYS_CTRLA) Control A  Reset Value */

#define EVSYS_CTRLA_SWRST_Pos                 _UINT8_(0)                                           /* (EVSYS_CTRLA) Software Reset Position */
#define EVSYS_CTRLA_SWRST_Msk                 (_UINT8_(0x1) << EVSYS_CTRLA_SWRST_Pos)              /* (EVSYS_CTRLA) Software Reset Mask */
#define EVSYS_CTRLA_SWRST(value)              (EVSYS_CTRLA_SWRST_Msk & (_UINT8_(value) << EVSYS_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the EVSYS_CTRLA register */
#define EVSYS_CTRLA_Msk                       _UINT8_(0x01)                                        /* (EVSYS_CTRLA) Register Mask  */


/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x0C) ( R/ 32) Channel Status -------- */
#define EVSYS_CHSTATUS_USRRDY0_Pos            _UINT32_(0)                                          /* (EVSYS_CHSTATUS) Users Ready on Channel 0 Position */
#define EVSYS_CHSTATUS_USRRDY0_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_USRRDY0_Pos)        /* (EVSYS_CHSTATUS) Users Ready on Channel 0 Mask */
#define EVSYS_CHSTATUS_USRRDY0(value)         (EVSYS_CHSTATUS_USRRDY0_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_USRRDY0_Pos)) /* Assignment of value for USRRDY0 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_USRRDY1_Pos            _UINT32_(1)                                          /* (EVSYS_CHSTATUS) Users Ready on Channel 1 Position */
#define EVSYS_CHSTATUS_USRRDY1_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_USRRDY1_Pos)        /* (EVSYS_CHSTATUS) Users Ready on Channel 1 Mask */
#define EVSYS_CHSTATUS_USRRDY1(value)         (EVSYS_CHSTATUS_USRRDY1_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_USRRDY1_Pos)) /* Assignment of value for USRRDY1 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_USRRDY2_Pos            _UINT32_(2)                                          /* (EVSYS_CHSTATUS) Users Ready on Channel 2 Position */
#define EVSYS_CHSTATUS_USRRDY2_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_USRRDY2_Pos)        /* (EVSYS_CHSTATUS) Users Ready on Channel 2 Mask */
#define EVSYS_CHSTATUS_USRRDY2(value)         (EVSYS_CHSTATUS_USRRDY2_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_USRRDY2_Pos)) /* Assignment of value for USRRDY2 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_USRRDY3_Pos            _UINT32_(3)                                          /* (EVSYS_CHSTATUS) Users Ready on Channel 3 Position */
#define EVSYS_CHSTATUS_USRRDY3_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_USRRDY3_Pos)        /* (EVSYS_CHSTATUS) Users Ready on Channel 3 Mask */
#define EVSYS_CHSTATUS_USRRDY3(value)         (EVSYS_CHSTATUS_USRRDY3_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_USRRDY3_Pos)) /* Assignment of value for USRRDY3 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_CHBUSY0_Pos            _UINT32_(16)                                         /* (EVSYS_CHSTATUS) Channel 0 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY0_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_CHBUSY0_Pos)        /* (EVSYS_CHSTATUS) Channel 0 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY0(value)         (EVSYS_CHSTATUS_CHBUSY0_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_CHBUSY0_Pos)) /* Assignment of value for CHBUSY0 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_CHBUSY1_Pos            _UINT32_(17)                                         /* (EVSYS_CHSTATUS) Channel 1 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY1_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_CHBUSY1_Pos)        /* (EVSYS_CHSTATUS) Channel 1 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY1(value)         (EVSYS_CHSTATUS_CHBUSY1_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_CHBUSY1_Pos)) /* Assignment of value for CHBUSY1 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_CHBUSY2_Pos            _UINT32_(18)                                         /* (EVSYS_CHSTATUS) Channel 2 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY2_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_CHBUSY2_Pos)        /* (EVSYS_CHSTATUS) Channel 2 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY2(value)         (EVSYS_CHSTATUS_CHBUSY2_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_CHBUSY2_Pos)) /* Assignment of value for CHBUSY2 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_CHBUSY3_Pos            _UINT32_(19)                                         /* (EVSYS_CHSTATUS) Channel 3 Busy Position */
#define EVSYS_CHSTATUS_CHBUSY3_Msk            (_UINT32_(0x1) << EVSYS_CHSTATUS_CHBUSY3_Pos)        /* (EVSYS_CHSTATUS) Channel 3 Busy Mask */
#define EVSYS_CHSTATUS_CHBUSY3(value)         (EVSYS_CHSTATUS_CHBUSY3_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_CHBUSY3_Pos)) /* Assignment of value for CHBUSY3 in the EVSYS_CHSTATUS register */
#define EVSYS_CHSTATUS_Msk                    _UINT32_(0x000F000F)                                 /* (EVSYS_CHSTATUS) Register Mask  */

#define EVSYS_CHSTATUS_USRRDY_Pos             _UINT32_(0)                                          /* (EVSYS_CHSTATUS Position) Users Ready on Channel x */
#define EVSYS_CHSTATUS_USRRDY_Msk             (_UINT32_(0xF) << EVSYS_CHSTATUS_USRRDY_Pos)         /* (EVSYS_CHSTATUS Mask) USRRDY */
#define EVSYS_CHSTATUS_USRRDY(value)          (EVSYS_CHSTATUS_USRRDY_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_USRRDY_Pos)) 
#define EVSYS_CHSTATUS_CHBUSY_Pos             _UINT32_(16)                                         /* (EVSYS_CHSTATUS Position) Channel 3 Busy */
#define EVSYS_CHSTATUS_CHBUSY_Msk             (_UINT32_(0xF) << EVSYS_CHSTATUS_CHBUSY_Pos)         /* (EVSYS_CHSTATUS Mask) CHBUSY */
#define EVSYS_CHSTATUS_CHBUSY(value)          (EVSYS_CHSTATUS_CHBUSY_Msk & (_UINT32_(value) << EVSYS_CHSTATUS_CHBUSY_Pos)) 

/* -------- EVSYS_INTENCLR : (EVSYS Offset: 0x10) (R/W 32) Interrupt Enable Clear -------- */
#define EVSYS_INTENCLR_RESETVALUE             _UINT32_(0x00)                                       /*  (EVSYS_INTENCLR) Interrupt Enable Clear  Reset Value */

#define EVSYS_INTENCLR_OVR0_Pos               _UINT32_(0)                                          /* (EVSYS_INTENCLR) Overrun Channel 0 Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR0_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_OVR0_Pos)           /* (EVSYS_INTENCLR) Overrun Channel 0 Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR0(value)            (EVSYS_INTENCLR_OVR0_Msk & (_UINT32_(value) << EVSYS_INTENCLR_OVR0_Pos)) /* Assignment of value for OVR0 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_OVR1_Pos               _UINT32_(1)                                          /* (EVSYS_INTENCLR) Overrun Channel 1 Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR1_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_OVR1_Pos)           /* (EVSYS_INTENCLR) Overrun Channel 1 Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR1(value)            (EVSYS_INTENCLR_OVR1_Msk & (_UINT32_(value) << EVSYS_INTENCLR_OVR1_Pos)) /* Assignment of value for OVR1 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_OVR2_Pos               _UINT32_(2)                                          /* (EVSYS_INTENCLR) Overrun Channel 2 Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR2_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_OVR2_Pos)           /* (EVSYS_INTENCLR) Overrun Channel 2 Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR2(value)            (EVSYS_INTENCLR_OVR2_Msk & (_UINT32_(value) << EVSYS_INTENCLR_OVR2_Pos)) /* Assignment of value for OVR2 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_OVR3_Pos               _UINT32_(3)                                          /* (EVSYS_INTENCLR) Overrun Channel 3 Interrupt Enable Position */
#define EVSYS_INTENCLR_OVR3_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_OVR3_Pos)           /* (EVSYS_INTENCLR) Overrun Channel 3 Interrupt Enable Mask */
#define EVSYS_INTENCLR_OVR3(value)            (EVSYS_INTENCLR_OVR3_Msk & (_UINT32_(value) << EVSYS_INTENCLR_OVR3_Pos)) /* Assignment of value for OVR3 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_EVD0_Pos               _UINT32_(16)                                         /* (EVSYS_INTENCLR) Event Detected Channel 0 Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD0_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_EVD0_Pos)           /* (EVSYS_INTENCLR) Event Detected Channel 0 Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD0(value)            (EVSYS_INTENCLR_EVD0_Msk & (_UINT32_(value) << EVSYS_INTENCLR_EVD0_Pos)) /* Assignment of value for EVD0 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_EVD1_Pos               _UINT32_(17)                                         /* (EVSYS_INTENCLR) Event Detected Channel 1 Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD1_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_EVD1_Pos)           /* (EVSYS_INTENCLR) Event Detected Channel 1 Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD1(value)            (EVSYS_INTENCLR_EVD1_Msk & (_UINT32_(value) << EVSYS_INTENCLR_EVD1_Pos)) /* Assignment of value for EVD1 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_EVD2_Pos               _UINT32_(18)                                         /* (EVSYS_INTENCLR) Event Detected Channel 2 Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD2_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_EVD2_Pos)           /* (EVSYS_INTENCLR) Event Detected Channel 2 Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD2(value)            (EVSYS_INTENCLR_EVD2_Msk & (_UINT32_(value) << EVSYS_INTENCLR_EVD2_Pos)) /* Assignment of value for EVD2 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_EVD3_Pos               _UINT32_(19)                                         /* (EVSYS_INTENCLR) Event Detected Channel 3 Interrupt Enable Position */
#define EVSYS_INTENCLR_EVD3_Msk               (_UINT32_(0x1) << EVSYS_INTENCLR_EVD3_Pos)           /* (EVSYS_INTENCLR) Event Detected Channel 3 Interrupt Enable Mask */
#define EVSYS_INTENCLR_EVD3(value)            (EVSYS_INTENCLR_EVD3_Msk & (_UINT32_(value) << EVSYS_INTENCLR_EVD3_Pos)) /* Assignment of value for EVD3 in the EVSYS_INTENCLR register */
#define EVSYS_INTENCLR_Msk                    _UINT32_(0x000F000F)                                 /* (EVSYS_INTENCLR) Register Mask  */

#define EVSYS_INTENCLR_OVR_Pos                _UINT32_(0)                                          /* (EVSYS_INTENCLR Position) Overrun Channel x Interrupt Enable */
#define EVSYS_INTENCLR_OVR_Msk                (_UINT32_(0xF) << EVSYS_INTENCLR_OVR_Pos)            /* (EVSYS_INTENCLR Mask) OVR */
#define EVSYS_INTENCLR_OVR(value)             (EVSYS_INTENCLR_OVR_Msk & (_UINT32_(value) << EVSYS_INTENCLR_OVR_Pos)) 
#define EVSYS_INTENCLR_EVD_Pos                _UINT32_(16)                                         /* (EVSYS_INTENCLR Position) Event Detected Channel 3 Interrupt Enable */
#define EVSYS_INTENCLR_EVD_Msk                (_UINT32_(0xF) << EVSYS_INTENCLR_EVD_Pos)            /* (EVSYS_INTENCLR Mask) EVD */
#define EVSYS_INTENCLR_EVD(value)             (EVSYS_INTENCLR_EVD_Msk & (_UINT32_(value) << EVSYS_INTENCLR_EVD_Pos)) 

/* -------- EVSYS_INTENSET : (EVSYS Offset: 0x14) (R/W 32) Interrupt Enable Set -------- */
#define EVSYS_INTENSET_RESETVALUE             _UINT32_(0x00)                                       /*  (EVSYS_INTENSET) Interrupt Enable Set  Reset Value */

#define EVSYS_INTENSET_OVR0_Pos               _UINT32_(0)                                          /* (EVSYS_INTENSET) Overrun Channel 0 Interrupt Enable Position */
#define EVSYS_INTENSET_OVR0_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_OVR0_Pos)           /* (EVSYS_INTENSET) Overrun Channel 0 Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR0(value)            (EVSYS_INTENSET_OVR0_Msk & (_UINT32_(value) << EVSYS_INTENSET_OVR0_Pos)) /* Assignment of value for OVR0 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_OVR1_Pos               _UINT32_(1)                                          /* (EVSYS_INTENSET) Overrun Channel 1 Interrupt Enable Position */
#define EVSYS_INTENSET_OVR1_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_OVR1_Pos)           /* (EVSYS_INTENSET) Overrun Channel 1 Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR1(value)            (EVSYS_INTENSET_OVR1_Msk & (_UINT32_(value) << EVSYS_INTENSET_OVR1_Pos)) /* Assignment of value for OVR1 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_OVR2_Pos               _UINT32_(2)                                          /* (EVSYS_INTENSET) Overrun Channel 2 Interrupt Enable Position */
#define EVSYS_INTENSET_OVR2_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_OVR2_Pos)           /* (EVSYS_INTENSET) Overrun Channel 2 Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR2(value)            (EVSYS_INTENSET_OVR2_Msk & (_UINT32_(value) << EVSYS_INTENSET_OVR2_Pos)) /* Assignment of value for OVR2 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_OVR3_Pos               _UINT32_(3)                                          /* (EVSYS_INTENSET) Overrun Channel 3 Interrupt Enable Position */
#define EVSYS_INTENSET_OVR3_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_OVR3_Pos)           /* (EVSYS_INTENSET) Overrun Channel 3 Interrupt Enable Mask */
#define EVSYS_INTENSET_OVR3(value)            (EVSYS_INTENSET_OVR3_Msk & (_UINT32_(value) << EVSYS_INTENSET_OVR3_Pos)) /* Assignment of value for OVR3 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_EVD0_Pos               _UINT32_(16)                                         /* (EVSYS_INTENSET) Event Detected Channel 0 Interrupt Enable Position */
#define EVSYS_INTENSET_EVD0_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_EVD0_Pos)           /* (EVSYS_INTENSET) Event Detected Channel 0 Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD0(value)            (EVSYS_INTENSET_EVD0_Msk & (_UINT32_(value) << EVSYS_INTENSET_EVD0_Pos)) /* Assignment of value for EVD0 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_EVD1_Pos               _UINT32_(17)                                         /* (EVSYS_INTENSET) Event Detected Channel 1 Interrupt Enable Position */
#define EVSYS_INTENSET_EVD1_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_EVD1_Pos)           /* (EVSYS_INTENSET) Event Detected Channel 1 Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD1(value)            (EVSYS_INTENSET_EVD1_Msk & (_UINT32_(value) << EVSYS_INTENSET_EVD1_Pos)) /* Assignment of value for EVD1 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_EVD2_Pos               _UINT32_(18)                                         /* (EVSYS_INTENSET) Event Detected Channel 2 Interrupt Enable Position */
#define EVSYS_INTENSET_EVD2_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_EVD2_Pos)           /* (EVSYS_INTENSET) Event Detected Channel 2 Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD2(value)            (EVSYS_INTENSET_EVD2_Msk & (_UINT32_(value) << EVSYS_INTENSET_EVD2_Pos)) /* Assignment of value for EVD2 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_EVD3_Pos               _UINT32_(19)                                         /* (EVSYS_INTENSET) Event Detected Channel 3 Interrupt Enable Position */
#define EVSYS_INTENSET_EVD3_Msk               (_UINT32_(0x1) << EVSYS_INTENSET_EVD3_Pos)           /* (EVSYS_INTENSET) Event Detected Channel 3 Interrupt Enable Mask */
#define EVSYS_INTENSET_EVD3(value)            (EVSYS_INTENSET_EVD3_Msk & (_UINT32_(value) << EVSYS_INTENSET_EVD3_Pos)) /* Assignment of value for EVD3 in the EVSYS_INTENSET register */
#define EVSYS_INTENSET_Msk                    _UINT32_(0x000F000F)                                 /* (EVSYS_INTENSET) Register Mask  */

#define EVSYS_INTENSET_OVR_Pos                _UINT32_(0)                                          /* (EVSYS_INTENSET Position) Overrun Channel x Interrupt Enable */
#define EVSYS_INTENSET_OVR_Msk                (_UINT32_(0xF) << EVSYS_INTENSET_OVR_Pos)            /* (EVSYS_INTENSET Mask) OVR */
#define EVSYS_INTENSET_OVR(value)             (EVSYS_INTENSET_OVR_Msk & (_UINT32_(value) << EVSYS_INTENSET_OVR_Pos)) 
#define EVSYS_INTENSET_EVD_Pos                _UINT32_(16)                                         /* (EVSYS_INTENSET Position) Event Detected Channel 3 Interrupt Enable */
#define EVSYS_INTENSET_EVD_Msk                (_UINT32_(0xF) << EVSYS_INTENSET_EVD_Pos)            /* (EVSYS_INTENSET Mask) EVD */
#define EVSYS_INTENSET_EVD(value)             (EVSYS_INTENSET_EVD_Msk & (_UINT32_(value) << EVSYS_INTENSET_EVD_Pos)) 

/* -------- EVSYS_INTFLAG : (EVSYS Offset: 0x18) (R/W 32) Interrupt Flag Status and Clear -------- */
#define EVSYS_INTFLAG_RESETVALUE              _UINT32_(0x00)                                       /*  (EVSYS_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define EVSYS_INTFLAG_OVR0_Pos                _UINT32_(0)                                          /* (EVSYS_INTFLAG) Overrun Channel 0 Position */
#define EVSYS_INTFLAG_OVR0_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_OVR0_Pos)            /* (EVSYS_INTFLAG) Overrun Channel 0 Mask */
#define EVSYS_INTFLAG_OVR0(value)             (EVSYS_INTFLAG_OVR0_Msk & (_UINT32_(value) << EVSYS_INTFLAG_OVR0_Pos)) /* Assignment of value for OVR0 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_OVR1_Pos                _UINT32_(1)                                          /* (EVSYS_INTFLAG) Overrun Channel 1 Position */
#define EVSYS_INTFLAG_OVR1_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_OVR1_Pos)            /* (EVSYS_INTFLAG) Overrun Channel 1 Mask */
#define EVSYS_INTFLAG_OVR1(value)             (EVSYS_INTFLAG_OVR1_Msk & (_UINT32_(value) << EVSYS_INTFLAG_OVR1_Pos)) /* Assignment of value for OVR1 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_OVR2_Pos                _UINT32_(2)                                          /* (EVSYS_INTFLAG) Overrun Channel 2 Position */
#define EVSYS_INTFLAG_OVR2_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_OVR2_Pos)            /* (EVSYS_INTFLAG) Overrun Channel 2 Mask */
#define EVSYS_INTFLAG_OVR2(value)             (EVSYS_INTFLAG_OVR2_Msk & (_UINT32_(value) << EVSYS_INTFLAG_OVR2_Pos)) /* Assignment of value for OVR2 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_OVR3_Pos                _UINT32_(3)                                          /* (EVSYS_INTFLAG) Overrun Channel 3 Position */
#define EVSYS_INTFLAG_OVR3_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_OVR3_Pos)            /* (EVSYS_INTFLAG) Overrun Channel 3 Mask */
#define EVSYS_INTFLAG_OVR3(value)             (EVSYS_INTFLAG_OVR3_Msk & (_UINT32_(value) << EVSYS_INTFLAG_OVR3_Pos)) /* Assignment of value for OVR3 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_EVD0_Pos                _UINT32_(16)                                         /* (EVSYS_INTFLAG) Event Detected Channel 0 Position */
#define EVSYS_INTFLAG_EVD0_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_EVD0_Pos)            /* (EVSYS_INTFLAG) Event Detected Channel 0 Mask */
#define EVSYS_INTFLAG_EVD0(value)             (EVSYS_INTFLAG_EVD0_Msk & (_UINT32_(value) << EVSYS_INTFLAG_EVD0_Pos)) /* Assignment of value for EVD0 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_EVD1_Pos                _UINT32_(17)                                         /* (EVSYS_INTFLAG) Event Detected Channel 1 Position */
#define EVSYS_INTFLAG_EVD1_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_EVD1_Pos)            /* (EVSYS_INTFLAG) Event Detected Channel 1 Mask */
#define EVSYS_INTFLAG_EVD1(value)             (EVSYS_INTFLAG_EVD1_Msk & (_UINT32_(value) << EVSYS_INTFLAG_EVD1_Pos)) /* Assignment of value for EVD1 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_EVD2_Pos                _UINT32_(18)                                         /* (EVSYS_INTFLAG) Event Detected Channel 2 Position */
#define EVSYS_INTFLAG_EVD2_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_EVD2_Pos)            /* (EVSYS_INTFLAG) Event Detected Channel 2 Mask */
#define EVSYS_INTFLAG_EVD2(value)             (EVSYS_INTFLAG_EVD2_Msk & (_UINT32_(value) << EVSYS_INTFLAG_EVD2_Pos)) /* Assignment of value for EVD2 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_EVD3_Pos                _UINT32_(19)                                         /* (EVSYS_INTFLAG) Event Detected Channel 3 Position */
#define EVSYS_INTFLAG_EVD3_Msk                (_UINT32_(0x1) << EVSYS_INTFLAG_EVD3_Pos)            /* (EVSYS_INTFLAG) Event Detected Channel 3 Mask */
#define EVSYS_INTFLAG_EVD3(value)             (EVSYS_INTFLAG_EVD3_Msk & (_UINT32_(value) << EVSYS_INTFLAG_EVD3_Pos)) /* Assignment of value for EVD3 in the EVSYS_INTFLAG register */
#define EVSYS_INTFLAG_Msk                     _UINT32_(0x000F000F)                                 /* (EVSYS_INTFLAG) Register Mask  */

#define EVSYS_INTFLAG_OVR_Pos                 _UINT32_(0)                                          /* (EVSYS_INTFLAG Position) Overrun Channel x */
#define EVSYS_INTFLAG_OVR_Msk                 (_UINT32_(0xF) << EVSYS_INTFLAG_OVR_Pos)             /* (EVSYS_INTFLAG Mask) OVR */
#define EVSYS_INTFLAG_OVR(value)              (EVSYS_INTFLAG_OVR_Msk & (_UINT32_(value) << EVSYS_INTFLAG_OVR_Pos)) 
#define EVSYS_INTFLAG_EVD_Pos                 _UINT32_(16)                                         /* (EVSYS_INTFLAG Position) Event Detected Channel 3 */
#define EVSYS_INTFLAG_EVD_Msk                 (_UINT32_(0xF) << EVSYS_INTFLAG_EVD_Pos)             /* (EVSYS_INTFLAG Mask) EVD */
#define EVSYS_INTFLAG_EVD(value)              (EVSYS_INTFLAG_EVD_Msk & (_UINT32_(value) << EVSYS_INTFLAG_EVD_Pos)) 

/* -------- EVSYS_SWEVT : (EVSYS Offset: 0x1C) ( /W 32) Software Event -------- */
#define EVSYS_SWEVT_RESETVALUE                _UINT32_(0x00)                                       /*  (EVSYS_SWEVT) Software Event  Reset Value */

#define EVSYS_SWEVT_CHANNEL0_Pos              _UINT32_(0)                                          /* (EVSYS_SWEVT) Channel 0 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL0_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL0_Pos)          /* (EVSYS_SWEVT) Channel 0 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL0(value)           (EVSYS_SWEVT_CHANNEL0_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL0_Pos)) /* Assignment of value for CHANNEL0 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL1_Pos              _UINT32_(1)                                          /* (EVSYS_SWEVT) Channel 1 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL1_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL1_Pos)          /* (EVSYS_SWEVT) Channel 1 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL1(value)           (EVSYS_SWEVT_CHANNEL1_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL1_Pos)) /* Assignment of value for CHANNEL1 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL2_Pos              _UINT32_(2)                                          /* (EVSYS_SWEVT) Channel 2 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL2_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL2_Pos)          /* (EVSYS_SWEVT) Channel 2 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL2(value)           (EVSYS_SWEVT_CHANNEL2_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL2_Pos)) /* Assignment of value for CHANNEL2 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_CHANNEL3_Pos              _UINT32_(3)                                          /* (EVSYS_SWEVT) Channel 3 Software Selection Position */
#define EVSYS_SWEVT_CHANNEL3_Msk              (_UINT32_(0x1) << EVSYS_SWEVT_CHANNEL3_Pos)          /* (EVSYS_SWEVT) Channel 3 Software Selection Mask */
#define EVSYS_SWEVT_CHANNEL3(value)           (EVSYS_SWEVT_CHANNEL3_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL3_Pos)) /* Assignment of value for CHANNEL3 in the EVSYS_SWEVT register */
#define EVSYS_SWEVT_Msk                       _UINT32_(0x0000000F)                                 /* (EVSYS_SWEVT) Register Mask  */

#define EVSYS_SWEVT_CHANNEL_Pos               _UINT32_(0)                                          /* (EVSYS_SWEVT Position) Channel 3 Software Selection */
#define EVSYS_SWEVT_CHANNEL_Msk               (_UINT32_(0xF) << EVSYS_SWEVT_CHANNEL_Pos)           /* (EVSYS_SWEVT Mask) CHANNEL */
#define EVSYS_SWEVT_CHANNEL(value)            (EVSYS_SWEVT_CHANNEL_Msk & (_UINT32_(value) << EVSYS_SWEVT_CHANNEL_Pos)) 

/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x20) (R/W 32) Channel # Control -------- */
#define EVSYS_CHANNEL_RESETVALUE              _UINT32_(0x8000)                                     /*  (EVSYS_CHANNEL) Channel # Control  Reset Value */

#define EVSYS_CHANNEL_EVGEN_Pos               _UINT32_(0)                                          /* (EVSYS_CHANNEL) Event Generator Position */
#define EVSYS_CHANNEL_EVGEN_Msk               (_UINT32_(0x7F) << EVSYS_CHANNEL_EVGEN_Pos)          /* (EVSYS_CHANNEL) Event Generator Mask */
#define EVSYS_CHANNEL_EVGEN(value)            (EVSYS_CHANNEL_EVGEN_Msk & (_UINT32_(value) << EVSYS_CHANNEL_EVGEN_Pos)) /* Assignment of value for EVGEN in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_PATH_Pos                _UINT32_(8)                                          /* (EVSYS_CHANNEL) Path Selection Position */
#define EVSYS_CHANNEL_PATH_Msk                (_UINT32_(0x3) << EVSYS_CHANNEL_PATH_Pos)            /* (EVSYS_CHANNEL) Path Selection Mask */
#define EVSYS_CHANNEL_PATH(value)             (EVSYS_CHANNEL_PATH_Msk & (_UINT32_(value) << EVSYS_CHANNEL_PATH_Pos)) /* Assignment of value for PATH in the EVSYS_CHANNEL register */
#define   EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val  _UINT32_(0x0)                                        /* (EVSYS_CHANNEL) Synchronous path  */
#define   EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val _UINT32_(0x1)                                        /* (EVSYS_CHANNEL) Resynchronized path  */
#define   EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val _UINT32_(0x2)                                        /* (EVSYS_CHANNEL) Asynchronous path  */
#define EVSYS_CHANNEL_PATH_SYNCHRONOUS        (EVSYS_CHANNEL_PATH_SYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Synchronous path Position */
#define EVSYS_CHANNEL_PATH_RESYNCHRONIZED     (EVSYS_CHANNEL_PATH_RESYNCHRONIZED_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Resynchronized path Position */
#define EVSYS_CHANNEL_PATH_ASYNCHRONOUS       (EVSYS_CHANNEL_PATH_ASYNCHRONOUS_Val << EVSYS_CHANNEL_PATH_Pos) /* (EVSYS_CHANNEL) Asynchronous path Position */
#define EVSYS_CHANNEL_EDGSEL_Pos              _UINT32_(10)                                         /* (EVSYS_CHANNEL) Edge Detection Selection Position */
#define EVSYS_CHANNEL_EDGSEL_Msk              (_UINT32_(0x3) << EVSYS_CHANNEL_EDGSEL_Pos)          /* (EVSYS_CHANNEL) Edge Detection Selection Mask */
#define EVSYS_CHANNEL_EDGSEL(value)           (EVSYS_CHANNEL_EDGSEL_Msk & (_UINT32_(value) << EVSYS_CHANNEL_EDGSEL_Pos)) /* Assignment of value for EDGSEL in the EVSYS_CHANNEL register */
#define   EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val _UINT32_(0x0)                                        /* (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path  */
#define   EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val _UINT32_(0x1)                                        /* (EVSYS_CHANNEL) Event detection occurs only on the rising edge of the signal from the event generator  */
#define   EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val _UINT32_(0x2)                                        /* (EVSYS_CHANNEL) Event detection occurs only on the falling edge of the signal from the event generator  */
#define   EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val _UINT32_(0x3)                                        /* (EVSYS_CHANNEL) Event detection occurs on both the rising and falling edges of the signal from the event generator  */
#define EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT    (EVSYS_CHANNEL_EDGSEL_NO_EVT_OUTPUT_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) No event output when using the resynchronized or synchronous path Position */
#define EVSYS_CHANNEL_EDGSEL_RISING_EDGE      (EVSYS_CHANNEL_EDGSEL_RISING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection occurs only on the rising edge of the signal from the event generator Position */
#define EVSYS_CHANNEL_EDGSEL_FALLING_EDGE     (EVSYS_CHANNEL_EDGSEL_FALLING_EDGE_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection occurs only on the falling edge of the signal from the event generator Position */
#define EVSYS_CHANNEL_EDGSEL_BOTH_EDGES       (EVSYS_CHANNEL_EDGSEL_BOTH_EDGES_Val << EVSYS_CHANNEL_EDGSEL_Pos) /* (EVSYS_CHANNEL) Event detection occurs on both the rising and falling edges of the signal from the event generator Position */
#define EVSYS_CHANNEL_RUNSTDBY_Pos            _UINT32_(14)                                         /* (EVSYS_CHANNEL) Run in Standby Position */
#define EVSYS_CHANNEL_RUNSTDBY_Msk            (_UINT32_(0x1) << EVSYS_CHANNEL_RUNSTDBY_Pos)        /* (EVSYS_CHANNEL) Run in Standby Mask */
#define EVSYS_CHANNEL_RUNSTDBY(value)         (EVSYS_CHANNEL_RUNSTDBY_Msk & (_UINT32_(value) << EVSYS_CHANNEL_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_ONDEMAND_Pos            _UINT32_(15)                                         /* (EVSYS_CHANNEL) Generic Clock On Demand Position */
#define EVSYS_CHANNEL_ONDEMAND_Msk            (_UINT32_(0x1) << EVSYS_CHANNEL_ONDEMAND_Pos)        /* (EVSYS_CHANNEL) Generic Clock On Demand Mask */
#define EVSYS_CHANNEL_ONDEMAND(value)         (EVSYS_CHANNEL_ONDEMAND_Msk & (_UINT32_(value) << EVSYS_CHANNEL_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the EVSYS_CHANNEL register */
#define EVSYS_CHANNEL_Msk                     _UINT32_(0x0000CF7F)                                 /* (EVSYS_CHANNEL) Register Mask  */


/* -------- EVSYS_USER : (EVSYS Offset: 0x80) (R/W 32) User # Channel Selection -------- */
#define EVSYS_USER_RESETVALUE                 _UINT32_(0x00)                                       /*  (EVSYS_USER) User # Channel Selection  Reset Value */

#define EVSYS_USER_CHANNEL_Pos                _UINT32_(0)                                          /* (EVSYS_USER) Channel Event Selection Position */
#define EVSYS_USER_CHANNEL_Msk                (_UINT32_(0x1F) << EVSYS_USER_CHANNEL_Pos)           /* (EVSYS_USER) Channel Event Selection Mask */
#define EVSYS_USER_CHANNEL(value)             (EVSYS_USER_CHANNEL_Msk & (_UINT32_(value) << EVSYS_USER_CHANNEL_Pos)) /* Assignment of value for CHANNEL in the EVSYS_USER register */
#define   EVSYS_USER_CHANNEL_OFF_Val          _UINT32_(0x0)                                        /* (EVSYS_USER) The Event System user is not connected to any channel  */
#define   EVSYS_USER_CHANNEL_CHANNEL0_Val     _UINT32_(0x1)                                        /* (EVSYS_USER) The Event System user is connected to Channel 0  */
#define   EVSYS_USER_CHANNEL_CHANNEL1_Val     _UINT32_(0x2)                                        /* (EVSYS_USER) The Event System user is connected to Channel 1  */
#define   EVSYS_USER_CHANNEL_CHANNEL2_Val     _UINT32_(0x3)                                        /* (EVSYS_USER) The Event System user is connected to Channel 2  */
#define   EVSYS_USER_CHANNEL_CHANNEL3_Val     _UINT32_(0x4)                                        /* (EVSYS_USER) The Event System user is connected to Channel 3  */
#define EVSYS_USER_CHANNEL_OFF                (EVSYS_USER_CHANNEL_OFF_Val << EVSYS_USER_CHANNEL_Pos) /* (EVSYS_USER) The Event System user is not connected to any channel Position */
#define EVSYS_USER_CHANNEL_CHANNEL0           (EVSYS_USER_CHANNEL_CHANNEL0_Val << EVSYS_USER_CHANNEL_Pos) /* (EVSYS_USER) The Event System user is connected to Channel 0 Position */
#define EVSYS_USER_CHANNEL_CHANNEL1           (EVSYS_USER_CHANNEL_CHANNEL1_Val << EVSYS_USER_CHANNEL_Pos) /* (EVSYS_USER) The Event System user is connected to Channel 1 Position */
#define EVSYS_USER_CHANNEL_CHANNEL2           (EVSYS_USER_CHANNEL_CHANNEL2_Val << EVSYS_USER_CHANNEL_Pos) /* (EVSYS_USER) The Event System user is connected to Channel 2 Position */
#define EVSYS_USER_CHANNEL_CHANNEL3           (EVSYS_USER_CHANNEL_CHANNEL3_Val << EVSYS_USER_CHANNEL_Pos) /* (EVSYS_USER) The Event System user is connected to Channel 3 Position */
#define EVSYS_USER_Msk                        _UINT32_(0x0000001F)                                 /* (EVSYS_USER) Register Mask  */


/* EVSYS register offsets definitions */
#define EVSYS_CTRLA_REG_OFST           _UINT32_(0x00)      /* (EVSYS_CTRLA) Control A Offset */
#define EVSYS_CHSTATUS_REG_OFST        _UINT32_(0x0C)      /* (EVSYS_CHSTATUS) Channel Status Offset */
#define EVSYS_INTENCLR_REG_OFST        _UINT32_(0x10)      /* (EVSYS_INTENCLR) Interrupt Enable Clear Offset */
#define EVSYS_INTENSET_REG_OFST        _UINT32_(0x14)      /* (EVSYS_INTENSET) Interrupt Enable Set Offset */
#define EVSYS_INTFLAG_REG_OFST         _UINT32_(0x18)      /* (EVSYS_INTFLAG) Interrupt Flag Status and Clear Offset */
#define EVSYS_SWEVT_REG_OFST           _UINT32_(0x1C)      /* (EVSYS_SWEVT) Software Event Offset */
#define EVSYS_CHANNEL_REG_OFST         _UINT32_(0x20)      /* (EVSYS_CHANNEL) Channel # Control Offset */
#define EVSYS_CHANNEL0_REG_OFST        _UINT32_(0x20)      /* (EVSYS_CHANNEL0) Channel # Control Offset */
#define EVSYS_CHANNEL1_REG_OFST        _UINT32_(0x24)      /* (EVSYS_CHANNEL1) Channel # Control Offset */
#define EVSYS_CHANNEL2_REG_OFST        _UINT32_(0x28)      /* (EVSYS_CHANNEL2) Channel # Control Offset */
#define EVSYS_CHANNEL3_REG_OFST        _UINT32_(0x2C)      /* (EVSYS_CHANNEL3) Channel # Control Offset */
#define EVSYS_USER_REG_OFST            _UINT32_(0x80)      /* (EVSYS_USER) User # Channel Selection Offset */
#define EVSYS_USER0_REG_OFST           _UINT32_(0x80)      /* (EVSYS_USER0) User # Channel Selection Offset */
#define EVSYS_USER1_REG_OFST           _UINT32_(0x84)      /* (EVSYS_USER1) User # Channel Selection Offset */
#define EVSYS_USER2_REG_OFST           _UINT32_(0x88)      /* (EVSYS_USER2) User # Channel Selection Offset */
#define EVSYS_USER3_REG_OFST           _UINT32_(0x8C)      /* (EVSYS_USER3) User # Channel Selection Offset */
#define EVSYS_USER4_REG_OFST           _UINT32_(0x90)      /* (EVSYS_USER4) User # Channel Selection Offset */
#define EVSYS_USER5_REG_OFST           _UINT32_(0x94)      /* (EVSYS_USER5) User # Channel Selection Offset */
#define EVSYS_USER6_REG_OFST           _UINT32_(0x98)      /* (EVSYS_USER6) User # Channel Selection Offset */
#define EVSYS_USER7_REG_OFST           _UINT32_(0x9C)      /* (EVSYS_USER7) User # Channel Selection Offset */
#define EVSYS_USER8_REG_OFST           _UINT32_(0xA0)      /* (EVSYS_USER8) User # Channel Selection Offset */
#define EVSYS_USER9_REG_OFST           _UINT32_(0xA4)      /* (EVSYS_USER9) User # Channel Selection Offset */
#define EVSYS_USER10_REG_OFST          _UINT32_(0xA8)      /* (EVSYS_USER10) User # Channel Selection Offset */
#define EVSYS_USER11_REG_OFST          _UINT32_(0xAC)      /* (EVSYS_USER11) User # Channel Selection Offset */
#define EVSYS_USER12_REG_OFST          _UINT32_(0xB0)      /* (EVSYS_USER12) User # Channel Selection Offset */
#define EVSYS_USER13_REG_OFST          _UINT32_(0xB4)      /* (EVSYS_USER13) User # Channel Selection Offset */
#define EVSYS_USER14_REG_OFST          _UINT32_(0xB8)      /* (EVSYS_USER14) User # Channel Selection Offset */
#define EVSYS_USER15_REG_OFST          _UINT32_(0xBC)      /* (EVSYS_USER15) User # Channel Selection Offset */
#define EVSYS_USER16_REG_OFST          _UINT32_(0xC0)      /* (EVSYS_USER16) User # Channel Selection Offset */
#define EVSYS_USER17_REG_OFST          _UINT32_(0xC4)      /* (EVSYS_USER17) User # Channel Selection Offset */
#define EVSYS_USER18_REG_OFST          _UINT32_(0xC8)      /* (EVSYS_USER18) User # Channel Selection Offset */
#define EVSYS_USER19_REG_OFST          _UINT32_(0xCC)      /* (EVSYS_USER19) User # Channel Selection Offset */
#define EVSYS_USER20_REG_OFST          _UINT32_(0xD0)      /* (EVSYS_USER20) User # Channel Selection Offset */
#define EVSYS_USER21_REG_OFST          _UINT32_(0xD4)      /* (EVSYS_USER21) User # Channel Selection Offset */
#define EVSYS_USER22_REG_OFST          _UINT32_(0xD8)      /* (EVSYS_USER22) User # Channel Selection Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* EVSYS register API structure */
typedef struct
{  /* Event System */
  __O   uint8_t                        EVSYS_CTRLA;        /* Offset: 0x00 ( /W  8) Control A */
  __I   uint8_t                        Reserved1[0x0B];
  __I   uint32_t                       EVSYS_CHSTATUS;     /* Offset: 0x0C (R/   32) Channel Status */
  __IO  uint32_t                       EVSYS_INTENCLR;     /* Offset: 0x10 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       EVSYS_INTENSET;     /* Offset: 0x14 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       EVSYS_INTFLAG;      /* Offset: 0x18 (R/W  32) Interrupt Flag Status and Clear */
  __O   uint32_t                       EVSYS_SWEVT;        /* Offset: 0x1C ( /W  32) Software Event */
  __IO  uint32_t                       EVSYS_CHANNEL[4];   /* Offset: 0x20 (R/W  32) Channel # Control */
  __I   uint8_t                        Reserved2[0x50];
  __IO  uint32_t                       EVSYS_USER[23];     /* Offset: 0x80 (R/W  32) User # Channel Selection */
} evsys_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_EVSYS_COMPONENT_H_ */
