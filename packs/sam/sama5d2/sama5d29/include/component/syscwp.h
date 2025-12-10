/*
 * Component description for SYSCWP
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

/*  file generated from device description file (ATDF) version 2025-07-09T11:00:00Z  */
#ifndef _SAMA5D2_SYSCWP_COMPONENT_H_
#define _SAMA5D2_SYSCWP_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SYSCWP                     */
/* ************************************************************************** */

/* -------- SYSCWP_SYSC_WPMR : (SYSCWP Offset: 0x00) (R/W 32) Write Protection Mode Register -------- */
#define SYSCWP_SYSC_WPMR_RESETVALUE           _UINT32_(0x00)                                       /*  (SYSCWP_SYSC_WPMR) Write Protection Mode Register  Reset Value */

#define SYSCWP_SYSC_WPMR_WPEN_Pos             _UINT32_(0)                                          /* (SYSCWP_SYSC_WPMR) Write Protection Enable Position */
#define SYSCWP_SYSC_WPMR_WPEN_Msk             (_UINT32_(0x1) << SYSCWP_SYSC_WPMR_WPEN_Pos)         /* (SYSCWP_SYSC_WPMR) Write Protection Enable Mask */
#define SYSCWP_SYSC_WPMR_WPEN(value)          (SYSCWP_SYSC_WPMR_WPEN_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SYSCWP_SYSC_WPMR register */
#define   SYSCWP_SYSC_WPMR_WPEN_0_Val         _UINT32_(0x0)                                        /* (SYSCWP_SYSC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x535943 (SYC in ASCII).  */
#define   SYSCWP_SYSC_WPMR_WPEN_1_Val         _UINT32_(0x1)                                        /* (SYSCWP_SYSC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x535943 (SYC in ASCII).  */
#define SYSCWP_SYSC_WPMR_WPEN_0               (SYSCWP_SYSC_WPMR_WPEN_0_Val << SYSCWP_SYSC_WPMR_WPEN_Pos) /* (SYSCWP_SYSC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x535943 (SYC in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPEN_1               (SYSCWP_SYSC_WPMR_WPEN_1_Val << SYSCWP_SYSC_WPMR_WPEN_Pos) /* (SYSCWP_SYSC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x535943 (SYC in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPKEY_Pos            _UINT32_(8)                                          /* (SYSCWP_SYSC_WPMR) Write Protection Key Position */
#define SYSCWP_SYSC_WPMR_WPKEY_Msk            (_UINT32_(0xFFFFFF) << SYSCWP_SYSC_WPMR_WPKEY_Pos)   /* (SYSCWP_SYSC_WPMR) Write Protection Key Mask */
#define SYSCWP_SYSC_WPMR_WPKEY(value)         (SYSCWP_SYSC_WPMR_WPKEY_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SYSCWP_SYSC_WPMR register */
#define   SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val   _UINT32_(0x535943)                                   /* (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0.  */
#define SYSCWP_SYSC_WPMR_WPKEY_PASSWD         (SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val << SYSCWP_SYSC_WPMR_WPKEY_Pos) /* (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0. Position */
#define SYSCWP_SYSC_WPMR_Msk                  _UINT32_(0xFFFFFF01)                                 /* (SYSCWP_SYSC_WPMR) Register Mask  */


/* SYSCWP register offsets definitions */
#define SYSCWP_SYSC_WPMR_REG_OFST      _UINT32_(0x00)      /* (SYSCWP_SYSC_WPMR) Write Protection Mode Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SYSCWP register API structure */
typedef struct
{  /* System Controller Write Protection */
  __IO  uint32_t                       SYSCWP_SYSC_WPMR;   /* Offset: 0x00 (R/W  32) Write Protection Mode Register */
} syscwp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA5D2_SYSCWP_COMPONENT_H_ */
