/*
 * Component description for GCLK
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
#ifndef _PIC32CMPL10_GCLK_COMPONENT_H_
#define _PIC32CMPL10_GCLK_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR GCLK                      */
/* ************************************************************************** */

/* -------- GCLK_SYNCBUSY : (GCLK Offset: 0x04) ( R/ 32) Synchronization Busy -------- */
#define GCLK_SYNCBUSY_RESETVALUE              _UINT32_(0x00)                                       /*  (GCLK_SYNCBUSY) Synchronization Busy  Reset Value */

#define GCLK_SYNCBUSY_GENCTRL0_Pos            _UINT32_(2)                                          /* (GCLK_SYNCBUSY) Generator Control 0 Synchronization Busy Position */
#define GCLK_SYNCBUSY_GENCTRL0_Msk            (_UINT32_(0x1) << GCLK_SYNCBUSY_GENCTRL0_Pos)        /* (GCLK_SYNCBUSY) Generator Control 0 Synchronization Busy Mask */
#define GCLK_SYNCBUSY_GENCTRL0(value)         (GCLK_SYNCBUSY_GENCTRL0_Msk & (_UINT32_(value) << GCLK_SYNCBUSY_GENCTRL0_Pos)) /* Assignment of value for GENCTRL0 in the GCLK_SYNCBUSY register */
#define GCLK_SYNCBUSY_GENCTRL1_Pos            _UINT32_(3)                                          /* (GCLK_SYNCBUSY) Generator Control 1 Synchronization Busy Position */
#define GCLK_SYNCBUSY_GENCTRL1_Msk            (_UINT32_(0x1) << GCLK_SYNCBUSY_GENCTRL1_Pos)        /* (GCLK_SYNCBUSY) Generator Control 1 Synchronization Busy Mask */
#define GCLK_SYNCBUSY_GENCTRL1(value)         (GCLK_SYNCBUSY_GENCTRL1_Msk & (_UINT32_(value) << GCLK_SYNCBUSY_GENCTRL1_Pos)) /* Assignment of value for GENCTRL1 in the GCLK_SYNCBUSY register */
#define GCLK_SYNCBUSY_GENCTRL2_Pos            _UINT32_(4)                                          /* (GCLK_SYNCBUSY) Generator Control 2 Synchronization Busy Position */
#define GCLK_SYNCBUSY_GENCTRL2_Msk            (_UINT32_(0x1) << GCLK_SYNCBUSY_GENCTRL2_Pos)        /* (GCLK_SYNCBUSY) Generator Control 2 Synchronization Busy Mask */
#define GCLK_SYNCBUSY_GENCTRL2(value)         (GCLK_SYNCBUSY_GENCTRL2_Msk & (_UINT32_(value) << GCLK_SYNCBUSY_GENCTRL2_Pos)) /* Assignment of value for GENCTRL2 in the GCLK_SYNCBUSY register */
#define GCLK_SYNCBUSY_GENCTRL3_Pos            _UINT32_(5)                                          /* (GCLK_SYNCBUSY) Generator Control 3 Synchronization Busy Position */
#define GCLK_SYNCBUSY_GENCTRL3_Msk            (_UINT32_(0x1) << GCLK_SYNCBUSY_GENCTRL3_Pos)        /* (GCLK_SYNCBUSY) Generator Control 3 Synchronization Busy Mask */
#define GCLK_SYNCBUSY_GENCTRL3(value)         (GCLK_SYNCBUSY_GENCTRL3_Msk & (_UINT32_(value) << GCLK_SYNCBUSY_GENCTRL3_Pos)) /* Assignment of value for GENCTRL3 in the GCLK_SYNCBUSY register */
#define GCLK_SYNCBUSY_Msk                     _UINT32_(0x0000003C)                                 /* (GCLK_SYNCBUSY) Register Mask  */

#define GCLK_SYNCBUSY_GENCTRL_Pos             _UINT32_(2)                                          /* (GCLK_SYNCBUSY Position) Generator Control 3 Synchronization Busy */
#define GCLK_SYNCBUSY_GENCTRL_Msk             (_UINT32_(0xF) << GCLK_SYNCBUSY_GENCTRL_Pos)         /* (GCLK_SYNCBUSY Mask) GENCTRL */
#define GCLK_SYNCBUSY_GENCTRL(value)          (GCLK_SYNCBUSY_GENCTRL_Msk & (_UINT32_(value) << GCLK_SYNCBUSY_GENCTRL_Pos)) 

/* -------- GCLK_GENCTRL : (GCLK Offset: 0x20) (R/W 32) Generator Control -------- */
#define GCLK_GENCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (GCLK_GENCTRL) Generator Control  Reset Value */

#define GCLK_GENCTRL_SRC_Pos                  _UINT32_(0)                                          /* (GCLK_GENCTRL) Generator Clock Source Selection Position */
#define GCLK_GENCTRL_SRC_Msk                  (_UINT32_(0x1F) << GCLK_GENCTRL_SRC_Pos)             /* (GCLK_GENCTRL) Generator Clock Source Selection Mask */
#define GCLK_GENCTRL_SRC(value)               (GCLK_GENCTRL_SRC_Msk & (_UINT32_(value) << GCLK_GENCTRL_SRC_Pos)) /* Assignment of value for SRC in the GCLK_GENCTRL register */
#define   GCLK_GENCTRL_SRC_OSCHF_Val          _UINT32_(0x0)                                        /* (GCLK_GENCTRL) OSCHF oscillator output  */
#define   GCLK_GENCTRL_SRC_GCLKIN_Val         _UINT32_(0x1)                                        /* (GCLK_GENCTRL) Generator input pad  */
#define   GCLK_GENCTRL_SRC_GCLKGEN1_Val       _UINT32_(0x2)                                        /* (GCLK_GENCTRL) Generic clock generator 1 output  */
#define   GCLK_GENCTRL_SRC_OSC32K_Val         _UINT32_(0x3)                                        /* (GCLK_GENCTRL) OSC32K oscillator output  */
#define   GCLK_GENCTRL_SRC_XOSC32K_Val        _UINT32_(0x4)                                        /* (GCLK_GENCTRL) XOSC32K oscillator output  */
#define GCLK_GENCTRL_SRC_OSCHF                (GCLK_GENCTRL_SRC_OSCHF_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) OSCHF oscillator output Position */
#define GCLK_GENCTRL_SRC_GCLKIN               (GCLK_GENCTRL_SRC_GCLKIN_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) Generator input pad Position */
#define GCLK_GENCTRL_SRC_GCLKGEN1             (GCLK_GENCTRL_SRC_GCLKGEN1_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) Generic clock generator 1 output Position */
#define GCLK_GENCTRL_SRC_OSC32K               (GCLK_GENCTRL_SRC_OSC32K_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) OSC32K oscillator output Position */
#define GCLK_GENCTRL_SRC_XOSC32K              (GCLK_GENCTRL_SRC_XOSC32K_Val << GCLK_GENCTRL_SRC_Pos) /* (GCLK_GENCTRL) XOSC32K oscillator output Position */
#define GCLK_GENCTRL_GENEN_Pos                _UINT32_(8)                                          /* (GCLK_GENCTRL) Generator Enable Position */
#define GCLK_GENCTRL_GENEN_Msk                (_UINT32_(0x1) << GCLK_GENCTRL_GENEN_Pos)            /* (GCLK_GENCTRL) Generator Enable Mask */
#define GCLK_GENCTRL_GENEN(value)             (GCLK_GENCTRL_GENEN_Msk & (_UINT32_(value) << GCLK_GENCTRL_GENEN_Pos)) /* Assignment of value for GENEN in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_IDC_Pos                  _UINT32_(9)                                          /* (GCLK_GENCTRL) Improve Duty Cycle Position */
#define GCLK_GENCTRL_IDC_Msk                  (_UINT32_(0x1) << GCLK_GENCTRL_IDC_Pos)              /* (GCLK_GENCTRL) Improve Duty Cycle Mask */
#define GCLK_GENCTRL_IDC(value)               (GCLK_GENCTRL_IDC_Msk & (_UINT32_(value) << GCLK_GENCTRL_IDC_Pos)) /* Assignment of value for IDC in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_OOV_Pos                  _UINT32_(10)                                         /* (GCLK_GENCTRL) Output Off Value Position */
#define GCLK_GENCTRL_OOV_Msk                  (_UINT32_(0x1) << GCLK_GENCTRL_OOV_Pos)              /* (GCLK_GENCTRL) Output Off Value Mask */
#define GCLK_GENCTRL_OOV(value)               (GCLK_GENCTRL_OOV_Msk & (_UINT32_(value) << GCLK_GENCTRL_OOV_Pos)) /* Assignment of value for OOV in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_OE_Pos                   _UINT32_(11)                                         /* (GCLK_GENCTRL) Output Enable Position */
#define GCLK_GENCTRL_OE_Msk                   (_UINT32_(0x1) << GCLK_GENCTRL_OE_Pos)               /* (GCLK_GENCTRL) Output Enable Mask */
#define GCLK_GENCTRL_OE(value)                (GCLK_GENCTRL_OE_Msk & (_UINT32_(value) << GCLK_GENCTRL_OE_Pos)) /* Assignment of value for OE in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_DIVSEL_Pos               _UINT32_(12)                                         /* (GCLK_GENCTRL) Divide Selection Position */
#define GCLK_GENCTRL_DIVSEL_Msk               (_UINT32_(0x1) << GCLK_GENCTRL_DIVSEL_Pos)           /* (GCLK_GENCTRL) Divide Selection Mask */
#define GCLK_GENCTRL_DIVSEL(value)            (GCLK_GENCTRL_DIVSEL_Msk & (_UINT32_(value) << GCLK_GENCTRL_DIVSEL_Pos)) /* Assignment of value for DIVSEL in the GCLK_GENCTRL register */
#define   GCLK_GENCTRL_DIVSEL_DIV1_Val        _UINT32_(0x0)                                        /* (GCLK_GENCTRL) The Generator clock frequency equals the clock source frequency divided by GENCTRL[n].DIV  */
#define   GCLK_GENCTRL_DIVSEL_DIV2_Val        _UINT32_(0x1)                                        /* (GCLK_GENCTRL) The Generator clock frequency equals the clock source frequency divided by 2(GENCTRL[n].DIV + 1)  */
#define GCLK_GENCTRL_DIVSEL_DIV1              (GCLK_GENCTRL_DIVSEL_DIV1_Val << GCLK_GENCTRL_DIVSEL_Pos) /* (GCLK_GENCTRL) The Generator clock frequency equals the clock source frequency divided by GENCTRL[n].DIV Position */
#define GCLK_GENCTRL_DIVSEL_DIV2              (GCLK_GENCTRL_DIVSEL_DIV2_Val << GCLK_GENCTRL_DIVSEL_Pos) /* (GCLK_GENCTRL) The Generator clock frequency equals the clock source frequency divided by 2(GENCTRL[n].DIV + 1) Position */
#define GCLK_GENCTRL_RUNSTDBY_Pos             _UINT32_(13)                                         /* (GCLK_GENCTRL) Run in Standby Position */
#define GCLK_GENCTRL_RUNSTDBY_Msk             (_UINT32_(0x1) << GCLK_GENCTRL_RUNSTDBY_Pos)         /* (GCLK_GENCTRL) Run in Standby Mask */
#define GCLK_GENCTRL_RUNSTDBY(value)          (GCLK_GENCTRL_RUNSTDBY_Msk & (_UINT32_(value) << GCLK_GENCTRL_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_DIV_Pos                  _UINT32_(16)                                         /* (GCLK_GENCTRL) Division Factor Position */
#define GCLK_GENCTRL_DIV_Msk                  (_UINT32_(0xFFFF) << GCLK_GENCTRL_DIV_Pos)           /* (GCLK_GENCTRL) Division Factor Mask */
#define GCLK_GENCTRL_DIV(value)               (GCLK_GENCTRL_DIV_Msk & (_UINT32_(value) << GCLK_GENCTRL_DIV_Pos)) /* Assignment of value for DIV in the GCLK_GENCTRL register */
#define GCLK_GENCTRL_Msk                      _UINT32_(0xFFFF3F1F)                                 /* (GCLK_GENCTRL) Register Mask  */


/* -------- GCLK_PCHCTRL : (GCLK Offset: 0x80) (R/W 32) Peripheral Channel Control # -------- */
#define GCLK_PCHCTRL_RESETVALUE               _UINT32_(0x00)                                       /*  (GCLK_PCHCTRL) Peripheral Channel Control #  Reset Value */

#define GCLK_PCHCTRL_GEN_Pos                  _UINT32_(0)                                          /* (GCLK_PCHCTRL) Generator Selection Position */
#define GCLK_PCHCTRL_GEN_Msk                  (_UINT32_(0xF) << GCLK_PCHCTRL_GEN_Pos)              /* (GCLK_PCHCTRL) Generator Selection Mask */
#define GCLK_PCHCTRL_GEN(value)               (GCLK_PCHCTRL_GEN_Msk & (_UINT32_(value) << GCLK_PCHCTRL_GEN_Pos)) /* Assignment of value for GEN in the GCLK_PCHCTRL register */
#define   GCLK_PCHCTRL_GEN_GCLK0_Val          _UINT32_(0x0)                                        /* (GCLK_PCHCTRL) Generic Clock Generator 0  */
#define   GCLK_PCHCTRL_GEN_GCLK1_Val          _UINT32_(0x1)                                        /* (GCLK_PCHCTRL) Generic Clock Generator 1  */
#define   GCLK_PCHCTRL_GEN_GCLK2_Val          _UINT32_(0x2)                                        /* (GCLK_PCHCTRL) Generic Clock Generator 2  */
#define   GCLK_PCHCTRL_GEN_GCLK3_Val          _UINT32_(0x3)                                        /* (GCLK_PCHCTRL) Generic Clock Generator 3  */
#define GCLK_PCHCTRL_GEN_GCLK0                (GCLK_PCHCTRL_GEN_GCLK0_Val << GCLK_PCHCTRL_GEN_Pos) /* (GCLK_PCHCTRL) Generic Clock Generator 0 Position */
#define GCLK_PCHCTRL_GEN_GCLK1                (GCLK_PCHCTRL_GEN_GCLK1_Val << GCLK_PCHCTRL_GEN_Pos) /* (GCLK_PCHCTRL) Generic Clock Generator 1 Position */
#define GCLK_PCHCTRL_GEN_GCLK2                (GCLK_PCHCTRL_GEN_GCLK2_Val << GCLK_PCHCTRL_GEN_Pos) /* (GCLK_PCHCTRL) Generic Clock Generator 2 Position */
#define GCLK_PCHCTRL_GEN_GCLK3                (GCLK_PCHCTRL_GEN_GCLK3_Val << GCLK_PCHCTRL_GEN_Pos) /* (GCLK_PCHCTRL) Generic Clock Generator 3 Position */
#define GCLK_PCHCTRL_CHEN_Pos                 _UINT32_(6)                                          /* (GCLK_PCHCTRL) Channel Enable Position */
#define GCLK_PCHCTRL_CHEN_Msk                 (_UINT32_(0x1) << GCLK_PCHCTRL_CHEN_Pos)             /* (GCLK_PCHCTRL) Channel Enable Mask */
#define GCLK_PCHCTRL_CHEN(value)              (GCLK_PCHCTRL_CHEN_Msk & (_UINT32_(value) << GCLK_PCHCTRL_CHEN_Pos)) /* Assignment of value for CHEN in the GCLK_PCHCTRL register */
#define GCLK_PCHCTRL_WRTLOCK_Pos              _UINT32_(7)                                          /* (GCLK_PCHCTRL) Write Lock Position */
#define GCLK_PCHCTRL_WRTLOCK_Msk              (_UINT32_(0x1) << GCLK_PCHCTRL_WRTLOCK_Pos)          /* (GCLK_PCHCTRL) Write Lock Mask */
#define GCLK_PCHCTRL_WRTLOCK(value)           (GCLK_PCHCTRL_WRTLOCK_Msk & (_UINT32_(value) << GCLK_PCHCTRL_WRTLOCK_Pos)) /* Assignment of value for WRTLOCK in the GCLK_PCHCTRL register */
#define GCLK_PCHCTRL_Msk                      _UINT32_(0x000000CF)                                 /* (GCLK_PCHCTRL) Register Mask  */


/* GCLK register offsets definitions */
#define GCLK_SYNCBUSY_REG_OFST         _UINT32_(0x04)      /* (GCLK_SYNCBUSY) Synchronization Busy Offset */
#define GCLK_GENCTRL_REG_OFST          _UINT32_(0x20)      /* (GCLK_GENCTRL) Generator Control Offset */
#define GCLK_GENCTRL0_REG_OFST         _UINT32_(0x20)      /* (GCLK_GENCTRL0) Generator Control Offset */
#define GCLK_GENCTRL1_REG_OFST         _UINT32_(0x24)      /* (GCLK_GENCTRL1) Generator Control Offset */
#define GCLK_GENCTRL2_REG_OFST         _UINT32_(0x28)      /* (GCLK_GENCTRL2) Generator Control Offset */
#define GCLK_GENCTRL3_REG_OFST         _UINT32_(0x2C)      /* (GCLK_GENCTRL3) Generator Control Offset */
#define GCLK_PCHCTRL_REG_OFST          _UINT32_(0x80)      /* (GCLK_PCHCTRL) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL0_REG_OFST         _UINT32_(0x80)      /* (GCLK_PCHCTRL0) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL1_REG_OFST         _UINT32_(0x84)      /* (GCLK_PCHCTRL1) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL2_REG_OFST         _UINT32_(0x88)      /* (GCLK_PCHCTRL2) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL3_REG_OFST         _UINT32_(0x8C)      /* (GCLK_PCHCTRL3) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL4_REG_OFST         _UINT32_(0x90)      /* (GCLK_PCHCTRL4) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL5_REG_OFST         _UINT32_(0x94)      /* (GCLK_PCHCTRL5) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL6_REG_OFST         _UINT32_(0x98)      /* (GCLK_PCHCTRL6) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL7_REG_OFST         _UINT32_(0x9C)      /* (GCLK_PCHCTRL7) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL8_REG_OFST         _UINT32_(0xA0)      /* (GCLK_PCHCTRL8) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL9_REG_OFST         _UINT32_(0xA4)      /* (GCLK_PCHCTRL9) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL10_REG_OFST        _UINT32_(0xA8)      /* (GCLK_PCHCTRL10) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL11_REG_OFST        _UINT32_(0xAC)      /* (GCLK_PCHCTRL11) Peripheral Channel Control # Offset */
#define GCLK_PCHCTRL12_REG_OFST        _UINT32_(0xB0)      /* (GCLK_PCHCTRL12) Peripheral Channel Control # Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* GCLK register API structure */
typedef struct
{  /* Generic Clock Controller */
  __I   uint8_t                        Reserved1[0x04];
  __I   uint32_t                       GCLK_SYNCBUSY;      /* Offset: 0x04 (R/   32) Synchronization Busy */
  __I   uint8_t                        Reserved2[0x18];
  __IO  uint32_t                       GCLK_GENCTRL[4];    /* Offset: 0x20 (R/W  32) Generator Control */
  __I   uint8_t                        Reserved3[0x50];
  __IO  uint32_t                       GCLK_PCHCTRL[13];   /* Offset: 0x80 (R/W  32) Peripheral Channel Control # */
} gclk_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_GCLK_COMPONENT_H_ */
