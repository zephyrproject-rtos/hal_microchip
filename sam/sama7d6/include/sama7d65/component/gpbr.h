/*
 * Component description for GPBR
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
#ifndef _SAMA7D_GPBR_COMPONENT_H_
#define _SAMA7D_GPBR_COMPONENT_H_

#include "core_ca.h"

/* ************************************************************************** */
/*                      SOFTWARE API DEFINITION FOR GPBR                      */
/* ************************************************************************** */

/* -------- GPBR_MR : (GPBR Offset: 0x00) (R/W 32) GPBR Mode Register -------- */
#define GPBR_MR_RESETVALUE                    _UINT32_(0x00)                                       /*  (GPBR_MR) GPBR Mode Register  Reset Value */

#define GPBR_MR_GPBRWP0_Pos                   _UINT32_(0)                                          /* (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP0_Msk                   (_UINT32_(0x1) << GPBR_MR_GPBRWP0_Pos)               /* (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP0(value)                (GPBR_MR_GPBRWP0_Msk & (_UINT32_(value) << GPBR_MR_GPBRWP0_Pos)) /* Assignment of value for GPBRWP0 in the GPBR_MR register */
#define   GPBR_MR_GPBRWP0_0_Val               _UINT32_(0x0)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) can be written.  */
#define   GPBR_MR_GPBRWP0_1_Val               _UINT32_(0x1)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) is write-protected.  */
#define GPBR_MR_GPBRWP0_0                     (GPBR_MR_GPBRWP0_0_Val << GPBR_MR_GPBRWP0_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) can be written. Position */
#define GPBR_MR_GPBRWP0_1                     (GPBR_MR_GPBRWP0_1_Val << GPBR_MR_GPBRWP0_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) is write-protected. Position */
#define GPBR_MR_GPBRWP1_Pos                   _UINT32_(1)                                          /* (GPBR_MR) GPBRx Write Protection Position */
#define GPBR_MR_GPBRWP1_Msk                   (_UINT32_(0x1) << GPBR_MR_GPBRWP1_Pos)               /* (GPBR_MR) GPBRx Write Protection Mask */
#define GPBR_MR_GPBRWP1(value)                (GPBR_MR_GPBRWP1_Msk & (_UINT32_(value) << GPBR_MR_GPBRWP1_Pos)) /* Assignment of value for GPBRWP1 in the GPBR_MR register */
#define   GPBR_MR_GPBRWP1_0_Val               _UINT32_(0x0)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) can be written.  */
#define   GPBR_MR_GPBRWP1_1_Val               _UINT32_(0x1)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) is write-protected.  */
#define GPBR_MR_GPBRWP1_0                     (GPBR_MR_GPBRWP1_0_Val << GPBR_MR_GPBRWP1_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) can be written. Position */
#define GPBR_MR_GPBRWP1_1                     (GPBR_MR_GPBRWP1_1_Val << GPBR_MR_GPBRWP1_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) is write-protected. Position */
#define GPBR_MR_GPBRRP0_Pos                   _UINT32_(16)                                         /* (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP0_Msk                   (_UINT32_(0x1) << GPBR_MR_GPBRRP0_Pos)               /* (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP0(value)                (GPBR_MR_GPBRRP0_Msk & (_UINT32_(value) << GPBR_MR_GPBRRP0_Pos)) /* Assignment of value for GPBRRP0 in the GPBR_MR register */
#define   GPBR_MR_GPBRRP0_0_Val               _UINT32_(0x0)                                        /* (GPBR_MR) The content of the corresponding GPBR register (32-bit part-select) can be read.  */
#define   GPBR_MR_GPBRRP0_1_Val               _UINT32_(0x1)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) always returns zero when read.  */
#define GPBR_MR_GPBRRP0_0                     (GPBR_MR_GPBRRP0_0_Val << GPBR_MR_GPBRRP0_Pos)       /* (GPBR_MR) The content of the corresponding GPBR register (32-bit part-select) can be read. Position */
#define GPBR_MR_GPBRRP0_1                     (GPBR_MR_GPBRRP0_1_Val << GPBR_MR_GPBRRP0_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) always returns zero when read. Position */
#define GPBR_MR_GPBRRP1_Pos                   _UINT32_(17)                                         /* (GPBR_MR) GPBRx Read Protection Position */
#define GPBR_MR_GPBRRP1_Msk                   (_UINT32_(0x1) << GPBR_MR_GPBRRP1_Pos)               /* (GPBR_MR) GPBRx Read Protection Mask */
#define GPBR_MR_GPBRRP1(value)                (GPBR_MR_GPBRRP1_Msk & (_UINT32_(value) << GPBR_MR_GPBRRP1_Pos)) /* Assignment of value for GPBRRP1 in the GPBR_MR register */
#define   GPBR_MR_GPBRRP1_0_Val               _UINT32_(0x0)                                        /* (GPBR_MR) The content of the corresponding GPBR register (32-bit part-select) can be read.  */
#define   GPBR_MR_GPBRRP1_1_Val               _UINT32_(0x1)                                        /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) always returns zero when read.  */
#define GPBR_MR_GPBRRP1_0                     (GPBR_MR_GPBRRP1_0_Val << GPBR_MR_GPBRRP1_Pos)       /* (GPBR_MR) The content of the corresponding GPBR register (32-bit part-select) can be read. Position */
#define GPBR_MR_GPBRRP1_1                     (GPBR_MR_GPBRRP1_1_Val << GPBR_MR_GPBRRP1_Pos)       /* (GPBR_MR) The corresponding GPBR register (32-bit part-select) always returns zero when read. Position */
#define GPBR_MR_Msk                           _UINT32_(0x00030003)                                 /* (GPBR_MR) Register Mask  */

#define GPBR_MR_GPBRWP_Pos                    _UINT32_(0)                                          /* (GPBR_MR Position) GPBRx Write Protection */
#define GPBR_MR_GPBRWP_Msk                    (_UINT32_(0x3) << GPBR_MR_GPBRWP_Pos)                /* (GPBR_MR Mask) GPBRWP */
#define GPBR_MR_GPBRWP(value)                 (GPBR_MR_GPBRWP_Msk & (_UINT32_(value) << GPBR_MR_GPBRWP_Pos)) 
#define GPBR_MR_GPBRRP_Pos                    _UINT32_(16)                                         /* (GPBR_MR Position) GPBRx Read Protection */
#define GPBR_MR_GPBRRP_Msk                    (_UINT32_(0x3) << GPBR_MR_GPBRRP_Pos)                /* (GPBR_MR Mask) GPBRRP */
#define GPBR_MR_GPBRRP(value)                 (GPBR_MR_GPBRRP_Msk & (_UINT32_(value) << GPBR_MR_GPBRRP_Pos)) 

/* -------- GPBR_FCLR : (GPBR Offset: 0x04) (R/W 32) GPBR Full Clear Register -------- */
#define GPBR_FCLR_RESETVALUE                  _UINT32_(0x00)                                       /*  (GPBR_FCLR) GPBR Full Clear Register  Reset Value */

#define GPBR_FCLR_FCLR_Pos                    _UINT32_(0)                                          /* (GPBR_FCLR) Full Clear Enable Position */
#define GPBR_FCLR_FCLR_Msk                    (_UINT32_(0x1) << GPBR_FCLR_FCLR_Pos)                /* (GPBR_FCLR) Full Clear Enable Mask */
#define GPBR_FCLR_FCLR(value)                 (GPBR_FCLR_FCLR_Msk & (_UINT32_(value) << GPBR_FCLR_FCLR_Pos)) /* Assignment of value for FCLR in the GPBR_FCLR register */
#define   GPBR_FCLR_FCLR_0_Val                _UINT32_(0x0)                                        /* (GPBR_FCLR) SYS_GPBR0 is immediately cleared in case of fast wake-up pin tamper event.  */
#define   GPBR_FCLR_FCLR_1_Val                _UINT32_(0x1)                                        /* (GPBR_FCLR) SYS_GPBR0 and SYS_GPBR1 are immediately cleared in case of fast wake-up pin tamper event  */
#define GPBR_FCLR_FCLR_0                      (GPBR_FCLR_FCLR_0_Val << GPBR_FCLR_FCLR_Pos)         /* (GPBR_FCLR) SYS_GPBR0 is immediately cleared in case of fast wake-up pin tamper event. Position */
#define GPBR_FCLR_FCLR_1                      (GPBR_FCLR_FCLR_1_Val << GPBR_FCLR_FCLR_Pos)         /* (GPBR_FCLR) SYS_GPBR0 and SYS_GPBR1 are immediately cleared in case of fast wake-up pin tamper event Position */
#define GPBR_FCLR_Msk                         _UINT32_(0x00000001)                                 /* (GPBR_FCLR) Register Mask  */


/* -------- SYS_GPBR : (GPBR Offset: 0x08) (R/W 32) General Purpose Backup Register x -------- */
#define SYS_GPBR_RESETVALUE                   _UINT32_(0x00)                                       /*  (SYS_GPBR) General Purpose Backup Register x  Reset Value */

#define SYS_GPBR_GPBR_VALUE_Pos               _UINT32_(0)                                          /* (SYS_GPBR) Value of SYS_GPBRx Position */
#define SYS_GPBR_GPBR_VALUE_Msk               (_UINT32_(0xFFFFFFFF) << SYS_GPBR_GPBR_VALUE_Pos)    /* (SYS_GPBR) Value of SYS_GPBRx Mask */
#define SYS_GPBR_GPBR_VALUE(value)            (SYS_GPBR_GPBR_VALUE_Msk & (_UINT32_(value) << SYS_GPBR_GPBR_VALUE_Pos)) /* Assignment of value for GPBR_VALUE in the SYS_GPBR register */
#define SYS_GPBR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (SYS_GPBR) Register Mask  */


/* GPBR register offsets definitions */
#define GPBR_MR_REG_OFST               _UINT32_(0x00)      /* (GPBR_MR) GPBR Mode Register Offset */
#define GPBR_FCLR_REG_OFST             _UINT32_(0x04)      /* (GPBR_FCLR) GPBR Full Clear Register Offset */
#define SYS_GPBR_REG_OFST              _UINT32_(0x08)      /* (SYS_GPBR) General Purpose Backup Register x Offset */
#define SYS_GPBR0_REG_OFST             _UINT32_(0x08)      /* (SYS_GPBR0) General Purpose Backup Register x Offset */
#define SYS_GPBR1_REG_OFST             _UINT32_(0x0C)      /* (SYS_GPBR1) General Purpose Backup Register x Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* GPBR register API structure */
typedef struct
{  /* General Purpose Backup Registers */
  __IO  uint32_t                       GPBR_MR;            /* Offset: 0x00 (R/W  32) GPBR Mode Register */
  __IO  uint32_t                       GPBR_FCLR;          /* Offset: 0x04 (R/W  32) GPBR Full Clear Register */
  __IO  uint32_t                       SYS_GPBR[2];        /* Offset: 0x08 (R/W  32) General Purpose Backup Register x */
} gpbr_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMA7D_GPBR_COMPONENT_H_ */
