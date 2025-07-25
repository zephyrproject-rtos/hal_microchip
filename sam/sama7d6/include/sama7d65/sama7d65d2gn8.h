/*
 * Header file for ATSAMA7D65D2GN8
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

/* File generated from device description file (ATDF) version 2025-05-27T09:30:00Z */
#ifndef _SAMA7D65D2GN8_H_
#define _SAMA7D65D2GN8_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* SAMA7D65D2GN8 definitions
  This file defines all structures and symbols for SAMA7D65D2GN8:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/*                    CMSIS DEFINITIONS FOR SAMA7D65D2GN8                     */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-A7 SGI Interrupt Numbers ******************************/
  SGI0_IRQn                 =   0, /* 0   Software Generated Interrupt 0      */
  SGI1_IRQn                 =   1, /* 1   Software Generated Interrupt 1      */
  SGI2_IRQn                 =   2, /* 2   Software Generated Interrupt 2      */
  SGI3_IRQn                 =   3, /* 3   Software Generated Interrupt 3      */
  SGI4_IRQn                 =   4, /* 4   Software Generated Interrupt 4      */
  SGI5_IRQn                 =   5, /* 5   Software Generated Interrupt 5      */
  SGI6_IRQn                 =   6, /* 6   Software Generated Interrupt 6      */
  SGI7_IRQn                 =   7, /* 7   Software Generated Interrupt 7      */
  SGI8_IRQn                 =   8, /* 8   Software Generated Interrupt 8      */
  SGI9_IRQn                 =   9, /* 9   Software Generated Interrupt 9      */
  SGI10_IRQn                =  10, /* 10  Software Generated Interrupt 10     */
  SGI11_IRQn                =  11, /* 11  Software Generated Interrupt 11     */
  SGI12_IRQn                =  12, /* 12  Software Generated Interrupt 12     */
  SGI13_IRQn                =  13, /* 13  Software Generated Interrupt 13     */
  SGI14_IRQn                =  14, /* 14  Software Generated Interrupt 14     */
  SGI15_IRQn                =  15, /* 15  Software Generated Interrupt 15     */

/******  CORTEX-A7 Processor Exceptions Numbers ******************************/
  VirtMaint_IRQn            =  25, /* 25  Virtual Maintenance Interrupt (PPI6) */
  HyperVTimer_IRQn          =  26, /* 26  Hypervisor Timer event (PPI5)       */
  VirtTimer_IRQn            =  27, /* 27  Virtual Timer event (PPI4)          */
  LegacynFIQ_IRQn           =  28, /* 28  Legacy nFIQ signal (PPI0)           */
  SecPhysTimer_IRQn         =  29, /* 29  Secure Physical Timer event (PPI1)  */
  NonSecPhysTimer_IRQn      =  30, /* 30  Non-secure Physical Timer event (PPI2) */
  LegacynIRQ_IRQn           =  31, /* 31  Legacy nIRQ signal (PPI3)           */

/* **************** SAMA7D65D2GN8 specific Interrupt Numbers **************** */
  DWDT_SW_IRQn              =  32, /* 32  Dual Watchdog Timer (DWDT)          */
  DWDT_NSW_IRQn             =  33, /* 33  Dual Watchdog Timer (DWDT)          */
  DWDT_NSW_ALARM_IRQn       =  34, /* 34  Dual Watchdog Timer (DWDT)          */
  SHDWC_IRQn                =  36, /* 36  Shutdown Controller (SHDWC)         */
  RSTC_IRQn                 =  37, /* 37  Reset Controller (RSTC)             */
  RTC_IRQn                  =  38, /* 38  Real-time Clock (RTC)               */
  RTT_IRQn                  =  39, /* 39  Real-time Timer (RTT)               */
  PMC_IRQn                  =  41, /* 41  Power Management Controller (PMC)   */
  PIOA_IRQn                 =  42, /* 42  Parallel Input/Output Controller (PIOA) */
  PIOB_IRQn                 =  43, /* 43  Parallel Input/Output Controller (PIOB) */
  PIOC_IRQn                 =  44, /* 44  Parallel Input/Output Controller (PIOC) */
  PIOD_IRQn                 =  45, /* 45  Parallel Input/Output Controller (PIOD) */
  PIOE_IRQn                 =  46, /* 46  Parallel Input/Output Controller (PIOE) */
  PUF_IRQn                  =  47, /* 47  Physical Unclonable Functions (PUF) */
  SECUMOD_IRQn              =  48, /* 48  Security Module (SECUMOD)           */
  SECURAM_IRQn              =  49, /* 49   (SECURAM)                          */
  HSMC_IRQn                 =  52, /* 52  Static Memory Controller (HSMC)     */
  XDMAC0_IRQn               =  53, /* 53  Extensible DMA Controller (XDMAC0)  */
  XDMAC1_IRQn               =  54, /* 54  Extensible DMA Controller (XDMAC1)  */
  XDMAC2_IRQn               =  55, /* 55  Extensible DMA Controller (XDMAC2)  */
  ACC_IRQn                  =  56, /* 56  Analog Comparator Controller (ACC)  */
  ADC_IRQn                  =  57, /* 57  Analog-to-Digital Converter (ADC)   */
  AES_IRQn                  =  58, /* 58  Advanced Encryption Standard (AES)  */
  ASRC_IRQn                 =  61, /* 61  Asynchronous Sample Rate Converter (ASRC) */
  CPKCC_IRQn                =  62, /* 62  Classic Public Key Cryptography Controller (CPKCC) */
  FLEXCOM0_IRQn             =  66, /* 66  Flexible Serial Communication (FLEXCOM0) */
  FLEXCOM1_IRQn             =  67, /* 67  Flexible Serial Communication (FLEXCOM1) */
  FLEXCOM2_IRQn             =  68, /* 68  Flexible Serial Communication (FLEXCOM2) */
  FLEXCOM3_IRQn             =  69, /* 69  Flexible Serial Communication (FLEXCOM3) */
  FLEXCOM4_IRQn             =  70, /* 70  Flexible Serial Communication (FLEXCOM4) */
  FLEXCOM5_IRQn             =  71, /* 71  Flexible Serial Communication (FLEXCOM5) */
  FLEXCOM6_IRQn             =  72, /* 72  Flexible Serial Communication (FLEXCOM6) */
  FLEXCOM7_IRQn             =  73, /* 73  Flexible Serial Communication (FLEXCOM7) */
  FLEXCOM8_IRQn             =  74, /* 74  Flexible Serial Communication (FLEXCOM8) */
  FLEXCOM9_IRQn             =  75, /* 75  Flexible Serial Communication (FLEXCOM9) */
  FLEXCOM10_IRQn            =  76, /* 76  Flexible Serial Communication (FLEXCOM10) */
  GPU2DC_IRQn               =  77, /* 77  GPU 2D Controller (GPU2DC)          */
  GMAC0_IRQn                =  78, /* 78  Gigabit Ethernet MAC (GMAC0)        */
  GMAC1_IRQn                =  79, /* 79  Gigabit Ethernet MAC (GMAC1)        */
  GMAC0_TSU_IRQn            =  81, /* 81  Gigabit Ethernet MAC (GMAC0)        */
  GMAC1_TSU_IRQn            =  82, /* 82  Gigabit Ethernet MAC (GMAC1)        */
  ICM_IRQn                  =  85, /* 85  Integrity Check Monitor (ICM)       */
  I2SMCC0_IRQn              =  86, /* 86  Inter-IC Sound Multi Channel Controller (I2SMCC0) */
  I2SMCC1_IRQn              =  87, /* 87  Inter-IC Sound Multi Channel Controller (I2SMCC1) */
  LCDC_IRQn                 =  88, /* 88  LCD Controller (LCDC)               */
  MATRIX_IRQn               =  89, /* 89  AHB Bus Matrix (MATRIX2) (MATRIX)   */
  MCAN0_INT0_IRQn           =  90, /* 90  Controller Area Network (MCAN0)     */
  MCAN1_INT0_IRQn           =  91, /* 91  Controller Area Network (MCAN1)     */
  MCAN2_INT0_IRQn           =  92, /* 92  Controller Area Network (MCAN2)     */
  MCAN3_INT0_IRQn           =  93, /* 93  Controller Area Network (MCAN3)     */
  MCAN4_INT0_IRQn           =  94, /* 94  Controller Area Network (MCAN4)     */
  OTPC_IRQn                 =  95, /* 95  OTP Memory Controller (OTPC)        */
  PDMC0_IRQn                =  96, /* 96  Pulse Density Microphone Controller (PDMC0) */
  PDMC1_IRQn                =  97, /* 97  Pulse Density Microphone Controller (PDMC1) */
  PIT64B0_IRQn              =  98, /* 98  Periodic Interval Timer 64-bit (PIT64B0) */
  PIT64B1_IRQn              =  99, /* 99  Periodic Interval Timer 64-bit (PIT64B1) */
  PIT64B2_IRQn              = 100, /* 100 Periodic Interval Timer 64-bit (PIT64B2) */
  PIT64B3_IRQn              = 101, /* 101 Periodic Interval Timer 64-bit (PIT64B3) */
  PIT64B4_IRQn              = 102, /* 102 Periodic Interval Timer 64-bit (PIT64B4) */
  PIT64B5_IRQn              = 103, /* 103 Periodic Interval Timer 64-bit (PIT64B5) */
  PWM_IRQn                  = 104, /* 104 Pulse Width Modulation Controller (PWM) */
  QSPI0_IRQn                = 105, /* 105 Quad Serial Peripheral Interface (QSPI0) */
  QSPI1_IRQn                = 106, /* 106 Quad Serial Peripheral Interface (QSPI1) */
  SDMMC0_IRQn               = 107, /* 107 Secure Digital MultiMedia Card Controller (SDMMC0) */
  SDMMC1_IRQn               = 108, /* 108 Secure Digital MultiMedia Card Controller (SDMMC1) */
  SDMMC2_IRQn               = 109, /* 109 Secure Digital MultiMedia Card Controller (SDMMC2) */
  SHA_IRQn                  = 110, /* 110 Secure Hash Algorithm (SHA)         */
  SPDIFRX_IRQn              = 111, /* 111 Sony/Philips Digital Interface Receiver (SPDIFRX) */
  SPDIFTX_IRQn              = 112, /* 112 Sony/Philips Digital Interface (SPDIFTX) */
  SSC0_IRQn                 = 113, /* 113 Synchronous Serial Controller (SSC0) */
  SSC1_IRQn                 = 114, /* 114 Synchronous Serial Controller (SSC1) */
  TC0_CH0_IRQn              = 115, /* 115 Timer Counter (TC0)                 */
  TC0_CH1_IRQn              = 116, /* 116 Timer Counter (TC0)                 */
  TC0_CH2_IRQn              = 117, /* 117 Timer Counter (TC0)                 */
  TC1_CH0_IRQn              = 118, /* 118 Timer Counter (TC1)                 */
  TC1_CH1_IRQn              = 119, /* 119 Timer Counter (TC1)                 */
  TC1_CH2_IRQn              = 120, /* 120 Timer Counter (TC1)                 */
  TCPCA_IRQn                = 121, /* 121 Battery Charging and Type-C Port Controller (TCPCA) */
  TCPCB_IRQn                = 122, /* 122 Battery Charging and Type-C Port Controller (TCPCB) */
  TDES_IRQn                 = 123, /* 123 Triple Data Encryption Standard (TDES) */
  TRNG_IRQn                 = 124, /* 124 True Random Number Generator (TRNG) */
  TZAESB_NS_IRQn            = 125, /* 125 TrustZone Advanced Encryption Standard Bridge (TZAESB) */
  TZAESB_NS_SINT_IRQn       = 126, /* 126 TrustZone Advanced Encryption Standard Bridge (TZAESB) */
  TZAESB_S_IRQn             = 127, /* 127 TrustZone Advanced Encryption Standard Bridge (TZAESB) */
  TZAESB_S_SINT_IRQn        = 128, /* 128 TrustZone Advanced Encryption Standard Bridge (TZAESB) */
  TZC_IRQn                  = 129, /* 129 TrustZone Address Space Controller (TZC) (TZC) */
  UDPHSA_IRQn               = 131, /* 131 IP_Name (UDPHSA)                    */
  UDPHSB_IRQn               = 132, /* 132 IP_Name (UDPHSB)                    */
  UHPHS_IRQn                = 133, /* 133 USB Host High Speed Port (UHPHS)    */
  DSI_IRQn                  = 135, /* 135 Display Serial Interface (DSI)      */
  I3CC_IRQn                 = 137, /* 137 I3C Host Controller (I3CC)          */
  ARM_NPMUIRQ_IRQn          = 139, /* 139 Cortex-A7 CPU (ARM)                 */
  ARM_NAXIERRIRQ_IRQn       = 140, /* 140 Cortex-A7 CPU (ARM)                 */
  XDMAC0_SINT_IRQn          = 141, /* 141 Extensible DMA Controller (XDMAC0)  */
  XDMAC1_SINT_IRQn          = 142, /* 142 Extensible DMA Controller (XDMAC1)  */
  XDMAC2_SINT_IRQn          = 143, /* 143 Extensible DMA Controller (XDMAC2)  */
  AES_SINT_IRQn             = 144, /* 144 Advanced Encryption Standard (AES)  */
  ICM_SINT_IRQn             = 145, /* 145 Integrity Check Monitor (ICM)       */
  MCAN0_INT1_IRQn           = 146, /* 146 Controller Area Network (MCAN0)     */
  MCAN1_INT1_IRQn           = 147, /* 147 Controller Area Network (MCAN1)     */
  MCAN2_INT1_IRQn           = 148, /* 148 Controller Area Network (MCAN2)     */
  MCAN3_INT1_IRQn           = 149, /* 149 Controller Area Network (MCAN3)     */
  MCAN4_INT1_IRQn           = 150, /* 150 Controller Area Network (MCAN4)     */
  PIOA_SINT_IRQn            = 151, /* 151 Parallel Input/Output Controller (PIOA) */
  PIOB_SINT_IRQn            = 152, /* 152 Parallel Input/Output Controller (PIOB) */
  PIOC_SINT_IRQn            = 153, /* 153 Parallel Input/Output Controller (PIOC) */
  PIOD_SINT_IRQn            = 154, /* 154 Parallel Input/Output Controller (PIOD) */
  PIOE_SINT_IRQn            = 155, /* 155 Parallel Input/Output Controller (PIOE) */
  SDMMC0_TIMER_IRQn         = 162, /* 162 Secure Digital MultiMedia Card Controller (SDMMC0) */
  SDMMC1_TIMER_IRQn         = 163, /* 163 Secure Digital MultiMedia Card Controller (SDMMC1) */
  SDMMC2_TIMER_IRQn         = 164, /* 164 Secure Digital MultiMedia Card Controller (SDMMC2) */
  SHA_SINT_IRQn             = 165, /* 165 Secure Hash Algorithm (SHA)         */
  TDES_SINT_IRQn            = 172, /* 172 Triple Data Encryption Standard (TDES) */
  TRNG_SINT_IRQn            = 173, /* 173 True Random Number Generator (TRNG) */
  EIC_EXT_IRQ0_IRQn         = 174, /* 174 External Interrupt Controller (EIC) */
  EIC_EXT_IRQ1_IRQn         = 175, /* 175 External Interrupt Controller (EIC) */
  GMAC0_Q1_IRQn             = 176, /* 176 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_Q2_IRQn             = 177, /* 177 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_Q3_IRQn             = 178, /* 178 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_Q4_IRQn             = 179, /* 179 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_Q5_IRQn             = 180, /* 180 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_EMAC_IRQn           = 181, /* 181 Gigabit Ethernet MAC (GMAC0)        */
  GMAC0_MMSL_IRQn           = 182, /* 182 Gigabit Ethernet MAC (GMAC0)        */
  GMAC1_Q1_IRQn             = 183, /* 183 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_Q2_IRQn             = 184, /* 184 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_Q3_IRQn             = 185, /* 185 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_Q4_IRQn             = 186, /* 186 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_Q5_IRQn             = 187, /* 187 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_EMAC_IRQn           = 188, /* 188 Gigabit Ethernet MAC (GMAC1)        */
  GMAC1_MMSL_IRQn           = 189, /* 189 Gigabit Ethernet MAC (GMAC1)        */

/* ****************** CORTEX-A7 Special Interrupt Numbers ******************* */

  PERIPH_MAX_IRQn           = 189  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-A7 Processor and Core Peripherals */
#define GIC_DISTRIBUTOR_BASE      0xE8C11000 /* Base address for GIC distributor interface                                */
#define GIC_INTERFACE_BASE        0xE8C12000 /* Base address for GIC CPU interface                                        */
#define __CA_REV                      0x0005 /* CA7 Core Revision(r0p5)                                                   */
#define __CORTEX_A                         7 /* Core type number (Cortex-A7)                                              */
#define __FPU_PRESENT                      1 /* FPU is present on core                                                    */
#define __GIC_PRESENT                      1 /* GIC is present on core                                                    */
#define __L2C_PRESENT                      0 /* L2C-310 cache controller is present                                       */
#define __TIM_PRESENT                      1 /* Generic Timer capability is present                                       */

/* CMSIS includes */
#include "core_ca.h"
#if defined USE_CMSIS_INIT
#include "system_sama7d65d2gn8.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*           SOFTWARE PERIPHERAL API DEFINITIONS FOR SAMA7D65D2GN8            */
/* ************************************************************************** */
#include "component/acc.h"
#include "component/adc.h"
#include "component/aes.h"
#include "component/asrc.h"
#include "component/bsc.h"
#include "component/chipid.h"
#include "component/cpkcc.h"
#include "component/ddr3phy.h"
#include "component/dsi.h"
#include "component/dwdt.h"
#include "component/eic.h"
#include "component/flexcom.h"
#include "component/gmac.h"
#include "component/gpbr.h"
#include "component/gpu2dc.h"
#include "component/i2smcc.h"
#include "component/i3cc.h"
#include "component/icm.h"
#include "component/lcdc.h"
#include "component/lvdsc.h"
#include "component/matrix.h"
#include "component/mcan.h"
#include "component/nicgpv.h"
#include "component/otpc.h"
#include "component/pdmc.h"
#include "component/pio.h"
#include "component/pit64b.h"
#include "component/pmc.h"
#include "component/puf.h"
#include "component/pwm.h"
#include "component/qspi.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/sckc.h"
#include "component/sdmmc.h"
#include "component/secumod.h"
#include "component/sfr.h"
#include "component/sfrbu.h"
#include "component/sha.h"
#include "component/shdwc.h"
#include "component/smc.h"
#include "component/spdifrx.h"
#include "component/spdiftx.h"
#include "component/ssc.h"
#include "component/syscwp.h"
#include "component/tc.h"
#include "component/tcpc.h"
#include "component/tdes.h"
#include "component/trng.h"
#include "component/tzaesb.h"
#include "component/tzaesbasc.h"
#include "component/tzc.h"
#include "component/tzpm.h"
#include "component/uddrc.h"
#include "component/udphs.h"
#include "component/uhpfs.h"
#include "component/uhphs.h"
#include "component/xdmac.h"

/* ************************************************************************** */
/*                   INSTANCE DEFINITIONS FOR SAMA7D65D2GN8                   */
/* ************************************************************************** */
#include "instance/acc.h"
#include "instance/adc.h"
#include "instance/aes.h"
#include "instance/asrc.h"
#include "instance/bsc.h"
#include "instance/chipid.h"
#include "instance/cpkcc.h"
#include "instance/ddrpubl.h"
#include "instance/ddrumctl.h"
#include "instance/dsi.h"
#include "instance/dwdt.h"
#include "instance/eic.h"
#include "instance/flexcom0.h"
#include "instance/flexcom1.h"
#include "instance/flexcom10.h"
#include "instance/flexcom2.h"
#include "instance/flexcom3.h"
#include "instance/flexcom4.h"
#include "instance/flexcom5.h"
#include "instance/flexcom6.h"
#include "instance/flexcom7.h"
#include "instance/flexcom8.h"
#include "instance/flexcom9.h"
#include "instance/gmac0.h"
#include "instance/gmac1.h"
#include "instance/gpbr.h"
#include "instance/gpu2dc.h"
#include "instance/hsmc.h"
#include "instance/i2smcc0.h"
#include "instance/i2smcc1.h"
#include "instance/i3cc.h"
#include "instance/icm.h"
#include "instance/lcdc.h"
#include "instance/lvdsc.h"
#include "instance/matrix.h"
#include "instance/mcan0.h"
#include "instance/mcan1.h"
#include "instance/mcan2.h"
#include "instance/mcan3.h"
#include "instance/mcan4.h"
#include "instance/nicgpv0.h"
#include "instance/nicgpv1.h"
#include "instance/otpc.h"
#include "instance/pdmc0.h"
#include "instance/pdmc1.h"
#include "instance/pio.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/pioc.h"
#include "instance/piod.h"
#include "instance/pioe.h"
#include "instance/pit64b0.h"
#include "instance/pit64b1.h"
#include "instance/pit64b2.h"
#include "instance/pit64b3.h"
#include "instance/pit64b4.h"
#include "instance/pit64b5.h"
#include "instance/pmc.h"
#include "instance/puf.h"
#include "instance/pwm.h"
#include "instance/qspi0.h"
#include "instance/qspi1.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/rtt.h"
#include "instance/sckc.h"
#include "instance/sdmmc0.h"
#include "instance/sdmmc1.h"
#include "instance/sdmmc2.h"
#include "instance/secumod.h"
#include "instance/securam.h"
#include "instance/sfr.h"
#include "instance/sfrbu.h"
#include "instance/sha.h"
#include "instance/shdwc.h"
#include "instance/spdifrx.h"
#include "instance/spdiftx.h"
#include "instance/ssc0.h"
#include "instance/ssc1.h"
#include "instance/syscwp.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tcpca.h"
#include "instance/tcpcb.h"
#include "instance/tdes.h"
#include "instance/trng.h"
#include "instance/tzaesb.h"
#include "instance/tzaesbasc.h"
#include "instance/tzc.h"
#include "instance/tzpm.h"
#include "instance/udphsa.h"
#include "instance/udphsb.h"
#include "instance/uhpfs.h"
#include "instance/uhphs.h"
#include "instance/xdmac0.h"
#include "instance/xdmac1.h"
#include "instance/xdmac2.h"

/* ************************************************************************** */
/*                PERIPHERAL ID DEFINITIONS FOR SAMA7D65D2GN8                 */
/* ************************************************************************** */
#define ID_DWDT_SW       (  0) /* Dual Watchdog Timer, Secure World (DWDT_SW) */
#define ID_DWDT_NSW      (  1) /* Dual Watchdog Timer, Non-secure World (DWDT_NSW) */
#define ID_DWDT_NSW_ALARM (  2) /* Dual Watchdog Timer, Non-secure World Alarm (DWDT_NSW_ALARM) */
#define ID_SCKC          (  3) /* Slow Clock Controller (SCKC) */
#define ID_SHDWC         (  4) /* Shutdown Controller (SHDWC) */
#define ID_RSTC          (  5) /* Reset Controller (RSTC) */
#define ID_RTC           (  6) /* Real-Time Clock (RTC) */
#define ID_RTT           (  7) /* Real-Time Timer (RTT) */
#define ID_CHIPID        (  8) /* Chip Identifier (CHIPID) */
#define ID_PMC           (  9) /* Power Management Controller (PMC) */
#define ID_PIOA          ( 10) /* For PIO 0 to 31 (PIOA) */
#define ID_PIOB          ( 11) /* For PIO 32 to 63 (PIOB) */
#define ID_PIOC          ( 12) /* For PIO 64 to 95 (PIOC) */
#define ID_PIOD          ( 13) /* For PIO 96 to 127 (PIOD) */
#define ID_PIOE          ( 14) /* For PIO 128 to 141 (PIOE) */
#define ID_PUF           ( 15) /* QK QuiddiKey IP + PUFSRAM (PUF) */
#define ID_SECUMOD       ( 16) /* Security Module (SECUMOD) */
#define ID_SECURAM       ( 17) /* Secret RAM (SECURAM) */
#define ID_SFR           ( 18) /* Special Function Register (SFR) */
#define ID_SFRBU         ( 19) /* Special Function Register in Backup zone (SFRBU) */
#define ID_HSMC          ( 20) /* Static Memory Controller - NAND Flash Controller (HSMC) */
#define ID_XDMAC0        ( 21) /* DMA 0, mem to periph, 32 channels (XDMAC0) */
#define ID_XDMAC1        ( 22) /* DMA 1, mem to periph, 32 channels (XDMAC1) */
#define ID_XDMAC2        ( 23) /* DMA 2, mem to mem, 8 channels (XDMAC2) */
#define ID_ACC           ( 24) /* Analog Comparator Controller (ACC) */
#define ID_ADC           ( 25) /* Analog-to-Digital Converter (ADC) */
#define ID_AES           ( 26) /* Advanced Encryption Standard (AES) */
#define ID_TZAESBASC     ( 27) /* - A Space Controlller (TZAESBASC) */
#define ID_ARM           ( 28) /* Cortex-A7 Core 0. Generic timer clock (ARM) */
#define ID_ASRC          ( 29) /* Asynchronous Sample Rate Converter (ASRC) */
#define ID_CPKCC         ( 30) /* Classic Public Key Cryptography Controller (CPKCC) */
#define ID_DDRPUBL       ( 31) /* DDRLPDDR Physical Interface (DDRPUBL) */
#define ID_DDRUMCTL      ( 32) /* Universal DDR Memory Controller (DDRUMCTL) */
#define ID_EIC           ( 33) /* External Interrupt Controller (EIC) */
#define ID_FLEXCOM0      ( 34) /* FLEXCOM0. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM0) */
#define ID_FLEXCOM1      ( 35) /* FLEXCOM1. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM1) */
#define ID_FLEXCOM2      ( 36) /* FLEXCOM2. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM2) */
#define ID_FLEXCOM3      ( 37) /* FLEXCOM3. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM3) */
#define ID_FLEXCOM4      ( 38) /* FLEXCOM4. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM4) */
#define ID_FLEXCOM5      ( 39) /* FLEXCOM5. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM5) */
#define ID_FLEXCOM6      ( 40) /* FLEXCOM6. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM6) */
#define ID_FLEXCOM7      ( 41) /* FLEXCOM7. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM7) */
#define ID_FLEXCOM8      ( 42) /* FLEXCOM8. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM8) */
#define ID_FLEXCOM9      ( 43) /* FLEXCOM9. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM9) */
#define ID_FLEXCOM10     ( 44) /* FLEXCOM10. Max Generic Clock Frequency = FPCLOCK  3. (FLEXCOM10) */
#define ID_GPU2DC        ( 45) /* Graphic Processor Unit 2D Composer (GPU2DC) */
#define ID_GMAC0         ( 46) /* Gigabit Ethernet MAC + TSN support (GMAC0) */
#define ID_GMAC1         ( 47) /* Gigabit Ethernet MAC + TSN support (GMAC1) */
#define ID_GMAC0_TSU     ( 49) /* Gigabit Ethernet MAC - Timestamp Unit Generic Clock - No Interrupt (GMAC0_TSU) */
#define ID_GMAC1_TSU     ( 50) /* Gigabit Ethernet MAC - Timestamp Unit Generic Clock - No Interrupt (GMAC1_TSU) */
#define ID_NICGPV0       ( 51) /* NIC400 Global ProgrammersViewinstance0' (NICGPV0) */
#define ID_NICGPV1       ( 52) /* NIC400 Global ProgrammersViewinstance1' (NICGPV1) */
#define ID_ICM           ( 53) /* Integrity Check Monitor (ICM) */
#define ID_I2SMCC0       ( 54) /* Inter-IC Sound Controller 0 (I2SMCC0) */
#define ID_I2SMCC1       ( 55) /* Inter-IC Sound Controller 1 (I2SMCC1) */
#define ID_LCDC          ( 56) /* LCD controller (LCDC) */
#define ID_MATRIX        ( 57) /* AHB Matrix (MATRIX) */
#define ID_MCAN0         ( 58) /* Host CAN 0 (MCAN0) */
#define ID_MCAN1         ( 59) /* Host CAN 1 (MCAN1) */
#define ID_MCAN2         ( 60) /* Host CAN 2 (MCAN2) */
#define ID_MCAN3         ( 61) /* Host CAN 3 (MCAN3) */
#define ID_MCAN4         ( 62) /* Host CAN 4 (MCAN4) */
#define ID_OTPC          ( 63) /* One Time Programmable Memory Controller (OTPC) */
#define ID_PDMC0         ( 64) /* Pulse Density Modulation Interface Controller 0 (PDMC0) */
#define ID_PDMC1         ( 65) /* Pulse Density Modulation Interface Controller 1 (PDMC1) */
#define ID_PIT64B0       ( 66) /* 64-bit Periodic Interval Timer 0 (PIT64B0) */
#define ID_PIT64B1       ( 67) /* 64-bit Periodic Interval Timer 1 (PIT64B1) */
#define ID_PIT64B2       ( 68) /* 64-bit Periodic Interval Timer 2 (PIT64B2) */
#define ID_PIT64B3       ( 69) /* 64-bit Periodic Interval Timer 3 (PIT64B3) */
#define ID_PIT64B4       ( 70) /* 64-bit Periodic Interval Timer 4 (PIT64B4) */
#define ID_PIT64B5       ( 71) /* 64-bit Periodic Interval Timer 5 (PIT64B5) */
#define ID_PWM           ( 72) /* Pulse Width Modulation (PWM) */
#define ID_QSPI0         ( 73) /* Quad IO Serial Peripheral Interface 0 (QSPI0) */
#define ID_QSPI1         ( 74) /* Quad IO Serial Peripheral Interface 1 (QSPI1) */
#define ID_SDMMC0        ( 75) /* Ultra High Speed SD Host Controller 0 (e.MMC 5.1) (SDMMC0) */
#define ID_SDMMC1        ( 76) /* Ultra High Speed SD Host Controller 1 (e.MMC 4.51) (SDMMC1) */
#define ID_SDMMC2        ( 77) /* Ultra High Speed SD Host Controller 2 (e.MMC 4.51) (SDMMC2) */
#define ID_SHA           ( 78) /* Secure Hash Algorithm (SHA) */
#define ID_SPDIFRX       ( 79) /* Sony Philips Digital Interface RX (SPDIFRX) */
#define ID_SPDIFTX       ( 80) /* Sony Philips Digital Interface TX (SPDIFTX) */
#define ID_SSC0          ( 81) /* Synchronous Serial Interface 0 (SSC0) */
#define ID_SSC1          ( 82) /* Synchronous Serial Interface 1 (SSC1) */
#define ID_TC0_CHANNEL0  ( 83) /* 32-bit Timer Counter 0 Channel 0. Max Generic Clock Frequency = FPCLOCK  3. (TC0_CHANNEL0) */
#define ID_TC0_CHANNEL1  ( 84) /* 32-bit Timer Counter 0 Channel 1 (TC0_CHANNEL1) */
#define ID_TC0_CHANNEL2  ( 85) /* 32-bit Timer Counter 0 Channel 2 (TC0_CHANNEL2) */
#define ID_TC1_CHANNEL0  ( 86) /* 32-bit Timer Counter 1 Channel 1. Max Generic Clock Frequency = FPCLOCK  3. (TC1_CHANNEL0) */
#define ID_TC1_CHANNEL1  ( 87) /* 32-bit Timer Counter 1 Channel 1 (TC1_CHANNEL1) */
#define ID_TC1_CHANNEL2  ( 88) /* 32-bit Timer Counter 1 Channel 2 (TC1_CHANNEL2) */
#define ID_TCPCA         ( 89) /* USB Type-C Port Controller A (TCPCA) */
#define ID_TCPCB         ( 90) /* USB Type-C Port Controller B (TCPCB) */
#define ID_TDES          ( 91) /* Triple Data Encryption Standard (TDES) */
#define ID_TRNG          ( 92) /* True Random Number Generator (TRNG) */
#define ID_TZAESB_NS     ( 93) /* TrustZone Advanced Encryption Standard Bridge Non-Secure (Clocks and Interrupt) (TZAESB_NS) */
#define ID_TZAESB_NS_SINT ( 94) /* TrustZone Advanced Encryption Standard Bridge Non-Secure (Interrupt only) (TZAESB_NS_SINT) */
#define ID_TZAESB_S      ( 95) /* TrustZone Advanced Encryption Standard Bridge Secure (Interrupt only) (TZAESB_S) */
#define ID_TZAESB_S_SINT ( 96) /* TrustZone Advanced Encryption Standard Bridge Secure (Interrupt only) (TZAESB_S_SINT) */
#define ID_TZC           ( 97) /* TrustZone Address Space Controller (TZC400) (TZC) */
#define ID_TZPM          ( 98) /* TrustZone Peripheral Manager (TZPM) */
#define ID_UDPHSA        ( 99) /* USB Device High Speed A (UDPHSA) */
#define ID_UDPHSB        (100) /* USB Device High Speed B (UDPHSB) */
#define ID_UHPHS         (101) /* USB Host Controller High Speed (UHPHS) */
#define ID_DSI           (103) /* Display Serial Interface Host interrupt and MIPI DPHY clock (DSI) */
#define ID_LVDSC         (104) /* Display Serial Interface between LCDC and LVDS interface. Instance include LVDSC and LVDSPHY. (LVDSC) */
#define ID_I3CC          (105) /* I3C Controller (I3CC) */
#define ID_ARM_nPMUIRQ   (107) /* Performance Monitoring Unit (ARM_nPMUIRQ) */
#define ID_ARM_nAXIERRIRQ (108) /* AXI Transaction Error (ARM_nAXIERRIRQ) */
#define ID_XDMAC0_SINT   (109) /* DMA0, mem to periph, 32 channels, Secure Interrupt (XDMAC0_SINT) */
#define ID_XDMAC1_SINT   (110) /* DMA1, mem to periph, 32 channels, Secure Interrupt (XDMAC1_SINT) */
#define ID_XDMAC2_SINT   (111) /* DMA2, mem to mem, 8 channels, Secure Interrupt (XDMAC2_SINT) */
#define ID_AES_SINT      (112) /* Advanced Encryption Standard, Secure Interrupt (AES_SINT) */
#define ID_ICM_SINT      (113) /* Integrity Check Monitor, Secure Interrupt (ICM_SINT) */
#define ID_MCAN0_INT1    (114) /* MCAN0 Interrupt1 (MCAN0_INT1) */
#define ID_MCAN1_INT1    (115) /* MCAN1 Interrupt1 (MCAN1_INT1) */
#define ID_MCAN2_INT1    (116) /* MCAN2 Interrupt1 (MCAN2_INT1) */
#define ID_MCAN3_INT1    (117) /* MCAN3 Interrupt1 (MCAN3_INT1) */
#define ID_MCAN4_INT1    (118) /* MCAN4 Interrupt1 (MCAN4_INT1) */
#define ID_PIOA_SINT     (119) /* For PIO 0 to 31, Secure Interrupt (PIOA_SINT) */
#define ID_PIOB_SINT     (120) /* For PIO 32 to 63, Secure Interrupt (PIOB_SINT) */
#define ID_PIOC_SINT     (121) /* For PIO 64 to 95, Secure Interrupt (PIOC_SINT) */
#define ID_PIOD_SINT     (122) /* For PIO 96 to 127, Secure Interrupt (PIOD_SINT) */
#define ID_PIOE_SINT     (123) /* For PIO 128 to 141, Secure Interrupt (PIOE_SINT) */
#define ID_SDMMC0_TIMER  (130) /* Ultra High Speed SD Host Controller 0 (e.MMC 5.1) Timer interrupt (SDMMC0_TIMER) */
#define ID_SDMMC1_TIMER  (131) /* Ultra High Speed SD Host Controller 1 (e.MMC 4.51) Timer interrupt (SDMMC1_TIMER) */
#define ID_SDMMC2_TIMER  (132) /* Ultra High Speed SD Host controller 2 (eMMC 4.51) Timer interrupt (SDMMC2_TIMER) */
#define ID_SHA_SINT      (133) /* Secure Hash Algorithm, Secure Interrupt (SHA_SINT) */
#define ID_TDES_SINT     (140) /* Triple Data Encryption Standard, Secure Interrupt (TDES_SINT) */
#define ID_TRNG_SINT     (141) /* True Random Number Generator, Secure Interrupt (TRNG_SINT) */
#define ID_EXT_IRQ0      (142) /* External Interrupt ID0 (EXT_IRQ0) */
#define ID_EXT_IRQ1      (143) /* External Interrupt ID1 (EXT_IRQ1) */
#define ID_GMAC0_Q1      (144) /* GMAC0 Queue 1 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 1 (GMAC0_Q1) */
#define ID_GMAC0_Q2      (145) /* GMAC0 Queue 2 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 2 (GMAC0_Q2) */
#define ID_GMAC0_Q3      (146) /* GMAC0 Queue 3 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 3 (GMAC0_Q3) */
#define ID_GMAC0_Q4      (147) /* GMAC0 Queue 4 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 4 (GMAC0_Q4) */
#define ID_GMAC0_Q5      (148) /* GMAC0 Queue 5 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 5 (GMAC0_Q5) */
#define ID_GMAC0_EMAC    (149) /* GMAC0: Express MAC (GMAC0_EMAC) */
#define ID_GMAC0_MMSL    (150) /* GMAC0: MAC Merge Sublayer (GMAC0_MMSL) */
#define ID_GMAC1_Q1      (151) /* GMAC1 Queue 1 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 1 (GMAC1_Q1) */
#define ID_GMAC1_Q2      (152) /* GMAC1 Queue 2 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 2 (GMAC1_Q2) */
#define ID_GMAC1_Q3      (153) /* GMAC1 Queue 3 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 3 (GMAC1_Q3) */
#define ID_GMAC1_Q4      (154) /* GMAC1 Queue 4 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 4 (GMAC1_Q4) */
#define ID_GMAC1_Q5      (155) /* GMAC1 Queue 5 Interrupt signal toggled on a DMA write to the first word of each DMA data buffer associated with queue 5 (GMAC1_Q5) */
#define ID_GMAC1_EMAC    (156) /* GMAC1: Express MAC (GMAC1_EMAC) */
#define ID_GMAC1_MMSL    (157) /* GMAC1: MAC Merge Sublayer (GMAC1_MMSL) */

#define ID_PERIPH_MAX    (157) /* Number of peripheral IDs */

/* ************************************************************************** */
/*          REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMA7D65D2GN8          */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define ACC_REGS                         ((acc_registers_t*)0xe1814000)                /* ACC Registers Address        */
#define ADC_REGS                         ((adc_registers_t*)0xe1000000)                /* ADC Registers Address        */
#define AES_REGS                         ((aes_registers_t*)0xe1600000)                /* AES Registers Address        */
#define ASRC_REGS                        ((asrc_registers_t*)0xe2808000)               /* ASRC Registers Address       */
#define BSC_REGS                         ((bsc_registers_t*)0xe001d600)                /* BSC Registers Address        */
#define CHIPID_REGS                      ((chipid_registers_t*)0xe0020000)             /* CHIPID Registers Address     */
#define CPKCC_REGS                       ((cpkcc_registers_t*)0xe000c000)              /* CPKCC Registers Address      */
#define DDRPUBL_REGS                     ((ddr3phy_registers_t*)0xe3804000)            /* DDRPUBL Registers Address    */
#define DSI_REGS                         ((dsi_registers_t*)0xe1404000)                /* DSI Registers Address        */
#define DWDT_REGS                        ((dwdt_registers_t*)0xe001c000)               /* DWDT Registers Address       */
#define EIC_REGS                         ((eic_registers_t*)0xe1810000)                /* EIC Registers Address        */
#define FLEXCOM0_REGS                    ((flexcom_registers_t*)0xe1820000)            /* FLEXCOM0 Registers Address   */
#define FLEXCOM1_REGS                    ((flexcom_registers_t*)0xe1824000)            /* FLEXCOM1 Registers Address   */
#define FLEXCOM2_REGS                    ((flexcom_registers_t*)0xe1828000)            /* FLEXCOM2 Registers Address   */
#define FLEXCOM3_REGS                    ((flexcom_registers_t*)0xe182c000)            /* FLEXCOM3 Registers Address   */
#define FLEXCOM4_REGS                    ((flexcom_registers_t*)0xe2018000)            /* FLEXCOM4 Registers Address   */
#define FLEXCOM5_REGS                    ((flexcom_registers_t*)0xe201c000)            /* FLEXCOM5 Registers Address   */
#define FLEXCOM6_REGS                    ((flexcom_registers_t*)0xe2020000)            /* FLEXCOM6 Registers Address   */
#define FLEXCOM7_REGS                    ((flexcom_registers_t*)0xe2024000)            /* FLEXCOM7 Registers Address   */
#define FLEXCOM8_REGS                    ((flexcom_registers_t*)0xe281c000)            /* FLEXCOM8 Registers Address   */
#define FLEXCOM9_REGS                    ((flexcom_registers_t*)0xe2820000)            /* FLEXCOM9 Registers Address   */
#define FLEXCOM10_REGS                   ((flexcom_registers_t*)0xe2824000)            /* FLEXCOM10 Registers Address  */
#define GMAC0_REGS                       ((gmac_registers_t*)0xe1618000)               /* GMAC0 Registers Address      */
#define GMAC1_REGS                       ((gmac_registers_t*)0xe161c000)               /* GMAC1 Registers Address      */
#define GPBR_REGS                        ((gpbr_registers_t*)0xe001d700)               /* GPBR Registers Address       */
#define GPU2DC_REGS                      ((gpu2dc_registers_t*)0xe1480000)             /* GPU2DC Registers Address     */
#define I2SMCC0_REGS                     ((i2smcc_registers_t*)0xe2814000)             /* I2SMCC0 Registers Address    */
#define I2SMCC1_REGS                     ((i2smcc_registers_t*)0xe2818000)             /* I2SMCC1 Registers Address    */
#define I3CC_REGS                        ((i3cc_registers_t*)0xe9000000)               /* I3CC Registers Address       */
#define ICM_REGS                         ((icm_registers_t*)0xe081c000)                /* ICM Registers Address        */
#define LCDC_REGS                        ((lcdc_registers_t*)0xe1400000)               /* LCDC Registers Address       */
#define LVDSC_REGS                       ((lvdsc_registers_t*)0xe1408000)              /* LVDSC Registers Address      */
#define MATRIX_REGS                      ((matrix_registers_t*)0xe0804000)             /* MATRIX Registers Address     */
#define MCAN0_REGS                       ((mcan_registers_t*)0xe0828000)               /* MCAN0 Registers Address      */
#define MCAN1_REGS                       ((mcan_registers_t*)0xe082c000)               /* MCAN1 Registers Address      */
#define MCAN2_REGS                       ((mcan_registers_t*)0xe0830000)               /* MCAN2 Registers Address      */
#define MCAN3_REGS                       ((mcan_registers_t*)0xe0834000)               /* MCAN3 Registers Address      */
#define MCAN4_REGS                       ((mcan_registers_t*)0xe0838000)               /* MCAN4 Registers Address      */
#define NICGPV0_REGS                     ((nicgpv_registers_t*)0xe8b00000)             /* NICGPV0 Registers Address    */
#define NICGPV1_REGS                     ((nicgpv_registers_t*)0xe1500000)             /* NICGPV1 Registers Address    */
#define OTPC_REGS                        ((otpc_registers_t*)0xe8c00000)               /* OTPC Registers Address       */
#define PDMC0_REGS                       ((pdmc_registers_t*)0xe2800000)               /* PDMC0 Registers Address      */
#define PDMC1_REGS                       ((pdmc_registers_t*)0xe2804000)               /* PDMC1 Registers Address      */
#define PIO_REGS                         ((pio_registers_t*)0xe0014000)                /* PIO Registers Address        */
#define PIT64B0_REGS                     ((pit64b_registers_t*)0xe1800000)             /* PIT64B0 Registers Address    */
#define PIT64B1_REGS                     ((pit64b_registers_t*)0xe1804000)             /* PIT64B1 Registers Address    */
#define PIT64B2_REGS                     ((pit64b_registers_t*)0xe1808000)             /* PIT64B2 Registers Address    */
#define PIT64B3_REGS                     ((pit64b_registers_t*)0xe2004000)             /* PIT64B3 Registers Address    */
#define PIT64B4_REGS                     ((pit64b_registers_t*)0xe2008000)             /* PIT64B4 Registers Address    */
#define PIT64B5_REGS                     ((pit64b_registers_t*)0xe200c000)             /* PIT64B5 Registers Address    */
#define PMC_REGS                         ((pmc_registers_t*)0xe0018000)                /* PMC Registers Address        */
#define PUF_REGS                         ((puf_registers_t*)0xe0024000)                /* PUF Registers Address        */
#define PWM_REGS                         ((pwm_registers_t*)0xe1818000)                /* PWM Registers Address        */
#define QSPI0_REGS                       ((qspi_registers_t*)0xe080c000)               /* QSPI0 Registers Address      */
#define QSPI1_REGS                       ((qspi_registers_t*)0xe0810000)               /* QSPI1 Registers Address      */
#define RSTC_REGS                        ((rstc_registers_t*)0xe001d100)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0xe001d800)                /* RTC Registers Address        */
#define RTT_REGS                         ((rtt_registers_t*)0xe001d300)                /* RTT Registers Address        */
#define SCKC_REGS                        ((sckc_registers_t*)0xe001d500)               /* SCKC Registers Address       */
#define SDMMC0_REGS                      ((sdmmc_registers_t*)0xe1204000)              /* SDMMC0 Registers Address     */
#define SDMMC1_REGS                      ((sdmmc_registers_t*)0xe1208000)              /* SDMMC1 Registers Address     */
#define SDMMC2_REGS                      ((sdmmc_registers_t*)0xe120c000)              /* SDMMC2 Registers Address     */
#define SECUMOD_REGS                     ((secumod_registers_t*)0xe0004000)            /* SECUMOD Registers Address    */
#define SFR_REGS                         ((sfr_registers_t*)0xe181c000)                /* SFR Registers Address        */
#define SFRBU_REGS                       ((sfrbu_registers_t*)0xe0008000)              /* SFRBU Registers Address      */
#define SHA_REGS                         ((sha_registers_t*)0xe1604000)                /* SHA Registers Address        */
#define SHDWC_REGS                       ((shdwc_registers_t*)0xe001d200)              /* SHDWC Registers Address      */
#define HSMC_REGS                        ((smc_registers_t*)0xe0808000)                /* HSMC Registers Address       */
#define SPDIFRX_REGS                     ((spdifrx_registers_t*)0xe280c000)            /* SPDIFRX Registers Address    */
#define SPDIFTX_REGS                     ((spdiftx_registers_t*)0xe2810000)            /* SPDIFTX Registers Address    */
#define SSC0_REGS                        ((ssc_registers_t*)0xe180c000)                /* SSC0 Registers Address       */
#define SSC1_REGS                        ((ssc_registers_t*)0xe2010000)                /* SSC1 Registers Address       */
#define SYSCWP_REGS                      ((syscwp_registers_t*)0xe001d900)             /* SYSCWP Registers Address     */
#define TC0_REGS                         ((tc_registers_t*)0xe2014000)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0xe0800000)                 /* TC1 Registers Address        */
#define TCPCA_REGS                       ((tcpc_registers_t*)0xe083c000)               /* TCPCA Registers Address      */
#define TCPCB_REGS                       ((tcpc_registers_t*)0xe0840000)               /* TCPCB Registers Address      */
#define TDES_REGS                        ((tdes_registers_t*)0xe1608000)               /* TDES Registers Address       */
#define TRNG_REGS                        ((trng_registers_t*)0xe160c000)               /* TRNG Registers Address       */
#define TZAESB_REGS                      ((tzaesb_registers_t*)0xe0820000)             /* TZAESB Registers Address     */
#define TZAESBS_REGS                     ((tzaesb_registers_t*)0xe0824000)             /* TZAESB Registers Address     */
#define TZAESBASC_REGS                   ((tzaesbasc_registers_t*)0xe2000000)          /* TZAESBASC Registers Address  */
#define TZC_REGS                         ((tzc_registers_t*)0xe3000000)                /* TZC Registers Address        */
#define TZPM_REGS                        ((tzpm_registers_t*)0xe0010000)               /* TZPM Registers Address       */
#define DDRUMCTL_REGS                    ((uddrc_registers_t*)0xe3800000)              /* DDRUMCTL Registers Address   */
#define UDPHSA_REGS                      ((udphs_registers_t*)0xe0814000)              /* UDPHSA Registers Address     */
#define UDPHSB_REGS                      ((udphs_registers_t*)0xe0818000)              /* UDPHSB Registers Address     */
#define UHPFS_REGS                       ((uhpfs_registers_t*)0x00400000)              /* UHPFS Registers Address      */
#define UHPHS_REGS                       ((uhphs_registers_t*)0x00500000)              /* UHPHS Registers Address      */
#define XDMAC0_REGS                      ((xdmac_registers_t*)0xe1610000)              /* XDMAC0 Registers Address     */
#define XDMAC1_REGS                      ((xdmac_registers_t*)0xe1614000)              /* XDMAC1 Registers Address     */
#define XDMAC2_REGS                      ((xdmac_registers_t*)0xe1200000)              /* XDMAC2 Registers Address     */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*                 BASE ADDRESS DEFINITIONS FOR SAMA7D65D2GN8                 */
/* ************************************************************************** */
#define ACC_BASE_ADDRESS                 _UINT32_(0xe1814000)                          /* ACC Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0xe1000000)                          /* ADC Base Address */
#define AES_BASE_ADDRESS                 _UINT32_(0xe1600000)                          /* AES Base Address */
#define ASRC_BASE_ADDRESS                _UINT32_(0xe2808000)                          /* ASRC Base Address */
#define BSC_BASE_ADDRESS                 _UINT32_(0xe001d600)                          /* BSC Base Address */
#define CHIPID_BASE_ADDRESS              _UINT32_(0xe0020000)                          /* CHIPID Base Address */
#define CPKCC_BASE_ADDRESS               _UINT32_(0xe000c000)                          /* CPKCC Base Address */
#define DDRPUBL_BASE_ADDRESS             _UINT32_(0xe3804000)                          /* DDRPUBL Base Address */
#define DSI_BASE_ADDRESS                 _UINT32_(0xe1404000)                          /* DSI Base Address */
#define DWDT_BASE_ADDRESS                _UINT32_(0xe001c000)                          /* DWDT Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0xe1810000)                          /* EIC Base Address */
#define FLEXCOM0_BASE_ADDRESS            _UINT32_(0xe1820000)                          /* FLEXCOM0 Base Address */
#define FLEXCOM1_BASE_ADDRESS            _UINT32_(0xe1824000)                          /* FLEXCOM1 Base Address */
#define FLEXCOM2_BASE_ADDRESS            _UINT32_(0xe1828000)                          /* FLEXCOM2 Base Address */
#define FLEXCOM3_BASE_ADDRESS            _UINT32_(0xe182c000)                          /* FLEXCOM3 Base Address */
#define FLEXCOM4_BASE_ADDRESS            _UINT32_(0xe2018000)                          /* FLEXCOM4 Base Address */
#define FLEXCOM5_BASE_ADDRESS            _UINT32_(0xe201c000)                          /* FLEXCOM5 Base Address */
#define FLEXCOM6_BASE_ADDRESS            _UINT32_(0xe2020000)                          /* FLEXCOM6 Base Address */
#define FLEXCOM7_BASE_ADDRESS            _UINT32_(0xe2024000)                          /* FLEXCOM7 Base Address */
#define FLEXCOM8_BASE_ADDRESS            _UINT32_(0xe281c000)                          /* FLEXCOM8 Base Address */
#define FLEXCOM9_BASE_ADDRESS            _UINT32_(0xe2820000)                          /* FLEXCOM9 Base Address */
#define FLEXCOM10_BASE_ADDRESS           _UINT32_(0xe2824000)                          /* FLEXCOM10 Base Address */
#define GMAC0_BASE_ADDRESS               _UINT32_(0xe1618000)                          /* GMAC0 Base Address */
#define GMAC1_BASE_ADDRESS               _UINT32_(0xe161c000)                          /* GMAC1 Base Address */
#define GPBR_BASE_ADDRESS                _UINT32_(0xe001d700)                          /* GPBR Base Address */
#define GPU2DC_BASE_ADDRESS              _UINT32_(0xe1480000)                          /* GPU2DC Base Address */
#define I2SMCC0_BASE_ADDRESS             _UINT32_(0xe2814000)                          /* I2SMCC0 Base Address */
#define I2SMCC1_BASE_ADDRESS             _UINT32_(0xe2818000)                          /* I2SMCC1 Base Address */
#define I3CC_BASE_ADDRESS                _UINT32_(0xe9000000)                          /* I3CC Base Address */
#define ICM_BASE_ADDRESS                 _UINT32_(0xe081c000)                          /* ICM Base Address */
#define LCDC_BASE_ADDRESS                _UINT32_(0xe1400000)                          /* LCDC Base Address */
#define LVDSC_BASE_ADDRESS               _UINT32_(0xe1408000)                          /* LVDSC Base Address */
#define MATRIX_BASE_ADDRESS              _UINT32_(0xe0804000)                          /* MATRIX Base Address */
#define MCAN0_BASE_ADDRESS               _UINT32_(0xe0828000)                          /* MCAN0 Base Address */
#define MCAN1_BASE_ADDRESS               _UINT32_(0xe082c000)                          /* MCAN1 Base Address */
#define MCAN2_BASE_ADDRESS               _UINT32_(0xe0830000)                          /* MCAN2 Base Address */
#define MCAN3_BASE_ADDRESS               _UINT32_(0xe0834000)                          /* MCAN3 Base Address */
#define MCAN4_BASE_ADDRESS               _UINT32_(0xe0838000)                          /* MCAN4 Base Address */
#define NICGPV0_BASE_ADDRESS             _UINT32_(0xe8b00000)                          /* NICGPV0 Base Address */
#define NICGPV1_BASE_ADDRESS             _UINT32_(0xe1500000)                          /* NICGPV1 Base Address */
#define OTPC_BASE_ADDRESS                _UINT32_(0xe8c00000)                          /* OTPC Base Address */
#define PDMC0_BASE_ADDRESS               _UINT32_(0xe2800000)                          /* PDMC0 Base Address */
#define PDMC1_BASE_ADDRESS               _UINT32_(0xe2804000)                          /* PDMC1 Base Address */
#define PIO_BASE_ADDRESS                 _UINT32_(0xe0014000)                          /* PIO Base Address */
#define PIT64B0_BASE_ADDRESS             _UINT32_(0xe1800000)                          /* PIT64B0 Base Address */
#define PIT64B1_BASE_ADDRESS             _UINT32_(0xe1804000)                          /* PIT64B1 Base Address */
#define PIT64B2_BASE_ADDRESS             _UINT32_(0xe1808000)                          /* PIT64B2 Base Address */
#define PIT64B3_BASE_ADDRESS             _UINT32_(0xe2004000)                          /* PIT64B3 Base Address */
#define PIT64B4_BASE_ADDRESS             _UINT32_(0xe2008000)                          /* PIT64B4 Base Address */
#define PIT64B5_BASE_ADDRESS             _UINT32_(0xe200c000)                          /* PIT64B5 Base Address */
#define PMC_BASE_ADDRESS                 _UINT32_(0xe0018000)                          /* PMC Base Address */
#define PUF_BASE_ADDRESS                 _UINT32_(0xe0024000)                          /* PUF Base Address */
#define PWM_BASE_ADDRESS                 _UINT32_(0xe1818000)                          /* PWM Base Address */
#define QSPI0_BASE_ADDRESS               _UINT32_(0xe080c000)                          /* QSPI0 Base Address */
#define QSPI1_BASE_ADDRESS               _UINT32_(0xe0810000)                          /* QSPI1 Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0xe001d100)                          /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0xe001d800)                          /* RTC Base Address */
#define RTT_BASE_ADDRESS                 _UINT32_(0xe001d300)                          /* RTT Base Address */
#define SCKC_BASE_ADDRESS                _UINT32_(0xe001d500)                          /* SCKC Base Address */
#define SDMMC0_BASE_ADDRESS              _UINT32_(0xe1204000)                          /* SDMMC0 Base Address */
#define SDMMC1_BASE_ADDRESS              _UINT32_(0xe1208000)                          /* SDMMC1 Base Address */
#define SDMMC2_BASE_ADDRESS              _UINT32_(0xe120c000)                          /* SDMMC2 Base Address */
#define SECUMOD_BASE_ADDRESS             _UINT32_(0xe0004000)                          /* SECUMOD Base Address */
#define SFR_BASE_ADDRESS                 _UINT32_(0xe181c000)                          /* SFR Base Address */
#define SFRBU_BASE_ADDRESS               _UINT32_(0xe0008000)                          /* SFRBU Base Address */
#define SHA_BASE_ADDRESS                 _UINT32_(0xe1604000)                          /* SHA Base Address */
#define SHDWC_BASE_ADDRESS               _UINT32_(0xe001d200)                          /* SHDWC Base Address */
#define HSMC_BASE_ADDRESS                _UINT32_(0xe0808000)                          /* HSMC Base Address */
#define SPDIFRX_BASE_ADDRESS             _UINT32_(0xe280c000)                          /* SPDIFRX Base Address */
#define SPDIFTX_BASE_ADDRESS             _UINT32_(0xe2810000)                          /* SPDIFTX Base Address */
#define SSC0_BASE_ADDRESS                _UINT32_(0xe180c000)                          /* SSC0 Base Address */
#define SSC1_BASE_ADDRESS                _UINT32_(0xe2010000)                          /* SSC1 Base Address */
#define SYSCWP_BASE_ADDRESS              _UINT32_(0xe001d900)                          /* SYSCWP Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0xe2014000)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0xe0800000)                          /* TC1 Base Address */
#define TCPCA_BASE_ADDRESS               _UINT32_(0xe083c000)                          /* TCPCA Base Address */
#define TCPCB_BASE_ADDRESS               _UINT32_(0xe0840000)                          /* TCPCB Base Address */
#define TDES_BASE_ADDRESS                _UINT32_(0xe1608000)                          /* TDES Base Address */
#define TRNG_BASE_ADDRESS                _UINT32_(0xe160c000)                          /* TRNG Base Address */
#define TZAESB_BASE_ADDRESS              _UINT32_(0xe0820000)                          /* TZAESB Base Address */
#define TZAESBS_BASE_ADDRESS             _UINT32_(0xe0824000)                          /* TZAESB Base Address */
#define TZAESBASC_BASE_ADDRESS           _UINT32_(0xe2000000)                          /* TZAESBASC Base Address */
#define TZC_BASE_ADDRESS                 _UINT32_(0xe3000000)                          /* TZC Base Address */
#define TZPM_BASE_ADDRESS                _UINT32_(0xe0010000)                          /* TZPM Base Address */
#define DDRUMCTL_BASE_ADDRESS            _UINT32_(0xe3800000)                          /* DDRUMCTL Base Address */
#define UDPHSA_BASE_ADDRESS              _UINT32_(0xe0814000)                          /* UDPHSA Base Address */
#define UDPHSB_BASE_ADDRESS              _UINT32_(0xe0818000)                          /* UDPHSB Base Address */
#define UHPFS_BASE_ADDRESS               _UINT32_(0x00400000)                          /* UHPFS Base Address */
#define UHPHS_BASE_ADDRESS               _UINT32_(0x00500000)                          /* UHPHS Base Address */
#define XDMAC0_BASE_ADDRESS              _UINT32_(0xe1610000)                          /* XDMAC0 Base Address */
#define XDMAC1_BASE_ADDRESS              _UINT32_(0xe1614000)                          /* XDMAC1 Base Address */
#define XDMAC2_BASE_ADDRESS              _UINT32_(0xe1200000)                          /* XDMAC2 Base Address */

/* ************************************************************************** */
/*                     PIO DEFINITIONS FOR SAMA7D65D2GN8                      */
/* ************************************************************************** */
#include "pio/sama7d65d2gn8.h"

/* ************************************************************************** */
/*                MEMORY MAPPING DEFINITIONS FOR SAMA7D65D2GN8                */
/* ************************************************************************** */
#define IROM_SIZE                      _UINT32_(0x00014000)    /*   80kB Memory segment type: rom */
#define ECC_ROM_SIZE                   _UINT32_(0x00018000)    /*   96kB Memory segment type: rom */
#define CPKCC_ROM_SIZE                 _UINT32_(0x00010000)    /*   64kB Memory segment type: rom */
#define CPKCC_RAM_SIZE                 _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */
#define IRAM_SIZE                      _UINT32_(0x00020000)    /*  128kB Memory segment type: ram */
#define UDPHS_RAMA_SIZE                _UINT32_(0x00100000)    /* 1024kB Memory segment type: ram */
#define UDPHS_RAMB_SIZE                _UINT32_(0x00100000)    /* 1024kB Memory segment type: ram */
#define UHPHS_OHCI_SIZE                _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */
#define UHPHS_EHCI_SIZE                _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */
#define NFC_RAM_SIZE                   _UINT32_(0x00002400)    /*    9kB Memory segment type: ram */
#define NFC_SIZE                       _UINT32_(0x08000000)    /* 131072kB Memory segment type: ram */
#define QSPI_MEM0_SIZE                 _UINT32_(0x10000000)    /* 262144kB Memory segment type: ram */
#define QSPI_MEM1_SIZE                 _UINT32_(0x10000000)    /* 262144kB Memory segment type: ram */
#define EBI_CS0_SIZE                   _UINT32_(0x08000000)    /* 131072kB Memory segment type: ram */
#define EBI_CS1_SIZE                   _UINT32_(0x08000000)    /* 131072kB Memory segment type: ram */
#define DDR_CS_SIZE                    _UINT32_(0x80000000)    /* 2097152kB Memory segment type: ram */
#define PERIPHERALS_SIZE               _UINT32_(0x80000000)    /* 2097152kB Memory segment type: io */
#define SECURAM_SIZE                   _UINT32_(0x00004000)    /*   16kB Memory segment type: ram */
#define SDMMC0_SIZE                    _UINT32_(0x00004000)    /*   16kB Memory segment type: ram */
#define SDMMC1_SIZE                    _UINT32_(0x00004000)    /*   16kB Memory segment type: ram */
#define SDMMC2_SIZE                    _UINT32_(0x00004000)    /*   16kB Memory segment type: ram */
#define NICGPV1_SIZE                   _UINT32_(0x00100000)    /* 1024kB Memory segment type: ram */
#define APB_DBG_S_SIZE                 _UINT32_(0x00060000)    /*  384kB Memory segment type: ram */
#define NICGPV0_SIZE                   _UINT32_(0x00100000)    /* 1024kB Memory segment type: ram */
#define OTPC_SIZE                      _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */
#define ARM_PERIPH_SIZE                _UINT32_(0x00008000)    /*   32kB Memory segment type: ram */
#define I3CC_SIZE                      _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */

#define IROM_ADDR                      _UINT32_(0x00000000)    /* IROM base address (type: rom)*/
#define ECC_ROM_ADDR                   _UINT32_(0x00020000)    /* ECC_ROM base address (type: rom)*/
#define CPKCC_ROM_ADDR                 _UINT32_(0x00040000)    /* CPKCC_ROM base address (type: rom)*/
#define CPKCC_RAM_ADDR                 _UINT32_(0x00051000)    /* CPKCC_RAM base address (type: ram)*/
#define IRAM_ADDR                      _UINT32_(0x00100000)    /* IRAM base address (type: ram)*/
#define UDPHS_RAMA_ADDR                _UINT32_(0x00200000)    /* UDPHS_RAMA base address (type: ram)*/
#define UDPHS_RAMB_ADDR                _UINT32_(0x00300000)    /* UDPHS_RAMB base address (type: ram)*/
#define UHPHS_OHCI_ADDR                _UINT32_(0x00400000)    /* UHPHS_OHCI base address (type: ram)*/
#define UHPHS_EHCI_ADDR                _UINT32_(0x00500000)    /* UHPHS_EHCI base address (type: ram)*/
#define NFC_RAM_ADDR                   _UINT32_(0x00600000)    /* NFC_RAM base address (type: ram)*/
#define NFC_ADDR                       _UINT32_(0x10000000)    /* NFC base address (type: ram)*/
#define QSPI_MEM0_ADDR                 _UINT32_(0x20000000)    /* QSPI_MEM0 base address (type: ram)*/
#define QSPI_MEM1_ADDR                 _UINT32_(0x30000000)    /* QSPI_MEM1 base address (type: ram)*/
#define EBI_CS0_ADDR                   _UINT32_(0x40000000)    /* EBI_CS0 base address (type: ram)*/
#define EBI_CS1_ADDR                   _UINT32_(0x48000000)    /* EBI_CS1 base address (type: ram)*/
#define DDR_CS_ADDR                    _UINT32_(0x60000000)    /* DDR_CS base address (type: ram)*/
#define PERIPHERALS_ADDR               _UINT32_(0xe0000000)    /* PERIPHERALS base address (type: io)*/
#define SECURAM_ADDR                   _UINT32_(0xe0000000)    /* SECURAM base address (type: ram)*/
#define SDMMC0_ADDR                    _UINT32_(0xe1204000)    /* SDMMC0 base address (type: ram)*/
#define SDMMC1_ADDR                    _UINT32_(0xe1208000)    /* SDMMC1 base address (type: ram)*/
#define SDMMC2_ADDR                    _UINT32_(0xe120c000)    /* SDMMC2 base address (type: ram)*/
#define NICGPV1_ADDR                   _UINT32_(0xe1500000)    /* NICGPV1 base address (type: ram)*/
#define APB_DBG_S_ADDR                 _UINT32_(0xe8800000)    /* APB_DBG_S base address (type: ram)*/
#define NICGPV0_ADDR                   _UINT32_(0xe8b00000)    /* NICGPV0 base address (type: ram)*/
#define OTPC_ADDR                      _UINT32_(0xe8c00000)    /* OTPC base address (type: ram)*/
#define ARM_PERIPH_ADDR                _UINT32_(0xe8c10000)    /* ARM_PERIPH base address (type: ram)*/
#define I3CC_ADDR                      _UINT32_(0xe9000000)    /* I3CC base address (type: ram)*/

/* ************************************************************************** */
/*                    DEVICE SIGNATURES FOR SAMA7D65D2GN8                     */
/* ************************************************************************** */
#define CHIP_JTAGID                    _UINT32_(0X05B4203F)
#define CHIP_CIDR                      _UINT32_(0X80262110)
#define CHIP_EXID                      _UINT32_(0X00000020)

/* ************************************************************************** */
/*                  ELECTRICAL DEFINITIONS FOR SAMA7D65D2GN8                  */
/* ************************************************************************** */

#ifdef __cplusplus
}
#endif

#endif /* _SAMA7D65D2GN8_H_ */

