/*
 * Component description for NVMCTRL
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
#ifndef _PIC32CMPL10_NVMCTRL_COMPONENT_H_
#define _PIC32CMPL10_NVMCTRL_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                    SOFTWARE API DEFINITION FOR NVMCTRL                     */
/* ************************************************************************** */

/* -------- NVMCTRL_CTRLB : (NVMCTRL Offset: 0x04) (R/W 32) Control B -------- */
#define NVMCTRL_CTRLB_RESETVALUE              _UINT32_(0x00)                                       /*  (NVMCTRL_CTRLB) Control B  Reset Value */

#define NVMCTRL_CTRLB_CMD_Pos                 _UINT32_(0)                                          /* (NVMCTRL_CTRLB) Command Position */
#define NVMCTRL_CTRLB_CMD_Msk                 (_UINT32_(0x7F) << NVMCTRL_CTRLB_CMD_Pos)            /* (NVMCTRL_CTRLB) Command Mask */
#define NVMCTRL_CTRLB_CMD(value)              (NVMCTRL_CTRLB_CMD_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_CMD_Pos)) /* Assignment of value for CMD in the NVMCTRL_CTRLB register */
#define   NVMCTRL_CTRLB_CMD_NOCMD_Val         _UINT32_(0x0)                                        /* (NVMCTRL_CTRLB) No command  */
#define   NVMCTRL_CTRLB_CMD_NOOP_Val          _UINT32_(0x1)                                        /* (NVMCTRL_CTRLB) No operation  */
#define   NVMCTRL_CTRLB_CMD_FLWR_Val          _UINT32_(0x2)                                        /* (NVMCTRL_CTRLB) Flash Write Enable  */
#define   NVMCTRL_CTRLB_CMD_FLPER_Val         _UINT32_(0x8)                                        /* (NVMCTRL_CTRLB) Flash Page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_FLMPER2_Val       _UINT32_(0x9)                                        /* (NVMCTRL_CTRLB) Flash 2-page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_FLMPER4_Val       _UINT32_(0xA)                                        /* (NVMCTRL_CTRLB) Flash 4-page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_FLMPER8_Val       _UINT32_(0xB)                                        /* (NVMCTRL_CTRLB) Flash 8-page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_FLMPER16_Val      _UINT32_(0xC)                                        /* (NVMCTRL_CTRLB) Flash 16-page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_FLMPER32_Val      _UINT32_(0xD)                                        /* (NVMCTRL_CTRLB) Flash 32-page Erase Enable  */
#define   NVMCTRL_CTRLB_CMD_LR_Val            _UINT32_(0xE)                                        /* (NVMCTRL_CTRLB) Lock Region. Sets the bit in the Region n Lock Bits bit field in the Lock Section register (NVMCTRL.LOCK) corresponding to the address location in the ADDR register.  */
#define   NVMCTRL_CTRLB_CMD_UR_Val            _UINT32_(0xF)                                        /* (NVMCTRL_CTRLB) Unlock Region. Clears the bit in NVMCTRL.LOCK corresponding to the address location in the ADDR register.  */
#define   NVMCTRL_CTRLB_CMD_EBOOTCFG_Val      _UINT32_(0x10)                                       /* (NVMCTRL_CTRLB) Erase BOOTCFG Page Enable  */
#define   NVMCTRL_CTRLB_CMD_WBOOTCFG_Val      _UINT32_(0x11)                                       /* (NVMCTRL_CTRLB) Write BOOTCFG Page Enable  */
#define   NVMCTRL_CTRLB_CMD_WLOCKREGION_Val   _UINT32_(0x12)                                       /* (NVMCTRL_CTRLB) Write Enable to ROMCFG.NVMLOCKREGION. Writes to other addresses will cause STATUS.PROGE to be set.  */
#define   NVMCTRL_CTRLB_CMD_WROMCFG_Val       _UINT32_(0x20)                                       /* (NVMCTRL_CTRLB) Write ROMCFG Page Enable. The ROMCFG Page is used by the boot ROM to store Debug Access Level (DAL) bits and other security or protection bits for such as CEHL and Immutable boot.  */
#define   NVMCTRL_CTRLB_CMD_CHER_Val          _UINT32_(0x21)                                       /* (NVMCTRL_CTRLB) Erase FlashRequires DAL == 2 or SYSINT privileges  */
#define NVMCTRL_CTRLB_CMD_NOCMD               (NVMCTRL_CTRLB_CMD_NOCMD_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) No command Position */
#define NVMCTRL_CTRLB_CMD_NOOP                (NVMCTRL_CTRLB_CMD_NOOP_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) No operation Position */
#define NVMCTRL_CTRLB_CMD_FLWR                (NVMCTRL_CTRLB_CMD_FLWR_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash Write Enable Position */
#define NVMCTRL_CTRLB_CMD_FLPER               (NVMCTRL_CTRLB_CMD_FLPER_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash Page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_FLMPER2             (NVMCTRL_CTRLB_CMD_FLMPER2_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash 2-page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_FLMPER4             (NVMCTRL_CTRLB_CMD_FLMPER4_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash 4-page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_FLMPER8             (NVMCTRL_CTRLB_CMD_FLMPER8_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash 8-page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_FLMPER16            (NVMCTRL_CTRLB_CMD_FLMPER16_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash 16-page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_FLMPER32            (NVMCTRL_CTRLB_CMD_FLMPER32_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Flash 32-page Erase Enable Position */
#define NVMCTRL_CTRLB_CMD_LR                  (NVMCTRL_CTRLB_CMD_LR_Val << NVMCTRL_CTRLB_CMD_Pos)  /* (NVMCTRL_CTRLB) Lock Region. Sets the bit in the Region n Lock Bits bit field in the Lock Section register (NVMCTRL.LOCK) corresponding to the address location in the ADDR register. Position */
#define NVMCTRL_CTRLB_CMD_UR                  (NVMCTRL_CTRLB_CMD_UR_Val << NVMCTRL_CTRLB_CMD_Pos)  /* (NVMCTRL_CTRLB) Unlock Region. Clears the bit in NVMCTRL.LOCK corresponding to the address location in the ADDR register. Position */
#define NVMCTRL_CTRLB_CMD_EBOOTCFG            (NVMCTRL_CTRLB_CMD_EBOOTCFG_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Erase BOOTCFG Page Enable Position */
#define NVMCTRL_CTRLB_CMD_WBOOTCFG            (NVMCTRL_CTRLB_CMD_WBOOTCFG_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Write BOOTCFG Page Enable Position */
#define NVMCTRL_CTRLB_CMD_WLOCKREGION         (NVMCTRL_CTRLB_CMD_WLOCKREGION_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Write Enable to ROMCFG.NVMLOCKREGION. Writes to other addresses will cause STATUS.PROGE to be set. Position */
#define NVMCTRL_CTRLB_CMD_WROMCFG             (NVMCTRL_CTRLB_CMD_WROMCFG_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Write ROMCFG Page Enable. The ROMCFG Page is used by the boot ROM to store Debug Access Level (DAL) bits and other security or protection bits for such as CEHL and Immutable boot. Position */
#define NVMCTRL_CTRLB_CMD_CHER                (NVMCTRL_CTRLB_CMD_CHER_Val << NVMCTRL_CTRLB_CMD_Pos) /* (NVMCTRL_CTRLB) Erase FlashRequires DAL == 2 or SYSINT privileges Position */
#define NVMCTRL_CTRLB_CMDEX_Pos               _UINT32_(8)                                          /* (NVMCTRL_CTRLB) Command Execution Position */
#define NVMCTRL_CTRLB_CMDEX_Msk               (_UINT32_(0xFF) << NVMCTRL_CTRLB_CMDEX_Pos)          /* (NVMCTRL_CTRLB) Command Execution Mask */
#define NVMCTRL_CTRLB_CMDEX(value)            (NVMCTRL_CTRLB_CMDEX_Msk & (_UINT32_(value) << NVMCTRL_CTRLB_CMDEX_Pos)) /* Assignment of value for CMDEX in the NVMCTRL_CTRLB register */
#define   NVMCTRL_CTRLB_CMDEX_KEY_Val         _UINT32_(0xA5)                                       /* (NVMCTRL_CTRLB) Execution key  */
#define NVMCTRL_CTRLB_CMDEX_KEY               (NVMCTRL_CTRLB_CMDEX_KEY_Val << NVMCTRL_CTRLB_CMDEX_Pos) /* (NVMCTRL_CTRLB) Execution key Position */
#define NVMCTRL_CTRLB_Msk                     _UINT32_(0x0000FF7F)                                 /* (NVMCTRL_CTRLB) Register Mask  */


/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x08) ( R/ 32) NVM Parameters -------- */
#define NVMCTRL_PARAM_NVMP_Pos                _UINT32_(0)                                          /* (NVMCTRL_PARAM) NVM Parameters Position */
#define NVMCTRL_PARAM_NVMP_Msk                (_UINT32_(0xFFFF) << NVMCTRL_PARAM_NVMP_Pos)         /* (NVMCTRL_PARAM) NVM Parameters Mask */
#define NVMCTRL_PARAM_NVMP(value)             (NVMCTRL_PARAM_NVMP_Msk & (_UINT32_(value) << NVMCTRL_PARAM_NVMP_Pos)) /* Assignment of value for NVMP in the NVMCTRL_PARAM register */
#define NVMCTRL_PARAM_PSZ_Pos                 _UINT32_(16)                                         /* (NVMCTRL_PARAM) Page Size Position */
#define NVMCTRL_PARAM_PSZ_Msk                 (_UINT32_(0x7) << NVMCTRL_PARAM_PSZ_Pos)             /* (NVMCTRL_PARAM) Page Size Mask */
#define NVMCTRL_PARAM_PSZ(value)              (NVMCTRL_PARAM_PSZ_Msk & (_UINT32_(value) << NVMCTRL_PARAM_PSZ_Pos)) /* Assignment of value for PSZ in the NVMCTRL_PARAM register */
#define   NVMCTRL_PARAM_PSZ_8_Val             _UINT32_(0x0)                                        /* (NVMCTRL_PARAM) 8 bytes  */
#define   NVMCTRL_PARAM_PSZ_16_Val            _UINT32_(0x1)                                        /* (NVMCTRL_PARAM) 16 bytes  */
#define   NVMCTRL_PARAM_PSZ_32_Val            _UINT32_(0x2)                                        /* (NVMCTRL_PARAM) 32 bytes  */
#define   NVMCTRL_PARAM_PSZ_64_Val            _UINT32_(0x3)                                        /* (NVMCTRL_PARAM) 64 bytes  */
#define   NVMCTRL_PARAM_PSZ_128_Val           _UINT32_(0x4)                                        /* (NVMCTRL_PARAM) 128 bytes  */
#define   NVMCTRL_PARAM_PSZ_256_Val           _UINT32_(0x5)                                        /* (NVMCTRL_PARAM) 256 bytes  */
#define   NVMCTRL_PARAM_PSZ_512_Val           _UINT32_(0x6)                                        /* (NVMCTRL_PARAM) 512 bytes  */
#define   NVMCTRL_PARAM_PSZ_1024_Val          _UINT32_(0x7)                                        /* (NVMCTRL_PARAM) 1024 bytes  */
#define NVMCTRL_PARAM_PSZ_8                   (NVMCTRL_PARAM_PSZ_8_Val << NVMCTRL_PARAM_PSZ_Pos)   /* (NVMCTRL_PARAM) 8 bytes Position */
#define NVMCTRL_PARAM_PSZ_16                  (NVMCTRL_PARAM_PSZ_16_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 16 bytes Position */
#define NVMCTRL_PARAM_PSZ_32                  (NVMCTRL_PARAM_PSZ_32_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 32 bytes Position */
#define NVMCTRL_PARAM_PSZ_64                  (NVMCTRL_PARAM_PSZ_64_Val << NVMCTRL_PARAM_PSZ_Pos)  /* (NVMCTRL_PARAM) 64 bytes Position */
#define NVMCTRL_PARAM_PSZ_128                 (NVMCTRL_PARAM_PSZ_128_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 128 bytes Position */
#define NVMCTRL_PARAM_PSZ_256                 (NVMCTRL_PARAM_PSZ_256_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 256 bytes Position */
#define NVMCTRL_PARAM_PSZ_512                 (NVMCTRL_PARAM_PSZ_512_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 512 bytes Position */
#define NVMCTRL_PARAM_PSZ_1024                (NVMCTRL_PARAM_PSZ_1024_Val << NVMCTRL_PARAM_PSZ_Pos) /* (NVMCTRL_PARAM) 1024 bytes Position */
#define NVMCTRL_PARAM_BOOTPROT_Pos            _UINT32_(24)                                         /* (NVMCTRL_PARAM) Boot Section Size Position */
#define NVMCTRL_PARAM_BOOTPROT_Msk            (_UINT32_(0x7) << NVMCTRL_PARAM_BOOTPROT_Pos)        /* (NVMCTRL_PARAM) Boot Section Size Mask */
#define NVMCTRL_PARAM_BOOTPROT(value)         (NVMCTRL_PARAM_BOOTPROT_Msk & (_UINT32_(value) << NVMCTRL_PARAM_BOOTPROT_Pos)) /* Assignment of value for BOOTPROT in the NVMCTRL_PARAM register */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_32768BYTES_Val _UINT32_(0x0)                                        /* (NVMCTRL_PARAM) 32768 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_16384BYTES_Val _UINT32_(0x1)                                        /* (NVMCTRL_PARAM) 16384 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_8192BYTES_Val _UINT32_(0x2)                                        /* (NVMCTRL_PARAM) 8192 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_4096BYTES_Val _UINT32_(0x3)                                        /* (NVMCTRL_PARAM) 4096 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_2048BYTES_Val _UINT32_(0x4)                                        /* (NVMCTRL_PARAM) 2048 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_1024BYTES_Val _UINT32_(0x5)                                        /* (NVMCTRL_PARAM) 1024 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_512BYTES_Val _UINT32_(0x6)                                        /* (NVMCTRL_PARAM) 512 bytes are protected.  */
#define   NVMCTRL_PARAM_BOOTPROT_SIZE_0BYTES_Val _UINT32_(0x7)                                        /* (NVMCTRL_PARAM) 0 bytes are protected.  */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_32768BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_32768BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 32768 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_16384BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_16384BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 16384 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_8192BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_8192BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 8192 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_4096BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_4096BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 4096 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_2048BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_2048BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 2048 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_1024BYTES (NVMCTRL_PARAM_BOOTPROT_SIZE_1024BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 1024 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_512BYTES  (NVMCTRL_PARAM_BOOTPROT_SIZE_512BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 512 bytes are protected. Position */
#define NVMCTRL_PARAM_BOOTPROT_SIZE_0BYTES    (NVMCTRL_PARAM_BOOTPROT_SIZE_0BYTES_Val << NVMCTRL_PARAM_BOOTPROT_Pos) /* (NVMCTRL_PARAM) 0 bytes are protected. Position */
#define NVMCTRL_PARAM_Msk                     _UINT32_(0x0707FFFF)                                 /* (NVMCTRL_PARAM) Register Mask  */


/* -------- NVMCTRL_INTENCLR : (NVMCTRL Offset: 0x0C) (R/W 32) Interrupt Enable Clear -------- */
#define NVMCTRL_INTENCLR_RESETVALUE           _UINT32_(0x00)                                       /*  (NVMCTRL_INTENCLR) Interrupt Enable Clear  Reset Value */

#define NVMCTRL_INTENCLR_READY_Pos            _UINT32_(0)                                          /* (NVMCTRL_INTENCLR) NVM Ready Interrupt Enable Position */
#define NVMCTRL_INTENCLR_READY_Msk            (_UINT32_(0x1) << NVMCTRL_INTENCLR_READY_Pos)        /* (NVMCTRL_INTENCLR) NVM Ready Interrupt Enable Mask */
#define NVMCTRL_INTENCLR_READY(value)         (NVMCTRL_INTENCLR_READY_Msk & (_UINT32_(value) << NVMCTRL_INTENCLR_READY_Pos)) /* Assignment of value for READY in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_ERROR_Pos            _UINT32_(1)                                          /* (NVMCTRL_INTENCLR) Error Interrupt Enable Position */
#define NVMCTRL_INTENCLR_ERROR_Msk            (_UINT32_(0x1) << NVMCTRL_INTENCLR_ERROR_Pos)        /* (NVMCTRL_INTENCLR) Error Interrupt Enable Mask */
#define NVMCTRL_INTENCLR_ERROR(value)         (NVMCTRL_INTENCLR_ERROR_Msk & (_UINT32_(value) << NVMCTRL_INTENCLR_ERROR_Pos)) /* Assignment of value for ERROR in the NVMCTRL_INTENCLR register */
#define NVMCTRL_INTENCLR_Msk                  _UINT32_(0x00000003)                                 /* (NVMCTRL_INTENCLR) Register Mask  */


/* -------- NVMCTRL_INTENSET : (NVMCTRL Offset: 0x10) (R/W 32) Interrupt Enable Set -------- */
#define NVMCTRL_INTENSET_RESETVALUE           _UINT32_(0x00)                                       /*  (NVMCTRL_INTENSET) Interrupt Enable Set  Reset Value */

#define NVMCTRL_INTENSET_READY_Pos            _UINT32_(0)                                          /* (NVMCTRL_INTENSET) NVM Ready Interrupt Enable Position */
#define NVMCTRL_INTENSET_READY_Msk            (_UINT32_(0x1) << NVMCTRL_INTENSET_READY_Pos)        /* (NVMCTRL_INTENSET) NVM Ready Interrupt Enable Mask */
#define NVMCTRL_INTENSET_READY(value)         (NVMCTRL_INTENSET_READY_Msk & (_UINT32_(value) << NVMCTRL_INTENSET_READY_Pos)) /* Assignment of value for READY in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_ERROR_Pos            _UINT32_(1)                                          /* (NVMCTRL_INTENSET) Error Interrupt Enable Position */
#define NVMCTRL_INTENSET_ERROR_Msk            (_UINT32_(0x1) << NVMCTRL_INTENSET_ERROR_Pos)        /* (NVMCTRL_INTENSET) Error Interrupt Enable Mask */
#define NVMCTRL_INTENSET_ERROR(value)         (NVMCTRL_INTENSET_ERROR_Msk & (_UINT32_(value) << NVMCTRL_INTENSET_ERROR_Pos)) /* Assignment of value for ERROR in the NVMCTRL_INTENSET register */
#define NVMCTRL_INTENSET_Msk                  _UINT32_(0x00000003)                                 /* (NVMCTRL_INTENSET) Register Mask  */


/* -------- NVMCTRL_INTFLAG : (NVMCTRL Offset: 0x14) (R/W 32) Interrupt Flag Status and Clear -------- */
#define NVMCTRL_INTFLAG_RESETVALUE            _UINT32_(0x00)                                       /*  (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define NVMCTRL_INTFLAG_READY_Pos             _UINT32_(0)                                          /* (NVMCTRL_INTFLAG) NVM Ready Position */
#define NVMCTRL_INTFLAG_READY_Msk             (_UINT32_(0x1) << NVMCTRL_INTFLAG_READY_Pos)         /* (NVMCTRL_INTFLAG) NVM Ready Mask */
#define NVMCTRL_INTFLAG_READY(value)          (NVMCTRL_INTFLAG_READY_Msk & (_UINT32_(value) << NVMCTRL_INTFLAG_READY_Pos)) /* Assignment of value for READY in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_ERROR_Pos             _UINT32_(1)                                          /* (NVMCTRL_INTFLAG) Error Position */
#define NVMCTRL_INTFLAG_ERROR_Msk             (_UINT32_(0x1) << NVMCTRL_INTFLAG_ERROR_Pos)         /* (NVMCTRL_INTFLAG) Error Mask */
#define NVMCTRL_INTFLAG_ERROR(value)          (NVMCTRL_INTFLAG_ERROR_Msk & (_UINT32_(value) << NVMCTRL_INTFLAG_ERROR_Pos)) /* Assignment of value for ERROR in the NVMCTRL_INTFLAG register */
#define NVMCTRL_INTFLAG_Msk                   _UINT32_(0x00000003)                                 /* (NVMCTRL_INTFLAG) Register Mask  */


/* -------- NVMCTRL_INTFLAGSET : (NVMCTRL Offset: 0x18) (R/W 32) Interrupt Flag Software Set -------- */
#define NVMCTRL_INTFLAGSET_RESETVALUE         _UINT32_(0x00)                                       /*  (NVMCTRL_INTFLAGSET) Interrupt Flag Software Set  Reset Value */

#define NVMCTRL_INTFLAGSET_READY_Pos          _UINT32_(0)                                          /* (NVMCTRL_INTFLAGSET) NVM Ready Position */
#define NVMCTRL_INTFLAGSET_READY_Msk          (_UINT32_(0x1) << NVMCTRL_INTFLAGSET_READY_Pos)      /* (NVMCTRL_INTFLAGSET) NVM Ready Mask */
#define NVMCTRL_INTFLAGSET_READY(value)       (NVMCTRL_INTFLAGSET_READY_Msk & (_UINT32_(value) << NVMCTRL_INTFLAGSET_READY_Pos)) /* Assignment of value for READY in the NVMCTRL_INTFLAGSET register */
#define NVMCTRL_INTFLAGSET_ERROR_Pos          _UINT32_(1)                                          /* (NVMCTRL_INTFLAGSET) Error Position */
#define NVMCTRL_INTFLAGSET_ERROR_Msk          (_UINT32_(0x1) << NVMCTRL_INTFLAGSET_ERROR_Pos)      /* (NVMCTRL_INTFLAGSET) Error Mask */
#define NVMCTRL_INTFLAGSET_ERROR(value)       (NVMCTRL_INTFLAGSET_ERROR_Msk & (_UINT32_(value) << NVMCTRL_INTFLAGSET_ERROR_Pos)) /* Assignment of value for ERROR in the NVMCTRL_INTFLAGSET register */
#define NVMCTRL_INTFLAGSET_Msk                _UINT32_(0x00000003)                                 /* (NVMCTRL_INTFLAGSET) Register Mask  */


/* -------- NVMCTRL_STATUS : (NVMCTRL Offset: 0x1C) (R/W 32) Status -------- */
#define NVMCTRL_STATUS_RESETVALUE             _UINT32_(0x00)                                       /*  (NVMCTRL_STATUS) Status  Reset Value */

#define NVMCTRL_STATUS_PROGE_Pos              _UINT32_(2)                                          /* (NVMCTRL_STATUS) Programming Error Status Position */
#define NVMCTRL_STATUS_PROGE_Msk              (_UINT32_(0x1) << NVMCTRL_STATUS_PROGE_Pos)          /* (NVMCTRL_STATUS) Programming Error Status Mask */
#define NVMCTRL_STATUS_PROGE(value)           (NVMCTRL_STATUS_PROGE_Msk & (_UINT32_(value) << NVMCTRL_STATUS_PROGE_Pos)) /* Assignment of value for PROGE in the NVMCTRL_STATUS register */
#define NVMCTRL_STATUS_LOCKE_Pos              _UINT32_(3)                                          /* (NVMCTRL_STATUS) Lock Error Status Position */
#define NVMCTRL_STATUS_LOCKE_Msk              (_UINT32_(0x1) << NVMCTRL_STATUS_LOCKE_Pos)          /* (NVMCTRL_STATUS) Lock Error Status Mask */
#define NVMCTRL_STATUS_LOCKE(value)           (NVMCTRL_STATUS_LOCKE_Msk & (_UINT32_(value) << NVMCTRL_STATUS_LOCKE_Pos)) /* Assignment of value for LOCKE in the NVMCTRL_STATUS register */
#define NVMCTRL_STATUS_Msk                    _UINT32_(0x0000000C)                                 /* (NVMCTRL_STATUS) Register Mask  */


/* -------- NVMCTRL_ADDR : (NVMCTRL Offset: 0x20) (R/W 32) Address -------- */
#define NVMCTRL_ADDR_RESETVALUE               _UINT32_(0x00)                                       /*  (NVMCTRL_ADDR) Address  Reset Value */

#define NVMCTRL_ADDR_ADDR_Pos                 _UINT32_(0)                                          /* (NVMCTRL_ADDR) NVM Address Position */
#define NVMCTRL_ADDR_ADDR_Msk                 (_UINT32_(0xFFFFFFFF) << NVMCTRL_ADDR_ADDR_Pos)      /* (NVMCTRL_ADDR) NVM Address Mask */
#define NVMCTRL_ADDR_ADDR(value)              (NVMCTRL_ADDR_ADDR_Msk & (_UINT32_(value) << NVMCTRL_ADDR_ADDR_Pos)) /* Assignment of value for ADDR in the NVMCTRL_ADDR register */
#define NVMCTRL_ADDR_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (NVMCTRL_ADDR) Register Mask  */


/* -------- NVMCTRL_LOCK : (NVMCTRL Offset: 0x24) ( R/ 32) Lock Section -------- */
#define NVMCTRL_LOCK_LOCK0_Pos                _UINT32_(0)                                          /* (NVMCTRL_LOCK) Region 0 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK0_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK0_Pos)            /* (NVMCTRL_LOCK) Region 0 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK0(value)             (NVMCTRL_LOCK_LOCK0_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK0_Pos)) /* Assignment of value for LOCK0 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK1_Pos                _UINT32_(1)                                          /* (NVMCTRL_LOCK) Region 1 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK1_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK1_Pos)            /* (NVMCTRL_LOCK) Region 1 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK1(value)             (NVMCTRL_LOCK_LOCK1_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK1_Pos)) /* Assignment of value for LOCK1 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK2_Pos                _UINT32_(2)                                          /* (NVMCTRL_LOCK) Region 2 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK2_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK2_Pos)            /* (NVMCTRL_LOCK) Region 2 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK2(value)             (NVMCTRL_LOCK_LOCK2_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK2_Pos)) /* Assignment of value for LOCK2 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK3_Pos                _UINT32_(3)                                          /* (NVMCTRL_LOCK) Region 3 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK3_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK3_Pos)            /* (NVMCTRL_LOCK) Region 3 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK3(value)             (NVMCTRL_LOCK_LOCK3_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK3_Pos)) /* Assignment of value for LOCK3 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK4_Pos                _UINT32_(4)                                          /* (NVMCTRL_LOCK) Region 4 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK4_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK4_Pos)            /* (NVMCTRL_LOCK) Region 4 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK4(value)             (NVMCTRL_LOCK_LOCK4_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK4_Pos)) /* Assignment of value for LOCK4 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK5_Pos                _UINT32_(5)                                          /* (NVMCTRL_LOCK) Region 5 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK5_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK5_Pos)            /* (NVMCTRL_LOCK) Region 5 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK5(value)             (NVMCTRL_LOCK_LOCK5_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK5_Pos)) /* Assignment of value for LOCK5 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK6_Pos                _UINT32_(6)                                          /* (NVMCTRL_LOCK) Region 6 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK6_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK6_Pos)            /* (NVMCTRL_LOCK) Region 6 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK6(value)             (NVMCTRL_LOCK_LOCK6_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK6_Pos)) /* Assignment of value for LOCK6 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK7_Pos                _UINT32_(7)                                          /* (NVMCTRL_LOCK) Region 7 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK7_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK7_Pos)            /* (NVMCTRL_LOCK) Region 7 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK7(value)             (NVMCTRL_LOCK_LOCK7_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK7_Pos)) /* Assignment of value for LOCK7 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK8_Pos                _UINT32_(8)                                          /* (NVMCTRL_LOCK) Region 8 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK8_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK8_Pos)            /* (NVMCTRL_LOCK) Region 8 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK8(value)             (NVMCTRL_LOCK_LOCK8_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK8_Pos)) /* Assignment of value for LOCK8 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK9_Pos                _UINT32_(9)                                          /* (NVMCTRL_LOCK) Region 9 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK9_Msk                (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK9_Pos)            /* (NVMCTRL_LOCK) Region 9 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK9(value)             (NVMCTRL_LOCK_LOCK9_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK9_Pos)) /* Assignment of value for LOCK9 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK10_Pos               _UINT32_(10)                                         /* (NVMCTRL_LOCK) Region 10 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK10_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK10_Pos)           /* (NVMCTRL_LOCK) Region 10 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK10(value)            (NVMCTRL_LOCK_LOCK10_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK10_Pos)) /* Assignment of value for LOCK10 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK11_Pos               _UINT32_(11)                                         /* (NVMCTRL_LOCK) Region 11 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK11_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK11_Pos)           /* (NVMCTRL_LOCK) Region 11 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK11(value)            (NVMCTRL_LOCK_LOCK11_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK11_Pos)) /* Assignment of value for LOCK11 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK12_Pos               _UINT32_(12)                                         /* (NVMCTRL_LOCK) Region 12 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK12_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK12_Pos)           /* (NVMCTRL_LOCK) Region 12 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK12(value)            (NVMCTRL_LOCK_LOCK12_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK12_Pos)) /* Assignment of value for LOCK12 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK13_Pos               _UINT32_(13)                                         /* (NVMCTRL_LOCK) Region 13 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK13_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK13_Pos)           /* (NVMCTRL_LOCK) Region 13 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK13(value)            (NVMCTRL_LOCK_LOCK13_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK13_Pos)) /* Assignment of value for LOCK13 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK14_Pos               _UINT32_(14)                                         /* (NVMCTRL_LOCK) Region 14 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK14_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK14_Pos)           /* (NVMCTRL_LOCK) Region 14 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK14(value)            (NVMCTRL_LOCK_LOCK14_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK14_Pos)) /* Assignment of value for LOCK14 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_LOCK15_Pos               _UINT32_(15)                                         /* (NVMCTRL_LOCK) Region 15 Lock Bit Position */
#define NVMCTRL_LOCK_LOCK15_Msk               (_UINT32_(0x1) << NVMCTRL_LOCK_LOCK15_Pos)           /* (NVMCTRL_LOCK) Region 15 Lock Bit Mask */
#define NVMCTRL_LOCK_LOCK15(value)            (NVMCTRL_LOCK_LOCK15_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK15_Pos)) /* Assignment of value for LOCK15 in the NVMCTRL_LOCK register */
#define NVMCTRL_LOCK_Msk                      _UINT32_(0x0000FFFF)                                 /* (NVMCTRL_LOCK) Register Mask  */

#define NVMCTRL_LOCK_LOCK_Pos                 _UINT32_(0)                                          /* (NVMCTRL_LOCK Position) Region x5 Lock Bit */
#define NVMCTRL_LOCK_LOCK_Msk                 (_UINT32_(0xFFFF) << NVMCTRL_LOCK_LOCK_Pos)          /* (NVMCTRL_LOCK Mask) LOCK */
#define NVMCTRL_LOCK_LOCK(value)              (NVMCTRL_LOCK_LOCK_Msk & (_UINT32_(value) << NVMCTRL_LOCK_LOCK_Pos)) 

/* -------- NVMCTRL_DATA : (NVMCTRL Offset: 0x28) ( R/ 32) Read Data -------- */
#define NVMCTRL_DATA_DATA_Pos                 _UINT32_(0)                                          /* (NVMCTRL_DATA) Read Data Position */
#define NVMCTRL_DATA_DATA_Msk                 (_UINT32_(0xFFFFFFFF) << NVMCTRL_DATA_DATA_Pos)      /* (NVMCTRL_DATA) Read Data Mask */
#define NVMCTRL_DATA_DATA(value)              (NVMCTRL_DATA_DATA_Msk & (_UINT32_(value) << NVMCTRL_DATA_DATA_Pos)) /* Assignment of value for DATA in the NVMCTRL_DATA register */
#define NVMCTRL_DATA_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (NVMCTRL_DATA) Register Mask  */


/* -------- NVMCTRL_WPCTRL : (NVMCTRL Offset: 0x2C) (R/W 32) Write Protection Control -------- */
#define NVMCTRL_WPCTRL_RESETVALUE             _UINT32_(0x00)                                       /*  (NVMCTRL_WPCTRL) Write Protection Control  Reset Value */

#define NVMCTRL_WPCTRL_WPEN_Pos               _UINT32_(0)                                          /* (NVMCTRL_WPCTRL) Write Protection Enable Position */
#define NVMCTRL_WPCTRL_WPEN_Msk               (_UINT32_(0x1) << NVMCTRL_WPCTRL_WPEN_Pos)           /* (NVMCTRL_WPCTRL) Write Protection Enable Mask */
#define NVMCTRL_WPCTRL_WPEN(value)            (NVMCTRL_WPCTRL_WPEN_Msk & (_UINT32_(value) << NVMCTRL_WPCTRL_WPEN_Pos)) /* Assignment of value for WPEN in the NVMCTRL_WPCTRL register */
#define NVMCTRL_WPCTRL_WPLCK_Pos              _UINT32_(1)                                          /* (NVMCTRL_WPCTRL) Write Protection Lock Position */
#define NVMCTRL_WPCTRL_WPLCK_Msk              (_UINT32_(0x1) << NVMCTRL_WPCTRL_WPLCK_Pos)          /* (NVMCTRL_WPCTRL) Write Protection Lock Mask */
#define NVMCTRL_WPCTRL_WPLCK(value)           (NVMCTRL_WPCTRL_WPLCK_Msk & (_UINT32_(value) << NVMCTRL_WPCTRL_WPLCK_Pos)) /* Assignment of value for WPLCK in the NVMCTRL_WPCTRL register */
#define NVMCTRL_WPCTRL_WPKEY_Pos              _UINT32_(8)                                          /* (NVMCTRL_WPCTRL) Write Protection Key Position */
#define NVMCTRL_WPCTRL_WPKEY_Msk              (_UINT32_(0xFFFFFF) << NVMCTRL_WPCTRL_WPKEY_Pos)     /* (NVMCTRL_WPCTRL) Write Protection Key Mask */
#define NVMCTRL_WPCTRL_WPKEY(value)           (NVMCTRL_WPCTRL_WPKEY_Msk & (_UINT32_(value) << NVMCTRL_WPCTRL_WPKEY_Pos)) /* Assignment of value for WPKEY in the NVMCTRL_WPCTRL register */
#define   NVMCTRL_WPCTRL_WPKEY_KEY_Val        _UINT32_(0x4E564D)                                   /* (NVMCTRL_WPCTRL) Allow writes to the WPCTRL register  */
#define NVMCTRL_WPCTRL_WPKEY_KEY              (NVMCTRL_WPCTRL_WPKEY_KEY_Val << NVMCTRL_WPCTRL_WPKEY_Pos) /* (NVMCTRL_WPCTRL) Allow writes to the WPCTRL register Position */
#define NVMCTRL_WPCTRL_Msk                    _UINT32_(0xFFFFFF03)                                 /* (NVMCTRL_WPCTRL) Register Mask  */


/* NVMCTRL register offsets definitions */
#define NVMCTRL_CTRLB_REG_OFST         _UINT32_(0x04)      /* (NVMCTRL_CTRLB) Control B Offset */
#define NVMCTRL_PARAM_REG_OFST         _UINT32_(0x08)      /* (NVMCTRL_PARAM) NVM Parameters Offset */
#define NVMCTRL_INTENCLR_REG_OFST      _UINT32_(0x0C)      /* (NVMCTRL_INTENCLR) Interrupt Enable Clear Offset */
#define NVMCTRL_INTENSET_REG_OFST      _UINT32_(0x10)      /* (NVMCTRL_INTENSET) Interrupt Enable Set Offset */
#define NVMCTRL_INTFLAG_REG_OFST       _UINT32_(0x14)      /* (NVMCTRL_INTFLAG) Interrupt Flag Status and Clear Offset */
#define NVMCTRL_INTFLAGSET_REG_OFST    _UINT32_(0x18)      /* (NVMCTRL_INTFLAGSET) Interrupt Flag Software Set Offset */
#define NVMCTRL_STATUS_REG_OFST        _UINT32_(0x1C)      /* (NVMCTRL_STATUS) Status Offset */
#define NVMCTRL_ADDR_REG_OFST          _UINT32_(0x20)      /* (NVMCTRL_ADDR) Address Offset */
#define NVMCTRL_LOCK_REG_OFST          _UINT32_(0x24)      /* (NVMCTRL_LOCK) Lock Section Offset */
#define NVMCTRL_DATA_REG_OFST          _UINT32_(0x28)      /* (NVMCTRL_DATA) Read Data Offset */
#define NVMCTRL_WPCTRL_REG_OFST        _UINT32_(0x2C)      /* (NVMCTRL_WPCTRL) Write Protection Control Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* NVMCTRL register API structure */
typedef struct
{  /* Non-Volatile Memory Controller */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       NVMCTRL_CTRLB;      /* Offset: 0x04 (R/W  32) Control B */
  __I   uint32_t                       NVMCTRL_PARAM;      /* Offset: 0x08 (R/   32) NVM Parameters */
  __IO  uint32_t                       NVMCTRL_INTENCLR;   /* Offset: 0x0C (R/W  32) Interrupt Enable Clear */
  __IO  uint32_t                       NVMCTRL_INTENSET;   /* Offset: 0x10 (R/W  32) Interrupt Enable Set */
  __IO  uint32_t                       NVMCTRL_INTFLAG;    /* Offset: 0x14 (R/W  32) Interrupt Flag Status and Clear */
  __IO  uint32_t                       NVMCTRL_INTFLAGSET; /* Offset: 0x18 (R/W  32) Interrupt Flag Software Set */
  __IO  uint32_t                       NVMCTRL_STATUS;     /* Offset: 0x1C (R/W  32) Status */
  __IO  uint32_t                       NVMCTRL_ADDR;       /* Offset: 0x20 (R/W  32) Address */
  __I   uint32_t                       NVMCTRL_LOCK;       /* Offset: 0x24 (R/   32) Lock Section */
  __I   uint32_t                       NVMCTRL_DATA;       /* Offset: 0x28 (R/   32) Read Data */
  __IO  uint32_t                       NVMCTRL_WPCTRL;     /* Offset: 0x2C (R/W  32) Write Protection Control */
} nvmctrl_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_NVMCTRL_COMPONENT_H_ */
