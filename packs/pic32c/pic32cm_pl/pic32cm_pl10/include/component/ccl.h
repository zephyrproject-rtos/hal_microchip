/*
 * Component description for CCL
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
#ifndef _PIC32CMPL10_CCL_COMPONENT_H_
#define _PIC32CMPL10_CCL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR CCL                       */
/* ************************************************************************** */

/* -------- CCL_CTRLA : (CCL Offset: 0x00) (R/W 32) Control A -------- */
#define CCL_CTRLA_RESETVALUE                  _UINT32_(0x00)                                       /*  (CCL_CTRLA) Control A  Reset Value */

#define CCL_CTRLA_SWRST_Pos                   _UINT32_(0)                                          /* (CCL_CTRLA) Software Reset Position */
#define CCL_CTRLA_SWRST_Msk                   (_UINT32_(0x1) << CCL_CTRLA_SWRST_Pos)               /* (CCL_CTRLA) Software Reset Mask */
#define CCL_CTRLA_SWRST(value)                (CCL_CTRLA_SWRST_Msk & (_UINT32_(value) << CCL_CTRLA_SWRST_Pos)) /* Assignment of value for SWRST in the CCL_CTRLA register */
#define CCL_CTRLA_ENABLE_Pos                  _UINT32_(1)                                          /* (CCL_CTRLA) Enable Position */
#define CCL_CTRLA_ENABLE_Msk                  (_UINT32_(0x1) << CCL_CTRLA_ENABLE_Pos)              /* (CCL_CTRLA) Enable Mask */
#define CCL_CTRLA_ENABLE(value)               (CCL_CTRLA_ENABLE_Msk & (_UINT32_(value) << CCL_CTRLA_ENABLE_Pos)) /* Assignment of value for ENABLE in the CCL_CTRLA register */
#define CCL_CTRLA_RUNSTDBY_Pos                _UINT32_(6)                                          /* (CCL_CTRLA) Run in Standby Position */
#define CCL_CTRLA_RUNSTDBY_Msk                (_UINT32_(0x1) << CCL_CTRLA_RUNSTDBY_Pos)            /* (CCL_CTRLA) Run in Standby Mask */
#define CCL_CTRLA_RUNSTDBY(value)             (CCL_CTRLA_RUNSTDBY_Msk & (_UINT32_(value) << CCL_CTRLA_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the CCL_CTRLA register */
#define CCL_CTRLA_Msk                         _UINT32_(0x00000043)                                 /* (CCL_CTRLA) Register Mask  */


/* -------- CCL_SEQCTRL : (CCL Offset: 0x04) (R/W 32) Sequential Control -------- */
#define CCL_SEQCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (CCL_SEQCTRL) Sequential Control  Reset Value */

#define CCL_SEQCTRL_SEQSEL0_Pos               _UINT32_(0)                                          /* (CCL_SEQCTRL) Sequential Selection 0 Position */
#define CCL_SEQCTRL_SEQSEL0_Msk               (_UINT32_(0xF) << CCL_SEQCTRL_SEQSEL0_Pos)           /* (CCL_SEQCTRL) Sequential Selection 0 Mask */
#define CCL_SEQCTRL_SEQSEL0(value)            (CCL_SEQCTRL_SEQSEL0_Msk & (_UINT32_(value) << CCL_SEQCTRL_SEQSEL0_Pos)) /* Assignment of value for SEQSEL0 in the CCL_SEQCTRL register */
#define   CCL_SEQCTRL_SEQSEL0_DISABLE_Val     _UINT32_(0x0)                                        /* (CCL_SEQCTRL) Sequential logic is disabled  */
#define   CCL_SEQCTRL_SEQSEL0_DFF_Val         _UINT32_(0x1)                                        /* (CCL_SEQCTRL) D flip-flop  */
#define   CCL_SEQCTRL_SEQSEL0_JK_Val          _UINT32_(0x2)                                        /* (CCL_SEQCTRL) JK flip-flop  */
#define   CCL_SEQCTRL_SEQSEL0_LATCH_Val       _UINT32_(0x3)                                        /* (CCL_SEQCTRL) D latch  */
#define   CCL_SEQCTRL_SEQSEL0_RS_Val          _UINT32_(0x4)                                        /* (CCL_SEQCTRL) RS latch  */
#define CCL_SEQCTRL_SEQSEL0_DISABLE           (CCL_SEQCTRL_SEQSEL0_DISABLE_Val << CCL_SEQCTRL_SEQSEL0_Pos) /* (CCL_SEQCTRL) Sequential logic is disabled Position */
#define CCL_SEQCTRL_SEQSEL0_DFF               (CCL_SEQCTRL_SEQSEL0_DFF_Val << CCL_SEQCTRL_SEQSEL0_Pos) /* (CCL_SEQCTRL) D flip-flop Position */
#define CCL_SEQCTRL_SEQSEL0_JK                (CCL_SEQCTRL_SEQSEL0_JK_Val << CCL_SEQCTRL_SEQSEL0_Pos) /* (CCL_SEQCTRL) JK flip-flop Position */
#define CCL_SEQCTRL_SEQSEL0_LATCH             (CCL_SEQCTRL_SEQSEL0_LATCH_Val << CCL_SEQCTRL_SEQSEL0_Pos) /* (CCL_SEQCTRL) D latch Position */
#define CCL_SEQCTRL_SEQSEL0_RS                (CCL_SEQCTRL_SEQSEL0_RS_Val << CCL_SEQCTRL_SEQSEL0_Pos) /* (CCL_SEQCTRL) RS latch Position */
#define CCL_SEQCTRL_SEQSEL1_Pos               _UINT32_(8)                                          /* (CCL_SEQCTRL) Sequential Selection 1 Position */
#define CCL_SEQCTRL_SEQSEL1_Msk               (_UINT32_(0xF) << CCL_SEQCTRL_SEQSEL1_Pos)           /* (CCL_SEQCTRL) Sequential Selection 1 Mask */
#define CCL_SEQCTRL_SEQSEL1(value)            (CCL_SEQCTRL_SEQSEL1_Msk & (_UINT32_(value) << CCL_SEQCTRL_SEQSEL1_Pos)) /* Assignment of value for SEQSEL1 in the CCL_SEQCTRL register */
#define   CCL_SEQCTRL_SEQSEL1_DISABLE_Val     _UINT32_(0x0)                                        /* (CCL_SEQCTRL) Sequential logic is disabled  */
#define   CCL_SEQCTRL_SEQSEL1_DFF_Val         _UINT32_(0x1)                                        /* (CCL_SEQCTRL) D flip-flop  */
#define   CCL_SEQCTRL_SEQSEL1_JK_Val          _UINT32_(0x2)                                        /* (CCL_SEQCTRL) JK flip-flop  */
#define   CCL_SEQCTRL_SEQSEL1_LATCH_Val       _UINT32_(0x3)                                        /* (CCL_SEQCTRL) D latch  */
#define   CCL_SEQCTRL_SEQSEL1_RS_Val          _UINT32_(0x4)                                        /* (CCL_SEQCTRL) RS latch  */
#define CCL_SEQCTRL_SEQSEL1_DISABLE           (CCL_SEQCTRL_SEQSEL1_DISABLE_Val << CCL_SEQCTRL_SEQSEL1_Pos) /* (CCL_SEQCTRL) Sequential logic is disabled Position */
#define CCL_SEQCTRL_SEQSEL1_DFF               (CCL_SEQCTRL_SEQSEL1_DFF_Val << CCL_SEQCTRL_SEQSEL1_Pos) /* (CCL_SEQCTRL) D flip-flop Position */
#define CCL_SEQCTRL_SEQSEL1_JK                (CCL_SEQCTRL_SEQSEL1_JK_Val << CCL_SEQCTRL_SEQSEL1_Pos) /* (CCL_SEQCTRL) JK flip-flop Position */
#define CCL_SEQCTRL_SEQSEL1_LATCH             (CCL_SEQCTRL_SEQSEL1_LATCH_Val << CCL_SEQCTRL_SEQSEL1_Pos) /* (CCL_SEQCTRL) D latch Position */
#define CCL_SEQCTRL_SEQSEL1_RS                (CCL_SEQCTRL_SEQSEL1_RS_Val << CCL_SEQCTRL_SEQSEL1_Pos) /* (CCL_SEQCTRL) RS latch Position */
#define CCL_SEQCTRL_Msk                       _UINT32_(0x00000F0F)                                 /* (CCL_SEQCTRL) Register Mask  */


/* -------- CCL_LUTCTRL : (CCL Offset: 0x08) (R/W 32) LUT Control # -------- */
#define CCL_LUTCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (CCL_LUTCTRL) LUT Control #  Reset Value */

#define CCL_LUTCTRL_FILTSEL_Pos               _UINT32_(4)                                          /* (CCL_LUTCTRL) Filter Selection Position */
#define CCL_LUTCTRL_FILTSEL_Msk               (_UINT32_(0x3) << CCL_LUTCTRL_FILTSEL_Pos)           /* (CCL_LUTCTRL) Filter Selection Mask */
#define CCL_LUTCTRL_FILTSEL(value)            (CCL_LUTCTRL_FILTSEL_Msk & (_UINT32_(value) << CCL_LUTCTRL_FILTSEL_Pos)) /* Assignment of value for FILTSEL in the CCL_LUTCTRL register */
#define   CCL_LUTCTRL_FILTSEL_DISABLE_Val     _UINT32_(0x0)                                        /* (CCL_LUTCTRL) Filter disabled  */
#define   CCL_LUTCTRL_FILTSEL_SYNCH_Val       _UINT32_(0x1)                                        /* (CCL_LUTCTRL) Synchronizer enabled  */
#define   CCL_LUTCTRL_FILTSEL_FILTER_Val      _UINT32_(0x2)                                        /* (CCL_LUTCTRL) Filter enabled  */
#define CCL_LUTCTRL_FILTSEL_DISABLE           (CCL_LUTCTRL_FILTSEL_DISABLE_Val << CCL_LUTCTRL_FILTSEL_Pos) /* (CCL_LUTCTRL) Filter disabled Position */
#define CCL_LUTCTRL_FILTSEL_SYNCH             (CCL_LUTCTRL_FILTSEL_SYNCH_Val << CCL_LUTCTRL_FILTSEL_Pos) /* (CCL_LUTCTRL) Synchronizer enabled Position */
#define CCL_LUTCTRL_FILTSEL_FILTER            (CCL_LUTCTRL_FILTSEL_FILTER_Val << CCL_LUTCTRL_FILTSEL_Pos) /* (CCL_LUTCTRL) Filter enabled Position */
#define CCL_LUTCTRL_EDGESEL_Pos               _UINT32_(7)                                          /* (CCL_LUTCTRL) Edge Selection Position */
#define CCL_LUTCTRL_EDGESEL_Msk               (_UINT32_(0x1) << CCL_LUTCTRL_EDGESEL_Pos)           /* (CCL_LUTCTRL) Edge Selection Mask */
#define CCL_LUTCTRL_EDGESEL(value)            (CCL_LUTCTRL_EDGESEL_Msk & (_UINT32_(value) << CCL_LUTCTRL_EDGESEL_Pos)) /* Assignment of value for EDGESEL in the CCL_LUTCTRL register */
#define CCL_LUTCTRL_INSEL0_Pos                _UINT32_(8)                                          /* (CCL_LUTCTRL) LUT Input 0 Source Selection Position */
#define CCL_LUTCTRL_INSEL0_Msk                (_UINT32_(0xF) << CCL_LUTCTRL_INSEL0_Pos)            /* (CCL_LUTCTRL) LUT Input 0 Source Selection Mask */
#define CCL_LUTCTRL_INSEL0(value)             (CCL_LUTCTRL_INSEL0_Msk & (_UINT32_(value) << CCL_LUTCTRL_INSEL0_Pos)) /* Assignment of value for INSEL0 in the CCL_LUTCTRL register */
#define   CCL_LUTCTRL_INSEL0_MASK_Val         _UINT32_(0x0)                                        /* (CCL_LUTCTRL) Masked input  */
#define   CCL_LUTCTRL_INSEL0_FEEDBACK_Val     _UINT32_(0x1)                                        /* (CCL_LUTCTRL) Feedback input source  */
#define   CCL_LUTCTRL_INSEL0_LINK_Val         _UINT32_(0x2)                                        /* (CCL_LUTCTRL) Linked LUT input source  */
#define   CCL_LUTCTRL_INSEL0_EVENT_Val        _UINT32_(0x3)                                        /* (CCL_LUTCTRL) Event input source  */
#define   CCL_LUTCTRL_INSEL0_IO_Val           _UINT32_(0x4)                                        /* (CCL_LUTCTRL) I/O pin input source  */
#define   CCL_LUTCTRL_INSEL0_AC_Val           _UINT32_(0x5)                                        /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3)  */
#define   CCL_LUTCTRL_INSEL0_TC_Val           _UINT32_(0x6)                                        /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3)  */
#define   CCL_LUTCTRL_INSEL0_TCC_Val          _UINT32_(0x8)                                        /* (CCL_LUTCTRL) TCC input source: TCC0  */
#define   CCL_LUTCTRL_INSEL0_SERCOM_Val       _UINT32_(0x9)                                        /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3)  */
#define   CCL_LUTCTRL_INSEL0_ASYNCEVENT_Val   _UINT32_(0xB)                                        /* (CCL_LUTCTRL) Asynchronous event input source  */
#define CCL_LUTCTRL_INSEL0_MASK               (CCL_LUTCTRL_INSEL0_MASK_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) Masked input Position */
#define CCL_LUTCTRL_INSEL0_FEEDBACK           (CCL_LUTCTRL_INSEL0_FEEDBACK_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) Feedback input source Position */
#define CCL_LUTCTRL_INSEL0_LINK               (CCL_LUTCTRL_INSEL0_LINK_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) Linked LUT input source Position */
#define CCL_LUTCTRL_INSEL0_EVENT              (CCL_LUTCTRL_INSEL0_EVENT_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) Event input source Position */
#define CCL_LUTCTRL_INSEL0_IO                 (CCL_LUTCTRL_INSEL0_IO_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) I/O pin input source Position */
#define CCL_LUTCTRL_INSEL0_AC                 (CCL_LUTCTRL_INSEL0_AC_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3) Position */
#define CCL_LUTCTRL_INSEL0_TC                 (CCL_LUTCTRL_INSEL0_TC_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3) Position */
#define CCL_LUTCTRL_INSEL0_TCC                (CCL_LUTCTRL_INSEL0_TCC_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) TCC input source: TCC0 Position */
#define CCL_LUTCTRL_INSEL0_SERCOM             (CCL_LUTCTRL_INSEL0_SERCOM_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3) Position */
#define CCL_LUTCTRL_INSEL0_ASYNCEVENT         (CCL_LUTCTRL_INSEL0_ASYNCEVENT_Val << CCL_LUTCTRL_INSEL0_Pos) /* (CCL_LUTCTRL) Asynchronous event input source Position */
#define CCL_LUTCTRL_INSEL1_Pos                _UINT32_(12)                                         /* (CCL_LUTCTRL) LUT Input 1 Source Selection Position */
#define CCL_LUTCTRL_INSEL1_Msk                (_UINT32_(0xF) << CCL_LUTCTRL_INSEL1_Pos)            /* (CCL_LUTCTRL) LUT Input 1 Source Selection Mask */
#define CCL_LUTCTRL_INSEL1(value)             (CCL_LUTCTRL_INSEL1_Msk & (_UINT32_(value) << CCL_LUTCTRL_INSEL1_Pos)) /* Assignment of value for INSEL1 in the CCL_LUTCTRL register */
#define   CCL_LUTCTRL_INSEL1_MASK_Val         _UINT32_(0x0)                                        /* (CCL_LUTCTRL) Masked input  */
#define   CCL_LUTCTRL_INSEL1_FEEDBACK_Val     _UINT32_(0x1)                                        /* (CCL_LUTCTRL) Feedback input source  */
#define   CCL_LUTCTRL_INSEL1_LINK_Val         _UINT32_(0x2)                                        /* (CCL_LUTCTRL) Linked LUT input source  */
#define   CCL_LUTCTRL_INSEL1_EVENT_Val        _UINT32_(0x3)                                        /* (CCL_LUTCTRL) Event input source  */
#define   CCL_LUTCTRL_INSEL1_IO_Val           _UINT32_(0x4)                                        /* (CCL_LUTCTRL) I/O pin input source  */
#define   CCL_LUTCTRL_INSEL1_AC_Val           _UINT32_(0x5)                                        /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3)  */
#define   CCL_LUTCTRL_INSEL1_TC_Val           _UINT32_(0x6)                                        /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3)  */
#define   CCL_LUTCTRL_INSEL1_TCC_Val          _UINT32_(0x8)                                        /* (CCL_LUTCTRL) TCC input source: TCC0  */
#define   CCL_LUTCTRL_INSEL1_SERCOM_Val       _UINT32_(0x9)                                        /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3)  */
#define   CCL_LUTCTRL_INSEL1_ASYNCEVENT_Val   _UINT32_(0xB)                                        /* (CCL_LUTCTRL) Asynchronous event input source  */
#define CCL_LUTCTRL_INSEL1_MASK               (CCL_LUTCTRL_INSEL1_MASK_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) Masked input Position */
#define CCL_LUTCTRL_INSEL1_FEEDBACK           (CCL_LUTCTRL_INSEL1_FEEDBACK_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) Feedback input source Position */
#define CCL_LUTCTRL_INSEL1_LINK               (CCL_LUTCTRL_INSEL1_LINK_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) Linked LUT input source Position */
#define CCL_LUTCTRL_INSEL1_EVENT              (CCL_LUTCTRL_INSEL1_EVENT_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) Event input source Position */
#define CCL_LUTCTRL_INSEL1_IO                 (CCL_LUTCTRL_INSEL1_IO_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) I/O pin input source Position */
#define CCL_LUTCTRL_INSEL1_AC                 (CCL_LUTCTRL_INSEL1_AC_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3) Position */
#define CCL_LUTCTRL_INSEL1_TC                 (CCL_LUTCTRL_INSEL1_TC_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3) Position */
#define CCL_LUTCTRL_INSEL1_TCC                (CCL_LUTCTRL_INSEL1_TCC_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) TCC input source: TCC0 Position */
#define CCL_LUTCTRL_INSEL1_SERCOM             (CCL_LUTCTRL_INSEL1_SERCOM_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3) Position */
#define CCL_LUTCTRL_INSEL1_ASYNCEVENT         (CCL_LUTCTRL_INSEL1_ASYNCEVENT_Val << CCL_LUTCTRL_INSEL1_Pos) /* (CCL_LUTCTRL) Asynchronous event input source Position */
#define CCL_LUTCTRL_INSEL2_Pos                _UINT32_(16)                                         /* (CCL_LUTCTRL) LUT Input 2 Source Selection Position */
#define CCL_LUTCTRL_INSEL2_Msk                (_UINT32_(0xF) << CCL_LUTCTRL_INSEL2_Pos)            /* (CCL_LUTCTRL) LUT Input 2 Source Selection Mask */
#define CCL_LUTCTRL_INSEL2(value)             (CCL_LUTCTRL_INSEL2_Msk & (_UINT32_(value) << CCL_LUTCTRL_INSEL2_Pos)) /* Assignment of value for INSEL2 in the CCL_LUTCTRL register */
#define   CCL_LUTCTRL_INSEL2_MASK_Val         _UINT32_(0x0)                                        /* (CCL_LUTCTRL) Masked input  */
#define   CCL_LUTCTRL_INSEL2_FEEDBACK_Val     _UINT32_(0x1)                                        /* (CCL_LUTCTRL) Feedback input source  */
#define   CCL_LUTCTRL_INSEL2_LINK_Val         _UINT32_(0x2)                                        /* (CCL_LUTCTRL) Linked LUT input source  */
#define   CCL_LUTCTRL_INSEL2_EVENT_Val        _UINT32_(0x3)                                        /* (CCL_LUTCTRL) Event input source  */
#define   CCL_LUTCTRL_INSEL2_IO_Val           _UINT32_(0x4)                                        /* (CCL_LUTCTRL) I/O pin input source  */
#define   CCL_LUTCTRL_INSEL2_AC_Val           _UINT32_(0x5)                                        /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3)  */
#define   CCL_LUTCTRL_INSEL2_TC_Val           _UINT32_(0x6)                                        /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3)  */
#define   CCL_LUTCTRL_INSEL2_TCC_Val          _UINT32_(0x8)                                        /* (CCL_LUTCTRL) TCC input source: TCC0  */
#define   CCL_LUTCTRL_INSEL2_SERCOM_Val       _UINT32_(0x9)                                        /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3)  */
#define   CCL_LUTCTRL_INSEL2_ASYNCEVENT_Val   _UINT32_(0xB)                                        /* (CCL_LUTCTRL) Asynchronous event input source  */
#define CCL_LUTCTRL_INSEL2_MASK               (CCL_LUTCTRL_INSEL2_MASK_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) Masked input Position */
#define CCL_LUTCTRL_INSEL2_FEEDBACK           (CCL_LUTCTRL_INSEL2_FEEDBACK_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) Feedback input source Position */
#define CCL_LUTCTRL_INSEL2_LINK               (CCL_LUTCTRL_INSEL2_LINK_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) Linked LUT input source Position */
#define CCL_LUTCTRL_INSEL2_EVENT              (CCL_LUTCTRL_INSEL2_EVENT_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) Event input source Position */
#define CCL_LUTCTRL_INSEL2_IO                 (CCL_LUTCTRL_INSEL2_IO_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) I/O pin input source Position */
#define CCL_LUTCTRL_INSEL2_AC                 (CCL_LUTCTRL_INSEL2_AC_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) AC input source: CMP[0] (LUT0) / CMP[1] (LUT1) / CMP[0] (LUT2) / CMP[1] (LUT3) Position */
#define CCL_LUTCTRL_INSEL2_TC                 (CCL_LUTCTRL_INSEL2_TC_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) TC input source: TC0 (LUT0) / TC1 (LUT1) / TC2 (LUT2) / TC0 (LUT3) Position */
#define CCL_LUTCTRL_INSEL2_TCC                (CCL_LUTCTRL_INSEL2_TCC_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) TCC input source: TCC0 Position */
#define CCL_LUTCTRL_INSEL2_SERCOM             (CCL_LUTCTRL_INSEL2_SERCOM_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) SERCOM input source: SERCOM0 (LUT0) / SERCOM1 (LUT1) / SERCOM0 (LUT2) / SERCOM1 (LUT3) Position */
#define CCL_LUTCTRL_INSEL2_ASYNCEVENT         (CCL_LUTCTRL_INSEL2_ASYNCEVENT_Val << CCL_LUTCTRL_INSEL2_Pos) /* (CCL_LUTCTRL) Asynchronous event input source Position */
#define CCL_LUTCTRL_LUTINV_Pos                _UINT32_(20)                                         /* (CCL_LUTCTRL) LUT Inverted Event Input Enable Position */
#define CCL_LUTCTRL_LUTINV_Msk                (_UINT32_(0x1) << CCL_LUTCTRL_LUTINV_Pos)            /* (CCL_LUTCTRL) LUT Inverted Event Input Enable Mask */
#define CCL_LUTCTRL_LUTINV(value)             (CCL_LUTCTRL_LUTINV_Msk & (_UINT32_(value) << CCL_LUTCTRL_LUTINV_Pos)) /* Assignment of value for LUTINV in the CCL_LUTCTRL register */
#define CCL_LUTCTRL_LUTEI_Pos                 _UINT32_(21)                                         /* (CCL_LUTCTRL) LUT Event Input Enable Position */
#define CCL_LUTCTRL_LUTEI_Msk                 (_UINT32_(0x1) << CCL_LUTCTRL_LUTEI_Pos)             /* (CCL_LUTCTRL) LUT Event Input Enable Mask */
#define CCL_LUTCTRL_LUTEI(value)              (CCL_LUTCTRL_LUTEI_Msk & (_UINT32_(value) << CCL_LUTCTRL_LUTEI_Pos)) /* Assignment of value for LUTEI in the CCL_LUTCTRL register */
#define CCL_LUTCTRL_LUTEO_Pos                 _UINT32_(22)                                         /* (CCL_LUTCTRL) LUT Event Output Enable Position */
#define CCL_LUTCTRL_LUTEO_Msk                 (_UINT32_(0x1) << CCL_LUTCTRL_LUTEO_Pos)             /* (CCL_LUTCTRL) LUT Event Output Enable Mask */
#define CCL_LUTCTRL_LUTEO(value)              (CCL_LUTCTRL_LUTEO_Msk & (_UINT32_(value) << CCL_LUTCTRL_LUTEO_Pos)) /* Assignment of value for LUTEO in the CCL_LUTCTRL register */
#define CCL_LUTCTRL_TRUTH_Pos                 _UINT32_(24)                                         /* (CCL_LUTCTRL) Truth Table Position */
#define CCL_LUTCTRL_TRUTH_Msk                 (_UINT32_(0xFF) << CCL_LUTCTRL_TRUTH_Pos)            /* (CCL_LUTCTRL) Truth Table Mask */
#define CCL_LUTCTRL_TRUTH(value)              (CCL_LUTCTRL_TRUTH_Msk & (_UINT32_(value) << CCL_LUTCTRL_TRUTH_Pos)) /* Assignment of value for TRUTH in the CCL_LUTCTRL register */
#define CCL_LUTCTRL_Msk                       _UINT32_(0xFF7FFFB0)                                 /* (CCL_LUTCTRL) Register Mask  */


/* -------- CCL_WPCTRL : (CCL Offset: 0x28) (R/W 32) Write Protection Control -------- */
#define CCL_WPCTRL_RESETVALUE                 _UINT32_(0x00)                                       /*  (CCL_WPCTRL) Write Protection Control  Reset Value */

#define CCL_WPCTRL_WPEN_Pos                   _UINT32_(0)                                          /* (CCL_WPCTRL) Write Protection Enable Position */
#define CCL_WPCTRL_WPEN_Msk                   (_UINT32_(0x1) << CCL_WPCTRL_WPEN_Pos)               /* (CCL_WPCTRL) Write Protection Enable Mask */
#define CCL_WPCTRL_WPEN(value)                (CCL_WPCTRL_WPEN_Msk & (_UINT32_(value) << CCL_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the CCL_WPCTRL register */
#define CCL_WPCTRL_WPLCK_Pos                  _UINT32_(1)                                          /* (CCL_WPCTRL) Write Protection Lock Position */
#define CCL_WPCTRL_WPLCK_Msk                  (_UINT32_(0x1) << CCL_WPCTRL_WPLCK_Pos)              /* (CCL_WPCTRL) Write Protection Lock Mask */
#define CCL_WPCTRL_WPLCK(value)               (CCL_WPCTRL_WPLCK_Msk & (_UINT32_(value) << CCL_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the CCL_WPCTRL register */
#define CCL_WPCTRL_WPKEY_Pos                  _UINT32_(8)                                          /* (CCL_WPCTRL) Write Protection Key Position */
#define CCL_WPCTRL_WPKEY_Msk                  (_UINT32_(0xFFFFFF) << CCL_WPCTRL_WPKEY_Pos)         /* (CCL_WPCTRL) Write Protection Key Mask */
#define CCL_WPCTRL_WPKEY(value)               (CCL_WPCTRL_WPKEY_Msk & (_UINT32_(value) << CCL_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the CCL_WPCTRL register */
#define   CCL_WPCTRL_WPKEY_KEY_Val            _UINT32_(0x43434C)                                   /* (CCL_WPCTRL) Allow writes to the WPCTRL register  */
#define CCL_WPCTRL_WPKEY_KEY                  (CCL_WPCTRL_WPKEY_KEY_Val << CCL_WPCTRL_WPKEY_Pos)   /* (CCL_WPCTRL) Allow writes to the WPCTRL register Position */
#define CCL_WPCTRL_Msk                        _UINT32_(0xFFFFFF03)                                 /* (CCL_WPCTRL) Register Mask  */


/* CCL register offsets definitions */
#define CCL_CTRLA_REG_OFST             _UINT32_(0x00)      /* (CCL_CTRLA) Control A Offset */
#define CCL_SEQCTRL_REG_OFST           _UINT32_(0x04)      /* (CCL_SEQCTRL) Sequential Control Offset */
#define CCL_LUTCTRL_REG_OFST           _UINT32_(0x08)      /* (CCL_LUTCTRL) LUT Control # Offset */
#define CCL_LUTCTRL0_REG_OFST          _UINT32_(0x08)      /* (CCL_LUTCTRL0) LUT Control # Offset */
#define CCL_LUTCTRL1_REG_OFST          _UINT32_(0x0C)      /* (CCL_LUTCTRL1) LUT Control # Offset */
#define CCL_LUTCTRL2_REG_OFST          _UINT32_(0x10)      /* (CCL_LUTCTRL2) LUT Control # Offset */
#define CCL_LUTCTRL3_REG_OFST          _UINT32_(0x14)      /* (CCL_LUTCTRL3) LUT Control # Offset */
#define CCL_WPCTRL_REG_OFST            _UINT32_(0x28)      /* (CCL_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* CCL register API structure */
typedef struct
{  /* Configurable Custom Logic */
  __IO  uint32_t                       CCL_CTRLA;          /* Offset: 0x00 (R/W  32) Control A */
  __IO  uint32_t                       CCL_SEQCTRL;        /* Offset: 0x04 (R/W  32) Sequential Control */
  __IO  uint32_t                       CCL_LUTCTRL[4];     /* Offset: 0x08 (R/W  32) LUT Control # */
  __I   uint8_t                        Reserved1[0x10];
  __IO  uint32_t                       CCL_WPCTRL;         /* Offset: 0x28 (R/W  32) Write Protection Control */
} ccl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_CCL_COMPONENT_H_ */
