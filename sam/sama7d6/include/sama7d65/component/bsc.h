/*
 * Component description for BSC
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
#ifndef _SAMA7D_BSC_COMPONENT_H_
#define _SAMA7D_BSC_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR BSC                       */
/* ************************************************************************** */

/* -------- BSC_CR : (BSC Offset: 0x04) (R/W 32) Boot Sequence Controller Configuration Register -------- */
#define BSC_CR_BOOT_Pos                       _UINT32_(0)                                          /* (BSC_CR) Boot Media Sequence Position */
#define BSC_CR_BOOT_Msk                       (_UINT32_(0xFFFF) << BSC_CR_BOOT_Pos)                /* (BSC_CR) Boot Media Sequence Mask */
#define BSC_CR_BOOT(value)                    (BSC_CR_BOOT_Msk & (_UINT32_(value) << BSC_CR_BOOT_Pos)) /* Assignment of value for BOOT in the BSC_CR register */
#define BSC_CR_WPKEY_Pos                      _UINT32_(16)                                         /* (BSC_CR) Write Protection Key (Write-only) Position */
#define BSC_CR_WPKEY_Msk                      (_UINT32_(0xFFFF) << BSC_CR_WPKEY_Pos)               /* (BSC_CR) Write Protection Key (Write-only) Mask */
#define BSC_CR_WPKEY(value)                   (BSC_CR_WPKEY_Msk & (_UINT32_(value) << BSC_CR_WPKEY_Pos)) /* Assignment of value for WPKEY in the BSC_CR register */
#define   BSC_CR_WPKEY_PASSWD_Val             _UINT32_(0x6683)                                     /* (BSC_CR) Writing any other value in this field aborts the write operation of the BOOT field. Always reads as 0.  */
#define BSC_CR_WPKEY_PASSWD                   (BSC_CR_WPKEY_PASSWD_Val << BSC_CR_WPKEY_Pos)        /* (BSC_CR) Writing any other value in this field aborts the write operation of the BOOT field. Always reads as 0. Position */
#define BSC_CR_Msk                            _UINT32_(0xFFFFFFFF)                                 /* (BSC_CR) Register Mask  */


/* BSC register offsets definitions */
#define BSC_CR_REG_OFST                _UINT32_(0x04)      /* (BSC_CR) Boot Sequence Controller Configuration Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* BSC register API structure */
typedef struct
{  /* Boot Sequence Controller */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       BSC_CR;             /* Offset: 0x04 (R/W  32) Boot Sequence Controller Configuration Register */
} bsc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_BSC_COMPONENT_H_ */
