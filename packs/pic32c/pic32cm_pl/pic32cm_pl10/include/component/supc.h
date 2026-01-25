/*
 * Component description for SUPC
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
#ifndef _PIC32CMPL10_SUPC_COMPONENT_H_
#define _PIC32CMPL10_SUPC_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR SUPC                      */
/* ************************************************************************** */

/* -------- SUPC_INTENCLR : (SUPC Offset: 0x04) (R/W 32) Interrupt Enable Clear -------- */
#define SUPC_INTENCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (SUPC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define SUPC_INTENCLR_BODVDDRDY_Pos           _UINT32_(0)                                          /* (SUPC_INTENCLR) BODVDD Ready Interrupt Enable Position */
#define SUPC_INTENCLR_BODVDDRDY_Msk           (_UINT32_(0x1) << SUPC_INTENCLR_BODVDDRDY_Pos)       /* (SUPC_INTENCLR) BODVDD Ready Interrupt Enable Mask */
#define SUPC_INTENCLR_BODVDDRDY(value)        (SUPC_INTENCLR_BODVDDRDY_Msk & (_UINT32_(value) << SUPC_INTENCLR_BODVDDRDY_Pos)) /* Assignment of value for BODVDDRDY in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_VLM_Pos                 _UINT32_(3)                                          /* (SUPC_INTENCLR) Voltage Level Monitor Interrupt Enable Position */
#define SUPC_INTENCLR_VLM_Msk                 (_UINT32_(0x1) << SUPC_INTENCLR_VLM_Pos)             /* (SUPC_INTENCLR) Voltage Level Monitor Interrupt Enable Mask */
#define SUPC_INTENCLR_VLM(value)              (SUPC_INTENCLR_VLM_Msk & (_UINT32_(value) << SUPC_INTENCLR_VLM_Pos)) /* Assignment of value for VLM in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_VDDIO2OK_Pos            _UINT32_(4)                                          /* (SUPC_INTENCLR) VDDIO2OK Interrupt Enable Position */
#define SUPC_INTENCLR_VDDIO2OK_Msk            (_UINT32_(0x1) << SUPC_INTENCLR_VDDIO2OK_Pos)        /* (SUPC_INTENCLR) VDDIO2OK Interrupt Enable Mask */
#define SUPC_INTENCLR_VDDIO2OK(value)         (SUPC_INTENCLR_VDDIO2OK_Msk & (_UINT32_(value) << SUPC_INTENCLR_VDDIO2OK_Pos)) /* Assignment of value for VDDIO2OK in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_VDDIO2LPMPOR_Pos        _UINT32_(5)                                          /* (SUPC_INTENCLR) VDDIO2 Low-Power Mode POR Interrupt Enable Position */
#define SUPC_INTENCLR_VDDIO2LPMPOR_Msk        (_UINT32_(0x1) << SUPC_INTENCLR_VDDIO2LPMPOR_Pos)    /* (SUPC_INTENCLR) VDDIO2 Low-Power Mode POR Interrupt Enable Mask */
#define SUPC_INTENCLR_VDDIO2LPMPOR(value)     (SUPC_INTENCLR_VDDIO2LPMPOR_Msk & (_UINT32_(value) << SUPC_INTENCLR_VDDIO2LPMPOR_Pos)) /* Assignment of value for VDDIO2LPMPOR in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_Msk                     _UINT32_(0x00000039)                                 /* (SUPC_INTENCLR) Register Mask  */


/* -------- SUPC_INTENSET : (SUPC Offset: 0x08) (R/W 32) Interrupt Enable Set -------- */
#define SUPC_INTENSET_RESETVALUE              _UINT32_(0x00)                                       /*  (SUPC_INTENSET) Interrupt Enable Set  Reset Value */

#define SUPC_INTENSET_BODVDDRDY_Pos           _UINT32_(0)                                          /* (SUPC_INTENSET) BODVDD Ready Interrupt Enable Position */
#define SUPC_INTENSET_BODVDDRDY_Msk           (_UINT32_(0x1) << SUPC_INTENSET_BODVDDRDY_Pos)       /* (SUPC_INTENSET) BODVDD Ready Interrupt Enable Mask */
#define SUPC_INTENSET_BODVDDRDY(value)        (SUPC_INTENSET_BODVDDRDY_Msk & (_UINT32_(value) << SUPC_INTENSET_BODVDDRDY_Pos)) /* Assignment of value for BODVDDRDY in the SUPC_INTENSET register */
#define SUPC_INTENSET_VLM_Pos                 _UINT32_(3)                                          /* (SUPC_INTENSET) Voltage Level Monitor Interrupt Enable Position */
#define SUPC_INTENSET_VLM_Msk                 (_UINT32_(0x1) << SUPC_INTENSET_VLM_Pos)             /* (SUPC_INTENSET) Voltage Level Monitor Interrupt Enable Mask */
#define SUPC_INTENSET_VLM(value)              (SUPC_INTENSET_VLM_Msk & (_UINT32_(value) << SUPC_INTENSET_VLM_Pos)) /* Assignment of value for VLM in the SUPC_INTENSET register */
#define SUPC_INTENSET_VDDIO2OK_Pos            _UINT32_(4)                                          /* (SUPC_INTENSET) VDDIO2 OK Interrupt Enable Position */
#define SUPC_INTENSET_VDDIO2OK_Msk            (_UINT32_(0x1) << SUPC_INTENSET_VDDIO2OK_Pos)        /* (SUPC_INTENSET) VDDIO2 OK Interrupt Enable Mask */
#define SUPC_INTENSET_VDDIO2OK(value)         (SUPC_INTENSET_VDDIO2OK_Msk & (_UINT32_(value) << SUPC_INTENSET_VDDIO2OK_Pos)) /* Assignment of value for VDDIO2OK in the SUPC_INTENSET register */
#define SUPC_INTENSET_VDDIO2LPMPOR_Pos        _UINT32_(5)                                          /* (SUPC_INTENSET) VDDIO2 Low Power Mode POR Interrupt Enable Position */
#define SUPC_INTENSET_VDDIO2LPMPOR_Msk        (_UINT32_(0x1) << SUPC_INTENSET_VDDIO2LPMPOR_Pos)    /* (SUPC_INTENSET) VDDIO2 Low Power Mode POR Interrupt Enable Mask */
#define SUPC_INTENSET_VDDIO2LPMPOR(value)     (SUPC_INTENSET_VDDIO2LPMPOR_Msk & (_UINT32_(value) << SUPC_INTENSET_VDDIO2LPMPOR_Pos)) /* Assignment of value for VDDIO2LPMPOR in the SUPC_INTENSET register */
#define SUPC_INTENSET_Msk                     _UINT32_(0x00000039)                                 /* (SUPC_INTENSET) Register Mask  */


/* -------- SUPC_INTFLAG : (SUPC Offset: 0x0C) (R/W 32) Interrupt Flag Status and Clear -------- */
#define SUPC_INTFLAG_BODVDDRDY_Pos            _UINT32_(0)                                          /* (SUPC_INTFLAG) BODVDD Ready Position */
#define SUPC_INTFLAG_BODVDDRDY_Msk            (_UINT32_(0x1) << SUPC_INTFLAG_BODVDDRDY_Pos)        /* (SUPC_INTFLAG) BODVDD Ready Mask */
#define SUPC_INTFLAG_BODVDDRDY(value)         (SUPC_INTFLAG_BODVDDRDY_Msk & (_UINT32_(value) << SUPC_INTFLAG_BODVDDRDY_Pos)) /* Assignment of value for BODVDDRDY in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_VLM_Pos                  _UINT32_(3)                                          /* (SUPC_INTFLAG) Voltage Level Monitor Position */
#define SUPC_INTFLAG_VLM_Msk                  (_UINT32_(0x1) << SUPC_INTFLAG_VLM_Pos)              /* (SUPC_INTFLAG) Voltage Level Monitor Mask */
#define SUPC_INTFLAG_VLM(value)               (SUPC_INTFLAG_VLM_Msk & (_UINT32_(value) << SUPC_INTFLAG_VLM_Pos)) /* Assignment of value for VLM in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_VDDIO2OK_Pos             _UINT32_(4)                                          /* (SUPC_INTFLAG) VDDIO2 OK Position */
#define SUPC_INTFLAG_VDDIO2OK_Msk             (_UINT32_(0x1) << SUPC_INTFLAG_VDDIO2OK_Pos)         /* (SUPC_INTFLAG) VDDIO2 OK Mask */
#define SUPC_INTFLAG_VDDIO2OK(value)          (SUPC_INTFLAG_VDDIO2OK_Msk & (_UINT32_(value) << SUPC_INTFLAG_VDDIO2OK_Pos)) /* Assignment of value for VDDIO2OK in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_VDDIO2LPMPOR_Pos         _UINT32_(5)                                          /* (SUPC_INTFLAG) VDDIO2 Low Power Mode POR Position */
#define SUPC_INTFLAG_VDDIO2LPMPOR_Msk         (_UINT32_(0x1) << SUPC_INTFLAG_VDDIO2LPMPOR_Pos)     /* (SUPC_INTFLAG) VDDIO2 Low Power Mode POR Mask */
#define SUPC_INTFLAG_VDDIO2LPMPOR(value)      (SUPC_INTFLAG_VDDIO2LPMPOR_Msk & (_UINT32_(value) << SUPC_INTFLAG_VDDIO2LPMPOR_Pos)) /* Assignment of value for VDDIO2LPMPOR in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_Msk                      _UINT32_(0x00000039)                                 /* (SUPC_INTFLAG) Register Mask  */


/* -------- SUPC_INTFLAGSET : (SUPC Offset: 0x10) (R/W 32) Interrupt Flag Software Set -------- */
#define SUPC_INTFLAGSET_RESETVALUE            _UINT32_(0x00)                                       /*  (SUPC_INTFLAGSET) Interrupt Flag Software Set  Reset Value */

#define SUPC_INTFLAGSET_BODVDDRDY_Pos         _UINT32_(0)                                          /* (SUPC_INTFLAGSET) BODVDD Ready Position */
#define SUPC_INTFLAGSET_BODVDDRDY_Msk         (_UINT32_(0x1) << SUPC_INTFLAGSET_BODVDDRDY_Pos)     /* (SUPC_INTFLAGSET) BODVDD Ready Mask */
#define SUPC_INTFLAGSET_BODVDDRDY(value)      (SUPC_INTFLAGSET_BODVDDRDY_Msk & (_UINT32_(value) << SUPC_INTFLAGSET_BODVDDRDY_Pos)) /* Assignment of value for BODVDDRDY in the SUPC_INTFLAGSET register */
#define SUPC_INTFLAGSET_VLM_Pos               _UINT32_(3)                                          /* (SUPC_INTFLAGSET) Voltage Level Monitor Position */
#define SUPC_INTFLAGSET_VLM_Msk               (_UINT32_(0x1) << SUPC_INTFLAGSET_VLM_Pos)           /* (SUPC_INTFLAGSET) Voltage Level Monitor Mask */
#define SUPC_INTFLAGSET_VLM(value)            (SUPC_INTFLAGSET_VLM_Msk & (_UINT32_(value) << SUPC_INTFLAGSET_VLM_Pos)) /* Assignment of value for VLM in the SUPC_INTFLAGSET register */
#define SUPC_INTFLAGSET_VDDIO2OK_Pos          _UINT32_(4)                                          /* (SUPC_INTFLAGSET) VDDIO2 OK Position */
#define SUPC_INTFLAGSET_VDDIO2OK_Msk          (_UINT32_(0x1) << SUPC_INTFLAGSET_VDDIO2OK_Pos)      /* (SUPC_INTFLAGSET) VDDIO2 OK Mask */
#define SUPC_INTFLAGSET_VDDIO2OK(value)       (SUPC_INTFLAGSET_VDDIO2OK_Msk & (_UINT32_(value) << SUPC_INTFLAGSET_VDDIO2OK_Pos)) /* Assignment of value for VDDIO2OK in the SUPC_INTFLAGSET register */
#define SUPC_INTFLAGSET_VDDIO2LPMPOR_Pos      _UINT32_(5)                                          /* (SUPC_INTFLAGSET) VDDIO2 Low Power Mode POR Position */
#define SUPC_INTFLAGSET_VDDIO2LPMPOR_Msk      (_UINT32_(0x1) << SUPC_INTFLAGSET_VDDIO2LPMPOR_Pos)  /* (SUPC_INTFLAGSET) VDDIO2 Low Power Mode POR Mask */
#define SUPC_INTFLAGSET_VDDIO2LPMPOR(value)   (SUPC_INTFLAGSET_VDDIO2LPMPOR_Msk & (_UINT32_(value) << SUPC_INTFLAGSET_VDDIO2LPMPOR_Pos)) /* Assignment of value for VDDIO2LPMPOR in the SUPC_INTFLAGSET register */
#define SUPC_INTFLAGSET_Msk                   _UINT32_(0x00000039)                                 /* (SUPC_INTFLAGSET) Register Mask  */


/* -------- SUPC_STATUS : (SUPC Offset: 0x14) ( R/ 32) Status -------- */
#define SUPC_STATUS_BODVDDRDY_Pos             _UINT32_(0)                                          /* (SUPC_STATUS) BODVDD Ready Position */
#define SUPC_STATUS_BODVDDRDY_Msk             (_UINT32_(0x1) << SUPC_STATUS_BODVDDRDY_Pos)         /* (SUPC_STATUS) BODVDD Ready Mask */
#define SUPC_STATUS_BODVDDRDY(value)          (SUPC_STATUS_BODVDDRDY_Msk & (_UINT32_(value) << SUPC_STATUS_BODVDDRDY_Pos)) /* Assignment of value for BODVDDRDY in the SUPC_STATUS register */
#define SUPC_STATUS_VLM_Pos                   _UINT32_(3)                                          /* (SUPC_STATUS) Voltage Level Monitor Position */
#define SUPC_STATUS_VLM_Msk                   (_UINT32_(0x1) << SUPC_STATUS_VLM_Pos)               /* (SUPC_STATUS) Voltage Level Monitor Mask */
#define SUPC_STATUS_VLM(value)                (SUPC_STATUS_VLM_Msk & (_UINT32_(value) << SUPC_STATUS_VLM_Pos)) /* Assignment of value for VLM in the SUPC_STATUS register */
#define SUPC_STATUS_VDDIO2OK_Pos              _UINT32_(4)                                          /* (SUPC_STATUS) VDDIO2 OK Position */
#define SUPC_STATUS_VDDIO2OK_Msk              (_UINT32_(0x1) << SUPC_STATUS_VDDIO2OK_Pos)          /* (SUPC_STATUS) VDDIO2 OK Mask */
#define SUPC_STATUS_VDDIO2OK(value)           (SUPC_STATUS_VDDIO2OK_Msk & (_UINT32_(value) << SUPC_STATUS_VDDIO2OK_Pos)) /* Assignment of value for VDDIO2OK in the SUPC_STATUS register */
#define SUPC_STATUS_VDDIO2LPMPOR_Pos          _UINT32_(5)                                          /* (SUPC_STATUS) VDDIO2 Low Power Mode POR Position */
#define SUPC_STATUS_VDDIO2LPMPOR_Msk          (_UINT32_(0x1) << SUPC_STATUS_VDDIO2LPMPOR_Pos)      /* (SUPC_STATUS) VDDIO2 Low Power Mode POR Mask */
#define SUPC_STATUS_VDDIO2LPMPOR(value)       (SUPC_STATUS_VDDIO2LPMPOR_Msk & (_UINT32_(value) << SUPC_STATUS_VDDIO2LPMPOR_Pos)) /* Assignment of value for VDDIO2LPMPOR in the SUPC_STATUS register */
#define SUPC_STATUS_Msk                       _UINT32_(0x00000039)                                 /* (SUPC_STATUS) Register Mask  */


/* -------- SUPC_BODVDD : (SUPC Offset: 0x1C) (R/W 32) VDD Brown-Out Detector Control -------- */
#define SUPC_BODVDD_RESETVALUE                _UINT32_(0x00)                                       /*  (SUPC_BODVDD) VDD Brown-Out Detector Control  Reset Value */

#define SUPC_BODVDD_ENABLE_Pos                _UINT32_(1)                                          /* (SUPC_BODVDD) Enable Position */
#define SUPC_BODVDD_ENABLE_Msk                (_UINT32_(0x1) << SUPC_BODVDD_ENABLE_Pos)            /* (SUPC_BODVDD) Enable Mask */
#define SUPC_BODVDD_ENABLE(value)             (SUPC_BODVDD_ENABLE_Msk & (_UINT32_(value) << SUPC_BODVDD_ENABLE_Pos)) /* Assignment of value for ENABLE in the SUPC_BODVDD register */
#define SUPC_BODVDD_STDBYCFG_Pos              _UINT32_(5)                                          /* (SUPC_BODVDD) BOD Configuration in Standby Sleep Mode Position */
#define SUPC_BODVDD_STDBYCFG_Msk              (_UINT32_(0x1) << SUPC_BODVDD_STDBYCFG_Pos)          /* (SUPC_BODVDD) BOD Configuration in Standby Sleep Mode Mask */
#define SUPC_BODVDD_STDBYCFG(value)           (SUPC_BODVDD_STDBYCFG_Msk & (_UINT32_(value) << SUPC_BODVDD_STDBYCFG_Pos)) /* Assignment of value for STDBYCFG in the SUPC_BODVDD register */
#define   SUPC_BODVDD_STDBYCFG_CONT_Val       _UINT32_(0x0)                                        /* (SUPC_BODVDD) Continuous Mode  */
#define   SUPC_BODVDD_STDBYCFG_SAMP_Val       _UINT32_(0x1)                                        /* (SUPC_BODVDD) Sampling Mode  */
#define SUPC_BODVDD_STDBYCFG_CONT             (SUPC_BODVDD_STDBYCFG_CONT_Val << SUPC_BODVDD_STDBYCFG_Pos) /* (SUPC_BODVDD) Continuous Mode Position */
#define SUPC_BODVDD_STDBYCFG_SAMP             (SUPC_BODVDD_STDBYCFG_SAMP_Val << SUPC_BODVDD_STDBYCFG_Pos) /* (SUPC_BODVDD) Sampling Mode Position */
#define SUPC_BODVDD_RUNSTDBY_Pos              _UINT32_(6)                                          /* (SUPC_BODVDD) Run in Standby Position */
#define SUPC_BODVDD_RUNSTDBY_Msk              (_UINT32_(0x1) << SUPC_BODVDD_RUNSTDBY_Pos)          /* (SUPC_BODVDD) Run in Standby Mask */
#define SUPC_BODVDD_RUNSTDBY(value)           (SUPC_BODVDD_RUNSTDBY_Msk & (_UINT32_(value) << SUPC_BODVDD_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SUPC_BODVDD register */
#define SUPC_BODVDD_ACTCFG_Pos                _UINT32_(8)                                          /* (SUPC_BODVDD) BOD Configuration in Active Mode Position */
#define SUPC_BODVDD_ACTCFG_Msk                (_UINT32_(0x1) << SUPC_BODVDD_ACTCFG_Pos)            /* (SUPC_BODVDD) BOD Configuration in Active Mode Mask */
#define SUPC_BODVDD_ACTCFG(value)             (SUPC_BODVDD_ACTCFG_Msk & (_UINT32_(value) << SUPC_BODVDD_ACTCFG_Pos)) /* Assignment of value for ACTCFG in the SUPC_BODVDD register */
#define   SUPC_BODVDD_ACTCFG_CONT_Val         _UINT32_(0x0)                                        /* (SUPC_BODVDD) Continuous Mode  */
#define   SUPC_BODVDD_ACTCFG_SAMP_Val         _UINT32_(0x1)                                        /* (SUPC_BODVDD) Sampling Mode  */
#define SUPC_BODVDD_ACTCFG_CONT               (SUPC_BODVDD_ACTCFG_CONT_Val << SUPC_BODVDD_ACTCFG_Pos) /* (SUPC_BODVDD) Continuous Mode Position */
#define SUPC_BODVDD_ACTCFG_SAMP               (SUPC_BODVDD_ACTCFG_SAMP_Val << SUPC_BODVDD_ACTCFG_Pos) /* (SUPC_BODVDD) Sampling Mode Position */
#define SUPC_BODVDD_SAMPFREQ_Pos              _UINT32_(12)                                         /* (SUPC_BODVDD) Sampling Frequency Position */
#define SUPC_BODVDD_SAMPFREQ_Msk              (_UINT32_(0x1) << SUPC_BODVDD_SAMPFREQ_Pos)          /* (SUPC_BODVDD) Sampling Frequency Mask */
#define SUPC_BODVDD_SAMPFREQ(value)           (SUPC_BODVDD_SAMPFREQ_Msk & (_UINT32_(value) << SUPC_BODVDD_SAMPFREQ_Pos)) /* Assignment of value for SAMPFREQ in the SUPC_BODVDD register */
#define   SUPC_BODVDD_SAMPFREQ_128HZ_Val      _UINT32_(0x0)                                        /* (SUPC_BODVDD) 128 Hz Sampling Frequency  */
#define   SUPC_BODVDD_SAMPFREQ_32HZ_Val       _UINT32_(0x1)                                        /* (SUPC_BODVDD) 32 Hz Sampling Frequency  */
#define SUPC_BODVDD_SAMPFREQ_128HZ            (SUPC_BODVDD_SAMPFREQ_128HZ_Val << SUPC_BODVDD_SAMPFREQ_Pos) /* (SUPC_BODVDD) 128 Hz Sampling Frequency Position */
#define SUPC_BODVDD_SAMPFREQ_32HZ             (SUPC_BODVDD_SAMPFREQ_32HZ_Val << SUPC_BODVDD_SAMPFREQ_Pos) /* (SUPC_BODVDD) 32 Hz Sampling Frequency Position */
#define SUPC_BODVDD_LEVEL_Pos                 _UINT32_(16)                                         /* (SUPC_BODVDD) BOD Level Position */
#define SUPC_BODVDD_LEVEL_Msk                 (_UINT32_(0x3) << SUPC_BODVDD_LEVEL_Pos)             /* (SUPC_BODVDD) BOD Level Mask */
#define SUPC_BODVDD_LEVEL(value)              (SUPC_BODVDD_LEVEL_Msk & (_UINT32_(value) << SUPC_BODVDD_LEVEL_Pos)) /* Assignment of value for LEVEL in the SUPC_BODVDD register */
#define   SUPC_BODVDD_LEVEL_BODLEVEL0_Val     _UINT32_(0x0)                                        /* (SUPC_BODVDD) 1.90V  */
#define   SUPC_BODVDD_LEVEL_BODLEVEL1_Val     _UINT32_(0x1)                                        /* (SUPC_BODVDD) 2.45V  */
#define   SUPC_BODVDD_LEVEL_BODLEVEL2_Val     _UINT32_(0x2)                                        /* (SUPC_BODVDD) 2.70V  */
#define   SUPC_BODVDD_LEVEL_BODLEVEL3_Val     _UINT32_(0x3)                                        /* (SUPC_BODVDD) 2.85V  */
#define SUPC_BODVDD_LEVEL_BODLEVEL0           (SUPC_BODVDD_LEVEL_BODLEVEL0_Val << SUPC_BODVDD_LEVEL_Pos) /* (SUPC_BODVDD) 1.90V Position */
#define SUPC_BODVDD_LEVEL_BODLEVEL1           (SUPC_BODVDD_LEVEL_BODLEVEL1_Val << SUPC_BODVDD_LEVEL_Pos) /* (SUPC_BODVDD) 2.45V Position */
#define SUPC_BODVDD_LEVEL_BODLEVEL2           (SUPC_BODVDD_LEVEL_BODLEVEL2_Val << SUPC_BODVDD_LEVEL_Pos) /* (SUPC_BODVDD) 2.70V Position */
#define SUPC_BODVDD_LEVEL_BODLEVEL3           (SUPC_BODVDD_LEVEL_BODLEVEL3_Val << SUPC_BODVDD_LEVEL_Pos) /* (SUPC_BODVDD) 2.85V Position */
#define SUPC_BODVDD_VLMLVL_Pos                _UINT32_(24)                                         /* (SUPC_BODVDD) Voltage Level Monitor Level Position */
#define SUPC_BODVDD_VLMLVL_Msk                (_UINT32_(0x3) << SUPC_BODVDD_VLMLVL_Pos)            /* (SUPC_BODVDD) Voltage Level Monitor Level Mask */
#define SUPC_BODVDD_VLMLVL(value)             (SUPC_BODVDD_VLMLVL_Msk & (_UINT32_(value) << SUPC_BODVDD_VLMLVL_Pos)) /* Assignment of value for VLMLVL in the SUPC_BODVDD register */
#define   SUPC_BODVDD_VLMLVL_OFF_Val          _UINT32_(0x0)                                        /* (SUPC_BODVDD) VLM is disabled  */
#define   SUPC_BODVDD_VLMLVL_5ABOVE_Val       _UINT32_(0x1)                                        /* (SUPC_BODVDD) The VLM threshold is 5% above the BOD threshold  */
#define   SUPC_BODVDD_VLMLVL_15ABOVE_Val      _UINT32_(0x2)                                        /* (SUPC_BODVDD) The VLM threshold is 15% above the BOD threshold  */
#define   SUPC_BODVDD_VLMLVL_25ABOVE_Val      _UINT32_(0x3)                                        /* (SUPC_BODVDD) The VLM threshold is 25% above the BOD threshold  */
#define SUPC_BODVDD_VLMLVL_OFF                (SUPC_BODVDD_VLMLVL_OFF_Val << SUPC_BODVDD_VLMLVL_Pos) /* (SUPC_BODVDD) VLM is disabled Position */
#define SUPC_BODVDD_VLMLVL_5ABOVE             (SUPC_BODVDD_VLMLVL_5ABOVE_Val << SUPC_BODVDD_VLMLVL_Pos) /* (SUPC_BODVDD) The VLM threshold is 5% above the BOD threshold Position */
#define SUPC_BODVDD_VLMLVL_15ABOVE            (SUPC_BODVDD_VLMLVL_15ABOVE_Val << SUPC_BODVDD_VLMLVL_Pos) /* (SUPC_BODVDD) The VLM threshold is 15% above the BOD threshold Position */
#define SUPC_BODVDD_VLMLVL_25ABOVE            (SUPC_BODVDD_VLMLVL_25ABOVE_Val << SUPC_BODVDD_VLMLVL_Pos) /* (SUPC_BODVDD) The VLM threshold is 25% above the BOD threshold Position */
#define SUPC_BODVDD_VLMCFG_Pos                _UINT32_(26)                                         /* (SUPC_BODVDD) Voltage Level Monitor Interrupt Configuration Position */
#define SUPC_BODVDD_VLMCFG_Msk                (_UINT32_(0x3) << SUPC_BODVDD_VLMCFG_Pos)            /* (SUPC_BODVDD) Voltage Level Monitor Interrupt Configuration Mask */
#define SUPC_BODVDD_VLMCFG(value)             (SUPC_BODVDD_VLMCFG_Msk & (_UINT32_(value) << SUPC_BODVDD_VLMCFG_Pos)) /* Assignment of value for VLMCFG in the SUPC_BODVDD register */
#define   SUPC_BODVDD_VLMCFG_FALLING_Val      _UINT32_(0x0)                                        /* (SUPC_BODVDD) VDD falls below the VLM threshold  */
#define   SUPC_BODVDD_VLMCFG_RISING_Val       _UINT32_(0x1)                                        /* (SUPC_BODVDD) VDD rises above the VLM threshold  */
#define   SUPC_BODVDD_VLMCFG_BOTH_Val         _UINT32_(0x2)                                        /* (SUPC_BODVDD) VDD crosses the VLM threshold  */
#define SUPC_BODVDD_VLMCFG_FALLING            (SUPC_BODVDD_VLMCFG_FALLING_Val << SUPC_BODVDD_VLMCFG_Pos) /* (SUPC_BODVDD) VDD falls below the VLM threshold Position */
#define SUPC_BODVDD_VLMCFG_RISING             (SUPC_BODVDD_VLMCFG_RISING_Val << SUPC_BODVDD_VLMCFG_Pos) /* (SUPC_BODVDD) VDD rises above the VLM threshold Position */
#define SUPC_BODVDD_VLMCFG_BOTH               (SUPC_BODVDD_VLMCFG_BOTH_Val << SUPC_BODVDD_VLMCFG_Pos) /* (SUPC_BODVDD) VDD crosses the VLM threshold Position */
#define SUPC_BODVDD_WRTLOCK_Pos               _UINT32_(31)                                         /* (SUPC_BODVDD) Write Lock Position */
#define SUPC_BODVDD_WRTLOCK_Msk               (_UINT32_(0x1) << SUPC_BODVDD_WRTLOCK_Pos)           /* (SUPC_BODVDD) Write Lock Mask */
#define SUPC_BODVDD_WRTLOCK(value)            (SUPC_BODVDD_WRTLOCK_Msk & (_UINT32_(value) << SUPC_BODVDD_WRTLOCK_Pos)) /* Assignment of value for WRTLOCK in the SUPC_BODVDD register */
#define SUPC_BODVDD_Msk                       _UINT32_(0x8F031162)                                 /* (SUPC_BODVDD) Register Mask  */


/* -------- SUPC_VREG : (SUPC Offset: 0x20) (R/W 32) Voltage Regulator Control -------- */
#define SUPC_VREG_RESETVALUE                  _UINT32_(0x00)                                       /*  (SUPC_VREG) Voltage Regulator Control  Reset Value */

#define SUPC_VREG_RUNSTDBY_Pos                _UINT32_(6)                                          /* (SUPC_VREG) Run in Standby Position */
#define SUPC_VREG_RUNSTDBY_Msk                (_UINT32_(0x1) << SUPC_VREG_RUNSTDBY_Pos)            /* (SUPC_VREG) Run in Standby Mask */
#define SUPC_VREG_RUNSTDBY(value)             (SUPC_VREG_RUNSTDBY_Msk & (_UINT32_(value) << SUPC_VREG_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SUPC_VREG register */
#define SUPC_VREG_Msk                         _UINT32_(0x00000040)                                 /* (SUPC_VREG) Register Mask  */


/* -------- SUPC_MVIO : (SUPC Offset: 0x24) (R/W 32) MVIO Control -------- */
#define SUPC_MVIO_RESETVALUE                  _UINT32_(0x00)                                       /*  (SUPC_MVIO) MVIO Control  Reset Value */

#define SUPC_MVIO_MODE_Pos                    _UINT32_(0)                                          /* (SUPC_MVIO) Operation Mode Position */
#define SUPC_MVIO_MODE_Msk                    (_UINT32_(0x1) << SUPC_MVIO_MODE_Pos)                /* (SUPC_MVIO) Operation Mode Mask */
#define SUPC_MVIO_MODE(value)                 (SUPC_MVIO_MODE_Msk & (_UINT32_(value) << SUPC_MVIO_MODE_Pos)) /* Assignment of value for MODE in the SUPC_MVIO register */
#define   SUPC_MVIO_MODE_DUAL_Val             _UINT32_(0x0)                                        /* (SUPC_MVIO) MVIO operating in dual supply mode  */
#define   SUPC_MVIO_MODE_SINGLE_Val           _UINT32_(0x1)                                        /* (SUPC_MVIO) MVIO operating in Single supply mode  */
#define SUPC_MVIO_MODE_DUAL                   (SUPC_MVIO_MODE_DUAL_Val << SUPC_MVIO_MODE_Pos)      /* (SUPC_MVIO) MVIO operating in dual supply mode Position */
#define SUPC_MVIO_MODE_SINGLE                 (SUPC_MVIO_MODE_SINGLE_Val << SUPC_MVIO_MODE_Pos)    /* (SUPC_MVIO) MVIO operating in Single supply mode Position */
#define SUPC_MVIO_VDDIO2CFG_Pos               _UINT32_(2)                                          /* (SUPC_MVIO) VDDIO2 Configuration Position */
#define SUPC_MVIO_VDDIO2CFG_Msk               (_UINT32_(0x3) << SUPC_MVIO_VDDIO2CFG_Pos)           /* (SUPC_MVIO) VDDIO2 Configuration Mask */
#define SUPC_MVIO_VDDIO2CFG(value)            (SUPC_MVIO_VDDIO2CFG_Msk & (_UINT32_(value) << SUPC_MVIO_VDDIO2CFG_Pos)) /* Assignment of value for VDDIO2CFG in the SUPC_MVIO register */
#define   SUPC_MVIO_VDDIO2CFG_NORMAL_Val      _UINT32_(0x0)                                        /* (SUPC_MVIO) VDDIO2 with voltage protection enabled  */
#define   SUPC_MVIO_VDDIO2CFG_LOWPOWER_Val    _UINT32_(0x1)                                        /* (SUPC_MVIO) VDDIO2 with voltage protection disabled  */
#define   SUPC_MVIO_VDDIO2CFG_VDDIO2OFF_Val   _UINT32_(0x2)                                        /* (SUPC_MVIO) VDDIO2 domain is disabled. I/O pins are not available.  */
#define SUPC_MVIO_VDDIO2CFG_NORMAL            (SUPC_MVIO_VDDIO2CFG_NORMAL_Val << SUPC_MVIO_VDDIO2CFG_Pos) /* (SUPC_MVIO) VDDIO2 with voltage protection enabled Position */
#define SUPC_MVIO_VDDIO2CFG_LOWPOWER          (SUPC_MVIO_VDDIO2CFG_LOWPOWER_Val << SUPC_MVIO_VDDIO2CFG_Pos) /* (SUPC_MVIO) VDDIO2 with voltage protection disabled Position */
#define SUPC_MVIO_VDDIO2CFG_VDDIO2OFF         (SUPC_MVIO_VDDIO2CFG_VDDIO2OFF_Val << SUPC_MVIO_VDDIO2CFG_Pos) /* (SUPC_MVIO) VDDIO2 domain is disabled. I/O pins are not available. Position */
#define SUPC_MVIO_Msk                         _UINT32_(0x0000000D)                                 /* (SUPC_MVIO) Register Mask  */


/* -------- SUPC_EVCTRL : (SUPC Offset: 0x28) (R/W 32) Event Control -------- */
#define SUPC_EVCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (SUPC_EVCTRL) Event Control  Reset Value */

#define SUPC_EVCTRL_MVIOEO_Pos                _UINT32_(0)                                          /* (SUPC_EVCTRL) MVIO Event Output Enable Position */
#define SUPC_EVCTRL_MVIOEO_Msk                (_UINT32_(0x1) << SUPC_EVCTRL_MVIOEO_Pos)            /* (SUPC_EVCTRL) MVIO Event Output Enable Mask */
#define SUPC_EVCTRL_MVIOEO(value)             (SUPC_EVCTRL_MVIOEO_Msk & (_UINT32_(value) << SUPC_EVCTRL_MVIOEO_Pos)) /* Assignment of value for MVIOEO in the SUPC_EVCTRL register */
#define SUPC_EVCTRL_VLMEO_Pos                 _UINT32_(1)                                          /* (SUPC_EVCTRL) VLM Event Output Enable Position */
#define SUPC_EVCTRL_VLMEO_Msk                 (_UINT32_(0x1) << SUPC_EVCTRL_VLMEO_Pos)             /* (SUPC_EVCTRL) VLM Event Output Enable Mask */
#define SUPC_EVCTRL_VLMEO(value)              (SUPC_EVCTRL_VLMEO_Msk & (_UINT32_(value) << SUPC_EVCTRL_VLMEO_Pos)) /* Assignment of value for VLMEO in the SUPC_EVCTRL register */
#define SUPC_EVCTRL_Msk                       _UINT32_(0x00000003)                                 /* (SUPC_EVCTRL) Register Mask  */


/* -------- SUPC_WPCTRL : (SUPC Offset: 0x2C) (R/W 32) Write Protection Control -------- */
#define SUPC_WPCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (SUPC_WPCTRL) Write Protection Control  Reset Value */

#define SUPC_WPCTRL_WPEN_Pos                  _UINT32_(0)                                          /* (SUPC_WPCTRL) Write Protection Enable Position */
#define SUPC_WPCTRL_WPEN_Msk                  (_UINT32_(0x1) << SUPC_WPCTRL_WPEN_Pos)              /* (SUPC_WPCTRL) Write Protection Enable Mask */
#define SUPC_WPCTRL_WPEN(value)               (SUPC_WPCTRL_WPEN_Msk & (_UINT32_(value) << SUPC_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the SUPC_WPCTRL register */
#define SUPC_WPCTRL_WPLCK_Pos                 _UINT32_(1)                                          /* (SUPC_WPCTRL) Write Protection Lock Position */
#define SUPC_WPCTRL_WPLCK_Msk                 (_UINT32_(0x1) << SUPC_WPCTRL_WPLCK_Pos)             /* (SUPC_WPCTRL) Write Protection Lock Mask */
#define SUPC_WPCTRL_WPLCK(value)              (SUPC_WPCTRL_WPLCK_Msk & (_UINT32_(value) << SUPC_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the SUPC_WPCTRL register */
#define SUPC_WPCTRL_WPKEY_Pos                 _UINT32_(8)                                          /* (SUPC_WPCTRL) Write Protection Key Position */
#define SUPC_WPCTRL_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << SUPC_WPCTRL_WPKEY_Pos)        /* (SUPC_WPCTRL) Write Protection Key Mask */
#define SUPC_WPCTRL_WPKEY(value)              (SUPC_WPCTRL_WPKEY_Msk & (_UINT32_(value) << SUPC_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the SUPC_WPCTRL register */
#define   SUPC_WPCTRL_WPKEY_KEY_Val           _UINT32_(0x535550)                                   /* (SUPC_WPCTRL) Allows writes to the WPCTRL register  */
#define SUPC_WPCTRL_WPKEY_KEY                 (SUPC_WPCTRL_WPKEY_KEY_Val << SUPC_WPCTRL_WPKEY_Pos) /* (SUPC_WPCTRL) Allows writes to the WPCTRL register Position */
#define SUPC_WPCTRL_Msk                       _UINT32_(0xFFFFFF03)                                 /* (SUPC_WPCTRL) Register Mask  */


/* SUPC register offsets definitions */
#define SUPC_INTENCLR_REG_OFST         _UINT32_(0x04)      /* (SUPC_INTENCLR) Interrupt Enable Clear Offset */
#define SUPC_INTENSET_REG_OFST         _UINT32_(0x08)      /* (SUPC_INTENSET) Interrupt Enable Set Offset */
#define SUPC_INTFLAG_REG_OFST          _UINT32_(0x0C)      /* (SUPC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define SUPC_INTFLAGSET_REG_OFST       _UINT32_(0x10)      /* (SUPC_INTFLAGSET) Interrupt Flag Software Set Offset */
#define SUPC_STATUS_REG_OFST           _UINT32_(0x14)      /* (SUPC_STATUS) Status Offset */
#define SUPC_BODVDD_REG_OFST           _UINT32_(0x1C)      /* (SUPC_BODVDD) VDD Brown-Out Detector Control Offset */
#define SUPC_VREG_REG_OFST             _UINT32_(0x20)      /* (SUPC_VREG) Voltage Regulator Control Offset */
#define SUPC_MVIO_REG_OFST             _UINT32_(0x24)      /* (SUPC_MVIO) MVIO Control Offset */
#define SUPC_EVCTRL_REG_OFST           _UINT32_(0x28)      /* (SUPC_EVCTRL) Event Control Offset */
#define SUPC_WPCTRL_REG_OFST           _UINT32_(0x2C)      /* (SUPC_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SUPC register API structure */
typedef struct
{  /* Supply Controller */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SUPC_INTENCLR;      /* Offset: 0x04 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       SUPC_INTENSET;      /* Offset: 0x08 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       SUPC_INTFLAG;       /* Offset: 0x0C (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       SUPC_INTFLAGSET;    /* Offset: 0x10 (R/W  32) Interrupt Flag Software Set */
  __I   uint32_t                       SUPC_STATUS;        /* Offset: 0x14 (R/   32) Status */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       SUPC_BODVDD;        /* Offset: 0x1C (R/W  32) VDD Brown-Out Detector Control */
  __IO  uint32_t                       SUPC_VREG;          /* Offset: 0x20 (R/W  32) Voltage Regulator Control */
  __IO  uint32_t                       SUPC_MVIO;          /* Offset: 0x24 (R/W  32) MVIO Control */
  __IO  uint32_t                       SUPC_EVCTRL;        /* Offset: 0x28 (R/W  32) Event Control */
  __IO  uint32_t                       SUPC_WPCTRL;        /* Offset: 0x2C (R/W  32) Write Protection Control */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_SUPC_COMPONENT_H_ */
