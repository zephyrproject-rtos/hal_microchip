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

/*  file generated from device description file (ATDF) version 2025-05-27T09:30:00Z  */
#ifndef _SAMA7D_SYSCWP_COMPONENT_H_
#define _SAMA7D_SYSCWP_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR SYSCWP                     */
/* ************************************************************************** */

/* -------- SYSCWP_SYSC_WPMR : (SYSCWP Offset: 0x00) (R/W 32) Write Protection Mode Register -------- */
#define SYSCWP_SYSC_WPMR_RESETVALUE           _UINT32_(0x00)                                       /*  (SYSCWP_SYSC_WPMR) Write Protection Mode Register  Reset Value */

#define SYSCWP_SYSC_WPMR_WPEN_Pos             _UINT32_(0)                                          /* (SYSCWP_SYSC_WPMR) Write Protection Enable Position */
#define SYSCWP_SYSC_WPMR_WPEN_Msk             (_UINT32_(0x1) << SYSCWP_SYSC_WPMR_WPEN_Pos)         /* (SYSCWP_SYSC_WPMR) Write Protection Enable Mask */
#define SYSCWP_SYSC_WPMR_WPEN(value)          (SYSCWP_SYSC_WPMR_WPEN_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPMR_WPEN_Pos)) /* Assignment of value for WPEN in the SYSCWP_SYSC_WPMR register */
#define   SYSCWP_SYSC_WPMR_WPEN_0_Val         _UINT32_(0x0)                                        /* (SYSCWP_SYSC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII).  */
#define   SYSCWP_SYSC_WPMR_WPEN_1_Val         _UINT32_(0x1)                                        /* (SYSCWP_SYSC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII).  */
#define SYSCWP_SYSC_WPMR_WPEN_0               (SYSCWP_SYSC_WPMR_WPEN_0_Val << SYSCWP_SYSC_WPMR_WPEN_Pos) /* (SYSCWP_SYSC_WPMR) Disables the write protection of the configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPEN_1               (SYSCWP_SYSC_WPMR_WPEN_1_Val << SYSCWP_SYSC_WPMR_WPEN_Pos) /* (SYSCWP_SYSC_WPMR) Enables the write protection of the configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPITEN_Pos           _UINT32_(1)                                          /* (SYSCWP_SYSC_WPMR) Write Protection RTC Interrupt Enable Position */
#define SYSCWP_SYSC_WPMR_WPITEN_Msk           (_UINT32_(0x1) << SYSCWP_SYSC_WPMR_WPITEN_Pos)       /* (SYSCWP_SYSC_WPMR) Write Protection RTC Interrupt Enable Mask */
#define SYSCWP_SYSC_WPMR_WPITEN(value)        (SYSCWP_SYSC_WPMR_WPITEN_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPMR_WPITEN_Pos)) /* Assignment of value for WPITEN in the SYSCWP_SYSC_WPMR register */
#define   SYSCWP_SYSC_WPMR_WPITEN_0_Val       _UINT32_(0x0)                                        /* (SYSCWP_SYSC_WPMR) Disables the write protection of the RTC_IER/RTC_IDR configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII).  */
#define   SYSCWP_SYSC_WPMR_WPITEN_1_Val       _UINT32_(0x1)                                        /* (SYSCWP_SYSC_WPMR) Enables the write protection of the RTC_IER/RTC_IDR configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII).  */
#define SYSCWP_SYSC_WPMR_WPITEN_0             (SYSCWP_SYSC_WPMR_WPITEN_0_Val << SYSCWP_SYSC_WPMR_WPITEN_Pos) /* (SYSCWP_SYSC_WPMR) Disables the write protection of the RTC_IER/RTC_IDR configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPITEN_1             (SYSCWP_SYSC_WPMR_WPITEN_1_Val << SYSCWP_SYSC_WPMR_WPITEN_Pos) /* (SYSCWP_SYSC_WPMR) Enables the write protection of the RTC_IER/RTC_IDR configuration registers if WPKEY corresponds to 0x535943 ("SYC" in ASCII). Position */
#define SYSCWP_SYSC_WPMR_WPKEY_Pos            _UINT32_(8)                                          /* (SYSCWP_SYSC_WPMR) Write Protection Key Position */
#define SYSCWP_SYSC_WPMR_WPKEY_Msk            (_UINT32_(0xFFFFFF) << SYSCWP_SYSC_WPMR_WPKEY_Pos)   /* (SYSCWP_SYSC_WPMR) Write Protection Key Mask */
#define SYSCWP_SYSC_WPMR_WPKEY(value)         (SYSCWP_SYSC_WPMR_WPKEY_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPMR_WPKEY_Pos)) /* Assignment of value for WPKEY in the SYSCWP_SYSC_WPMR register */
#define   SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val   _UINT32_(0x535943)                                   /* (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0.  */
#define SYSCWP_SYSC_WPMR_WPKEY_PASSWD         (SYSCWP_SYSC_WPMR_WPKEY_PASSWD_Val << SYSCWP_SYSC_WPMR_WPKEY_Pos) /* (SYSCWP_SYSC_WPMR) Writing any other value in this field aborts the write operation of the WPEN and WPITEN bits. Always reads as 0. Position */
#define SYSCWP_SYSC_WPMR_Msk                  _UINT32_(0xFFFFFF03)                                 /* (SYSCWP_SYSC_WPMR) Register Mask  */


/* -------- SYSCWP_SYSC_WPSR : (SYSCWP Offset: 0x04) ( R/ 32) Write Protection Status Register -------- */
#define SYSCWP_SYSC_WPSR_RESETVALUE           _UINT32_(0x00)                                       /*  (SYSCWP_SYSC_WPSR) Write Protection Status Register  Reset Value */

#define SYSCWP_SYSC_WPSR_WPVS_Pos             _UINT32_(0)                                          /* (SYSCWP_SYSC_WPSR) Write Protection Register Violation Status Position */
#define SYSCWP_SYSC_WPSR_WPVS_Msk             (_UINT32_(0x1) << SYSCWP_SYSC_WPSR_WPVS_Pos)         /* (SYSCWP_SYSC_WPSR) Write Protection Register Violation Status Mask */
#define SYSCWP_SYSC_WPSR_WPVS(value)          (SYSCWP_SYSC_WPSR_WPVS_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPSR_WPVS_Pos)) /* Assignment of value for WPVS in the SYSCWP_SYSC_WPSR register */
#define   SYSCWP_SYSC_WPSR_WPVS_0_Val         _UINT32_(0x0)                                        /* (SYSCWP_SYSC_WPSR) No write protection violation has occurred since the last read of SYSC_WPSR.  */
#define   SYSCWP_SYSC_WPSR_WPVS_1_Val         _UINT32_(0x1)                                        /* (SYSCWP_SYSC_WPSR) A write protection violation has occurred since the last read of SYSC_WPSR. The associated violation is reported into field WVSRC.  */
#define SYSCWP_SYSC_WPSR_WPVS_0               (SYSCWP_SYSC_WPSR_WPVS_0_Val << SYSCWP_SYSC_WPSR_WPVS_Pos) /* (SYSCWP_SYSC_WPSR) No write protection violation has occurred since the last read of SYSC_WPSR. Position */
#define SYSCWP_SYSC_WPSR_WPVS_1               (SYSCWP_SYSC_WPSR_WPVS_1_Val << SYSCWP_SYSC_WPSR_WPVS_Pos) /* (SYSCWP_SYSC_WPSR) A write protection violation has occurred since the last read of SYSC_WPSR. The associated violation is reported into field WVSRC. Position */
#define SYSCWP_SYSC_WPSR_WVSRC_Pos            _UINT32_(8)                                          /* (SYSCWP_SYSC_WPSR) Write Violation Source Position */
#define SYSCWP_SYSC_WPSR_WVSRC_Msk            (_UINT32_(0xFF) << SYSCWP_SYSC_WPSR_WVSRC_Pos)       /* (SYSCWP_SYSC_WPSR) Write Violation Source Mask */
#define SYSCWP_SYSC_WPSR_WVSRC(value)         (SYSCWP_SYSC_WPSR_WVSRC_Msk & (_UINT32_(value) << SYSCWP_SYSC_WPSR_WVSRC_Pos)) /* Assignment of value for WVSRC in the SYSCWP_SYSC_WPSR register */
#define SYSCWP_SYSC_WPSR_Msk                  _UINT32_(0x0000FF01)                                 /* (SYSCWP_SYSC_WPSR) Register Mask  */


/* SYSCWP register offsets definitions */
#define SYSCWP_SYSC_WPMR_REG_OFST      _UINT32_(0x00)      /* (SYSCWP_SYSC_WPMR) Write Protection Mode Register Offset */
#define SYSCWP_SYSC_WPSR_REG_OFST      _UINT32_(0x04)      /* (SYSCWP_SYSC_WPSR) Write Protection Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* SYSCWP register API structure */
typedef struct
{  /* External Interrupt Controller */
  __IO  uint32_t                       SYSCWP_SYSC_WPMR;   /* Offset: 0x00 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       SYSCWP_SYSC_WPSR;   /* Offset: 0x04 (R/   32) Write Protection Status Register */
} syscwp_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_SYSCWP_COMPONENT_H_ */
