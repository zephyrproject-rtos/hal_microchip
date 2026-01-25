/*
 * Component description for SYSCTRL
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
#ifndef _PIC32CMPL10_SYSCTRL_COMPONENT_H_
#define _PIC32CMPL10_SYSCTRL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR SYSCTRL                     */
/* ************************************************************************** */

/* -------- SYSCTRL_BOOTCTRL : (SYSCTRL Offset: 0x80) (R/W 32) Boot Control -------- */
#define SYSCTRL_BOOTCTRL_RESETVALUE           _UINT32_(0x00)                                       /*  (SYSCTRL_BOOTCTRL) Boot Control  Reset Value */

#define SYSCTRL_BOOTCTRL_SYSINIT_Pos          _UINT32_(0)                                          /* (SYSCTRL_BOOTCTRL) System Initialization Ongoing Position */
#define SYSCTRL_BOOTCTRL_SYSINIT_Msk          (_UINT32_(0x1) << SYSCTRL_BOOTCTRL_SYSINIT_Pos)      /* (SYSCTRL_BOOTCTRL) System Initialization Ongoing Mask */
#define SYSCTRL_BOOTCTRL_SYSINIT(value)       (SYSCTRL_BOOTCTRL_SYSINIT_Msk & (_UINT32_(value) << SYSCTRL_BOOTCTRL_SYSINIT_Pos)) /* Assignment of value for SYSINIT in the SYSCTRL_BOOTCTRL register */
#define SYSCTRL_BOOTCTRL_BREXTEN_Pos          _UINT32_(1)                                          /* (SYSCTRL_BOOTCTRL) BREXT Enable Position */
#define SYSCTRL_BOOTCTRL_BREXTEN_Msk          (_UINT32_(0x1) << SYSCTRL_BOOTCTRL_BREXTEN_Pos)      /* (SYSCTRL_BOOTCTRL) BREXT Enable Mask */
#define SYSCTRL_BOOTCTRL_BREXTEN(value)       (SYSCTRL_BOOTCTRL_BREXTEN_Msk & (_UINT32_(value) << SYSCTRL_BOOTCTRL_BREXTEN_Pos)) /* Assignment of value for BREXTEN in the SYSCTRL_BOOTCTRL register */
#define SYSCTRL_BOOTCTRL_FORCEPARK_Pos        _UINT32_(2)                                          /* (SYSCTRL_BOOTCTRL) Force Park Mode Entry Position */
#define SYSCTRL_BOOTCTRL_FORCEPARK_Msk        (_UINT32_(0x1) << SYSCTRL_BOOTCTRL_FORCEPARK_Pos)    /* (SYSCTRL_BOOTCTRL) Force Park Mode Entry Mask */
#define SYSCTRL_BOOTCTRL_FORCEPARK(value)     (SYSCTRL_BOOTCTRL_FORCEPARK_Msk & (_UINT32_(value) << SYSCTRL_BOOTCTRL_FORCEPARK_Pos)) /* Assignment of value for FORCEPARK in the SYSCTRL_BOOTCTRL register */
#define SYSCTRL_BOOTCTRL_Msk                  _UINT32_(0x00000007)                                 /* (SYSCTRL_BOOTCTRL) Register Mask  */


/* -------- SYSCTRL_USERCFG : (SYSCTRL Offset: 0x84) (R/W 32) User Configuration -------- */
#define SYSCTRL_USERCFG_RESETVALUE            _UINT32_(0x00)                                       /*  (SYSCTRL_USERCFG) User Configuration  Reset Value */

#define SYSCTRL_USERCFG_CRCSEL_Pos            _UINT32_(6)                                          /* (SYSCTRL_USERCFG) CRC Polynomial Selection Position */
#define SYSCTRL_USERCFG_CRCSEL_Msk            (_UINT32_(0x1) << SYSCTRL_USERCFG_CRCSEL_Pos)        /* (SYSCTRL_USERCFG) CRC Polynomial Selection Mask */
#define SYSCTRL_USERCFG_CRCSEL(value)         (SYSCTRL_USERCFG_CRCSEL_Msk & (_UINT32_(value) << SYSCTRL_USERCFG_CRCSEL_Pos)) /* Assignment of value for CRCSEL in the SYSCTRL_USERCFG register */
#define   SYSCTRL_USERCFG_CRCSEL_CRC16_Val    _UINT32_(0x0)                                        /* (SYSCTRL_USERCFG) CRC-16-CCITT  */
#define   SYSCTRL_USERCFG_CRCSEL_CRC32_Val    _UINT32_(0x1)                                        /* (SYSCTRL_USERCFG) CRC-32 (IEEE 802.3)  */
#define SYSCTRL_USERCFG_CRCSEL_CRC16          (SYSCTRL_USERCFG_CRCSEL_CRC16_Val << SYSCTRL_USERCFG_CRCSEL_Pos) /* (SYSCTRL_USERCFG) CRC-16-CCITT Position */
#define SYSCTRL_USERCFG_CRCSEL_CRC32          (SYSCTRL_USERCFG_CRCSEL_CRC32_Val << SYSCTRL_USERCFG_CRCSEL_Pos) /* (SYSCTRL_USERCFG) CRC-32 (IEEE 802.3) Position */
#define SYSCTRL_USERCFG_CRCBOOT_Pos           _UINT32_(7)                                          /* (SYSCTRL_USERCFG) CRC Boot Position */
#define SYSCTRL_USERCFG_CRCBOOT_Msk           (_UINT32_(0x1) << SYSCTRL_USERCFG_CRCBOOT_Pos)       /* (SYSCTRL_USERCFG) CRC Boot Mask */
#define SYSCTRL_USERCFG_CRCBOOT(value)        (SYSCTRL_USERCFG_CRCBOOT_Msk & (_UINT32_(value) << SYSCTRL_USERCFG_CRCBOOT_Pos)) /* Assignment of value for CRCBOOT in the SYSCTRL_USERCFG register */
#define SYSCTRL_USERCFG_SUT_Pos               _UINT32_(8)                                          /* (SYSCTRL_USERCFG) Start-up Time Position */
#define SYSCTRL_USERCFG_SUT_Msk               (_UINT32_(0x7) << SYSCTRL_USERCFG_SUT_Pos)           /* (SYSCTRL_USERCFG) Start-up Time Mask */
#define SYSCTRL_USERCFG_SUT(value)            (SYSCTRL_USERCFG_SUT_Msk & (_UINT32_(value) << SYSCTRL_USERCFG_SUT_Pos)) /* Assignment of value for SUT in the SYSCTRL_USERCFG register */
#define   SYSCTRL_USERCFG_SUT_0MS_Val         _UINT32_(0x0)                                        /* (SYSCTRL_USERCFG) 0 ms  */
#define   SYSCTRL_USERCFG_SUT_1MS_Val         _UINT32_(0x1)                                        /* (SYSCTRL_USERCFG) 1 ms  */
#define   SYSCTRL_USERCFG_SUT_2MS_Val         _UINT32_(0x2)                                        /* (SYSCTRL_USERCFG) 2 ms  */
#define   SYSCTRL_USERCFG_SUT_4MS_Val         _UINT32_(0x3)                                        /* (SYSCTRL_USERCFG) 4 ms  */
#define   SYSCTRL_USERCFG_SUT_8MS_Val         _UINT32_(0x4)                                        /* (SYSCTRL_USERCFG) 8 ms  */
#define   SYSCTRL_USERCFG_SUT_16MS_Val        _UINT32_(0x5)                                        /* (SYSCTRL_USERCFG) 16 ms  */
#define   SYSCTRL_USERCFG_SUT_32MS_Val        _UINT32_(0x6)                                        /* (SYSCTRL_USERCFG) 32 ms  */
#define   SYSCTRL_USERCFG_SUT_64MS_Val        _UINT32_(0x7)                                        /* (SYSCTRL_USERCFG) 64 ms  */
#define SYSCTRL_USERCFG_SUT_0MS               (SYSCTRL_USERCFG_SUT_0MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 0 ms Position */
#define SYSCTRL_USERCFG_SUT_1MS               (SYSCTRL_USERCFG_SUT_1MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 1 ms Position */
#define SYSCTRL_USERCFG_SUT_2MS               (SYSCTRL_USERCFG_SUT_2MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 2 ms Position */
#define SYSCTRL_USERCFG_SUT_4MS               (SYSCTRL_USERCFG_SUT_4MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 4 ms Position */
#define SYSCTRL_USERCFG_SUT_8MS               (SYSCTRL_USERCFG_SUT_8MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 8 ms Position */
#define SYSCTRL_USERCFG_SUT_16MS              (SYSCTRL_USERCFG_SUT_16MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 16 ms Position */
#define SYSCTRL_USERCFG_SUT_32MS              (SYSCTRL_USERCFG_SUT_32MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 32 ms Position */
#define SYSCTRL_USERCFG_SUT_64MS              (SYSCTRL_USERCFG_SUT_64MS_Val << SYSCTRL_USERCFG_SUT_Pos) /* (SYSCTRL_USERCFG) 64 ms Position */
#define SYSCTRL_USERCFG_Msk                   _UINT32_(0x000007C0)                                 /* (SYSCTRL_USERCFG) Register Mask  */


/* -------- SYSCTRL_TEMPSENSE : (SYSCTRL Offset: 0x88) ( R/ 32) Temperature Sensor Calibration -------- */
#define SYSCTRL_TEMPSENSE_TEMPSENSE0_Pos      _UINT32_(0)                                          /* (SYSCTRL_TEMPSENSE) Temperature Sensor Calibration Slope Position */
#define SYSCTRL_TEMPSENSE_TEMPSENSE0_Msk      (_UINT32_(0xFFFF) << SYSCTRL_TEMPSENSE_TEMPSENSE0_Pos) /* (SYSCTRL_TEMPSENSE) Temperature Sensor Calibration Slope Mask */
#define SYSCTRL_TEMPSENSE_TEMPSENSE0(value)   (SYSCTRL_TEMPSENSE_TEMPSENSE0_Msk & (_UINT32_(value) << SYSCTRL_TEMPSENSE_TEMPSENSE0_Pos)) /* Assignment of value for TEMPSENSE0 in the SYSCTRL_TEMPSENSE register */
#define SYSCTRL_TEMPSENSE_TEMPSENSE1_Pos      _UINT32_(16)                                         /* (SYSCTRL_TEMPSENSE) Temperature Sensor Calibration Offset Position */
#define SYSCTRL_TEMPSENSE_TEMPSENSE1_Msk      (_UINT32_(0xFFFF) << SYSCTRL_TEMPSENSE_TEMPSENSE1_Pos) /* (SYSCTRL_TEMPSENSE) Temperature Sensor Calibration Offset Mask */
#define SYSCTRL_TEMPSENSE_TEMPSENSE1(value)   (SYSCTRL_TEMPSENSE_TEMPSENSE1_Msk & (_UINT32_(value) << SYSCTRL_TEMPSENSE_TEMPSENSE1_Pos)) /* Assignment of value for TEMPSENSE1 in the SYSCTRL_TEMPSENSE register */
#define SYSCTRL_TEMPSENSE_Msk                 _UINT32_(0xFFFFFFFF)                                 /* (SYSCTRL_TEMPSENSE) Register Mask  */


/* SYSCTRL register offsets definitions */
#define SYSCTRL_BOOTCTRL_REG_OFST      _UINT32_(0x80)      /* (SYSCTRL_BOOTCTRL) Boot Control Offset */
#define SYSCTRL_USERCFG_REG_OFST       _UINT32_(0x84)      /* (SYSCTRL_USERCFG) User Configuration Offset */
#define SYSCTRL_TEMPSENSE_REG_OFST     _UINT32_(0x88)      /* (SYSCTRL_TEMPSENSE) Temperature Sensor Calibration Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SYSCTRL register API structure */
typedef struct
{  /* System Controller */
  __I   uint8_t                        Reserved1[0x80];
  __IO  uint32_t                       SYSCTRL_BOOTCTRL;   /* Offset: 0x80 (R/W  32) Boot Control */
  __IO  uint32_t                       SYSCTRL_USERCFG;    /* Offset: 0x84 (R/W  32) User Configuration */
  __I   uint32_t                       SYSCTRL_TEMPSENSE;  /* Offset: 0x88 (R/   32) Temperature Sensor Calibration */
} sysctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_SYSCTRL_COMPONENT_H_ */
