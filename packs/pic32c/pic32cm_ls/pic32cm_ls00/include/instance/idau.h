/*
 * Instance header file for PIC32CM5164LS00100
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2022-09-09T06:09:06Z */
#ifndef _PIC32CMLS00_IDAU_INSTANCE_
#define _PIC32CMLS00_IDAU_INSTANCE_


/* ========== Instance Parameter definitions for IDAU peripheral ========== */
#define IDAU_CRYA_AES_DEC_ADDR                   (0x02006808) /* crya_aes_dec function address */
#define IDAU_CRYA_AES_ENC_ADDR                   (0x02006804) /* crya_aes_enc function address */
#define IDAU_CRYA_GF_MULT128_ADDR                (0x0200680C) /* crya_gf_mult128 function address */
#define IDAU_CRYA_SHA256_FINAL_ADDR              (0x02006818) /* crya_sha256_final function address */
#define IDAU_CRYA_SHA256_INIT_ADDR               (0x02006810) /* crya_sha256_init function address */
#define IDAU_CRYA_SHA256_UPDATE_ADDR             (0x02006814) /* crya_sha256_update function address */
#define IDAU_CRYA_SHA_PROCESS_ADDR               (0x02006800) /* crya_sha_process function address */
#define IDAU_GRANULARITY_ANSC                    (0x20)     /* Application Non-Secure Callable region granularity */
#define IDAU_GRANULARITY_AS                      (0x100)    /* Application Secure region granularity */
#define IDAU_GRANULARITY_BNSC                    (0x20)     /* Boot Flash Non-Secure Callable region granularity */
#define IDAU_GRANULARITY_BOOTPROT                (0x100)    /* BOOTPROT region granularity */
#define IDAU_GRANULARITY_BS                      (0x100)    /* Boot Flash Secure region granularity */
#define IDAU_GRANULARITY_DS                      (0x100)    /* DS region granularity */
#define IDAU_GRANULARITY_RS                      (0x80)     /* RAM Secure region granularity */
#define IDAU_INSTANCE_ID                         (32)       /* Instance index for IDAU */
#define IDAU_REGION_ANS                          (0x05)     /* Application Non-Secure region ID */
#define IDAU_REGION_ANSC                         (0x04)     /* Application Non-Secure Callable region ID */
#define IDAU_REGION_AS                           (0x03)     /* Application Secure region ID */
#define IDAU_REGION_BNSC                         (0x02)     /* Boot Flash Non-Secure Callable region ID */
#define IDAU_REGION_BOOTROM                      (0x08)     /* Boot ROM region ID */
#define IDAU_REGION_BS                           (0x01)     /* Boot Flash Secure region ID */
#define IDAU_REGION_DNS                          (0x07)     /* DATAFLASH Non-Secure region ID */
#define IDAU_REGION_DS                           (0x06)     /* DATAFLASH Secure region ID */
#define IDAU_REGION_IOBUS                        (0x00)     /* IOBUS region ID */
#define IDAU_REGION_OTHER                        (0x00)     /* Other region ID */
#define IDAU_REGION_PERIPHERALS                  (0x00)     /* Peripherals region ID */
#define IDAU_REGION_RNS                          (0x0A)     /* RAM Non-Secure region ID */
#define IDAU_REGION_RS                           (0x09)     /* RAM Secure region ID */

#endif /* _PIC32CMLS00_IDAU_INSTANCE_ */
