/*
 * Instance header file for PORT peripheral on PIC32CM5164LS00048
 *
 * Copyright (c) 2026 Microchip Technology Inc. and its subsidiaries.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _PIC32CM5164LS00048_PORT_INSTANCE_
#define _PIC32CM5164LS00048_PORT_INSTANCE_

/* ========== Instance Parameter definitions for PORT peripheral ========== */
#define PORT_AHB_IMPLEMENTED                     (0)        /* No AHB bus */
#define PORT_BITS                                (38)       /* 38 Implemented GPIO pins on 48-pin package */
#define PORT_BRIDGE_ID                           (1)        /* H2PB Bridge ID */
#define PORT_DRVSTR                              (0)        /* No DRVSTR bits */
#define PORT_EV_NUM                              (4)        /* 4 Event Channels */
#define PORT_GROUPS                              (2)        /* 2 PORT groups (Port A & Port B) */
#define PORT_HADDR_MSB                           (31)       /* 32-bit address space */
#define PORT_INSTANCE_ID                         (20)       /* Instance index for PORT */
#define PORT_IOBUS_IMPLEMENTED                   (0)        /* No IOBUS */
#define PORT_MCLK_ID_APB                         (27)       /* Index for PORT APB clock */
#define PORT_MSB                                 (37)       /* PORT_BITS - 1 */
#define PORT_ODRAIN                              (1)        /* Open Drain supported */
#define PORT_PAC_ID                              (20)       /* Index for PORT write protection */
#define PORT_PERIPH_ID                           (0)        /* H2PB Peripheral ID */
#define PORT_PPP_IMPLEMENTED                     (0)        /* No IOBUS2 */
#define PORT_SECURE_IMPLEMENTED                  (1)        /* TrustZone Security Attribution enabled */
#define PORT_SLEWLIM                             (2)        /* 2-bit SLEWLIM field */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

/* Default initial values and implemented pin bitmasks for Port A (Group 0) and Port B (Group 1) */
#define PORT_DIR_DEFAULT_VAL                     { 0x00000000, 0x00000000 }
#define PORT_DIR_IMPLEMENTED                     { 0xDBFFFFFF, 0x00000FFF }

#define PORT_DRVSTR1_DEFAULT_VAL                 { 0x00000000, 0x00000000 }
#define PORT_DRVSTR1_IMPLEMENTED                 { 0x00000000, 0x00000000 }

#define PORT_DRVSTR_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_DRVSTR_IMPLEMENTED                  { 0x00000000, 0x00000000 }

#define PORT_EVENT_IMPLEMENTED                   { 0xDBFFFFFF, 0x00000FFF }

#define PORT_INEN_DEFAULT_VAL                    { 0x00000000, 0x00000000 }
#define PORT_INEN_IMPLEMENTED                    { 0xDBFFFFFF, 0x00000FFF }

#define PORT_NONSEC_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_NONSEC_IMPLEMENTED                  { 0xDBFFFFFF, 0x00000FFF }

#define PORT_ODRAIN_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_ODRAIN_IMPLEMENTED                  { 0xDBFFFFFF, 0x00000FFF }

#define PORT_OUT_DEFAULT_VAL                     { 0x00000000, 0x00000000 }
#define PORT_OUT_IMPLEMENTED                     { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PIN_IMPLEMENTED                     { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PMUXBIT0_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT0_IMPLEMENTED                { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PMUXBIT1_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT1_IMPLEMENTED                { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PMUXBIT2_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT2_IMPLEMENTED                { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PMUXBIT3_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_PMUXBIT3_IMPLEMENTED                { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PMUXEN_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_PMUXEN_IMPLEMENTED                  { 0xDBFFFFFF, 0x00000FFF }

#define PORT_PULLEN_DEFAULT_VAL                  { 0x00000000, 0x00000000 }
#define PORT_PULLEN_IMPLEMENTED                  { 0xDBFFFFFF, 0x00000FFF }

#define PORT_SLEWLIM1_DEFAULT_VAL                { 0x00000000, 0x00000000 }
#define PORT_SLEWLIM1_IMPLEMENTED                { 0xDBFFFFFF, 0x00000FFF }

#define PORT_SLEWLIM_DEFAULT_VAL                 { 0x00000000, 0x00000000 }
#define PORT_SLEWLIM_IMPLEMENTED                 { 0xDBFFFFFF, 0x00000FFF }

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _PIC32CM5164LS00048_PORT_INSTANCE_ */


