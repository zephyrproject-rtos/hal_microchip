/*
 * Component description for RSTC
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
#ifndef _PIC32CMPL10_RSTC_COMPONENT_H_
#define _PIC32CMPL10_RSTC_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR RSTC                      */
/* ************************************************************************** */

/* -------- RSTC_CTRLA : (RSTC Offset: 0x00) (R/W 32) Control A -------- */
#define RSTC_CTRLA_RESETVALUE                 _UINT32_(0x00)                                       /*  (RSTC_CTRLA) Control A  Reset Value */

#define RSTC_CTRLA_RSTPINDIS_Pos              _UINT32_(8)                                          /* (RSTC_CTRLA) Reset Pin Disable Position */
#define RSTC_CTRLA_RSTPINDIS_Msk              (_UINT32_(0x1) << RSTC_CTRLA_RSTPINDIS_Pos)          /* (RSTC_CTRLA) Reset Pin Disable Mask */
#define RSTC_CTRLA_RSTPINDIS(value)           (RSTC_CTRLA_RSTPINDIS_Msk & (_UINT32_(value) << RSTC_CTRLA_RSTPINDIS_Pos)) /* Assignment of value for RSTPINDIS in the RSTC_CTRLA register */
#define RSTC_CTRLA_Msk                        _UINT32_(0x00000100)                                 /* (RSTC_CTRLA) Register Mask  */


/* -------- RSTC_RCAUSE : (RSTC Offset: 0x04) ( R/ 32) Reset Cause -------- */
#define RSTC_RCAUSE_POR_Pos                   _UINT32_(0)                                          /* (RSTC_RCAUSE) Power-On Reset Flag Position */
#define RSTC_RCAUSE_POR_Msk                   (_UINT32_(0x1) << RSTC_RCAUSE_POR_Pos)               /* (RSTC_RCAUSE) Power-On Reset Flag Mask */
#define RSTC_RCAUSE_POR(value)                (RSTC_RCAUSE_POR_Msk & (_UINT32_(value) << RSTC_RCAUSE_POR_Pos)) /* Assignment of value for POR in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BORVDD_Pos                _UINT32_(1)                                          /* (RSTC_RCAUSE) VDD Brownout Reset Flag Position */
#define RSTC_RCAUSE_BORVDD_Msk                (_UINT32_(0x1) << RSTC_RCAUSE_BORVDD_Pos)            /* (RSTC_RCAUSE) VDD Brownout Reset Flag Mask */
#define RSTC_RCAUSE_BORVDD(value)             (RSTC_RCAUSE_BORVDD_Msk & (_UINT32_(value) << RSTC_RCAUSE_BORVDD_Pos)) /* Assignment of value for BORVDD in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_EXT_Pos                   _UINT32_(3)                                          /* (RSTC_RCAUSE) External Reset Flag Position */
#define RSTC_RCAUSE_EXT_Msk                   (_UINT32_(0x1) << RSTC_RCAUSE_EXT_Pos)               /* (RSTC_RCAUSE) External Reset Flag Mask */
#define RSTC_RCAUSE_EXT(value)                (RSTC_RCAUSE_EXT_Msk & (_UINT32_(value) << RSTC_RCAUSE_EXT_Pos)) /* Assignment of value for EXT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_WDT_Pos                   _UINT32_(4)                                          /* (RSTC_RCAUSE) Watchdog Reset Flag Position */
#define RSTC_RCAUSE_WDT_Msk                   (_UINT32_(0x1) << RSTC_RCAUSE_WDT_Pos)               /* (RSTC_RCAUSE) Watchdog Reset Flag Mask */
#define RSTC_RCAUSE_WDT(value)                (RSTC_RCAUSE_WDT_Msk & (_UINT32_(value) << RSTC_RCAUSE_WDT_Pos)) /* Assignment of value for WDT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_SYST_Pos                  _UINT32_(5)                                          /* (RSTC_RCAUSE) System Reset Flag Position */
#define RSTC_RCAUSE_SYST_Msk                  (_UINT32_(0x1) << RSTC_RCAUSE_SYST_Pos)              /* (RSTC_RCAUSE) System Reset Flag Mask */
#define RSTC_RCAUSE_SYST(value)               (RSTC_RCAUSE_SYST_Msk & (_UINT32_(value) << RSTC_RCAUSE_SYST_Pos)) /* Assignment of value for SYST in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_LOCKUP_Pos                _UINT32_(6)                                          /* (RSTC_RCAUSE) Software Reset Flag Position */
#define RSTC_RCAUSE_LOCKUP_Msk                (_UINT32_(0x1) << RSTC_RCAUSE_LOCKUP_Pos)            /* (RSTC_RCAUSE) Software Reset Flag Mask */
#define RSTC_RCAUSE_LOCKUP(value)             (RSTC_RCAUSE_LOCKUP_Msk & (_UINT32_(value) << RSTC_RCAUSE_LOCKUP_Pos)) /* Assignment of value for LOCKUP in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_Msk                       _UINT32_(0x0000007B)                                 /* (RSTC_RCAUSE) Register Mask  */


/* -------- RSTC_DBGCTRL : (RSTC Offset: 0x08) (R/W 32) Debug Control -------- */
#define RSTC_DBGCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (RSTC_DBGCTRL) Debug Control  Reset Value */

#define RSTC_DBGCTRL_LCKUPDIS_Pos             _UINT32_(0)                                          /* (RSTC_DBGCTRL) Lockup Disable Position */
#define RSTC_DBGCTRL_LCKUPDIS_Msk             (_UINT32_(0x1) << RSTC_DBGCTRL_LCKUPDIS_Pos)         /* (RSTC_DBGCTRL) Lockup Disable Mask */
#define RSTC_DBGCTRL_LCKUPDIS(value)          (RSTC_DBGCTRL_LCKUPDIS_Msk & (_UINT32_(value) << RSTC_DBGCTRL_LCKUPDIS_Pos)) /* Assignment of value for LCKUPDIS in the RSTC_DBGCTRL register */
#define RSTC_DBGCTRL_Msk                      _UINT32_(0x00000001)                                 /* (RSTC_DBGCTRL) Register Mask  */


/* -------- RSTC_WPCTRL : (RSTC Offset: 0x0C) (R/W 32) Write Protection Control -------- */
#define RSTC_WPCTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (RSTC_WPCTRL) Write Protection Control  Reset Value */

#define RSTC_WPCTRL_WPEN_Pos                  _UINT32_(0)                                          /* (RSTC_WPCTRL) Write Protection Enable Position */
#define RSTC_WPCTRL_WPEN_Msk                  (_UINT32_(0x1) << RSTC_WPCTRL_WPEN_Pos)              /* (RSTC_WPCTRL) Write Protection Enable Mask */
#define RSTC_WPCTRL_WPEN(value)               (RSTC_WPCTRL_WPEN_Msk & (_UINT32_(value) << RSTC_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the RSTC_WPCTRL register */
#define RSTC_WPCTRL_WPLCK_Pos                 _UINT32_(1)                                          /* (RSTC_WPCTRL) Write Protection Lock Position */
#define RSTC_WPCTRL_WPLCK_Msk                 (_UINT32_(0x1) << RSTC_WPCTRL_WPLCK_Pos)             /* (RSTC_WPCTRL) Write Protection Lock Mask */
#define RSTC_WPCTRL_WPLCK(value)              (RSTC_WPCTRL_WPLCK_Msk & (_UINT32_(value) << RSTC_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the RSTC_WPCTRL register */
#define RSTC_WPCTRL_WPKEY_Pos                 _UINT32_(8)                                          /* (RSTC_WPCTRL) Write Protection Key Position */
#define RSTC_WPCTRL_WPKEY_Msk                 (_UINT32_(0xFFFFFF) << RSTC_WPCTRL_WPKEY_Pos)        /* (RSTC_WPCTRL) Write Protection Key Mask */
#define RSTC_WPCTRL_WPKEY(value)              (RSTC_WPCTRL_WPKEY_Msk & (_UINT32_(value) << RSTC_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the RSTC_WPCTRL register */
#define   RSTC_WPCTRL_WPKEY_KEY_Val           _UINT32_(0x525354)                                   /* (RSTC_WPCTRL) Allow writes to the WPCTRL register  */
#define RSTC_WPCTRL_WPKEY_KEY                 (RSTC_WPCTRL_WPKEY_KEY_Val << RSTC_WPCTRL_WPKEY_Pos) /* (RSTC_WPCTRL) Allow writes to the WPCTRL register Position */
#define RSTC_WPCTRL_Msk                       _UINT32_(0xFFFFFF03)                                 /* (RSTC_WPCTRL) Register Mask  */


/* RSTC register offsets definitions */
#define RSTC_CTRLA_REG_OFST            _UINT32_(0x00)      /* (RSTC_CTRLA) Control A Offset */
#define RSTC_RCAUSE_REG_OFST           _UINT32_(0x04)      /* (RSTC_RCAUSE) Reset Cause Offset */
#define RSTC_DBGCTRL_REG_OFST          _UINT32_(0x08)      /* (RSTC_DBGCTRL) Debug Control Offset */
#define RSTC_WPCTRL_REG_OFST           _UINT32_(0x0C)      /* (RSTC_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* RSTC register API structure */
typedef struct
{  /* Reset Controller */
  __IO  uint32_t                       RSTC_CTRLA;         /* Offset: 0x00 (R/W  32) Control A */
  __I   uint32_t                       RSTC_RCAUSE;        /* Offset: 0x04 (R/   32) Reset Cause */
  __IO  uint32_t                       RSTC_DBGCTRL;       /* Offset: 0x08 (R/W  32) Debug Control */
  __IO  uint32_t                       RSTC_WPCTRL;        /* Offset: 0x0C (R/W  32) Write Protection Control */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_RSTC_COMPONENT_H_ */
