/*
 * Component description for OSCCTRL
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
#ifndef _PIC32CMPL10_OSCCTRL_COMPONENT_H_
#define _PIC32CMPL10_OSCCTRL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR OSCCTRL                     */
/* ************************************************************************** */

/* -------- OSCCTRL_INTENCLR : (OSCCTRL Offset: 0x04) (R/W 32) Interrupt Enable Clear -------- */
#define OSCCTRL_INTENCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (OSCCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define OSCCTRL_INTENCLR_OSCHFRDY_Pos         _UINT32_(4)                                          /* (OSCCTRL_INTENCLR) OSCHF Ready Interrupt Enable Position */
#define OSCCTRL_INTENCLR_OSCHFRDY_Msk         (_UINT32_(0x1) << OSCCTRL_INTENCLR_OSCHFRDY_Pos)     /* (OSCCTRL_INTENCLR) OSCHF Ready Interrupt Enable Mask */
#define OSCCTRL_INTENCLR_OSCHFRDY(value)      (OSCCTRL_INTENCLR_OSCHFRDY_Msk & (_UINT32_(value) << OSCCTRL_INTENCLR_OSCHFRDY_Pos)) /* Assignment of value for OSCHFRDY in the OSCCTRL_INTENCLR register */
#define OSCCTRL_INTENCLR_Msk                  _UINT32_(0x00000010)                                 /* (OSCCTRL_INTENCLR) Register Mask  */


/* -------- OSCCTRL_INTENSET : (OSCCTRL Offset: 0x08) (R/W 32) Interrupt Enable Set -------- */
#define OSCCTRL_INTENSET_RESETVALUE           _UINT32_(0x00)                                       /*  (OSCCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define OSCCTRL_INTENSET_OSCHFRDY_Pos         _UINT32_(4)                                          /* (OSCCTRL_INTENSET) OSCHF Ready Interrupt Enable Position */
#define OSCCTRL_INTENSET_OSCHFRDY_Msk         (_UINT32_(0x1) << OSCCTRL_INTENSET_OSCHFRDY_Pos)     /* (OSCCTRL_INTENSET) OSCHF Ready Interrupt Enable Mask */
#define OSCCTRL_INTENSET_OSCHFRDY(value)      (OSCCTRL_INTENSET_OSCHFRDY_Msk & (_UINT32_(value) << OSCCTRL_INTENSET_OSCHFRDY_Pos)) /* Assignment of value for OSCHFRDY in the OSCCTRL_INTENSET register */
#define OSCCTRL_INTENSET_Msk                  _UINT32_(0x00000010)                                 /* (OSCCTRL_INTENSET) Register Mask  */


/* -------- OSCCTRL_INTFLAG : (OSCCTRL Offset: 0x0C) (R/W 32) Interrupt Flag Status and Clear -------- */
#define OSCCTRL_INTFLAG_RESETVALUE            _UINT32_(0x00)                                       /*  (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define OSCCTRL_INTFLAG_OSCHFRDY_Pos          _UINT32_(4)                                          /* (OSCCTRL_INTFLAG) OSCHF is Ready Position */
#define OSCCTRL_INTFLAG_OSCHFRDY_Msk          (_UINT32_(0x1) << OSCCTRL_INTFLAG_OSCHFRDY_Pos)      /* (OSCCTRL_INTFLAG) OSCHF is Ready Mask */
#define OSCCTRL_INTFLAG_OSCHFRDY(value)       (OSCCTRL_INTFLAG_OSCHFRDY_Msk & (_UINT32_(value) << OSCCTRL_INTFLAG_OSCHFRDY_Pos)) /* Assignment of value for OSCHFRDY in the OSCCTRL_INTFLAG register */
#define OSCCTRL_INTFLAG_Msk                   _UINT32_(0x00000010)                                 /* (OSCCTRL_INTFLAG) Register Mask  */


/* -------- OSCCTRL_INTFLAGSET : (OSCCTRL Offset: 0x10) (R/W 32) Interrupt Flag Software Set -------- */
#define OSCCTRL_INTFLAGSET_RESETVALUE         _UINT32_(0x00)                                       /*  (OSCCTRL_INTFLAGSET) Interrupt Flag Software Set  Reset Value */

#define OSCCTRL_INTFLAGSET_OSCHFRDY_Pos       _UINT32_(4)                                          /* (OSCCTRL_INTFLAGSET) OSCHF is Ready Position */
#define OSCCTRL_INTFLAGSET_OSCHFRDY_Msk       (_UINT32_(0x1) << OSCCTRL_INTFLAGSET_OSCHFRDY_Pos)   /* (OSCCTRL_INTFLAGSET) OSCHF is Ready Mask */
#define OSCCTRL_INTFLAGSET_OSCHFRDY(value)    (OSCCTRL_INTFLAGSET_OSCHFRDY_Msk & (_UINT32_(value) << OSCCTRL_INTFLAGSET_OSCHFRDY_Pos)) /* Assignment of value for OSCHFRDY in the OSCCTRL_INTFLAGSET register */
#define OSCCTRL_INTFLAGSET_Msk                _UINT32_(0x00000010)                                 /* (OSCCTRL_INTFLAGSET) Register Mask  */


/* -------- OSCCTRL_STATUS : (OSCCTRL Offset: 0x14) ( R/ 32) Status -------- */
#define OSCCTRL_STATUS_RESETVALUE             _UINT32_(0x00)                                       /*  (OSCCTRL_STATUS) Status  Reset Value */

#define OSCCTRL_STATUS_OSCHFRDY_Pos           _UINT32_(4)                                          /* (OSCCTRL_STATUS) OSCHF is Ready Position */
#define OSCCTRL_STATUS_OSCHFRDY_Msk           (_UINT32_(0x1) << OSCCTRL_STATUS_OSCHFRDY_Pos)       /* (OSCCTRL_STATUS) OSCHF is Ready Mask */
#define OSCCTRL_STATUS_OSCHFRDY(value)        (OSCCTRL_STATUS_OSCHFRDY_Msk & (_UINT32_(value) << OSCCTRL_STATUS_OSCHFRDY_Pos)) /* Assignment of value for OSCHFRDY in the OSCCTRL_STATUS register */
#define OSCCTRL_STATUS_Msk                    _UINT32_(0x00000010)                                 /* (OSCCTRL_STATUS) Register Mask  */


/* -------- OSCCTRL_OSCHFCTRL : (OSCCTRL Offset: 0x24) (R/W 32) OSCHF Control -------- */
#define OSCCTRL_OSCHFCTRL_RESETVALUE          _UINT32_(0xC80)                                      /*  (OSCCTRL_OSCHFCTRL) OSCHF Control  Reset Value */

#define OSCCTRL_OSCHFCTRL_ONDEMAND_Pos        _UINT32_(7)                                          /* (OSCCTRL_OSCHFCTRL) On-Demand Operation Position */
#define OSCCTRL_OSCHFCTRL_ONDEMAND_Msk        (_UINT32_(0x1) << OSCCTRL_OSCHFCTRL_ONDEMAND_Pos)    /* (OSCCTRL_OSCHFCTRL) On-Demand Operation Mask */
#define OSCCTRL_OSCHFCTRL_ONDEMAND(value)     (OSCCTRL_OSCHFCTRL_ONDEMAND_Msk & (_UINT32_(value) << OSCCTRL_OSCHFCTRL_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the OSCCTRL_OSCHFCTRL register */
#define OSCCTRL_OSCHFCTRL_AUTOTUNE_Pos        _UINT32_(8)                                          /* (OSCCTRL_OSCHFCTRL) Automatic oscillator tune Position */
#define OSCCTRL_OSCHFCTRL_AUTOTUNE_Msk        (_UINT32_(0x1) << OSCCTRL_OSCHFCTRL_AUTOTUNE_Pos)    /* (OSCCTRL_OSCHFCTRL) Automatic oscillator tune Mask */
#define OSCCTRL_OSCHFCTRL_AUTOTUNE(value)     (OSCCTRL_OSCHFCTRL_AUTOTUNE_Msk & (_UINT32_(value) << OSCCTRL_OSCHFCTRL_AUTOTUNE_Pos)) /* Assignment of value for AUTOTUNE in the OSCCTRL_OSCHFCTRL register */
#define   OSCCTRL_OSCHFCTRL_AUTOTUNE_OFF_Val  _UINT32_(0x0)                                        /* (OSCCTRL_OSCHFCTRL) Automatic oscillator frequency tune disabled  */
#define   OSCCTRL_OSCHFCTRL_AUTOTUNE_ON_Val   _UINT32_(0x1)                                        /* (OSCCTRL_OSCHFCTRL) Automatic oscillator frequency tune enabled  */
#define OSCCTRL_OSCHFCTRL_AUTOTUNE_OFF        (OSCCTRL_OSCHFCTRL_AUTOTUNE_OFF_Val << OSCCTRL_OSCHFCTRL_AUTOTUNE_Pos) /* (OSCCTRL_OSCHFCTRL) Automatic oscillator frequency tune disabled Position */
#define OSCCTRL_OSCHFCTRL_AUTOTUNE_ON         (OSCCTRL_OSCHFCTRL_AUTOTUNE_ON_Val << OSCCTRL_OSCHFCTRL_AUTOTUNE_Pos) /* (OSCCTRL_OSCHFCTRL) Automatic oscillator frequency tune enabled Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_Pos          _UINT32_(10)                                         /* (OSCCTRL_OSCHFCTRL) Frequency Select Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_Msk          (_UINT32_(0xF) << OSCCTRL_OSCHFCTRL_FRQSEL_Pos)      /* (OSCCTRL_OSCHFCTRL) Frequency Select Mask */
#define OSCCTRL_OSCHFCTRL_FRQSEL(value)       (OSCCTRL_OSCHFCTRL_FRQSEL_Msk & (_UINT32_(value) << OSCCTRL_OSCHFCTRL_FRQSEL_Pos)) /* Assignment of value for FRQSEL in the OSCCTRL_OSCHFCTRL register */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_1M_Val     _UINT32_(0x0)                                        /* (OSCCTRL_OSCHFCTRL) 1 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_2M_Val     _UINT32_(0x1)                                        /* (OSCCTRL_OSCHFCTRL) 2 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_3M_Val     _UINT32_(0x2)                                        /* (OSCCTRL_OSCHFCTRL) 3 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_4M_Val     _UINT32_(0x3)                                        /* (OSCCTRL_OSCHFCTRL) 4 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_8M_Val     _UINT32_(0x5)                                        /* (OSCCTRL_OSCHFCTRL) 8 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_12M_Val    _UINT32_(0x6)                                        /* (OSCCTRL_OSCHFCTRL) 12 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_16M_Val    _UINT32_(0x7)                                        /* (OSCCTRL_OSCHFCTRL) 16 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_20M_Val    _UINT32_(0x8)                                        /* (OSCCTRL_OSCHFCTRL) 20 MHz output clock  */
#define   OSCCTRL_OSCHFCTRL_FRQSEL_24M_Val    _UINT32_(0x9)                                        /* (OSCCTRL_OSCHFCTRL) 24 MHz output clock  */
#define OSCCTRL_OSCHFCTRL_FRQSEL_1M           (OSCCTRL_OSCHFCTRL_FRQSEL_1M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 1 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_2M           (OSCCTRL_OSCHFCTRL_FRQSEL_2M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 2 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_3M           (OSCCTRL_OSCHFCTRL_FRQSEL_3M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 3 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_4M           (OSCCTRL_OSCHFCTRL_FRQSEL_4M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 4 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_8M           (OSCCTRL_OSCHFCTRL_FRQSEL_8M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 8 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_12M          (OSCCTRL_OSCHFCTRL_FRQSEL_12M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 12 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_16M          (OSCCTRL_OSCHFCTRL_FRQSEL_16M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 16 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_20M          (OSCCTRL_OSCHFCTRL_FRQSEL_20M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 20 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_FRQSEL_24M          (OSCCTRL_OSCHFCTRL_FRQSEL_24M_Val << OSCCTRL_OSCHFCTRL_FRQSEL_Pos) /* (OSCCTRL_OSCHFCTRL) 24 MHz output clock Position */
#define OSCCTRL_OSCHFCTRL_Msk                 _UINT32_(0x00003D80)                                 /* (OSCCTRL_OSCHFCTRL) Register Mask  */


/* -------- OSCCTRL_OSCHFTUNE : (OSCCTRL Offset: 0x28) (R/W 32) OSCHF Oscillator Frequency Tune -------- */
#define OSCCTRL_OSCHFTUNE_RESETVALUE          _UINT32_(0x00)                                       /*  (OSCCTRL_OSCHFTUNE) OSCHF Oscillator Frequency Tune  Reset Value */

#define OSCCTRL_OSCHFTUNE_TUNE_Pos            _UINT32_(0)                                          /* (OSCCTRL_OSCHFTUNE) Oscillator Tune Position */
#define OSCCTRL_OSCHFTUNE_TUNE_Msk            (_UINT32_(0xFF) << OSCCTRL_OSCHFTUNE_TUNE_Pos)       /* (OSCCTRL_OSCHFTUNE) Oscillator Tune Mask */
#define OSCCTRL_OSCHFTUNE_TUNE(value)         (OSCCTRL_OSCHFTUNE_TUNE_Msk & (_UINT32_(value) << OSCCTRL_OSCHFTUNE_TUNE_Pos)) /* Assignment of value for TUNE in the OSCCTRL_OSCHFTUNE register */
#define OSCCTRL_OSCHFTUNE_Msk                 _UINT32_(0x000000FF)                                 /* (OSCCTRL_OSCHFTUNE) Register Mask  */


/* -------- OSCCTRL_WPCTRL : (OSCCTRL Offset: 0x2C) (R/W 32) Write Protection Control -------- */
#define OSCCTRL_WPCTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (OSCCTRL_WPCTRL) Write Protection Control  Reset Value */

#define OSCCTRL_WPCTRL_WPEN_Pos               _UINT32_(0)                                          /* (OSCCTRL_WPCTRL) Write Protection Enable Position */
#define OSCCTRL_WPCTRL_WPEN_Msk               (_UINT32_(0x1) << OSCCTRL_WPCTRL_WPEN_Pos)           /* (OSCCTRL_WPCTRL) Write Protection Enable Mask */
#define OSCCTRL_WPCTRL_WPEN(value)            (OSCCTRL_WPCTRL_WPEN_Msk & (_UINT32_(value) << OSCCTRL_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the OSCCTRL_WPCTRL register */
#define OSCCTRL_WPCTRL_WPLCK_Pos              _UINT32_(1)                                          /* (OSCCTRL_WPCTRL) Write Protection Lock Position */
#define OSCCTRL_WPCTRL_WPLCK_Msk              (_UINT32_(0x1) << OSCCTRL_WPCTRL_WPLCK_Pos)          /* (OSCCTRL_WPCTRL) Write Protection Lock Mask */
#define OSCCTRL_WPCTRL_WPLCK(value)           (OSCCTRL_WPCTRL_WPLCK_Msk & (_UINT32_(value) << OSCCTRL_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the OSCCTRL_WPCTRL register */
#define OSCCTRL_WPCTRL_WPKEY_Pos              _UINT32_(8)                                          /* (OSCCTRL_WPCTRL) Write Protection Key Position */
#define OSCCTRL_WPCTRL_WPKEY_Msk              (_UINT32_(0xFFFFFF) << OSCCTRL_WPCTRL_WPKEY_Pos)     /* (OSCCTRL_WPCTRL) Write Protection Key Mask */
#define OSCCTRL_WPCTRL_WPKEY(value)           (OSCCTRL_WPCTRL_WPKEY_Msk & (_UINT32_(value) << OSCCTRL_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the OSCCTRL_WPCTRL register */
#define   OSCCTRL_WPCTRL_WPKEY_KEY_Val        _UINT32_(0x4F5343)                                   /* (OSCCTRL_WPCTRL) Allow writes to the WPCTRL register  */
#define OSCCTRL_WPCTRL_WPKEY_KEY              (OSCCTRL_WPCTRL_WPKEY_KEY_Val << OSCCTRL_WPCTRL_WPKEY_Pos) /* (OSCCTRL_WPCTRL) Allow writes to the WPCTRL register Position */
#define OSCCTRL_WPCTRL_Msk                    _UINT32_(0xFFFFFF03)                                 /* (OSCCTRL_WPCTRL) Register Mask  */


/* OSCCTRL register offsets definitions */
#define OSCCTRL_INTENCLR_REG_OFST      _UINT32_(0x04)      /* (OSCCTRL_INTENCLR) Interrupt Enable Clear Offset */
#define OSCCTRL_INTENSET_REG_OFST      _UINT32_(0x08)      /* (OSCCTRL_INTENSET) Interrupt Enable Set Offset */
#define OSCCTRL_INTFLAG_REG_OFST       _UINT32_(0x0C)      /* (OSCCTRL_INTFLAG) Interrupt Flag Status and Clear Offset */
#define OSCCTRL_INTFLAGSET_REG_OFST    _UINT32_(0x10)      /* (OSCCTRL_INTFLAGSET) Interrupt Flag Software Set Offset */
#define OSCCTRL_STATUS_REG_OFST        _UINT32_(0x14)      /* (OSCCTRL_STATUS) Status Offset */
#define OSCCTRL_OSCHFCTRL_REG_OFST     _UINT32_(0x24)      /* (OSCCTRL_OSCHFCTRL) OSCHF Control Offset */
#define OSCCTRL_OSCHFTUNE_REG_OFST     _UINT32_(0x28)      /* (OSCCTRL_OSCHFTUNE) OSCHF Oscillator Frequency Tune Offset */
#define OSCCTRL_WPCTRL_REG_OFST        _UINT32_(0x2C)      /* (OSCCTRL_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* OSCCTRL register API structure */
typedef struct
{  /* Oscillators Controller */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       OSCCTRL_INTENCLR;   /* Offset: 0x04 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       OSCCTRL_INTENSET;   /* Offset: 0x08 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       OSCCTRL_INTFLAG;    /* Offset: 0x0C (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       OSCCTRL_INTFLAGSET; /* Offset: 0x10 (R/W  32) Interrupt Flag Software Set */
  __I   uint32_t                       OSCCTRL_STATUS;     /* Offset: 0x14 (R/   32) Status */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       OSCCTRL_OSCHFCTRL;  /* Offset: 0x24 (R/W  32) OSCHF Control */
  __IO  uint32_t                       OSCCTRL_OSCHFTUNE;  /* Offset: 0x28 (R/W  32) OSCHF Oscillator Frequency Tune */
  __IO  uint32_t                       OSCCTRL_WPCTRL;     /* Offset: 0x2C (R/W  32) Write Protection Control */
} oscctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_OSCCTRL_COMPONENT_H_ */
