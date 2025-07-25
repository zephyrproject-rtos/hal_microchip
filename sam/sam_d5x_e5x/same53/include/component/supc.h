/*
 * Component description for SUPC
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

/*  file generated from device description file (ATDF) version 2023-03-17T09:50:04Z  */
#ifndef _SAME53_SUPC_COMPONENT_H_
#define _SAME53_SUPC_COMPONENT_H_

#include "core_cm4.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR SUPC                      */
/* ************************************************************************** */

/* -------- SUPC_INTENCLR : (SUPC Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */
#define SUPC_INTENCLR_RESETVALUE              _UINT32_(0x00)                                       /*  (SUPC_INTENCLR) Interrupt Enable Clear  Reset Value */

#define SUPC_INTENCLR_BOD33RDY_Pos            _UINT32_(0)                                          /* (SUPC_INTENCLR) BOD33 Ready Position */
#define SUPC_INTENCLR_BOD33RDY_Msk            (_UINT32_(0x1) << SUPC_INTENCLR_BOD33RDY_Pos)        /* (SUPC_INTENCLR) BOD33 Ready Mask */
#define SUPC_INTENCLR_BOD33RDY(value)         (SUPC_INTENCLR_BOD33RDY_Msk & (_UINT32_(value) << SUPC_INTENCLR_BOD33RDY_Pos)) /* Assignment of value for BOD33RDY in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_BOD33DET_Pos            _UINT32_(1)                                          /* (SUPC_INTENCLR) BOD33 Detection Position */
#define SUPC_INTENCLR_BOD33DET_Msk            (_UINT32_(0x1) << SUPC_INTENCLR_BOD33DET_Pos)        /* (SUPC_INTENCLR) BOD33 Detection Mask */
#define SUPC_INTENCLR_BOD33DET(value)         (SUPC_INTENCLR_BOD33DET_Msk & (_UINT32_(value) << SUPC_INTENCLR_BOD33DET_Pos)) /* Assignment of value for BOD33DET in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_B33SRDY_Pos             _UINT32_(2)                                          /* (SUPC_INTENCLR) BOD33 Synchronization Ready Position */
#define SUPC_INTENCLR_B33SRDY_Msk             (_UINT32_(0x1) << SUPC_INTENCLR_B33SRDY_Pos)         /* (SUPC_INTENCLR) BOD33 Synchronization Ready Mask */
#define SUPC_INTENCLR_B33SRDY(value)          (SUPC_INTENCLR_B33SRDY_Msk & (_UINT32_(value) << SUPC_INTENCLR_B33SRDY_Pos)) /* Assignment of value for B33SRDY in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_VREGRDY_Pos             _UINT32_(8)                                          /* (SUPC_INTENCLR) Voltage Regulator Ready Position */
#define SUPC_INTENCLR_VREGRDY_Msk             (_UINT32_(0x1) << SUPC_INTENCLR_VREGRDY_Pos)         /* (SUPC_INTENCLR) Voltage Regulator Ready Mask */
#define SUPC_INTENCLR_VREGRDY(value)          (SUPC_INTENCLR_VREGRDY_Msk & (_UINT32_(value) << SUPC_INTENCLR_VREGRDY_Pos)) /* Assignment of value for VREGRDY in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_VCORERDY_Pos            _UINT32_(10)                                         /* (SUPC_INTENCLR) VDDCORE Ready Position */
#define SUPC_INTENCLR_VCORERDY_Msk            (_UINT32_(0x1) << SUPC_INTENCLR_VCORERDY_Pos)        /* (SUPC_INTENCLR) VDDCORE Ready Mask */
#define SUPC_INTENCLR_VCORERDY(value)         (SUPC_INTENCLR_VCORERDY_Msk & (_UINT32_(value) << SUPC_INTENCLR_VCORERDY_Pos)) /* Assignment of value for VCORERDY in the SUPC_INTENCLR register */
#define SUPC_INTENCLR_Msk                     _UINT32_(0x00000507)                                 /* (SUPC_INTENCLR) Register Mask  */


/* -------- SUPC_INTENSET : (SUPC Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */
#define SUPC_INTENSET_RESETVALUE              _UINT32_(0x00)                                       /*  (SUPC_INTENSET) Interrupt Enable Set  Reset Value */

#define SUPC_INTENSET_BOD33RDY_Pos            _UINT32_(0)                                          /* (SUPC_INTENSET) BOD33 Ready Position */
#define SUPC_INTENSET_BOD33RDY_Msk            (_UINT32_(0x1) << SUPC_INTENSET_BOD33RDY_Pos)        /* (SUPC_INTENSET) BOD33 Ready Mask */
#define SUPC_INTENSET_BOD33RDY(value)         (SUPC_INTENSET_BOD33RDY_Msk & (_UINT32_(value) << SUPC_INTENSET_BOD33RDY_Pos)) /* Assignment of value for BOD33RDY in the SUPC_INTENSET register */
#define SUPC_INTENSET_BOD33DET_Pos            _UINT32_(1)                                          /* (SUPC_INTENSET) BOD33 Detection Position */
#define SUPC_INTENSET_BOD33DET_Msk            (_UINT32_(0x1) << SUPC_INTENSET_BOD33DET_Pos)        /* (SUPC_INTENSET) BOD33 Detection Mask */
#define SUPC_INTENSET_BOD33DET(value)         (SUPC_INTENSET_BOD33DET_Msk & (_UINT32_(value) << SUPC_INTENSET_BOD33DET_Pos)) /* Assignment of value for BOD33DET in the SUPC_INTENSET register */
#define SUPC_INTENSET_B33SRDY_Pos             _UINT32_(2)                                          /* (SUPC_INTENSET) BOD33 Synchronization Ready Position */
#define SUPC_INTENSET_B33SRDY_Msk             (_UINT32_(0x1) << SUPC_INTENSET_B33SRDY_Pos)         /* (SUPC_INTENSET) BOD33 Synchronization Ready Mask */
#define SUPC_INTENSET_B33SRDY(value)          (SUPC_INTENSET_B33SRDY_Msk & (_UINT32_(value) << SUPC_INTENSET_B33SRDY_Pos)) /* Assignment of value for B33SRDY in the SUPC_INTENSET register */
#define SUPC_INTENSET_VREGRDY_Pos             _UINT32_(8)                                          /* (SUPC_INTENSET) Voltage Regulator Ready Position */
#define SUPC_INTENSET_VREGRDY_Msk             (_UINT32_(0x1) << SUPC_INTENSET_VREGRDY_Pos)         /* (SUPC_INTENSET) Voltage Regulator Ready Mask */
#define SUPC_INTENSET_VREGRDY(value)          (SUPC_INTENSET_VREGRDY_Msk & (_UINT32_(value) << SUPC_INTENSET_VREGRDY_Pos)) /* Assignment of value for VREGRDY in the SUPC_INTENSET register */
#define SUPC_INTENSET_VCORERDY_Pos            _UINT32_(10)                                         /* (SUPC_INTENSET) VDDCORE Ready Position */
#define SUPC_INTENSET_VCORERDY_Msk            (_UINT32_(0x1) << SUPC_INTENSET_VCORERDY_Pos)        /* (SUPC_INTENSET) VDDCORE Ready Mask */
#define SUPC_INTENSET_VCORERDY(value)         (SUPC_INTENSET_VCORERDY_Msk & (_UINT32_(value) << SUPC_INTENSET_VCORERDY_Pos)) /* Assignment of value for VCORERDY in the SUPC_INTENSET register */
#define SUPC_INTENSET_Msk                     _UINT32_(0x00000507)                                 /* (SUPC_INTENSET) Register Mask  */


/* -------- SUPC_INTFLAG : (SUPC Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */
#define SUPC_INTFLAG_RESETVALUE               _UINT32_(0x00)                                       /*  (SUPC_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define SUPC_INTFLAG_BOD33RDY_Pos             _UINT32_(0)                                          /* (SUPC_INTFLAG) BOD33 Ready Position */
#define SUPC_INTFLAG_BOD33RDY_Msk             (_UINT32_(0x1) << SUPC_INTFLAG_BOD33RDY_Pos)         /* (SUPC_INTFLAG) BOD33 Ready Mask */
#define SUPC_INTFLAG_BOD33RDY(value)          (SUPC_INTFLAG_BOD33RDY_Msk & (_UINT32_(value) << SUPC_INTFLAG_BOD33RDY_Pos)) /* Assignment of value for BOD33RDY in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_BOD33DET_Pos             _UINT32_(1)                                          /* (SUPC_INTFLAG) BOD33 Detection Position */
#define SUPC_INTFLAG_BOD33DET_Msk             (_UINT32_(0x1) << SUPC_INTFLAG_BOD33DET_Pos)         /* (SUPC_INTFLAG) BOD33 Detection Mask */
#define SUPC_INTFLAG_BOD33DET(value)          (SUPC_INTFLAG_BOD33DET_Msk & (_UINT32_(value) << SUPC_INTFLAG_BOD33DET_Pos)) /* Assignment of value for BOD33DET in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_B33SRDY_Pos              _UINT32_(2)                                          /* (SUPC_INTFLAG) BOD33 Synchronization Ready Position */
#define SUPC_INTFLAG_B33SRDY_Msk              (_UINT32_(0x1) << SUPC_INTFLAG_B33SRDY_Pos)          /* (SUPC_INTFLAG) BOD33 Synchronization Ready Mask */
#define SUPC_INTFLAG_B33SRDY(value)           (SUPC_INTFLAG_B33SRDY_Msk & (_UINT32_(value) << SUPC_INTFLAG_B33SRDY_Pos)) /* Assignment of value for B33SRDY in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_VREGRDY_Pos              _UINT32_(8)                                          /* (SUPC_INTFLAG) Voltage Regulator Ready Position */
#define SUPC_INTFLAG_VREGRDY_Msk              (_UINT32_(0x1) << SUPC_INTFLAG_VREGRDY_Pos)          /* (SUPC_INTFLAG) Voltage Regulator Ready Mask */
#define SUPC_INTFLAG_VREGRDY(value)           (SUPC_INTFLAG_VREGRDY_Msk & (_UINT32_(value) << SUPC_INTFLAG_VREGRDY_Pos)) /* Assignment of value for VREGRDY in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_VCORERDY_Pos             _UINT32_(10)                                         /* (SUPC_INTFLAG) VDDCORE Ready Position */
#define SUPC_INTFLAG_VCORERDY_Msk             (_UINT32_(0x1) << SUPC_INTFLAG_VCORERDY_Pos)         /* (SUPC_INTFLAG) VDDCORE Ready Mask */
#define SUPC_INTFLAG_VCORERDY(value)          (SUPC_INTFLAG_VCORERDY_Msk & (_UINT32_(value) << SUPC_INTFLAG_VCORERDY_Pos)) /* Assignment of value for VCORERDY in the SUPC_INTFLAG register */
#define SUPC_INTFLAG_Msk                      _UINT32_(0x00000507)                                 /* (SUPC_INTFLAG) Register Mask  */


/* -------- SUPC_STATUS : (SUPC Offset: 0x0C) ( R/ 32) Power and Clocks Status -------- */
#define SUPC_STATUS_RESETVALUE                _UINT32_(0x00)                                       /*  (SUPC_STATUS) Power and Clocks Status  Reset Value */

#define SUPC_STATUS_BOD33RDY_Pos              _UINT32_(0)                                          /* (SUPC_STATUS) BOD33 Ready Position */
#define SUPC_STATUS_BOD33RDY_Msk              (_UINT32_(0x1) << SUPC_STATUS_BOD33RDY_Pos)          /* (SUPC_STATUS) BOD33 Ready Mask */
#define SUPC_STATUS_BOD33RDY(value)           (SUPC_STATUS_BOD33RDY_Msk & (_UINT32_(value) << SUPC_STATUS_BOD33RDY_Pos)) /* Assignment of value for BOD33RDY in the SUPC_STATUS register */
#define SUPC_STATUS_BOD33DET_Pos              _UINT32_(1)                                          /* (SUPC_STATUS) BOD33 Detection Position */
#define SUPC_STATUS_BOD33DET_Msk              (_UINT32_(0x1) << SUPC_STATUS_BOD33DET_Pos)          /* (SUPC_STATUS) BOD33 Detection Mask */
#define SUPC_STATUS_BOD33DET(value)           (SUPC_STATUS_BOD33DET_Msk & (_UINT32_(value) << SUPC_STATUS_BOD33DET_Pos)) /* Assignment of value for BOD33DET in the SUPC_STATUS register */
#define SUPC_STATUS_B33SRDY_Pos               _UINT32_(2)                                          /* (SUPC_STATUS) BOD33 Synchronization Ready Position */
#define SUPC_STATUS_B33SRDY_Msk               (_UINT32_(0x1) << SUPC_STATUS_B33SRDY_Pos)           /* (SUPC_STATUS) BOD33 Synchronization Ready Mask */
#define SUPC_STATUS_B33SRDY(value)            (SUPC_STATUS_B33SRDY_Msk & (_UINT32_(value) << SUPC_STATUS_B33SRDY_Pos)) /* Assignment of value for B33SRDY in the SUPC_STATUS register */
#define SUPC_STATUS_VREGRDY_Pos               _UINT32_(8)                                          /* (SUPC_STATUS) Voltage Regulator Ready Position */
#define SUPC_STATUS_VREGRDY_Msk               (_UINT32_(0x1) << SUPC_STATUS_VREGRDY_Pos)           /* (SUPC_STATUS) Voltage Regulator Ready Mask */
#define SUPC_STATUS_VREGRDY(value)            (SUPC_STATUS_VREGRDY_Msk & (_UINT32_(value) << SUPC_STATUS_VREGRDY_Pos)) /* Assignment of value for VREGRDY in the SUPC_STATUS register */
#define SUPC_STATUS_VCORERDY_Pos              _UINT32_(10)                                         /* (SUPC_STATUS) VDDCORE Ready Position */
#define SUPC_STATUS_VCORERDY_Msk              (_UINT32_(0x1) << SUPC_STATUS_VCORERDY_Pos)          /* (SUPC_STATUS) VDDCORE Ready Mask */
#define SUPC_STATUS_VCORERDY(value)           (SUPC_STATUS_VCORERDY_Msk & (_UINT32_(value) << SUPC_STATUS_VCORERDY_Pos)) /* Assignment of value for VCORERDY in the SUPC_STATUS register */
#define SUPC_STATUS_Msk                       _UINT32_(0x00000507)                                 /* (SUPC_STATUS) Register Mask  */


/* -------- SUPC_BOD33 : (SUPC Offset: 0x10) (R/W 32) BOD33 Control -------- */
#define SUPC_BOD33_RESETVALUE                 _UINT32_(0x00)                                       /*  (SUPC_BOD33) BOD33 Control  Reset Value */

#define SUPC_BOD33_ENABLE_Pos                 _UINT32_(1)                                          /* (SUPC_BOD33) Enable Position */
#define SUPC_BOD33_ENABLE_Msk                 (_UINT32_(0x1) << SUPC_BOD33_ENABLE_Pos)             /* (SUPC_BOD33) Enable Mask */
#define SUPC_BOD33_ENABLE(value)              (SUPC_BOD33_ENABLE_Msk & (_UINT32_(value) << SUPC_BOD33_ENABLE_Pos)) /* Assignment of value for ENABLE in the SUPC_BOD33 register */
#define SUPC_BOD33_ACTION_Pos                 _UINT32_(2)                                          /* (SUPC_BOD33) Action when Threshold Crossed Position */
#define SUPC_BOD33_ACTION_Msk                 (_UINT32_(0x3) << SUPC_BOD33_ACTION_Pos)             /* (SUPC_BOD33) Action when Threshold Crossed Mask */
#define SUPC_BOD33_ACTION(value)              (SUPC_BOD33_ACTION_Msk & (_UINT32_(value) << SUPC_BOD33_ACTION_Pos)) /* Assignment of value for ACTION in the SUPC_BOD33 register */
#define   SUPC_BOD33_ACTION_NONE_Val          _UINT32_(0x0)                                        /* (SUPC_BOD33) No action  */
#define   SUPC_BOD33_ACTION_RESET_Val         _UINT32_(0x1)                                        /* (SUPC_BOD33) The BOD33 generates a reset  */
#define   SUPC_BOD33_ACTION_INT_Val           _UINT32_(0x2)                                        /* (SUPC_BOD33) The BOD33 generates an interrupt  */
#define   SUPC_BOD33_ACTION_BKUP_Val          _UINT32_(0x3)                                        /* (SUPC_BOD33) The BOD33 puts the device in backup sleep mode  */
#define SUPC_BOD33_ACTION_NONE                (SUPC_BOD33_ACTION_NONE_Val << SUPC_BOD33_ACTION_Pos) /* (SUPC_BOD33) No action Position */
#define SUPC_BOD33_ACTION_RESET               (SUPC_BOD33_ACTION_RESET_Val << SUPC_BOD33_ACTION_Pos) /* (SUPC_BOD33) The BOD33 generates a reset Position */
#define SUPC_BOD33_ACTION_INT                 (SUPC_BOD33_ACTION_INT_Val << SUPC_BOD33_ACTION_Pos) /* (SUPC_BOD33) The BOD33 generates an interrupt Position */
#define SUPC_BOD33_ACTION_BKUP                (SUPC_BOD33_ACTION_BKUP_Val << SUPC_BOD33_ACTION_Pos) /* (SUPC_BOD33) The BOD33 puts the device in backup sleep mode Position */
#define SUPC_BOD33_STDBYCFG_Pos               _UINT32_(4)                                          /* (SUPC_BOD33) Configuration in Standby mode Position */
#define SUPC_BOD33_STDBYCFG_Msk               (_UINT32_(0x1) << SUPC_BOD33_STDBYCFG_Pos)           /* (SUPC_BOD33) Configuration in Standby mode Mask */
#define SUPC_BOD33_STDBYCFG(value)            (SUPC_BOD33_STDBYCFG_Msk & (_UINT32_(value) << SUPC_BOD33_STDBYCFG_Pos)) /* Assignment of value for STDBYCFG in the SUPC_BOD33 register */
#define SUPC_BOD33_RUNSTDBY_Pos               _UINT32_(5)                                          /* (SUPC_BOD33) Run in Standby mode Position */
#define SUPC_BOD33_RUNSTDBY_Msk               (_UINT32_(0x1) << SUPC_BOD33_RUNSTDBY_Pos)           /* (SUPC_BOD33) Run in Standby mode Mask */
#define SUPC_BOD33_RUNSTDBY(value)            (SUPC_BOD33_RUNSTDBY_Msk & (_UINT32_(value) << SUPC_BOD33_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SUPC_BOD33 register */
#define SUPC_BOD33_RUNHIB_Pos                 _UINT32_(6)                                          /* (SUPC_BOD33) Run in Hibernate mode Position */
#define SUPC_BOD33_RUNHIB_Msk                 (_UINT32_(0x1) << SUPC_BOD33_RUNHIB_Pos)             /* (SUPC_BOD33) Run in Hibernate mode Mask */
#define SUPC_BOD33_RUNHIB(value)              (SUPC_BOD33_RUNHIB_Msk & (_UINT32_(value) << SUPC_BOD33_RUNHIB_Pos)) /* Assignment of value for RUNHIB in the SUPC_BOD33 register */
#define SUPC_BOD33_RUNBKUP_Pos                _UINT32_(7)                                          /* (SUPC_BOD33) Run in Backup mode Position */
#define SUPC_BOD33_RUNBKUP_Msk                (_UINT32_(0x1) << SUPC_BOD33_RUNBKUP_Pos)            /* (SUPC_BOD33) Run in Backup mode Mask */
#define SUPC_BOD33_RUNBKUP(value)             (SUPC_BOD33_RUNBKUP_Msk & (_UINT32_(value) << SUPC_BOD33_RUNBKUP_Pos)) /* Assignment of value for RUNBKUP in the SUPC_BOD33 register */
#define SUPC_BOD33_HYST_Pos                   _UINT32_(8)                                          /* (SUPC_BOD33) Hysteresis value Position */
#define SUPC_BOD33_HYST_Msk                   (_UINT32_(0xF) << SUPC_BOD33_HYST_Pos)               /* (SUPC_BOD33) Hysteresis value Mask */
#define SUPC_BOD33_HYST(value)                (SUPC_BOD33_HYST_Msk & (_UINT32_(value) << SUPC_BOD33_HYST_Pos)) /* Assignment of value for HYST in the SUPC_BOD33 register */
#define SUPC_BOD33_PSEL_Pos                   _UINT32_(12)                                         /* (SUPC_BOD33) Prescaler Select Position */
#define SUPC_BOD33_PSEL_Msk                   (_UINT32_(0x7) << SUPC_BOD33_PSEL_Pos)               /* (SUPC_BOD33) Prescaler Select Mask */
#define SUPC_BOD33_PSEL(value)                (SUPC_BOD33_PSEL_Msk & (_UINT32_(value) << SUPC_BOD33_PSEL_Pos)) /* Assignment of value for PSEL in the SUPC_BOD33 register */
#define   SUPC_BOD33_PSEL_NODIV_Val           _UINT32_(0x0)                                        /* (SUPC_BOD33) Not divided  */
#define   SUPC_BOD33_PSEL_DIV4_Val            _UINT32_(0x1)                                        /* (SUPC_BOD33) Divide clock by 4  */
#define   SUPC_BOD33_PSEL_DIV8_Val            _UINT32_(0x2)                                        /* (SUPC_BOD33) Divide clock by 8  */
#define   SUPC_BOD33_PSEL_DIV16_Val           _UINT32_(0x3)                                        /* (SUPC_BOD33) Divide clock by 16  */
#define   SUPC_BOD33_PSEL_DIV32_Val           _UINT32_(0x4)                                        /* (SUPC_BOD33) Divide clock by 32  */
#define   SUPC_BOD33_PSEL_DIV64_Val           _UINT32_(0x5)                                        /* (SUPC_BOD33) Divide clock by 64  */
#define   SUPC_BOD33_PSEL_DIV128_Val          _UINT32_(0x6)                                        /* (SUPC_BOD33) Divide clock by 128  */
#define   SUPC_BOD33_PSEL_DIV256_Val          _UINT32_(0x7)                                        /* (SUPC_BOD33) Divide clock by 256  */
#define SUPC_BOD33_PSEL_NODIV                 (SUPC_BOD33_PSEL_NODIV_Val << SUPC_BOD33_PSEL_Pos)   /* (SUPC_BOD33) Not divided Position */
#define SUPC_BOD33_PSEL_DIV4                  (SUPC_BOD33_PSEL_DIV4_Val << SUPC_BOD33_PSEL_Pos)    /* (SUPC_BOD33) Divide clock by 4 Position */
#define SUPC_BOD33_PSEL_DIV8                  (SUPC_BOD33_PSEL_DIV8_Val << SUPC_BOD33_PSEL_Pos)    /* (SUPC_BOD33) Divide clock by 8 Position */
#define SUPC_BOD33_PSEL_DIV16                 (SUPC_BOD33_PSEL_DIV16_Val << SUPC_BOD33_PSEL_Pos)   /* (SUPC_BOD33) Divide clock by 16 Position */
#define SUPC_BOD33_PSEL_DIV32                 (SUPC_BOD33_PSEL_DIV32_Val << SUPC_BOD33_PSEL_Pos)   /* (SUPC_BOD33) Divide clock by 32 Position */
#define SUPC_BOD33_PSEL_DIV64                 (SUPC_BOD33_PSEL_DIV64_Val << SUPC_BOD33_PSEL_Pos)   /* (SUPC_BOD33) Divide clock by 64 Position */
#define SUPC_BOD33_PSEL_DIV128                (SUPC_BOD33_PSEL_DIV128_Val << SUPC_BOD33_PSEL_Pos)  /* (SUPC_BOD33) Divide clock by 128 Position */
#define SUPC_BOD33_PSEL_DIV256                (SUPC_BOD33_PSEL_DIV256_Val << SUPC_BOD33_PSEL_Pos)  /* (SUPC_BOD33) Divide clock by 256 Position */
#define SUPC_BOD33_LEVEL_Pos                  _UINT32_(16)                                         /* (SUPC_BOD33) Threshold Level for VDD Position */
#define SUPC_BOD33_LEVEL_Msk                  (_UINT32_(0xFF) << SUPC_BOD33_LEVEL_Pos)             /* (SUPC_BOD33) Threshold Level for VDD Mask */
#define SUPC_BOD33_LEVEL(value)               (SUPC_BOD33_LEVEL_Msk & (_UINT32_(value) << SUPC_BOD33_LEVEL_Pos)) /* Assignment of value for LEVEL in the SUPC_BOD33 register */
#define SUPC_BOD33_VBATLEVEL_Pos              _UINT32_(24)                                         /* (SUPC_BOD33) Threshold Level in battery backup sleep mode for VBAT Position */
#define SUPC_BOD33_VBATLEVEL_Msk              (_UINT32_(0xFF) << SUPC_BOD33_VBATLEVEL_Pos)         /* (SUPC_BOD33) Threshold Level in battery backup sleep mode for VBAT Mask */
#define SUPC_BOD33_VBATLEVEL(value)           (SUPC_BOD33_VBATLEVEL_Msk & (_UINT32_(value) << SUPC_BOD33_VBATLEVEL_Pos)) /* Assignment of value for VBATLEVEL in the SUPC_BOD33 register */
#define SUPC_BOD33_Msk                        _UINT32_(0xFFFF7FFE)                                 /* (SUPC_BOD33) Register Mask  */


/* -------- SUPC_VREG : (SUPC Offset: 0x18) (R/W 32) VREG Control -------- */
#define SUPC_VREG_RESETVALUE                  _UINT32_(0x02)                                       /*  (SUPC_VREG) VREG Control  Reset Value */

#define SUPC_VREG_ENABLE_Pos                  _UINT32_(1)                                          /* (SUPC_VREG) Enable Position */
#define SUPC_VREG_ENABLE_Msk                  (_UINT32_(0x1) << SUPC_VREG_ENABLE_Pos)              /* (SUPC_VREG) Enable Mask */
#define SUPC_VREG_ENABLE(value)               (SUPC_VREG_ENABLE_Msk & (_UINT32_(value) << SUPC_VREG_ENABLE_Pos)) /* Assignment of value for ENABLE in the SUPC_VREG register */
#define SUPC_VREG_SEL_Pos                     _UINT32_(2)                                          /* (SUPC_VREG) Voltage Regulator Selection Position */
#define SUPC_VREG_SEL_Msk                     (_UINT32_(0x1) << SUPC_VREG_SEL_Pos)                 /* (SUPC_VREG) Voltage Regulator Selection Mask */
#define SUPC_VREG_SEL(value)                  (SUPC_VREG_SEL_Msk & (_UINT32_(value) << SUPC_VREG_SEL_Pos)) /* Assignment of value for SEL in the SUPC_VREG register */
#define   SUPC_VREG_SEL_LDO_Val               _UINT32_(0x0)                                        /* (SUPC_VREG) LDO selection  */
#define   SUPC_VREG_SEL_BUCK_Val              _UINT32_(0x1)                                        /* (SUPC_VREG) Buck selection  */
#define SUPC_VREG_SEL_LDO                     (SUPC_VREG_SEL_LDO_Val << SUPC_VREG_SEL_Pos)         /* (SUPC_VREG) LDO selection Position */
#define SUPC_VREG_SEL_BUCK                    (SUPC_VREG_SEL_BUCK_Val << SUPC_VREG_SEL_Pos)        /* (SUPC_VREG) Buck selection Position */
#define SUPC_VREG_RUNBKUP_Pos                 _UINT32_(7)                                          /* (SUPC_VREG) Run in Backup mode Position */
#define SUPC_VREG_RUNBKUP_Msk                 (_UINT32_(0x1) << SUPC_VREG_RUNBKUP_Pos)             /* (SUPC_VREG) Run in Backup mode Mask */
#define SUPC_VREG_RUNBKUP(value)              (SUPC_VREG_RUNBKUP_Msk & (_UINT32_(value) << SUPC_VREG_RUNBKUP_Pos)) /* Assignment of value for RUNBKUP in the SUPC_VREG register */
#define SUPC_VREG_VSEN_Pos                    _UINT32_(16)                                         /* (SUPC_VREG) Voltage Scaling Enable Position */
#define SUPC_VREG_VSEN_Msk                    (_UINT32_(0x1) << SUPC_VREG_VSEN_Pos)                /* (SUPC_VREG) Voltage Scaling Enable Mask */
#define SUPC_VREG_VSEN(value)                 (SUPC_VREG_VSEN_Msk & (_UINT32_(value) << SUPC_VREG_VSEN_Pos)) /* Assignment of value for VSEN in the SUPC_VREG register */
#define SUPC_VREG_VSPER_Pos                   _UINT32_(24)                                         /* (SUPC_VREG) Voltage Scaling Period Position */
#define SUPC_VREG_VSPER_Msk                   (_UINT32_(0x7) << SUPC_VREG_VSPER_Pos)               /* (SUPC_VREG) Voltage Scaling Period Mask */
#define SUPC_VREG_VSPER(value)                (SUPC_VREG_VSPER_Msk & (_UINT32_(value) << SUPC_VREG_VSPER_Pos)) /* Assignment of value for VSPER in the SUPC_VREG register */
#define SUPC_VREG_Msk                         _UINT32_(0x07010086)                                 /* (SUPC_VREG) Register Mask  */


/* -------- SUPC_VREF : (SUPC Offset: 0x1C) (R/W 32) VREF Control -------- */
#define SUPC_VREF_RESETVALUE                  _UINT32_(0x00)                                       /*  (SUPC_VREF) VREF Control  Reset Value */

#define SUPC_VREF_TSEN_Pos                    _UINT32_(1)                                          /* (SUPC_VREF) Temperature Sensor Output Enable Position */
#define SUPC_VREF_TSEN_Msk                    (_UINT32_(0x1) << SUPC_VREF_TSEN_Pos)                /* (SUPC_VREF) Temperature Sensor Output Enable Mask */
#define SUPC_VREF_TSEN(value)                 (SUPC_VREF_TSEN_Msk & (_UINT32_(value) << SUPC_VREF_TSEN_Pos)) /* Assignment of value for TSEN in the SUPC_VREF register */
#define SUPC_VREF_VREFOE_Pos                  _UINT32_(2)                                          /* (SUPC_VREF) Voltage Reference Output Enable Position */
#define SUPC_VREF_VREFOE_Msk                  (_UINT32_(0x1) << SUPC_VREF_VREFOE_Pos)              /* (SUPC_VREF) Voltage Reference Output Enable Mask */
#define SUPC_VREF_VREFOE(value)               (SUPC_VREF_VREFOE_Msk & (_UINT32_(value) << SUPC_VREF_VREFOE_Pos)) /* Assignment of value for VREFOE in the SUPC_VREF register */
#define SUPC_VREF_TSSEL_Pos                   _UINT32_(3)                                          /* (SUPC_VREF) Temperature Sensor Selection Position */
#define SUPC_VREF_TSSEL_Msk                   (_UINT32_(0x1) << SUPC_VREF_TSSEL_Pos)               /* (SUPC_VREF) Temperature Sensor Selection Mask */
#define SUPC_VREF_TSSEL(value)                (SUPC_VREF_TSSEL_Msk & (_UINT32_(value) << SUPC_VREF_TSSEL_Pos)) /* Assignment of value for TSSEL in the SUPC_VREF register */
#define SUPC_VREF_RUNSTDBY_Pos                _UINT32_(6)                                          /* (SUPC_VREF) Run during Standby Position */
#define SUPC_VREF_RUNSTDBY_Msk                (_UINT32_(0x1) << SUPC_VREF_RUNSTDBY_Pos)            /* (SUPC_VREF) Run during Standby Mask */
#define SUPC_VREF_RUNSTDBY(value)             (SUPC_VREF_RUNSTDBY_Msk & (_UINT32_(value) << SUPC_VREF_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the SUPC_VREF register */
#define SUPC_VREF_ONDEMAND_Pos                _UINT32_(7)                                          /* (SUPC_VREF) On Demand Contrl Position */
#define SUPC_VREF_ONDEMAND_Msk                (_UINT32_(0x1) << SUPC_VREF_ONDEMAND_Pos)            /* (SUPC_VREF) On Demand Contrl Mask */
#define SUPC_VREF_ONDEMAND(value)             (SUPC_VREF_ONDEMAND_Msk & (_UINT32_(value) << SUPC_VREF_ONDEMAND_Pos)) /* Assignment of value for ONDEMAND in the SUPC_VREF register */
#define SUPC_VREF_SEL_Pos                     _UINT32_(16)                                         /* (SUPC_VREF) Voltage Reference Selection Position */
#define SUPC_VREF_SEL_Msk                     (_UINT32_(0xF) << SUPC_VREF_SEL_Pos)                 /* (SUPC_VREF) Voltage Reference Selection Mask */
#define SUPC_VREF_SEL(value)                  (SUPC_VREF_SEL_Msk & (_UINT32_(value) << SUPC_VREF_SEL_Pos)) /* Assignment of value for SEL in the SUPC_VREF register */
#define   SUPC_VREF_SEL_1V0_Val               _UINT32_(0x0)                                        /* (SUPC_VREF) 1.0V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V1_Val               _UINT32_(0x1)                                        /* (SUPC_VREF) 1.1V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V2_Val               _UINT32_(0x2)                                        /* (SUPC_VREF) 1.2V voltage reference typical value  */
#define   SUPC_VREF_SEL_1V25_Val              _UINT32_(0x3)                                        /* (SUPC_VREF) 1.25V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V0_Val               _UINT32_(0x4)                                        /* (SUPC_VREF) 2.0V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V2_Val               _UINT32_(0x5)                                        /* (SUPC_VREF) 2.2V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V4_Val               _UINT32_(0x6)                                        /* (SUPC_VREF) 2.4V voltage reference typical value  */
#define   SUPC_VREF_SEL_2V5_Val               _UINT32_(0x7)                                        /* (SUPC_VREF) 2.5V voltage reference typical value  */
#define SUPC_VREF_SEL_1V0                     (SUPC_VREF_SEL_1V0_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 1.0V voltage reference typical value Position */
#define SUPC_VREF_SEL_1V1                     (SUPC_VREF_SEL_1V1_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 1.1V voltage reference typical value Position */
#define SUPC_VREF_SEL_1V2                     (SUPC_VREF_SEL_1V2_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 1.2V voltage reference typical value Position */
#define SUPC_VREF_SEL_1V25                    (SUPC_VREF_SEL_1V25_Val << SUPC_VREF_SEL_Pos)        /* (SUPC_VREF) 1.25V voltage reference typical value Position */
#define SUPC_VREF_SEL_2V0                     (SUPC_VREF_SEL_2V0_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 2.0V voltage reference typical value Position */
#define SUPC_VREF_SEL_2V2                     (SUPC_VREF_SEL_2V2_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 2.2V voltage reference typical value Position */
#define SUPC_VREF_SEL_2V4                     (SUPC_VREF_SEL_2V4_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 2.4V voltage reference typical value Position */
#define SUPC_VREF_SEL_2V5                     (SUPC_VREF_SEL_2V5_Val << SUPC_VREF_SEL_Pos)         /* (SUPC_VREF) 2.5V voltage reference typical value Position */
#define SUPC_VREF_Msk                         _UINT32_(0x000F00CE)                                 /* (SUPC_VREF) Register Mask  */


/* -------- SUPC_BBPS : (SUPC Offset: 0x20) (R/W 32) Battery Backup Power Switch -------- */
#define SUPC_BBPS_RESETVALUE                  _UINT32_(0x00)                                       /*  (SUPC_BBPS) Battery Backup Power Switch  Reset Value */

#define SUPC_BBPS_CONF_Pos                    _UINT32_(0)                                          /* (SUPC_BBPS) Battery Backup Configuration Position */
#define SUPC_BBPS_CONF_Msk                    (_UINT32_(0x1) << SUPC_BBPS_CONF_Pos)                /* (SUPC_BBPS) Battery Backup Configuration Mask */
#define SUPC_BBPS_CONF(value)                 (SUPC_BBPS_CONF_Msk & (_UINT32_(value) << SUPC_BBPS_CONF_Pos)) /* Assignment of value for CONF in the SUPC_BBPS register */
#define   SUPC_BBPS_CONF_BOD33_Val            _UINT32_(0x0)                                        /* (SUPC_BBPS) The power switch is handled by the BOD33  */
#define   SUPC_BBPS_CONF_FORCED_Val           _UINT32_(0x1)                                        /* (SUPC_BBPS) In Backup Domain, the backup domain is always supplied by battery backup power  */
#define SUPC_BBPS_CONF_BOD33                  (SUPC_BBPS_CONF_BOD33_Val << SUPC_BBPS_CONF_Pos)     /* (SUPC_BBPS) The power switch is handled by the BOD33 Position */
#define SUPC_BBPS_CONF_FORCED                 (SUPC_BBPS_CONF_FORCED_Val << SUPC_BBPS_CONF_Pos)    /* (SUPC_BBPS) In Backup Domain, the backup domain is always supplied by battery backup power Position */
#define SUPC_BBPS_WAKEEN_Pos                  _UINT32_(2)                                          /* (SUPC_BBPS) Wake Enable Position */
#define SUPC_BBPS_WAKEEN_Msk                  (_UINT32_(0x1) << SUPC_BBPS_WAKEEN_Pos)              /* (SUPC_BBPS) Wake Enable Mask */
#define SUPC_BBPS_WAKEEN(value)               (SUPC_BBPS_WAKEEN_Msk & (_UINT32_(value) << SUPC_BBPS_WAKEEN_Pos)) /* Assignment of value for WAKEEN in the SUPC_BBPS register */
#define SUPC_BBPS_Msk                         _UINT32_(0x00000005)                                 /* (SUPC_BBPS) Register Mask  */


/* -------- SUPC_BKOUT : (SUPC Offset: 0x24) (R/W 32) Backup Output Control -------- */
#define SUPC_BKOUT_RESETVALUE                 _UINT32_(0x00)                                       /*  (SUPC_BKOUT) Backup Output Control  Reset Value */

#define SUPC_BKOUT_ENOUT0_Pos                 _UINT32_(0)                                          /* (SUPC_BKOUT) Enable OUT0 Position */
#define SUPC_BKOUT_ENOUT0_Msk                 (_UINT32_(0x1) << SUPC_BKOUT_ENOUT0_Pos)             /* (SUPC_BKOUT) Enable OUT0 Mask */
#define SUPC_BKOUT_ENOUT0(value)              (SUPC_BKOUT_ENOUT0_Msk & (_UINT32_(value) << SUPC_BKOUT_ENOUT0_Pos)) /* Assignment of value for ENOUT0 in the SUPC_BKOUT register */
#define SUPC_BKOUT_ENOUT1_Pos                 _UINT32_(1)                                          /* (SUPC_BKOUT) Enable OUT1 Position */
#define SUPC_BKOUT_ENOUT1_Msk                 (_UINT32_(0x1) << SUPC_BKOUT_ENOUT1_Pos)             /* (SUPC_BKOUT) Enable OUT1 Mask */
#define SUPC_BKOUT_ENOUT1(value)              (SUPC_BKOUT_ENOUT1_Msk & (_UINT32_(value) << SUPC_BKOUT_ENOUT1_Pos)) /* Assignment of value for ENOUT1 in the SUPC_BKOUT register */
#define SUPC_BKOUT_CLROUT0_Pos                _UINT32_(8)                                          /* (SUPC_BKOUT) Clear OUT0 Position */
#define SUPC_BKOUT_CLROUT0_Msk                (_UINT32_(0x1) << SUPC_BKOUT_CLROUT0_Pos)            /* (SUPC_BKOUT) Clear OUT0 Mask */
#define SUPC_BKOUT_CLROUT0(value)             (SUPC_BKOUT_CLROUT0_Msk & (_UINT32_(value) << SUPC_BKOUT_CLROUT0_Pos)) /* Assignment of value for CLROUT0 in the SUPC_BKOUT register */
#define SUPC_BKOUT_CLROUT1_Pos                _UINT32_(9)                                          /* (SUPC_BKOUT) Clear OUT1 Position */
#define SUPC_BKOUT_CLROUT1_Msk                (_UINT32_(0x1) << SUPC_BKOUT_CLROUT1_Pos)            /* (SUPC_BKOUT) Clear OUT1 Mask */
#define SUPC_BKOUT_CLROUT1(value)             (SUPC_BKOUT_CLROUT1_Msk & (_UINT32_(value) << SUPC_BKOUT_CLROUT1_Pos)) /* Assignment of value for CLROUT1 in the SUPC_BKOUT register */
#define SUPC_BKOUT_SETOUT0_Pos                _UINT32_(16)                                         /* (SUPC_BKOUT) Set OUT0 Position */
#define SUPC_BKOUT_SETOUT0_Msk                (_UINT32_(0x1) << SUPC_BKOUT_SETOUT0_Pos)            /* (SUPC_BKOUT) Set OUT0 Mask */
#define SUPC_BKOUT_SETOUT0(value)             (SUPC_BKOUT_SETOUT0_Msk & (_UINT32_(value) << SUPC_BKOUT_SETOUT0_Pos)) /* Assignment of value for SETOUT0 in the SUPC_BKOUT register */
#define SUPC_BKOUT_SETOUT1_Pos                _UINT32_(17)                                         /* (SUPC_BKOUT) Set OUT1 Position */
#define SUPC_BKOUT_SETOUT1_Msk                (_UINT32_(0x1) << SUPC_BKOUT_SETOUT1_Pos)            /* (SUPC_BKOUT) Set OUT1 Mask */
#define SUPC_BKOUT_SETOUT1(value)             (SUPC_BKOUT_SETOUT1_Msk & (_UINT32_(value) << SUPC_BKOUT_SETOUT1_Pos)) /* Assignment of value for SETOUT1 in the SUPC_BKOUT register */
#define SUPC_BKOUT_RTCTGLOUT0_Pos             _UINT32_(24)                                         /* (SUPC_BKOUT) RTC Toggle OUT0 Position */
#define SUPC_BKOUT_RTCTGLOUT0_Msk             (_UINT32_(0x1) << SUPC_BKOUT_RTCTGLOUT0_Pos)         /* (SUPC_BKOUT) RTC Toggle OUT0 Mask */
#define SUPC_BKOUT_RTCTGLOUT0(value)          (SUPC_BKOUT_RTCTGLOUT0_Msk & (_UINT32_(value) << SUPC_BKOUT_RTCTGLOUT0_Pos)) /* Assignment of value for RTCTGLOUT0 in the SUPC_BKOUT register */
#define SUPC_BKOUT_RTCTGLOUT1_Pos             _UINT32_(25)                                         /* (SUPC_BKOUT) RTC Toggle OUT1 Position */
#define SUPC_BKOUT_RTCTGLOUT1_Msk             (_UINT32_(0x1) << SUPC_BKOUT_RTCTGLOUT1_Pos)         /* (SUPC_BKOUT) RTC Toggle OUT1 Mask */
#define SUPC_BKOUT_RTCTGLOUT1(value)          (SUPC_BKOUT_RTCTGLOUT1_Msk & (_UINT32_(value) << SUPC_BKOUT_RTCTGLOUT1_Pos)) /* Assignment of value for RTCTGLOUT1 in the SUPC_BKOUT register */
#define SUPC_BKOUT_Msk                        _UINT32_(0x03030303)                                 /* (SUPC_BKOUT) Register Mask  */

#define SUPC_BKOUT_ENOUT_Pos                  _UINT32_(0)                                          /* (SUPC_BKOUT Position) Enable OUTx */
#define SUPC_BKOUT_ENOUT_Msk                  (_UINT32_(0x3) << SUPC_BKOUT_ENOUT_Pos)              /* (SUPC_BKOUT Mask) ENOUT */
#define SUPC_BKOUT_ENOUT(value)               (SUPC_BKOUT_ENOUT_Msk & (_UINT32_(value) << SUPC_BKOUT_ENOUT_Pos)) 
#define SUPC_BKOUT_CLROUT_Pos                 _UINT32_(8)                                          /* (SUPC_BKOUT Position) Clear OUTx */
#define SUPC_BKOUT_CLROUT_Msk                 (_UINT32_(0x3) << SUPC_BKOUT_CLROUT_Pos)             /* (SUPC_BKOUT Mask) CLROUT */
#define SUPC_BKOUT_CLROUT(value)              (SUPC_BKOUT_CLROUT_Msk & (_UINT32_(value) << SUPC_BKOUT_CLROUT_Pos)) 
#define SUPC_BKOUT_SETOUT_Pos                 _UINT32_(16)                                         /* (SUPC_BKOUT Position) Set OUTx */
#define SUPC_BKOUT_SETOUT_Msk                 (_UINT32_(0x3) << SUPC_BKOUT_SETOUT_Pos)             /* (SUPC_BKOUT Mask) SETOUT */
#define SUPC_BKOUT_SETOUT(value)              (SUPC_BKOUT_SETOUT_Msk & (_UINT32_(value) << SUPC_BKOUT_SETOUT_Pos)) 
#define SUPC_BKOUT_RTCTGLOUT_Pos              _UINT32_(24)                                         /* (SUPC_BKOUT Position) RTC Toggle OUTx */
#define SUPC_BKOUT_RTCTGLOUT_Msk              (_UINT32_(0x3) << SUPC_BKOUT_RTCTGLOUT_Pos)          /* (SUPC_BKOUT Mask) RTCTGLOUT */
#define SUPC_BKOUT_RTCTGLOUT(value)           (SUPC_BKOUT_RTCTGLOUT_Msk & (_UINT32_(value) << SUPC_BKOUT_RTCTGLOUT_Pos)) 

/* -------- SUPC_BKIN : (SUPC Offset: 0x28) ( R/ 32) Backup Input Control -------- */
#define SUPC_BKIN_RESETVALUE                  _UINT32_(0x00)                                       /*  (SUPC_BKIN) Backup Input Control  Reset Value */

#define SUPC_BKIN_BKIN0_Pos                   _UINT32_(0)                                          /* (SUPC_BKIN) Backup Input 0 Position */
#define SUPC_BKIN_BKIN0_Msk                   (_UINT32_(0x1) << SUPC_BKIN_BKIN0_Pos)               /* (SUPC_BKIN) Backup Input 0 Mask */
#define SUPC_BKIN_BKIN0(value)                (SUPC_BKIN_BKIN0_Msk & (_UINT32_(value) << SUPC_BKIN_BKIN0_Pos)) /* Assignment of value for BKIN0 in the SUPC_BKIN register */
#define SUPC_BKIN_BKIN1_Pos                   _UINT32_(1)                                          /* (SUPC_BKIN) Backup Input 1 Position */
#define SUPC_BKIN_BKIN1_Msk                   (_UINT32_(0x1) << SUPC_BKIN_BKIN1_Pos)               /* (SUPC_BKIN) Backup Input 1 Mask */
#define SUPC_BKIN_BKIN1(value)                (SUPC_BKIN_BKIN1_Msk & (_UINT32_(value) << SUPC_BKIN_BKIN1_Pos)) /* Assignment of value for BKIN1 in the SUPC_BKIN register */
#define SUPC_BKIN_Msk                         _UINT32_(0x00000003)                                 /* (SUPC_BKIN) Register Mask  */

#define SUPC_BKIN_BKIN_Pos                    _UINT32_(0)                                          /* (SUPC_BKIN Position) Backup Input x */
#define SUPC_BKIN_BKIN_Msk                    (_UINT32_(0x3) << SUPC_BKIN_BKIN_Pos)                /* (SUPC_BKIN Mask) BKIN */
#define SUPC_BKIN_BKIN(value)                 (SUPC_BKIN_BKIN_Msk & (_UINT32_(value) << SUPC_BKIN_BKIN_Pos)) 

/* SUPC register offsets definitions */
#define SUPC_INTENCLR_REG_OFST         _UINT32_(0x00)      /* (SUPC_INTENCLR) Interrupt Enable Clear Offset */
#define SUPC_INTENSET_REG_OFST         _UINT32_(0x04)      /* (SUPC_INTENSET) Interrupt Enable Set Offset */
#define SUPC_INTFLAG_REG_OFST          _UINT32_(0x08)      /* (SUPC_INTFLAG) Interrupt Flag Status and Clear Offset */
#define SUPC_STATUS_REG_OFST           _UINT32_(0x0C)      /* (SUPC_STATUS) Power and Clocks Status Offset */
#define SUPC_BOD33_REG_OFST            _UINT32_(0x10)      /* (SUPC_BOD33) BOD33 Control Offset */
#define SUPC_VREG_REG_OFST             _UINT32_(0x18)      /* (SUPC_VREG) VREG Control Offset */
#define SUPC_VREF_REG_OFST             _UINT32_(0x1C)      /* (SUPC_VREF) VREF Control Offset */
#define SUPC_BBPS_REG_OFST             _UINT32_(0x20)      /* (SUPC_BBPS) Battery Backup Power Switch Offset */
#define SUPC_BKOUT_REG_OFST            _UINT32_(0x24)      /* (SUPC_BKOUT) Backup Output Control Offset */
#define SUPC_BKIN_REG_OFST             _UINT32_(0x28)      /* (SUPC_BKIN) Backup Input Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SUPC register API structure */
typedef struct
{  /* Supply Controller */
  __IO  uint32_t                       SUPC_INTENCLR;      /* Offset: 0x00 (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       SUPC_INTENSET;      /* Offset: 0x04 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       SUPC_INTFLAG;       /* Offset: 0x08 (R/W  32) Interrupt Flag Status and Clear */
  __I   uint32_t                       SUPC_STATUS;        /* Offset: 0x0C (R/   32) Power and Clocks Status */
  __IO  uint32_t                       SUPC_BOD33;         /* Offset: 0x10 (R/W  32) BOD33 Control */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       SUPC_VREG;          /* Offset: 0x18 (R/W  32) VREG Control */
  __IO  uint32_t                       SUPC_VREF;          /* Offset: 0x1C (R/W  32) VREF Control */
  __IO  uint32_t                       SUPC_BBPS;          /* Offset: 0x20 (R/W  32) Battery Backup Power Switch */
  __IO  uint32_t                       SUPC_BKOUT;         /* Offset: 0x24 (R/W  32) Backup Output Control */
  __I   uint32_t                       SUPC_BKIN;          /* Offset: 0x28 (R/   32) Backup Input Control */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAME53_SUPC_COMPONENT_H_ */
