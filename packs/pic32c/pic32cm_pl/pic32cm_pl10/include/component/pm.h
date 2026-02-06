/*
 * Component description for PM
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
#ifndef _PIC32CMPL10_PM_COMPONENT_H_
#define _PIC32CMPL10_PM_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                       SOFTWARE API DEFINITION FOR PM                       */
/* ************************************************************************** */

/* -------- PM_SLEEPCFG : (PM Offset: 0x04) (R/W 32) Sleep Configuration -------- */
#define PM_SLEEPCFG_RESETVALUE                _UINT32_(0x00)                                       /*  (PM_SLEEPCFG) Sleep Configuration  Reset Value */

#define PM_SLEEPCFG_SLEEPMODE_Pos             _UINT32_(0)                                          /* (PM_SLEEPCFG) Sleep Mode Position */
#define PM_SLEEPCFG_SLEEPMODE_Msk             (_UINT32_(0x7) << PM_SLEEPCFG_SLEEPMODE_Pos)         /* (PM_SLEEPCFG) Sleep Mode Mask */
#define PM_SLEEPCFG_SLEEPMODE(value)          (PM_SLEEPCFG_SLEEPMODE_Msk & (_UINT32_(value) << PM_SLEEPCFG_SLEEPMODE_Pos)) /* Assignment of value for SLEEPMODE in the PM_SLEEPCFG register */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE_Val      _UINT32_(0x2)                                        /* (PM_SLEEPCFG) Idle sleep mode enabled  */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val   _UINT32_(0x4)                                        /* (PM_SLEEPCFG) Standby sleep mode enabled  */
#define PM_SLEEPCFG_SLEEPMODE_IDLE            (PM_SLEEPCFG_SLEEPMODE_IDLE_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) Idle sleep mode enabled Position */
#define PM_SLEEPCFG_SLEEPMODE_STANDBY         (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) Standby sleep mode enabled Position */
#define PM_SLEEPCFG_Msk                       _UINT32_(0x00000007)                                 /* (PM_SLEEPCFG) Register Mask  */


/* -------- PM_WPCTRL : (PM Offset: 0x0C) (R/W 32) Write Protection Control -------- */
#define PM_WPCTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (PM_WPCTRL) Write Protection Control  Reset Value */

#define PM_WPCTRL_WPEN_Pos                    _UINT32_(0)                                          /* (PM_WPCTRL) Write Protection Enable Position */
#define PM_WPCTRL_WPEN_Msk                    (_UINT32_(0x1) << PM_WPCTRL_WPEN_Pos)                /* (PM_WPCTRL) Write Protection Enable Mask */
#define PM_WPCTRL_WPEN(value)                 (PM_WPCTRL_WPEN_Msk & (_UINT32_(value) << PM_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the PM_WPCTRL register */
#define PM_WPCTRL_WPLCK_Pos                   _UINT32_(1)                                          /* (PM_WPCTRL) Write Protection Lock Position */
#define PM_WPCTRL_WPLCK_Msk                   (_UINT32_(0x1) << PM_WPCTRL_WPLCK_Pos)               /* (PM_WPCTRL) Write Protection Lock Mask */
#define PM_WPCTRL_WPLCK(value)                (PM_WPCTRL_WPLCK_Msk & (_UINT32_(value) << PM_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the PM_WPCTRL register */
#define PM_WPCTRL_WPKEY_Pos                   _UINT32_(8)                                          /* (PM_WPCTRL) Write Protection Key Position */
#define PM_WPCTRL_WPKEY_Msk                   (_UINT32_(0xFFFFFF) << PM_WPCTRL_WPKEY_Pos)          /* (PM_WPCTRL) Write Protection Key Mask */
#define PM_WPCTRL_WPKEY(value)                (PM_WPCTRL_WPKEY_Msk & (_UINT32_(value) << PM_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the PM_WPCTRL register */
#define   PM_WPCTRL_WPKEY_KEY_Val             _UINT32_(0x505752)                                   /* (PM_WPCTRL) Allow writes to the WPCTRL register  */
#define PM_WPCTRL_WPKEY_KEY                   (PM_WPCTRL_WPKEY_KEY_Val << PM_WPCTRL_WPKEY_Pos)     /* (PM_WPCTRL) Allow writes to the WPCTRL register Position */
#define PM_WPCTRL_Msk                         _UINT32_(0xFFFFFF03)                                 /* (PM_WPCTRL) Register Mask  */


/* PM register offsets definitions */
#define PM_SLEEPCFG_REG_OFST           _UINT32_(0x04)      /* (PM_SLEEPCFG) Sleep Configuration Offset */
#define PM_WPCTRL_REG_OFST             _UINT32_(0x0C)      /* (PM_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PM register API structure */
typedef struct
{  /* Power Manager */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       PM_SLEEPCFG;        /* Offset: 0x04 (R/W  32) Sleep Configuration */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       PM_WPCTRL;          /* Offset: 0x0C (R/W  32) Write Protection Control */
} pm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_PM_COMPONENT_H_ */
