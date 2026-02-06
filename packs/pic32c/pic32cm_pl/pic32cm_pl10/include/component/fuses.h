/*
 * Component description for FUSES
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
#ifndef _PIC32CMPL10_FUSES_COMPONENT_H_
#define _PIC32CMPL10_FUSES_COMPONENT_H_

#include "core_cm0plus.h"

/* ************************************************************************** */
/*                     SOFTWARE API DEFINITION FOR FUSES                      */
/* ************************************************************************** */

/* -------- FUSES_SEQNUM : (FUSES Offset: 0x00) (R/W 32) Sequence Number Fuse -------- */
#define FUSES_SEQNUM_RESETVALUE               _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_SEQNUM) Sequence Number Fuse  Reset Value */

#define FUSES_SEQNUM_SEQNUM_Pos               _UINT32_(0)                                          /* (FUSES_SEQNUM) Sequence Number Position */
#define FUSES_SEQNUM_SEQNUM_Msk               (_UINT32_(0xFFFFFFFF) << FUSES_SEQNUM_SEQNUM_Pos)    /* (FUSES_SEQNUM) Sequence Number Mask */
#define FUSES_SEQNUM_SEQNUM(value)            (FUSES_SEQNUM_SEQNUM_Msk & (_UINT32_(value) << FUSES_SEQNUM_SEQNUM_Pos)) /* Assignment of value for SEQNUM in the FUSES_SEQNUM register */
#define FUSES_SEQNUM_Msk                      _UINT32_(0xFFFFFFFF)                                 /* (FUSES_SEQNUM) Register Mask  */


/* -------- FUSES_BOOTPROT : (FUSES Offset: 0x08) (R/W 32) Boot Protection Fuse -------- */
#define FUSES_BOOTPROT_RESETVALUE             _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOOTPROT) Boot Protection Fuse  Reset Value */

#define FUSES_BOOTPROT_BOOTPROT_Pos           _UINT32_(0)                                          /* (FUSES_BOOTPROT) Boot Protection Position */
#define FUSES_BOOTPROT_BOOTPROT_Msk           (_UINT32_(0x7) << FUSES_BOOTPROT_BOOTPROT_Pos)       /* (FUSES_BOOTPROT) Boot Protection Mask */
#define FUSES_BOOTPROT_BOOTPROT(value)        (FUSES_BOOTPROT_BOOTPROT_Msk & (_UINT32_(value) << FUSES_BOOTPROT_BOOTPROT_Pos)) /* Assignment of value for BOOTPROT in the FUSES_BOOTPROT register */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_32768BYTES_Val _UINT32_(0x0)                                        /* (FUSES_BOOTPROT) 32768 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_16384BYTES_Val _UINT32_(0x1)                                        /* (FUSES_BOOTPROT) 16384 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_8192BYTES_Val _UINT32_(0x2)                                        /* (FUSES_BOOTPROT) 8192 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_4096BYTES_Val _UINT32_(0x3)                                        /* (FUSES_BOOTPROT) 4096 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_2048BYTES_Val _UINT32_(0x4)                                        /* (FUSES_BOOTPROT) 2048 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_1024BYTES_Val _UINT32_(0x5)                                        /* (FUSES_BOOTPROT) 1024 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_512BYTES_Val _UINT32_(0x6)                                        /* (FUSES_BOOTPROT) 512 bytes are protected.  */
#define   FUSES_BOOTPROT_BOOTPROT_SIZE_0BYTES_Val _UINT32_(0x7)                                        /* (FUSES_BOOTPROT) 0 bytes are protected.  */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_32768BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_32768BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 32768 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_16384BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_16384BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 16384 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_8192BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_8192BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 8192 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_4096BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_4096BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 4096 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_2048BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_2048BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 2048 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_1024BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_1024BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 1024 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_512BYTES (FUSES_BOOTPROT_BOOTPROT_SIZE_512BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 512 bytes are protected. Position */
#define FUSES_BOOTPROT_BOOTPROT_SIZE_0BYTES   (FUSES_BOOTPROT_BOOTPROT_SIZE_0BYTES_Val << FUSES_BOOTPROT_BOOTPROT_Pos) /* (FUSES_BOOTPROT) 0 bytes are protected. Position */
#define FUSES_BOOTPROT_Msk                    _UINT32_(0x00000007)                                 /* (FUSES_BOOTPROT) Register Mask  */


/* -------- FUSES_WDTCFG : (FUSES Offset: 0x10) (R/W 32) Watchdog Timer Configuration Fuse -------- */
#define FUSES_WDTCFG_RESETVALUE               _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_WDTCFG) Watchdog Timer Configuration Fuse  Reset Value */

#define FUSES_WDTCFG_ENABLE_Pos               _UINT32_(1)                                          /* (FUSES_WDTCFG) Enable Position */
#define FUSES_WDTCFG_ENABLE_Msk               (_UINT32_(0x1) << FUSES_WDTCFG_ENABLE_Pos)           /* (FUSES_WDTCFG) Enable Mask */
#define FUSES_WDTCFG_ENABLE(value)            (FUSES_WDTCFG_ENABLE_Msk & (_UINT32_(value) << FUSES_WDTCFG_ENABLE_Pos)) /* Assignment of value for ENABLE in the FUSES_WDTCFG register */
#define FUSES_WDTCFG_WEN_Pos                  _UINT32_(2)                                          /* (FUSES_WDTCFG) Window Mode Enable Position */
#define FUSES_WDTCFG_WEN_Msk                  (_UINT32_(0x1) << FUSES_WDTCFG_WEN_Pos)              /* (FUSES_WDTCFG) Window Mode Enable Mask */
#define FUSES_WDTCFG_WEN(value)               (FUSES_WDTCFG_WEN_Msk & (_UINT32_(value) << FUSES_WDTCFG_WEN_Pos)) /* Assignment of value for WEN in the FUSES_WDTCFG register */
#define FUSES_WDTCFG_ALWAYSON_Pos             _UINT32_(3)                                          /* (FUSES_WDTCFG) Always On Position */
#define FUSES_WDTCFG_ALWAYSON_Msk             (_UINT32_(0x1) << FUSES_WDTCFG_ALWAYSON_Pos)         /* (FUSES_WDTCFG) Always On Mask */
#define FUSES_WDTCFG_ALWAYSON(value)          (FUSES_WDTCFG_ALWAYSON_Msk & (_UINT32_(value) << FUSES_WDTCFG_ALWAYSON_Pos)) /* Assignment of value for ALWAYSON in the FUSES_WDTCFG register */
#define FUSES_WDTCFG_PER_Pos                  _UINT32_(8)                                          /* (FUSES_WDTCFG) Time-Out Period Position */
#define FUSES_WDTCFG_PER_Msk                  (_UINT32_(0xF) << FUSES_WDTCFG_PER_Pos)              /* (FUSES_WDTCFG) Time-Out Period Mask */
#define FUSES_WDTCFG_PER(value)               (FUSES_WDTCFG_PER_Msk & (_UINT32_(value) << FUSES_WDTCFG_PER_Pos)) /* Assignment of value for PER in the FUSES_WDTCFG register */
#define   FUSES_WDTCFG_PER_CYC8_Val           _UINT32_(0x0)                                        /* (FUSES_WDTCFG) 8 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC16_Val          _UINT32_(0x1)                                        /* (FUSES_WDTCFG) 16 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC32_Val          _UINT32_(0x2)                                        /* (FUSES_WDTCFG) 32 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC64_Val          _UINT32_(0x3)                                        /* (FUSES_WDTCFG) 64 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC128_Val         _UINT32_(0x4)                                        /* (FUSES_WDTCFG) 128 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC256_Val         _UINT32_(0x5)                                        /* (FUSES_WDTCFG) 256 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC512_Val         _UINT32_(0x6)                                        /* (FUSES_WDTCFG) 512 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC1024_Val        _UINT32_(0x7)                                        /* (FUSES_WDTCFG) 1024 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC2048_Val        _UINT32_(0x8)                                        /* (FUSES_WDTCFG) 2048 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC4096_Val        _UINT32_(0x9)                                        /* (FUSES_WDTCFG) 4096 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC8192_Val        _UINT32_(0xA)                                        /* (FUSES_WDTCFG) 8192 clock cycles  */
#define   FUSES_WDTCFG_PER_CYC16384_Val       _UINT32_(0xB)                                        /* (FUSES_WDTCFG) 16384 clock cycles  */
#define FUSES_WDTCFG_PER_CYC8                 (FUSES_WDTCFG_PER_CYC8_Val << FUSES_WDTCFG_PER_Pos)  /* (FUSES_WDTCFG) 8 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC16                (FUSES_WDTCFG_PER_CYC16_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 16 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC32                (FUSES_WDTCFG_PER_CYC32_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 32 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC64                (FUSES_WDTCFG_PER_CYC64_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 64 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC128               (FUSES_WDTCFG_PER_CYC128_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 128 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC256               (FUSES_WDTCFG_PER_CYC256_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 256 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC512               (FUSES_WDTCFG_PER_CYC512_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 512 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC1024              (FUSES_WDTCFG_PER_CYC1024_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 1024 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC2048              (FUSES_WDTCFG_PER_CYC2048_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 2048 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC4096              (FUSES_WDTCFG_PER_CYC4096_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 4096 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC8192              (FUSES_WDTCFG_PER_CYC8192_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 8192 clock cycles Position */
#define FUSES_WDTCFG_PER_CYC16384             (FUSES_WDTCFG_PER_CYC16384_Val << FUSES_WDTCFG_PER_Pos) /* (FUSES_WDTCFG) 16384 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_Pos               _UINT32_(12)                                         /* (FUSES_WDTCFG) Window Position */
#define FUSES_WDTCFG_WINDOW_Msk               (_UINT32_(0xF) << FUSES_WDTCFG_WINDOW_Pos)           /* (FUSES_WDTCFG) Window Mask */
#define FUSES_WDTCFG_WINDOW(value)            (FUSES_WDTCFG_WINDOW_Msk & (_UINT32_(value) << FUSES_WDTCFG_WINDOW_Pos)) /* Assignment of value for WINDOW in the FUSES_WDTCFG register */
#define   FUSES_WDTCFG_WINDOW_CYC8_Val        _UINT32_(0x0)                                        /* (FUSES_WDTCFG) 8 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC16_Val       _UINT32_(0x1)                                        /* (FUSES_WDTCFG) 16 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC32_Val       _UINT32_(0x2)                                        /* (FUSES_WDTCFG) 32 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC64_Val       _UINT32_(0x3)                                        /* (FUSES_WDTCFG) 64 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC128_Val      _UINT32_(0x4)                                        /* (FUSES_WDTCFG) 128 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC256_Val      _UINT32_(0x5)                                        /* (FUSES_WDTCFG) 256 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC512_Val      _UINT32_(0x6)                                        /* (FUSES_WDTCFG) 512 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC1024_Val     _UINT32_(0x7)                                        /* (FUSES_WDTCFG) 1024 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC2048_Val     _UINT32_(0x8)                                        /* (FUSES_WDTCFG) 2048 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC4096_Val     _UINT32_(0x9)                                        /* (FUSES_WDTCFG) 4096 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC8192_Val     _UINT32_(0xA)                                        /* (FUSES_WDTCFG) 8192 clock cycles  */
#define   FUSES_WDTCFG_WINDOW_CYC16384_Val    _UINT32_(0xB)                                        /* (FUSES_WDTCFG) 16384 clock cycles  */
#define FUSES_WDTCFG_WINDOW_CYC8              (FUSES_WDTCFG_WINDOW_CYC8_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 8 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC16             (FUSES_WDTCFG_WINDOW_CYC16_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 16 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC32             (FUSES_WDTCFG_WINDOW_CYC32_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 32 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC64             (FUSES_WDTCFG_WINDOW_CYC64_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 64 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC128            (FUSES_WDTCFG_WINDOW_CYC128_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 128 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC256            (FUSES_WDTCFG_WINDOW_CYC256_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 256 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC512            (FUSES_WDTCFG_WINDOW_CYC512_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 512 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC1024           (FUSES_WDTCFG_WINDOW_CYC1024_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 1024 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC2048           (FUSES_WDTCFG_WINDOW_CYC2048_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 2048 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC4096           (FUSES_WDTCFG_WINDOW_CYC4096_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 4096 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC8192           (FUSES_WDTCFG_WINDOW_CYC8192_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 8192 clock cycles Position */
#define FUSES_WDTCFG_WINDOW_CYC16384          (FUSES_WDTCFG_WINDOW_CYC16384_Val << FUSES_WDTCFG_WINDOW_Pos) /* (FUSES_WDTCFG) 16384 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_Pos             _UINT32_(16)                                         /* (FUSES_WDTCFG) Early Warning Interrupt Time Offset Fuse Position */
#define FUSES_WDTCFG_EWOFFSET_Msk             (_UINT32_(0xF) << FUSES_WDTCFG_EWOFFSET_Pos)         /* (FUSES_WDTCFG) Early Warning Interrupt Time Offset Fuse Mask */
#define FUSES_WDTCFG_EWOFFSET(value)          (FUSES_WDTCFG_EWOFFSET_Msk & (_UINT32_(value) << FUSES_WDTCFG_EWOFFSET_Pos)) /* Assignment of value for EWOFFSET in the FUSES_WDTCFG register */
#define   FUSES_WDTCFG_EWOFFSET_CYC8_Val      _UINT32_(0x0)                                        /* (FUSES_WDTCFG) 8 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC16_Val     _UINT32_(0x1)                                        /* (FUSES_WDTCFG) 16 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC32_Val     _UINT32_(0x2)                                        /* (FUSES_WDTCFG) 32 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC64_Val     _UINT32_(0x3)                                        /* (FUSES_WDTCFG) 64 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC128_Val    _UINT32_(0x4)                                        /* (FUSES_WDTCFG) 128 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC256_Val    _UINT32_(0x5)                                        /* (FUSES_WDTCFG) 256 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC512_Val    _UINT32_(0x6)                                        /* (FUSES_WDTCFG) 512 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC1024_Val   _UINT32_(0x7)                                        /* (FUSES_WDTCFG) 1024 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC2048_Val   _UINT32_(0x8)                                        /* (FUSES_WDTCFG) 2048 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC4096_Val   _UINT32_(0x9)                                        /* (FUSES_WDTCFG) 4096 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC8192_Val   _UINT32_(0xA)                                        /* (FUSES_WDTCFG) 8192 clock cycles  */
#define   FUSES_WDTCFG_EWOFFSET_CYC16384_Val  _UINT32_(0xB)                                        /* (FUSES_WDTCFG) 16384 clock cycles  */
#define FUSES_WDTCFG_EWOFFSET_CYC8            (FUSES_WDTCFG_EWOFFSET_CYC8_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 8 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC16           (FUSES_WDTCFG_EWOFFSET_CYC16_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 16 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC32           (FUSES_WDTCFG_EWOFFSET_CYC32_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 32 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC64           (FUSES_WDTCFG_EWOFFSET_CYC64_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 64 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC128          (FUSES_WDTCFG_EWOFFSET_CYC128_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 128 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC256          (FUSES_WDTCFG_EWOFFSET_CYC256_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 256 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC512          (FUSES_WDTCFG_EWOFFSET_CYC512_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 512 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC1024         (FUSES_WDTCFG_EWOFFSET_CYC1024_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 1024 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC2048         (FUSES_WDTCFG_EWOFFSET_CYC2048_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 2048 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC4096         (FUSES_WDTCFG_EWOFFSET_CYC4096_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 4096 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC8192         (FUSES_WDTCFG_EWOFFSET_CYC8192_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 8192 clock cycles Position */
#define FUSES_WDTCFG_EWOFFSET_CYC16384        (FUSES_WDTCFG_EWOFFSET_CYC16384_Val << FUSES_WDTCFG_EWOFFSET_Pos) /* (FUSES_WDTCFG) 16384 clock cycles Position */
#define FUSES_WDTCFG_Msk                      _UINT32_(0x000FFF0E)                                 /* (FUSES_WDTCFG) Register Mask  */


/* -------- FUSES_BODCFG : (FUSES Offset: 0x18) (R/W 32) BOD Configuration Fuse -------- */
#define FUSES_BODCFG_RESETVALUE               _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BODCFG) BOD Configuration Fuse  Reset Value */

#define FUSES_BODCFG_ENABLE_Pos               _UINT32_(1)                                          /* (FUSES_BODCFG) BOD Enable Position */
#define FUSES_BODCFG_ENABLE_Msk               (_UINT32_(0x1) << FUSES_BODCFG_ENABLE_Pos)           /* (FUSES_BODCFG) BOD Enable Mask */
#define FUSES_BODCFG_ENABLE(value)            (FUSES_BODCFG_ENABLE_Msk & (_UINT32_(value) << FUSES_BODCFG_ENABLE_Pos)) /* Assignment of value for ENABLE in the FUSES_BODCFG register */
#define FUSES_BODCFG_STDBYCFG_Pos             _UINT32_(5)                                          /* (FUSES_BODCFG) BOD Configuration in Standby Sleep Mode Position */
#define FUSES_BODCFG_STDBYCFG_Msk             (_UINT32_(0x1) << FUSES_BODCFG_STDBYCFG_Pos)         /* (FUSES_BODCFG) BOD Configuration in Standby Sleep Mode Mask */
#define FUSES_BODCFG_STDBYCFG(value)          (FUSES_BODCFG_STDBYCFG_Msk & (_UINT32_(value) << FUSES_BODCFG_STDBYCFG_Pos)) /* Assignment of value for STDBYCFG in the FUSES_BODCFG register */
#define FUSES_BODCFG_RUNSTDBY_Pos             _UINT32_(6)                                          /* (FUSES_BODCFG) Run in Standby Position */
#define FUSES_BODCFG_RUNSTDBY_Msk             (_UINT32_(0x1) << FUSES_BODCFG_RUNSTDBY_Pos)         /* (FUSES_BODCFG) Run in Standby Mask */
#define FUSES_BODCFG_RUNSTDBY(value)          (FUSES_BODCFG_RUNSTDBY_Msk & (_UINT32_(value) << FUSES_BODCFG_RUNSTDBY_Pos)) /* Assignment of value for RUNSTDBY in the FUSES_BODCFG register */
#define FUSES_BODCFG_ACTCFG_Pos               _UINT32_(8)                                          /* (FUSES_BODCFG) BOD Operation Mode in Active Mode Position */
#define FUSES_BODCFG_ACTCFG_Msk               (_UINT32_(0x1) << FUSES_BODCFG_ACTCFG_Pos)           /* (FUSES_BODCFG) BOD Operation Mode in Active Mode Mask */
#define FUSES_BODCFG_ACTCFG(value)            (FUSES_BODCFG_ACTCFG_Msk & (_UINT32_(value) << FUSES_BODCFG_ACTCFG_Pos)) /* Assignment of value for ACTCFG in the FUSES_BODCFG register */
#define   FUSES_BODCFG_ACTCFG_CONT_Val        _UINT32_(0x0)                                        /* (FUSES_BODCFG) Continuous Mode  */
#define   FUSES_BODCFG_ACTCFG_SAMP_Val        _UINT32_(0x1)                                        /* (FUSES_BODCFG) Sampling Mode  */
#define FUSES_BODCFG_ACTCFG_CONT              (FUSES_BODCFG_ACTCFG_CONT_Val << FUSES_BODCFG_ACTCFG_Pos) /* (FUSES_BODCFG) Continuous Mode Position */
#define FUSES_BODCFG_ACTCFG_SAMP              (FUSES_BODCFG_ACTCFG_SAMP_Val << FUSES_BODCFG_ACTCFG_Pos) /* (FUSES_BODCFG) Sampling Mode Position */
#define FUSES_BODCFG_SAMPFREQ_Pos             _UINT32_(12)                                         /* (FUSES_BODCFG) BOD Sampling Frequency Position */
#define FUSES_BODCFG_SAMPFREQ_Msk             (_UINT32_(0x1) << FUSES_BODCFG_SAMPFREQ_Pos)         /* (FUSES_BODCFG) BOD Sampling Frequency Mask */
#define FUSES_BODCFG_SAMPFREQ(value)          (FUSES_BODCFG_SAMPFREQ_Msk & (_UINT32_(value) << FUSES_BODCFG_SAMPFREQ_Pos)) /* Assignment of value for SAMPFREQ in the FUSES_BODCFG register */
#define   FUSES_BODCFG_SAMPFREQ_128HZ_Val     _UINT32_(0x0)                                        /* (FUSES_BODCFG) 128 Hz Sampling Frequency  */
#define   FUSES_BODCFG_SAMPFREQ_32HZ_Val      _UINT32_(0x1)                                        /* (FUSES_BODCFG) 32 Hz Sampling Frequency  */
#define FUSES_BODCFG_SAMPFREQ_128HZ           (FUSES_BODCFG_SAMPFREQ_128HZ_Val << FUSES_BODCFG_SAMPFREQ_Pos) /* (FUSES_BODCFG) 128 Hz Sampling Frequency Position */
#define FUSES_BODCFG_SAMPFREQ_32HZ            (FUSES_BODCFG_SAMPFREQ_32HZ_Val << FUSES_BODCFG_SAMPFREQ_Pos) /* (FUSES_BODCFG) 32 Hz Sampling Frequency Position */
#define FUSES_BODCFG_LEVEL_Pos                _UINT32_(16)                                         /* (FUSES_BODCFG) BOD Level Position */
#define FUSES_BODCFG_LEVEL_Msk                (_UINT32_(0x3) << FUSES_BODCFG_LEVEL_Pos)            /* (FUSES_BODCFG) BOD Level Mask */
#define FUSES_BODCFG_LEVEL(value)             (FUSES_BODCFG_LEVEL_Msk & (_UINT32_(value) << FUSES_BODCFG_LEVEL_Pos)) /* Assignment of value for LEVEL in the FUSES_BODCFG register */
#define   FUSES_BODCFG_LEVEL_BODLEVEL0_Val    _UINT32_(0x0)                                        /* (FUSES_BODCFG) 1.90V  */
#define   FUSES_BODCFG_LEVEL_BODLEVEL1_Val    _UINT32_(0x1)                                        /* (FUSES_BODCFG) 2.45V  */
#define   FUSES_BODCFG_LEVEL_BODLEVEL2_Val    _UINT32_(0x2)                                        /* (FUSES_BODCFG) 2.70V  */
#define   FUSES_BODCFG_LEVEL_BODLEVEL3_Val    _UINT32_(0x3)                                        /* (FUSES_BODCFG) 2.85V  */
#define FUSES_BODCFG_LEVEL_BODLEVEL0          (FUSES_BODCFG_LEVEL_BODLEVEL0_Val << FUSES_BODCFG_LEVEL_Pos) /* (FUSES_BODCFG) 1.90V Position */
#define FUSES_BODCFG_LEVEL_BODLEVEL1          (FUSES_BODCFG_LEVEL_BODLEVEL1_Val << FUSES_BODCFG_LEVEL_Pos) /* (FUSES_BODCFG) 2.45V Position */
#define FUSES_BODCFG_LEVEL_BODLEVEL2          (FUSES_BODCFG_LEVEL_BODLEVEL2_Val << FUSES_BODCFG_LEVEL_Pos) /* (FUSES_BODCFG) 2.70V Position */
#define FUSES_BODCFG_LEVEL_BODLEVEL3          (FUSES_BODCFG_LEVEL_BODLEVEL3_Val << FUSES_BODCFG_LEVEL_Pos) /* (FUSES_BODCFG) 2.85V Position */
#define FUSES_BODCFG_VLMLVL_Pos               _UINT32_(24)                                         /* (FUSES_BODCFG) Voltage Level Monitor Level Position */
#define FUSES_BODCFG_VLMLVL_Msk               (_UINT32_(0x3) << FUSES_BODCFG_VLMLVL_Pos)           /* (FUSES_BODCFG) Voltage Level Monitor Level Mask */
#define FUSES_BODCFG_VLMLVL(value)            (FUSES_BODCFG_VLMLVL_Msk & (_UINT32_(value) << FUSES_BODCFG_VLMLVL_Pos)) /* Assignment of value for VLMLVL in the FUSES_BODCFG register */
#define   FUSES_BODCFG_VLMLVL_OFF_Val         _UINT32_(0x0)                                        /* (FUSES_BODCFG) VLM disabled  */
#define   FUSES_BODCFG_VLMLVL_5ABOVE_Val      _UINT32_(0x1)                                        /* (FUSES_BODCFG) VLM threshold is 5% above BOD threshold  */
#define FUSES_BODCFG_VLMLVL_OFF               (FUSES_BODCFG_VLMLVL_OFF_Val << FUSES_BODCFG_VLMLVL_Pos) /* (FUSES_BODCFG) VLM disabled Position */
#define FUSES_BODCFG_VLMLVL_5ABOVE            (FUSES_BODCFG_VLMLVL_5ABOVE_Val << FUSES_BODCFG_VLMLVL_Pos) /* (FUSES_BODCFG) VLM threshold is 5% above BOD threshold Position */
#define FUSES_BODCFG_VLMCFG_Pos               _UINT32_(26)                                         /* (FUSES_BODCFG) Voltage Level Monitor Interrupt Configuration Position */
#define FUSES_BODCFG_VLMCFG_Msk               (_UINT32_(0x3) << FUSES_BODCFG_VLMCFG_Pos)           /* (FUSES_BODCFG) Voltage Level Monitor Interrupt Configuration Mask */
#define FUSES_BODCFG_VLMCFG(value)            (FUSES_BODCFG_VLMCFG_Msk & (_UINT32_(value) << FUSES_BODCFG_VLMCFG_Pos)) /* Assignment of value for VLMCFG in the FUSES_BODCFG register */
#define   FUSES_BODCFG_VLMCFG_FALLING_Val     _UINT32_(0x0)                                        /* (FUSES_BODCFG) VDD falls below VLM threshold  */
#define   FUSES_BODCFG_VLMCFG_RISING_Val      _UINT32_(0x1)                                        /* (FUSES_BODCFG) VDD rises above VLM threshold  */
#define   FUSES_BODCFG_VLMCFG_BOTH_Val        _UINT32_(0x2)                                        /* (FUSES_BODCFG) VDD crosses VLM threshold  */
#define FUSES_BODCFG_VLMCFG_FALLING           (FUSES_BODCFG_VLMCFG_FALLING_Val << FUSES_BODCFG_VLMCFG_Pos) /* (FUSES_BODCFG) VDD falls below VLM threshold Position */
#define FUSES_BODCFG_VLMCFG_RISING            (FUSES_BODCFG_VLMCFG_RISING_Val << FUSES_BODCFG_VLMCFG_Pos) /* (FUSES_BODCFG) VDD rises above VLM threshold Position */
#define FUSES_BODCFG_VLMCFG_BOTH              (FUSES_BODCFG_VLMCFG_BOTH_Val << FUSES_BODCFG_VLMCFG_Pos) /* (FUSES_BODCFG) VDD crosses VLM threshold Position */
#define FUSES_BODCFG_WRTLOCK_Pos              _UINT32_(31)                                         /* (FUSES_BODCFG) Write Lock Position */
#define FUSES_BODCFG_WRTLOCK_Msk              (_UINT32_(0x1) << FUSES_BODCFG_WRTLOCK_Pos)          /* (FUSES_BODCFG) Write Lock Mask */
#define FUSES_BODCFG_WRTLOCK(value)           (FUSES_BODCFG_WRTLOCK_Msk & (_UINT32_(value) << FUSES_BODCFG_WRTLOCK_Pos)) /* Assignment of value for WRTLOCK in the FUSES_BODCFG register */
#define FUSES_BODCFG_Msk                      _UINT32_(0x8F031162)                                 /* (FUSES_BODCFG) Register Mask  */


/* -------- FUSES_USERCFG : (FUSES Offset: 0x20) (R/W 32) User Configuration Fuse -------- */
#define FUSES_USERCFG_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_USERCFG) User Configuration Fuse  Reset Value */

#define FUSES_USERCFG_MVIOMODE_Pos            _UINT32_(0)                                          /* (FUSES_USERCFG) MVIO Operation Mode Position */
#define FUSES_USERCFG_MVIOMODE_Msk            (_UINT32_(0x1) << FUSES_USERCFG_MVIOMODE_Pos)        /* (FUSES_USERCFG) MVIO Operation Mode Mask */
#define FUSES_USERCFG_MVIOMODE(value)         (FUSES_USERCFG_MVIOMODE_Msk & (_UINT32_(value) << FUSES_USERCFG_MVIOMODE_Pos)) /* Assignment of value for MVIOMODE in the FUSES_USERCFG register */
#define   FUSES_USERCFG_MVIOMODE_DUAL_Val     _UINT32_(0x0)                                        /* (FUSES_USERCFG) MVIO operating in dual supply mode  */
#define   FUSES_USERCFG_MVIOMODE_SINGLE_Val   _UINT32_(0x1)                                        /* (FUSES_USERCFG) MVIO operating in Single supply mode  */
#define FUSES_USERCFG_MVIOMODE_DUAL           (FUSES_USERCFG_MVIOMODE_DUAL_Val << FUSES_USERCFG_MVIOMODE_Pos) /* (FUSES_USERCFG) MVIO operating in dual supply mode Position */
#define FUSES_USERCFG_MVIOMODE_SINGLE         (FUSES_USERCFG_MVIOMODE_SINGLE_Val << FUSES_USERCFG_MVIOMODE_Pos) /* (FUSES_USERCFG) MVIO operating in Single supply mode Position */
#define FUSES_USERCFG_CRCSEL_Pos              _UINT32_(6)                                          /* (FUSES_USERCFG) CRC Polynomial Selection Position */
#define FUSES_USERCFG_CRCSEL_Msk              (_UINT32_(0x1) << FUSES_USERCFG_CRCSEL_Pos)          /* (FUSES_USERCFG) CRC Polynomial Selection Mask */
#define FUSES_USERCFG_CRCSEL(value)           (FUSES_USERCFG_CRCSEL_Msk & (_UINT32_(value) << FUSES_USERCFG_CRCSEL_Pos)) /* Assignment of value for CRCSEL in the FUSES_USERCFG register */
#define   FUSES_USERCFG_CRCSEL_CRC16_Val      _UINT32_(0x0)                                        /* (FUSES_USERCFG) CRC-16-CCITT  */
#define   FUSES_USERCFG_CRCSEL_CRC32_Val      _UINT32_(0x1)                                        /* (FUSES_USERCFG) CRC-32 (IEEE 802.3)  */
#define FUSES_USERCFG_CRCSEL_CRC16            (FUSES_USERCFG_CRCSEL_CRC16_Val << FUSES_USERCFG_CRCSEL_Pos) /* (FUSES_USERCFG) CRC-16-CCITT Position */
#define FUSES_USERCFG_CRCSEL_CRC32            (FUSES_USERCFG_CRCSEL_CRC32_Val << FUSES_USERCFG_CRCSEL_Pos) /* (FUSES_USERCFG) CRC-32 (IEEE 802.3) Position */
#define FUSES_USERCFG_CRCBOOT_Pos             _UINT32_(7)                                          /* (FUSES_USERCFG) CRC Boot Position */
#define FUSES_USERCFG_CRCBOOT_Msk             (_UINT32_(0x1) << FUSES_USERCFG_CRCBOOT_Pos)         /* (FUSES_USERCFG) CRC Boot Mask */
#define FUSES_USERCFG_CRCBOOT(value)          (FUSES_USERCFG_CRCBOOT_Msk & (_UINT32_(value) << FUSES_USERCFG_CRCBOOT_Pos)) /* Assignment of value for CRCBOOT in the FUSES_USERCFG register */
#define FUSES_USERCFG_SUT_Pos                 _UINT32_(8)                                          /* (FUSES_USERCFG) Start-up Time Position */
#define FUSES_USERCFG_SUT_Msk                 (_UINT32_(0x7) << FUSES_USERCFG_SUT_Pos)             /* (FUSES_USERCFG) Start-up Time Mask */
#define FUSES_USERCFG_SUT(value)              (FUSES_USERCFG_SUT_Msk & (_UINT32_(value) << FUSES_USERCFG_SUT_Pos)) /* Assignment of value for SUT in the FUSES_USERCFG register */
#define   FUSES_USERCFG_SUT_0MS_Val           _UINT32_(0x0)                                        /* (FUSES_USERCFG) 0 ms  */
#define   FUSES_USERCFG_SUT_1MS_Val           _UINT32_(0x1)                                        /* (FUSES_USERCFG) 1 ms  */
#define   FUSES_USERCFG_SUT_2MS_Val           _UINT32_(0x2)                                        /* (FUSES_USERCFG) 2 ms  */
#define   FUSES_USERCFG_SUT_4MS_Val           _UINT32_(0x3)                                        /* (FUSES_USERCFG) 4 ms  */
#define   FUSES_USERCFG_SUT_8MS_Val           _UINT32_(0x4)                                        /* (FUSES_USERCFG) 8 ms  */
#define   FUSES_USERCFG_SUT_16MS_Val          _UINT32_(0x5)                                        /* (FUSES_USERCFG) 16 ms  */
#define   FUSES_USERCFG_SUT_32MS_Val          _UINT32_(0x6)                                        /* (FUSES_USERCFG) 32 ms  */
#define   FUSES_USERCFG_SUT_64MS_Val          _UINT32_(0x7)                                        /* (FUSES_USERCFG) 64 ms  */
#define FUSES_USERCFG_SUT_0MS                 (FUSES_USERCFG_SUT_0MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 0 ms Position */
#define FUSES_USERCFG_SUT_1MS                 (FUSES_USERCFG_SUT_1MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 1 ms Position */
#define FUSES_USERCFG_SUT_2MS                 (FUSES_USERCFG_SUT_2MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 2 ms Position */
#define FUSES_USERCFG_SUT_4MS                 (FUSES_USERCFG_SUT_4MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 4 ms Position */
#define FUSES_USERCFG_SUT_8MS                 (FUSES_USERCFG_SUT_8MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 8 ms Position */
#define FUSES_USERCFG_SUT_16MS                (FUSES_USERCFG_SUT_16MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 16 ms Position */
#define FUSES_USERCFG_SUT_32MS                (FUSES_USERCFG_SUT_32MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 32 ms Position */
#define FUSES_USERCFG_SUT_64MS                (FUSES_USERCFG_SUT_64MS_Val << FUSES_USERCFG_SUT_Pos) /* (FUSES_USERCFG) 64 ms Position */
#define FUSES_USERCFG_Msk                     _UINT32_(0x000007C1)                                 /* (FUSES_USERCFG) Register Mask  */


/* -------- FUSES_BOOT_GPIOSEL : (FUSES Offset: 0x28) (R/W 32) Boot External Notification I/O Pin Fuse -------- */
#define FUSES_BOOT_GPIOSEL_RESETVALUE         _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_BOOT_GPIOSEL) Boot External Notification I/O Pin Fuse  Reset Value */

#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos     _UINT32_(0)                                          /* (FUSES_BOOT_GPIOSEL) GPIO Pin Select for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_Msk     (_UINT32_(0x1F) << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) GPIO Pin Select for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL(value)  (FUSES_BOOT_GPIOSEL_GPIOPINSEL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos)) /* Assignment of value for GPIOPINSEL in the FUSES_BOOT_GPIOSEL register */
#define   FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN00_Val _UINT32_(0x0)                                        /* (FUSES_BOOT_GPIOSEL) Pin 0  */
#define   FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN01_Val _UINT32_(0x1)                                        /* (FUSES_BOOT_GPIOSEL) Pin 1  */
#define   FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN30_Val _UINT32_(0x1E)                                       /* (FUSES_BOOT_GPIOSEL) Pin 30  */
#define   FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN31_Val _UINT32_(0x1F)                                       /* (FUSES_BOOT_GPIOSEL) Pin 31  */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN00   (FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN00_Val << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Pin 0 Position */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN01   (FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN01_Val << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Pin 1 Position */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN30   (FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN30_Val << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Pin 30 Position */
#define FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN31   (FUSES_BOOT_GPIOSEL_GPIOPINSEL_PIN31_Val << FUSES_BOOT_GPIOSEL_GPIOPINSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Pin 31 Position */
#define FUSES_BOOT_GPIOSEL_ENABLE_Pos         _UINT32_(7)                                          /* (FUSES_BOOT_GPIOSEL) Enable Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_ENABLE_Msk         (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_ENABLE_Pos)     /* (FUSES_BOOT_GPIOSEL) Enable Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_ENABLE(value)      (FUSES_BOOT_GPIOSEL_ENABLE_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_ENABLE_Pos)) /* Assignment of value for ENABLE in the FUSES_BOOT_GPIOSEL register */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos    _UINT32_(8)                                          /* (FUSES_BOOT_GPIOSEL) GPIO Port Select for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Msk    (_UINT32_(0xF) << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) GPIO Port Select for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL(value) (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos)) /* Assignment of value for GPIOPORTSEL in the FUSES_BOOT_GPIOSEL register */
#define   FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTA_Val _UINT32_(0x0)                                        /* (FUSES_BOOT_GPIOSEL) Port A  */
#define   FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTB_Val _UINT32_(0x1)                                        /* (FUSES_BOOT_GPIOSEL) Port B  */
#define   FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTC_Val _UINT32_(0x2)                                        /* (FUSES_BOOT_GPIOSEL) Port C  */
#define   FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTD_Val _UINT32_(0x3)                                        /* (FUSES_BOOT_GPIOSEL) Port D  */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTA  (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTA_Val << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Port A Position */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTB  (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTB_Val << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Port B Position */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTC  (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTC_Val << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Port C Position */
#define FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTD  (FUSES_BOOT_GPIOSEL_GPIOPORTSEL_PORTD_Val << FUSES_BOOT_GPIOSEL_GPIOPORTSEL_Pos) /* (FUSES_BOOT_GPIOSEL) Port D Position */
#define FUSES_BOOT_GPIOSEL_POL_Pos            _UINT32_(17)                                         /* (FUSES_BOOT_GPIOSEL) Select Polarity in Normal Drive Mode for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_POL_Msk            (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_POL_Pos)        /* (FUSES_BOOT_GPIOSEL) Select Polarity in Normal Drive Mode for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_POL(value)         (FUSES_BOOT_GPIOSEL_POL_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_POL_Pos)) /* Assignment of value for POL in the FUSES_BOOT_GPIOSEL register */
#define   FUSES_BOOT_GPIOSEL_POL_FALSE_Val    _UINT32_(0x0)                                        /* (FUSES_BOOT_GPIOSEL) The selected fault source is active-high  */
#define   FUSES_BOOT_GPIOSEL_POL_TRUE_Val     _UINT32_(0x1)                                        /* (FUSES_BOOT_GPIOSEL) The selected fault source is active-low  */
#define FUSES_BOOT_GPIOSEL_POL_FALSE          (FUSES_BOOT_GPIOSEL_POL_FALSE_Val << FUSES_BOOT_GPIOSEL_POL_Pos) /* (FUSES_BOOT_GPIOSEL) The selected fault source is active-high Position */
#define FUSES_BOOT_GPIOSEL_POL_TRUE           (FUSES_BOOT_GPIOSEL_POL_TRUE_Val << FUSES_BOOT_GPIOSEL_POL_Pos) /* (FUSES_BOOT_GPIOSEL) The selected fault source is active-low Position */
#define FUSES_BOOT_GPIOSEL_ODRAIN_Pos         _UINT32_(19)                                         /* (FUSES_BOOT_GPIOSEL) Open Drain Control for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_ODRAIN_Msk         (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_ODRAIN_Pos)     /* (FUSES_BOOT_GPIOSEL) Open Drain Control for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_ODRAIN(value)      (FUSES_BOOT_GPIOSEL_ODRAIN_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_ODRAIN_Pos)) /* Assignment of value for ODRAIN in the FUSES_BOOT_GPIOSEL register */
#define   FUSES_BOOT_GPIOSEL_ODRAIN_FALSE_Val _UINT32_(0x0)                                        /* (FUSES_BOOT_GPIOSEL) The selected fault source is open drain drive  */
#define   FUSES_BOOT_GPIOSEL_ODRAIN_TRUE_Val  _UINT32_(0x1)                                        /* (FUSES_BOOT_GPIOSEL) The selected fault source is normal drive  */
#define FUSES_BOOT_GPIOSEL_ODRAIN_FALSE       (FUSES_BOOT_GPIOSEL_ODRAIN_FALSE_Val << FUSES_BOOT_GPIOSEL_ODRAIN_Pos) /* (FUSES_BOOT_GPIOSEL) The selected fault source is open drain drive Position */
#define FUSES_BOOT_GPIOSEL_ODRAIN_TRUE        (FUSES_BOOT_GPIOSEL_ODRAIN_TRUE_Val << FUSES_BOOT_GPIOSEL_ODRAIN_Pos) /* (FUSES_BOOT_GPIOSEL) The selected fault source is normal drive Position */
#define FUSES_BOOT_GPIOSEL_SLEWLIM_Pos        _UINT32_(20)                                         /* (FUSES_BOOT_GPIOSEL) Slew Rate Control for Boot External Notification Signal Position */
#define FUSES_BOOT_GPIOSEL_SLEWLIM_Msk        (_UINT32_(0x1) << FUSES_BOOT_GPIOSEL_SLEWLIM_Pos)    /* (FUSES_BOOT_GPIOSEL) Slew Rate Control for Boot External Notification Signal Mask */
#define FUSES_BOOT_GPIOSEL_SLEWLIM(value)     (FUSES_BOOT_GPIOSEL_SLEWLIM_Msk & (_UINT32_(value) << FUSES_BOOT_GPIOSEL_SLEWLIM_Pos)) /* Assignment of value for SLEWLIM in the FUSES_BOOT_GPIOSEL register */
#define   FUSES_BOOT_GPIOSEL_SLEWLIM_FALSE_Val _UINT32_(0x0)                                        /* (FUSES_BOOT_GPIOSEL) The slew rate is not limited (fast rise/fall time operation)  */
#define   FUSES_BOOT_GPIOSEL_SLEWLIM_TRUE_Val _UINT32_(0x1)                                        /* (FUSES_BOOT_GPIOSEL) The slew rate is limited.  */
#define FUSES_BOOT_GPIOSEL_SLEWLIM_FALSE      (FUSES_BOOT_GPIOSEL_SLEWLIM_FALSE_Val << FUSES_BOOT_GPIOSEL_SLEWLIM_Pos) /* (FUSES_BOOT_GPIOSEL) The slew rate is not limited (fast rise/fall time operation) Position */
#define FUSES_BOOT_GPIOSEL_SLEWLIM_TRUE       (FUSES_BOOT_GPIOSEL_SLEWLIM_TRUE_Val << FUSES_BOOT_GPIOSEL_SLEWLIM_Pos) /* (FUSES_BOOT_GPIOSEL) The slew rate is limited. Position */
#define FUSES_BOOT_GPIOSEL_Msk                _UINT32_(0x001A0F9F)                                 /* (FUSES_BOOT_GPIOSEL) Register Mask  */


/* -------- FUSES_SERNUM0 : (FUSES Offset: 0x20) ( R/ 32) Serial Number 0 -------- */
#define FUSES_SERNUM0_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_SERNUM0) Serial Number 0  Reset Value */

#define FUSES_SERNUM0_SERNUM0_Pos             _UINT32_(0)                                          /* (FUSES_SERNUM0) Serial Number 0 Position */
#define FUSES_SERNUM0_SERNUM0_Msk             (_UINT32_(0xFFFFFFFF) << FUSES_SERNUM0_SERNUM0_Pos)  /* (FUSES_SERNUM0) Serial Number 0 Mask */
#define FUSES_SERNUM0_SERNUM0(value)          (FUSES_SERNUM0_SERNUM0_Msk & (_UINT32_(value) << FUSES_SERNUM0_SERNUM0_Pos)) /* Assignment of value for SERNUM0 in the FUSES_SERNUM0 register */
#define FUSES_SERNUM0_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_SERNUM0) Register Mask  */


/* -------- FUSES_SERNUM1 : (FUSES Offset: 0x28) ( R/ 32) Serial Number 1 -------- */
#define FUSES_SERNUM1_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_SERNUM1) Serial Number 1  Reset Value */

#define FUSES_SERNUM1_SERNUM1_Pos             _UINT32_(0)                                          /* (FUSES_SERNUM1) Serial Number 1 Position */
#define FUSES_SERNUM1_SERNUM1_Msk             (_UINT32_(0xFFFFFFFF) << FUSES_SERNUM1_SERNUM1_Pos)  /* (FUSES_SERNUM1) Serial Number 1 Mask */
#define FUSES_SERNUM1_SERNUM1(value)          (FUSES_SERNUM1_SERNUM1_Msk & (_UINT32_(value) << FUSES_SERNUM1_SERNUM1_Pos)) /* Assignment of value for SERNUM1 in the FUSES_SERNUM1 register */
#define FUSES_SERNUM1_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_SERNUM1) Register Mask  */


/* -------- FUSES_SERNUM2 : (FUSES Offset: 0x30) ( R/ 32) Serial Number 2 -------- */
#define FUSES_SERNUM2_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_SERNUM2) Serial Number 2  Reset Value */

#define FUSES_SERNUM2_SERNUM2_Pos             _UINT32_(0)                                          /* (FUSES_SERNUM2) Serial Number 2 Position */
#define FUSES_SERNUM2_SERNUM2_Msk             (_UINT32_(0xFFFFFFFF) << FUSES_SERNUM2_SERNUM2_Pos)  /* (FUSES_SERNUM2) Serial Number 2 Mask */
#define FUSES_SERNUM2_SERNUM2(value)          (FUSES_SERNUM2_SERNUM2_Msk & (_UINT32_(value) << FUSES_SERNUM2_SERNUM2_Pos)) /* Assignment of value for SERNUM2 in the FUSES_SERNUM2 register */
#define FUSES_SERNUM2_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_SERNUM2) Register Mask  */


/* -------- FUSES_SERNUM3 : (FUSES Offset: 0x38) ( R/ 32) Serial Number 3 -------- */
#define FUSES_SERNUM3_RESETVALUE              _UINT32_(0xFFFFFFFF)                                 /*  (FUSES_SERNUM3) Serial Number 3  Reset Value */

#define FUSES_SERNUM3_SERNUM3_Pos             _UINT32_(0)                                          /* (FUSES_SERNUM3) Serial Number 3 Position */
#define FUSES_SERNUM3_SERNUM3_Msk             (_UINT32_(0xFFFFFFFF) << FUSES_SERNUM3_SERNUM3_Pos)  /* (FUSES_SERNUM3) Serial Number 3 Mask */
#define FUSES_SERNUM3_SERNUM3(value)          (FUSES_SERNUM3_SERNUM3_Msk & (_UINT32_(value) << FUSES_SERNUM3_SERNUM3_Pos)) /* Assignment of value for SERNUM3 in the FUSES_SERNUM3 register */
#define FUSES_SERNUM3_Msk                     _UINT32_(0xFFFFFFFF)                                 /* (FUSES_SERNUM3) Register Mask  */


/* FUSES register offsets definitions */
#define FUSES_SEQNUM_REG_OFST          _UINT32_(0x00)      /* (FUSES_SEQNUM) Sequence Number Fuse Offset */
#define FUSES_BOOTPROT_REG_OFST        _UINT32_(0x08)      /* (FUSES_BOOTPROT) Boot Protection Fuse Offset */
#define FUSES_WDTCFG_REG_OFST          _UINT32_(0x10)      /* (FUSES_WDTCFG) Watchdog Timer Configuration Fuse Offset */
#define FUSES_BODCFG_REG_OFST          _UINT32_(0x18)      /* (FUSES_BODCFG) BOD Configuration Fuse Offset */
#define FUSES_USERCFG_REG_OFST         _UINT32_(0x20)      /* (FUSES_USERCFG) User Configuration Fuse Offset */
#define FUSES_BOOT_GPIOSEL_REG_OFST    _UINT32_(0x28)      /* (FUSES_BOOT_GPIOSEL) Boot External Notification I/O Pin Fuse Offset */
#define FUSES_SERNUM0_REG_OFST         _UINT32_(0x20)      /* (FUSES_SERNUM0) Serial Number 0 Offset */
#define FUSES_SERNUM1_REG_OFST         _UINT32_(0x28)      /* (FUSES_SERNUM1) Serial Number 1 Offset */
#define FUSES_SERNUM2_REG_OFST         _UINT32_(0x30)      /* (FUSES_SERNUM2) Serial Number 2 Offset */
#define FUSES_SERNUM3_REG_OFST         _UINT32_(0x38)      /* (FUSES_SERNUM3) Serial Number 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* FUSES_BOOTCFG register API structure */
typedef struct
{  /* Non-Volatile Fuses */
  __IO  uint32_t                       FUSES_SEQNUM;       /* Offset: 0x00 (R/W  32) Sequence Number Fuse */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint32_t                       FUSES_BOOTPROT;     /* Offset: 0x08 (R/W  32) Boot Protection Fuse */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       FUSES_WDTCFG;       /* Offset: 0x10 (R/W  32) Watchdog Timer Configuration Fuse */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       FUSES_BODCFG;       /* Offset: 0x18 (R/W  32) BOD Configuration Fuse */
  __I   uint8_t                        Reserved4[0x04];
  __IO  uint32_t                       FUSES_USERCFG;      /* Offset: 0x20 (R/W  32) User Configuration Fuse */
  __I   uint8_t                        Reserved5[0x04];
  __IO  uint32_t                       FUSES_BOOT_GPIOSEL; /* Offset: 0x28 (R/W  32) Boot External Notification I/O Pin Fuse */
} fuses_bootcfg_registers_t;

/* FUSES_SIGNATURE register API structure */
typedef struct
{  /* Non-Volatile Fuses */
  __I   uint8_t                        Reserved1[0x20];
  __I   uint32_t                       FUSES_SERNUM0;      /* Offset: 0x20 (R/   32) Serial Number 0 */
  __I   uint8_t                        Reserved2[0x04];
  __I   uint32_t                       FUSES_SERNUM1;      /* Offset: 0x28 (R/   32) Serial Number 1 */
  __I   uint8_t                        Reserved3[0x04];
  __I   uint32_t                       FUSES_SERNUM2;      /* Offset: 0x30 (R/   32) Serial Number 2 */
  __I   uint8_t                        Reserved4[0x04];
  __I   uint32_t                       FUSES_SERNUM3;      /* Offset: 0x38 (R/   32) Serial Number 3 */
} fuses_signature_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CMPL10_FUSES_COMPONENT_H_ */
