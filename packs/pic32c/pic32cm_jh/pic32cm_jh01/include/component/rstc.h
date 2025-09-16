/*
 * Component description for RSTC
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
#ifndef _PIC32CMJH01_RSTC_COMPONENT_H_
#define _PIC32CMJH01_RSTC_COMPONENT_H_

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR RSTC                      */
/* ************************************************************************** */

/* -------- RSTC_RCAUSE : (RSTC Offset: 0x00) ( R/ 8) Reset Cause -------- */
#define RSTC_RCAUSE_POR_Pos                   _UINT8_(0)                                           /* (RSTC_RCAUSE) Power On Reset Position */
#define RSTC_RCAUSE_POR_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_POR_Pos)                /* (RSTC_RCAUSE) Power On Reset Mask */
#define RSTC_RCAUSE_POR(value)                (RSTC_RCAUSE_POR_Msk & (_UINT8_(value) << RSTC_RCAUSE_POR_Pos)) /* Assignment of value for POR in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BODCORE_Pos               _UINT8_(1)                                           /* (RSTC_RCAUSE) Brown Out CORE Detector Reset Position */
#define RSTC_RCAUSE_BODCORE_Msk               (_UINT8_(0x1) << RSTC_RCAUSE_BODCORE_Pos)            /* (RSTC_RCAUSE) Brown Out CORE Detector Reset Mask */
#define RSTC_RCAUSE_BODCORE(value)            (RSTC_RCAUSE_BODCORE_Msk & (_UINT8_(value) << RSTC_RCAUSE_BODCORE_Pos)) /* Assignment of value for BODCORE in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_BODVDD_Pos                _UINT8_(2)                                           /* (RSTC_RCAUSE) Brown Out VDD Detector Reset Position */
#define RSTC_RCAUSE_BODVDD_Msk                (_UINT8_(0x1) << RSTC_RCAUSE_BODVDD_Pos)             /* (RSTC_RCAUSE) Brown Out VDD Detector Reset Mask */
#define RSTC_RCAUSE_BODVDD(value)             (RSTC_RCAUSE_BODVDD_Msk & (_UINT8_(value) << RSTC_RCAUSE_BODVDD_Pos)) /* Assignment of value for BODVDD in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_EXT_Pos                   _UINT8_(4)                                           /* (RSTC_RCAUSE) External Reset Position */
#define RSTC_RCAUSE_EXT_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_EXT_Pos)                /* (RSTC_RCAUSE) External Reset Mask */
#define RSTC_RCAUSE_EXT(value)                (RSTC_RCAUSE_EXT_Msk & (_UINT8_(value) << RSTC_RCAUSE_EXT_Pos)) /* Assignment of value for EXT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_WDT_Pos                   _UINT8_(5)                                           /* (RSTC_RCAUSE) Watchdog Reset Position */
#define RSTC_RCAUSE_WDT_Msk                   (_UINT8_(0x1) << RSTC_RCAUSE_WDT_Pos)                /* (RSTC_RCAUSE) Watchdog Reset Mask */
#define RSTC_RCAUSE_WDT(value)                (RSTC_RCAUSE_WDT_Msk & (_UINT8_(value) << RSTC_RCAUSE_WDT_Pos)) /* Assignment of value for WDT in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_SYST_Pos                  _UINT8_(6)                                           /* (RSTC_RCAUSE) System Reset Request Position */
#define RSTC_RCAUSE_SYST_Msk                  (_UINT8_(0x1) << RSTC_RCAUSE_SYST_Pos)               /* (RSTC_RCAUSE) System Reset Request Mask */
#define RSTC_RCAUSE_SYST(value)               (RSTC_RCAUSE_SYST_Msk & (_UINT8_(value) << RSTC_RCAUSE_SYST_Pos)) /* Assignment of value for SYST in the RSTC_RCAUSE register */
#define RSTC_RCAUSE_Msk                       _UINT8_(0x77)                                        /* (RSTC_RCAUSE) Register Mask  */


/* RSTC register offsets definitions */
#define RSTC_RCAUSE_REG_OFST           _UINT32_(0x00)      /* (RSTC_RCAUSE) Reset Cause Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* RSTC register API structure */
typedef struct
{  /* Reset Controller */
  __I   uint8_t                        RSTC_RCAUSE;        /* Offset: 0x00 (R/   8) Reset Cause */
} rstc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMJH01_RSTC_COMPONENT_H_ */
