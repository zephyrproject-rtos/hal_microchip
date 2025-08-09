/*
 * Component description for SMBIST
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
#ifndef _PIC32CMJH01_SMBIST_COMPONENT_H_
#define _PIC32CMJH01_SMBIST_COMPONENT_H_

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SMBIST                     */
/* ************************************************************************** */

/* -------- SMBIST_CTRL : (SMBIST Offset: 0x00) (R/W 32) Control -------- */
#define SMBIST_CTRL_RESETVALUE                _UINT32_(0x00)                                       /*  (SMBIST_CTRL) Control  Reset Value */

#define SMBIST_CTRL_SMBISTP1_Pos              _UINT32_(0)                                          /* (SMBIST_CTRL) SRAM MBIST Partition 1 test start Position */
#define SMBIST_CTRL_SMBISTP1_Msk              (_UINT32_(0x1) << SMBIST_CTRL_SMBISTP1_Pos)          /* (SMBIST_CTRL) SRAM MBIST Partition 1 test start Mask */
#define SMBIST_CTRL_SMBISTP1(value)           (SMBIST_CTRL_SMBISTP1_Msk & (_UINT32_(value) << SMBIST_CTRL_SMBISTP1_Pos)) /* Assignment of value for SMBISTP1 in the SMBIST_CTRL register */
#define SMBIST_CTRL_SMBISTP2_Pos              _UINT32_(1)                                          /* (SMBIST_CTRL) SRAM MBIST Partition 2 test start Position */
#define SMBIST_CTRL_SMBISTP2_Msk              (_UINT32_(0x1) << SMBIST_CTRL_SMBISTP2_Pos)          /* (SMBIST_CTRL) SRAM MBIST Partition 2 test start Mask */
#define SMBIST_CTRL_SMBISTP2(value)           (SMBIST_CTRL_SMBISTP2_Msk & (_UINT32_(value) << SMBIST_CTRL_SMBISTP2_Pos)) /* Assignment of value for SMBISTP2 in the SMBIST_CTRL register */
#define SMBIST_CTRL_Msk                       _UINT32_(0x00000003)                                 /* (SMBIST_CTRL) Register Mask  */

#define SMBIST_CTRL_SMBISTP_Pos               _UINT32_(0)                                          /* (SMBIST_CTRL Position) SRAM MBIST Partition 2 test start */
#define SMBIST_CTRL_SMBISTP_Msk               (_UINT32_(0x3) << SMBIST_CTRL_SMBISTP_Pos)           /* (SMBIST_CTRL Mask) SMBISTP */
#define SMBIST_CTRL_SMBISTP(value)            (SMBIST_CTRL_SMBISTP_Msk & (_UINT32_(value) << SMBIST_CTRL_SMBISTP_Pos)) 

/* -------- SMBIST_STATUS : (SMBIST Offset: 0x04) (R/W 32) Status -------- */
#define SMBIST_STATUS_RESETVALUE              _UINT32_(0x00)                                       /*  (SMBIST_STATUS) Status  Reset Value */

#define SMBIST_STATUS_DONE_Pos                _UINT32_(0)                                          /* (SMBIST_STATUS) Done Position */
#define SMBIST_STATUS_DONE_Msk                (_UINT32_(0x1) << SMBIST_STATUS_DONE_Pos)            /* (SMBIST_STATUS) Done Mask */
#define SMBIST_STATUS_DONE(value)             (SMBIST_STATUS_DONE_Msk & (_UINT32_(value) << SMBIST_STATUS_DONE_Pos)) /* Assignment of value for DONE in the SMBIST_STATUS register */
#define SMBIST_STATUS_FAIL_Pos                _UINT32_(1)                                          /* (SMBIST_STATUS) Fail Position */
#define SMBIST_STATUS_FAIL_Msk                (_UINT32_(0x1) << SMBIST_STATUS_FAIL_Pos)            /* (SMBIST_STATUS) Fail Mask */
#define SMBIST_STATUS_FAIL(value)             (SMBIST_STATUS_FAIL_Msk & (_UINT32_(value) << SMBIST_STATUS_FAIL_Pos)) /* Assignment of value for FAIL in the SMBIST_STATUS register */
#define SMBIST_STATUS_Msk                     _UINT32_(0x00000003)                                 /* (SMBIST_STATUS) Register Mask  */


/* SMBIST register offsets definitions */
#define SMBIST_CTRL_REG_OFST           _UINT32_(0x00)      /* (SMBIST_CTRL) Control Offset */
#define SMBIST_STATUS_REG_OFST         _UINT32_(0x04)      /* (SMBIST_STATUS) Status Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SMBIST register API structure */
typedef struct
{  /* SRAM MBIST Interface */
  __IO  uint32_t                       SMBIST_CTRL;        /* Offset: 0x00 (R/W  32) Control */
  __IO  uint32_t                       SMBIST_STATUS;      /* Offset: 0x04 (R/W  32) Status */
} smbist_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMJH01_SMBIST_COMPONENT_H_ */
