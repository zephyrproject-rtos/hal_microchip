/*
 * Instance header file for PIC32CM5164JH01100
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

/* file generated from device description file (ATDF) version 2025-02-18T10:55:45Z */
#ifndef _PIC32CMJH01_NVMCTRL_INSTANCE_
#define _PIC32CMJH01_NVMCTRL_INSTANCE_


/* ========== Instance Parameter definitions for NVMCTRL peripheral ========== */
#define NVMCTRL_DATAFLASH_ADDR                   (0x00400000) /* Start address of the Data Flash area */
#define NVMCTRL_DATAFLASH_PAGES                  (128)      
#define NVMCTRL_DATAFLASH_SIZE                   (8192)     /* Byte size of the Data Flash area */
#define NVMCTRL_ECC_PRESENT                      (1)        /* define out all the added ECC logic - when =0 there shall be no ECC logic present in the design */
#define NVMCTRL_FACTORY_WORD_IMPLEMENTED_MASK    (0XC0000007FFFFFFFF) 
#define NVMCTRL_FLASH_SIZE                       (524288)   
#define NVMCTRL_INSTANCE_ID                      (34)       /* Instance index for NVMCTRL */
#define NVMCTRL_PAGES                            (8192)     
#define NVMCTRL_PAGES_PR_REGION                  (512)      
#define NVMCTRL_PAGE_SIZE                        (64)       
#define NVMCTRL_PMSB                             (3)        
#define NVMCTRL_PSZ_BITS                         (6)        
#define NVMCTRL_RSTFFLTADDR                      (0x00000000) /* the reset default for FFLTADDR */
#define NVMCTRL_USER_PAGE_OFFSET                 (0x00800000) 
#define NVMCTRL_USER_WORD_IMPLEMENTED_MASK       (0XC01FFFFFFFFFFFFF) 

#endif /* _PIC32CMJH01_NVMCTRL_INSTANCE_ */
