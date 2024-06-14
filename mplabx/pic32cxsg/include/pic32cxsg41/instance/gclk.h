/*
 * Instance header file for PIC32CX1025SG41128
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description file (ATDF) version 2023-03-17T09:48:34Z */
#ifndef _PIC32CXSG41_GCLK_INSTANCE_
#define _PIC32CXSG41_GCLK_INSTANCE_


/* ========== Instance Parameter definitions for GCLK peripheral ========== */
#define GCLK_GENCTRL0_RESETVALUE                 (106)      /* Default specific reset value for generator 0 */
#define GCLK_GENDIV_BITS                         (16)       
#define GCLK_GEN_BITS                            (4)        
#define GCLK_GEN_NUM                             (12)       /* Number of Generic Clock Generators */
#define GCLK_GEN_NUM_MSB                         (11)       /* Number of Generic Clock Generators - 1 */
#define GCLK_GEN_SOURCE_NUM_MSB                  (8)        /* Number of Generic Clock Sources - 1 */
#define GCLK_INSTANCE_ID                         (7)        /* Instance index for GCLK */
#define GCLK_IO_NUM                              (8)        /* Number of Generic Clock I/Os */
#define GCLK_NUM                                 (48)       /* Number of Generic Clock Users */
#define GCLK_SOURCE_BITS                         (4)        
#define GCLK_SOURCE_NUM                          (9)        /* Number of Generic Clock Sources */
#define GCLK_SOURCE_XOSC0           0        // Crystal Oscillator 0
#define GCLK_SOURCE_XOSC            0        //   Alias to GCLK_SOURCE_XOSC0
#define GCLK_SOURCE_XOSC1           1        // Crystal Oscillator 1
#define GCLK_SOURCE_GCLKIN          2        // Input Pin of Corresponding GCLK Generator
#define GCLK_SOURCE_GCLKGEN1        3        // GCLK Generator 1 output
#define GCLK_SOURCE_OSCULP32K       4        // Ultra-low-power 32kHz Oscillator
#define GCLK_SOURCE_XOSC32K         5        // 32kHz Crystal Oscillator
#define GCLK_SOURCE_DFLL            6        // Digital FLL
#define GCLK_SOURCE_DFLL48M         6        //   Alias to GCLK_SOURCE_DFLL
#define GCLK_SOURCE_OSC16M          6        //   Alias to GCLK_SOURCE_DFLL
#define GCLK_SOURCE_OSC48M          6        //   Alias to GCLK_SOURCE_DFLL
#define GCLK_SOURCE_DPLL0           7        // Digital PLL 0
#define GCLK_SOURCE_FDPLL           7        //   Alias to GCLK_SOURCE_DPLL0
#define GCLK_SOURCE_FDPLL0          7        //   Alias to GCLK_SOURCE_DPLL0
#define GCLK_SOURCE_DPLL1           8        // Digital PLL 1
#define GCLK_SOURCE_FDPLL1          8        //   Alias to GCLK_SOURCE_DPLL1
#define GCLK_GEN_DIV_BITS           { 8, 16, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8 }

#endif /* _PIC32CXSG41_GCLK_INSTANCE_ */
