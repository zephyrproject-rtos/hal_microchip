/*
 * Component description for PM
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

/*  file generated from device description file (ATDF) version 2025-02-18T10:55:45Z  */
#ifndef _PIC32CMJH01_PM_COMPONENT_H_
#define _PIC32CMJH01_PM_COMPONENT_H_

/* ************************************************************************** */
/*                       SOFTWARE API DEFINITION FOR PM                       */
/* ************************************************************************** */

/* -------- PM_SLEEPCFG : (PM Offset: 0x01) (R/W 8) Sleep Configuration -------- */
#define PM_SLEEPCFG_RESETVALUE                _UINT8_(0x00)                                        /*  (PM_SLEEPCFG) Sleep Configuration  Reset Value */

#define PM_SLEEPCFG_SLEEPMODE_Pos             _UINT8_(0)                                           /* (PM_SLEEPCFG) Sleep Mode Position */
#define PM_SLEEPCFG_SLEEPMODE_Msk             (_UINT8_(0x7) << PM_SLEEPCFG_SLEEPMODE_Pos)          /* (PM_SLEEPCFG) Sleep Mode Mask */
#define PM_SLEEPCFG_SLEEPMODE(value)          (PM_SLEEPCFG_SLEEPMODE_Msk & (_UINT8_(value) << PM_SLEEPCFG_SLEEPMODE_Pos)) /* Assignment of value for SLEEPMODE in the PM_SLEEPCFG register */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE0_Val     _UINT8_(0x0)                                         /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are provided to CAN and to IPs requesting them  */
#define   PM_SLEEPCFG_SLEEPMODE_IDLE2_Val     _UINT8_(0x2)                                         /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are provided to IPs requesting them (CAN excluded)  */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val   _UINT8_(0x4)                                         /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are stopped except if requested  */
#define PM_SLEEPCFG_SLEEPMODE_IDLE0           (PM_SLEEPCFG_SLEEPMODE_IDLE0_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are provided to CAN and to IPs requesting them Position */
#define PM_SLEEPCFG_SLEEPMODE_IDLE2           (PM_SLEEPCFG_SLEEPMODE_IDLE2_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are provided to IPs requesting them (CAN excluded) Position */
#define PM_SLEEPCFG_SLEEPMODE_STANDBY         (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos) /* (PM_SLEEPCFG) CPU clock is OFF. AHB/APB clocks are stopped except if requested Position */
#define PM_SLEEPCFG_Msk                       _UINT8_(0x07)                                        /* (PM_SLEEPCFG) Register Mask  */


/* -------- PM_STDBYCFG : (PM Offset: 0x08) (R/W 16) Standby Configuration -------- */
#define PM_STDBYCFG_RESETVALUE                _UINT16_(0x400)                                      /*  (PM_STDBYCFG) Standby Configuration  Reset Value */

#define PM_STDBYCFG_VREGSMOD_Pos              _UINT16_(6)                                          /* (PM_STDBYCFG) Voltage Regulator Standby mode Position */
#define PM_STDBYCFG_VREGSMOD_Msk              (_UINT16_(0x3) << PM_STDBYCFG_VREGSMOD_Pos)          /* (PM_STDBYCFG) Voltage Regulator Standby mode Mask */
#define PM_STDBYCFG_VREGSMOD(value)           (PM_STDBYCFG_VREGSMOD_Msk & (_UINT16_(value) << PM_STDBYCFG_VREGSMOD_Pos)) /* Assignment of value for VREGSMOD in the PM_STDBYCFG register */
#define   PM_STDBYCFG_VREGSMOD_AUTO_Val       _UINT16_(0x0)                                        /* (PM_STDBYCFG) Automatic mode  */
#define   PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val _UINT16_(0x1)                                        /* (PM_STDBYCFG) Performance oriented  */
#define   PM_STDBYCFG_VREGSMOD_LP_Val         _UINT16_(0x2)                                        /* (PM_STDBYCFG) Low Power oriented  */
#define PM_STDBYCFG_VREGSMOD_AUTO             (PM_STDBYCFG_VREGSMOD_AUTO_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Automatic mode Position */
#define PM_STDBYCFG_VREGSMOD_PERFORMANCE      (PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Performance oriented Position */
#define PM_STDBYCFG_VREGSMOD_LP               (PM_STDBYCFG_VREGSMOD_LP_Val << PM_STDBYCFG_VREGSMOD_Pos) /* (PM_STDBYCFG) Low Power oriented Position */
#define PM_STDBYCFG_BBIASHS_Pos               _UINT16_(10)                                         /* (PM_STDBYCFG) Back Bias for SRAM Position */
#define PM_STDBYCFG_BBIASHS_Msk               (_UINT16_(0x1) << PM_STDBYCFG_BBIASHS_Pos)           /* (PM_STDBYCFG) Back Bias for SRAM Mask */
#define PM_STDBYCFG_BBIASHS(value)            (PM_STDBYCFG_BBIASHS_Msk & (_UINT16_(value) << PM_STDBYCFG_BBIASHS_Pos)) /* Assignment of value for BBIASHS in the PM_STDBYCFG register */
#define PM_STDBYCFG_Msk                       _UINT16_(0x04C0)                                     /* (PM_STDBYCFG) Register Mask  */


/* PM register offsets definitions */
#define PM_SLEEPCFG_REG_OFST           _UINT32_(0x01)      /* (PM_SLEEPCFG) Sleep Configuration Offset */
#define PM_STDBYCFG_REG_OFST           _UINT32_(0x08)      /* (PM_STDBYCFG) Standby Configuration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* PM register API structure */
typedef struct
{  /* Power Manager */
  __I   uint8_t                        Reserved1[0x01];
  __IO  uint8_t                        PM_SLEEPCFG;        /* Offset: 0x01 (R/W  8) Sleep Configuration */
  __I   uint8_t                        Reserved2[0x06];
  __IO  uint16_t                       PM_STDBYCFG;        /* Offset: 0x08 (R/W  16) Standby Configuration */
} pm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMJH01_PM_COMPONENT_H_ */
