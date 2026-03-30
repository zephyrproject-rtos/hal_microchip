/*
 * Instance header file for PIC32CK1012SG01100
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

/* file generated from device description file (ATDF) version 2025-07-03T22:19:00Z */
#ifndef _PIC32CKSG01_FLEXRAM_INSTANCE_
#define _PIC32CKSG01_FLEXRAM_INSTANCE_


/* ========== Instance Parameter definitions for FLEXRAM peripheral ========== */
#define FLEXRAM_AHB_CLOCK_ENABLE                 (0)        /* MCRAMC CLOCK GATER */
#define FLEXRAM_AHB_ECC                          (1)        /* ECC LOGIC */
#define FLEXRAM_AHB_PORTS_NB                     (5)        /* NUMBER OF AHB PORTS */
#define FLEXRAM_AHB_READ_PREBUFFERING            (0)        /* AHB READ PREBUFFERING */
#define FLEXRAM_AHB_REQUEST_ISOLATION_REGISTER   (0)        /* AHB REQUEST TIMING PATHS ISOLATION */
#define FLEXRAM_ARBITRATION_TYPE                 (2)        /* ARBITRATION SCHEME, FIXED_PRIORITY = 0, HIGHLIGHT = 1, HOPSCOTCH = 2 */
#define FLEXRAM_BIT_STROBE_RAM                   (0)        /* Set this parameter to TRUE if the ram_wem_bundle outputs are connected to ram bit-strobe write masks */
#define FLEXRAM_CHANNELS_NB                      (2)        /* NUMBER OF RAM CHANNELS */
#define FLEXRAM_CLK_GATER                        (0)        /* MCRAMC CLOCK GATER */
#define FLEXRAM_ECC_SYNDROM_REGISTER             (0)        /* ECC TIMING PATH BALANCING */
#define FLEXRAM_HADDR_READ_ISOLATION_REGISTER    (0)        /* Set to IMPLEMENTED to add 1 wait-state max (0 min) per memory new line read access for each of the AHB timing path isolations */
#define FLEXRAM_HRDATA_ISOLATION_CONFIGURABLE    (0)        /* AHB REQUEST TIMING PATHS ISOLATION */
#define FLEXRAM_HRDATA_ISOLATION_DEFAULT         (0)        /* Default HRDATA_ISOLATION setting */
#define FLEXRAM_INSTANCE_ID                      (20)       /* Instance index for FLEXRAM */
#define FLEXRAM_M0_CLOCK_ENABLE                  (0)        /* MCRAMC CLOCK GATER */
#define FLEXRAM_M0_DATA_SIZE                     (32)       /* M0 DATA BUS SIZE */
#define FLEXRAM_M0_HYBRID_READ_WRITE_ACCESS      (0)        /* M0 HYBRID SIMULTANEOUS READ + WRITE ACCESS */
#define FLEXRAM_M0_PORT_SLICES_NB                (0)        /* NUMBER OF PORT SLICES FOR THE 0 WS SRAM INTERFACE */
#define FLEXRAM_MCLK_ID_AHB                      (7)        /* Index for FLEXRAM AHB clock */
#define FLEXRAM_MCLK_ID_APB                      (53)       /* Index for FLEXRAM APB clock */
#define FLEXRAM_MEMORY_AUTO_CORRECTION           (1)        /* Perform an automatic write-back of the corrected ram word after read */
#define FLEXRAM_MEMORY_ENABLE_POLARITY           (0)        /* POSITIVE if Memory is selected when ram_me is 1'b1 */
#define FLEXRAM_MW_CLOCK_ENABLE                  (0)        /* MCRAMC CLOCK GATER */
#define FLEXRAM_MW_DATA_SIZE                     (32)       /* MW DATA BUS SIZE */
#define FLEXRAM_MW_PORT_SLICES_NB                (0)        /* NUMBER OF PORT SLICES FOR THE WAITED SRAM INTERFACE */
#define FLEXRAM_PAC_ID                           (20)       /* Index for FLEXRAM registers write protection */
#define FLEXRAM_PADDR_SIZE                       (13)       /* APB USER INTERFACE */
#define FLEXRAM_PRIVILEGED_BIT_CHECK             (0)        /* PRIVILED BIT implemented */
#define FLEXRAM_RAM_ADD_SIZE                     (14)       /* NUMBER OF ADDRESS BITS FOR ONE CHANNEL RAM CELL */
#define FLEXRAM_RAM_AHB_ADDRESS_OFFSET           (0x00000)  /* RAM BLOCK AHB ADDRESS OFFSET */
#define FLEXRAM_RAM_ERASE                        (0)        /* IMPLEMENTED if Ram erase on erase active input */
#define FLEXRAM_STORE_BYTE_STROBE                (0)        /* AHB byte strobes can be stored and read back through the M0 interface */
#define FLEXRAM_ULTRA                            (1)        /* ULTRA USER INTERFACE */
#define FLEXRAM_WP_KEY                           (0x465852) /* KEY value */
#define FLEXRAM_WRITE_ENABLE_POLARITY            (0)        /* POSITIVE if Memory is written when ram_we is 1'b1 */
#define FLEXRAM_WRITE_ENABLE_USED                (1)        /* TRUE  if the Memory makes use of a global per channel ram_we write enable */
#define FLEXRAM_WRITE_MASK_POLARITY              (0)        /* POSITIVE if Memory is written when ram_wem is 1'b1 */
#define FLEXRAM_WRITE_PROTECT_REGISTER           (0)        /* WRITE Protect register implemented */

#endif /* _PIC32CKSG01_FLEXRAM_INSTANCE_ */
