/*
 * Instance header file for PIC32CM6408PL10064
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

/* file generated from device description file (ATDF) version None */
#ifndef _PIC32CMPL10_PORT_INSTANCE_
#define _PIC32CMPL10_PORT_INSTANCE_


/* ========== Instance Parameter definitions for PORT peripheral ========== */
#define PORT_BITS                                (56)
#define PORT_DRVSTR                              (0)        /* DRVSTR supported? */
#define PORT_EV_NUM                              (4)
#define PORT_GROUPS                              (2)
#define PORT_INSTANCE_ID                         (32)       /* Instance index for PORT */
#define PORT_ODRAIN                              (0)        /* ODRAIN supported? */
#define PORT_SLEWLIM                             (1)        /* SLEWLIM supported? */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PORT_DIR_DEFAULT_VAL                     { 0x00000000, 0x00000000 }
#define PORT_DIR_IMPLEMENTED                     { 0xBFFFFFFF, 0x00FFFFFF }
#define PORT_DRVSTR_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_DRVSTR_IMPLEMENTED                  { 0x00000000, 0x00000000 }
#define PORT_EVENT_IMPLEMENTED                   { 0xFFFFFFFF, 0x00FFFFFF }
#define PORT_INEN_DEFAULT_VAL                    { 0x00000000, 0x00000000 }
#define PORT_INEN_IMPLEMENTED                    { 0xFFFFFFFF, 0x00FFFFFF }
#define PORT_ODRAIN_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_ODRAIN_IMPLEMENTED                  { 0x00000000, 0x00000000 }
#define PORT_OUT_DEFAULT_VAL                     { 0x00000000, 0x00000000 }
#define PORT_OUT_IMPLEMENTED                     { 0xBFFFFFFF, 0x00FFFFFF }
#define PORT_PIN_IMPLEMENTED                     { 0xFFFFFFFF, 0x00FFFFFF }
#define PORT_PMUXBIT0_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT0_IMPLEMENTED                { 0xBFFFEFFF, 0x000FFF0F }
#define PORT_PMUXBIT1_DEFAULT_VAL                { 0x80000000, 0x00000000 }
#define PORT_PMUXBIT1_IMPLEMENTED                { 0xBFFFFFFF, 0x0000FF0F }
#define PORT_PMUXBIT2_DEFAULT_VAL                { 0x80000000, 0x00000000 }
#define PORT_PMUXBIT2_IMPLEMENTED                { 0xBFFFEFFF, 0x003FFF0F }
#define PORT_PMUXBIT3_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT3_IMPLEMENTED                { 0xBFFF0FFF, 0x0000FF00 }
#define PORT_PMUXEN_DEFAULT_VAL                  { 0x80000000, 0x00000000 }
#define PORT_PMUXEN_IMPLEMENTED                  { 0xFFFFFFFF, 0x00FFFFFF }
#define PORT_PULLEN_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_PULLEN_IMPLEMENTED                  { 0xFFFFFFFF, 0x00FFFFFF }
#define PORT_SLEWLIM_DEFAULT_VAL                 { 0x00000000, 0x00000000 }
#define PORT_SLEWLIM_IMPLEMENTED                 { 0xBFFFFFFF, 0x00FFFFFF }
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */



#endif /* _PIC32CMPL10_PORT_INSTANCE_ */
