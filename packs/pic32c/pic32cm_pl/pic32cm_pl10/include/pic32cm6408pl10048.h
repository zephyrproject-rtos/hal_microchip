/*
 * Header file for PIC32CM6408PL10048
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

/* File generated from device description file (ATDF) version None */
#ifndef _PIC32CM6408PL10048_H_
#define _PIC32CM6408PL10048_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.1"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (1)

/* PIC32CM6408PL10048 definitions
  This file defines all structures and symbols for PIC32CM6408PL10048:
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
/*                  CMSIS DEFINITIONS FOR PIC32CM6408PL10048                  */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/* ************* PIC32CM6408PL10048 specific Interrupt Numbers ************** */
  MCLK_IRQn                 =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC SUPC (MCLK) */
  OSC32KCTRL_IRQn           =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC SUPC (OSC32KCTRL) */
  OSCCTRL_IRQn              =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC SUPC (OSCCTRL) */
  PAC_IRQn                  =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC SUPC (PAC) */
  SUPC_IRQn                 =   0, /* 0   Shared between MCLK OSCCTRL OSC32KCTRL PAC SUPC (SUPC) */
  WDT_IRQn                  =   1, /* 1   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   2, /* 2   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   3, /* 3   External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              =   4, /* 4   Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 =   5, /* 5   Direct Memory Access Controller (DMAC) */
  EVSYS_IRQn                =   6, /* 6   Event System (EVSYS)                */
  SERCOM0_IRQn              =   7, /* 7   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =   8, /* 8   Serial Communication Interface (SERCOM1) */
  TC0_IRQn                  =   9, /* 9   Timer/Counter (TC0)                 */
  TC1_IRQn                  =  10, /* 10  Timer/Counter (TC1)                 */
  TC2_IRQn                  =  11, /* 11  Timer/Counter (TC2)                 */
  TCC0_IRQn                 =  12, /* 12  Timer/Counter for Control Applications (TCC0) */
  ADC0_IRQn                 =  13, /* 13  Analog-to-Digital Converter (ADC0)  */
  AC_IRQn                   =  14, /* 14  Analog Comparator (AC)              */

  PERIPH_MAX_IRQn           =  14  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M0PLUS handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnSYSTEM_Handler;                       /*   0  (MCLK OSCCTRL OSC32KCTRL PAC SUPC) */
  void* pfnWDT_Handler;                          /*   1 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   2 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   3 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /*   4 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /*   5 Direct Memory Access Controller (DMAC) */
  void* pfnEVSYS_Handler;                        /*   6 Event System (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   7 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*   8 Serial Communication Interface (SERCOM1) */
  void* pfnTC0_Handler;                          /*   9 Timer/Counter (TC0) */
  void* pfnTC1_Handler;                          /*  10 Timer/Counter (TC1) */
  void* pfnTC2_Handler;                          /*  11 Timer/Counter (TC2) */
  void* pfnTCC0_Handler;                         /*  12 Timer/Counter for Control Applications (TCC0) */
  void* pfnADC0_Handler;                         /*  13 Analog-to-Digital Converter (ADC0) */
  void* pfnAC_Handler;                           /*  14 Analog Comparator (AC) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M0PLUS exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void SYSTEM_Handler                ( void );
void WDT_Handler                   ( void );
void RTC_Handler                   ( void );
void EIC_Handler                   ( void );
void NVMCTRL_Handler               ( void );
void DMAC_Handler                  ( void );
void EVSYS_Handler                 ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void TC0_Handler                   ( void );
void TC1_Handler                   ( void );
void TC2_Handler                   ( void );
void TCC0_Handler                  ( void );
void ADC0_Handler                  ( void );
void AC_Handler                    ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __CM0PLUS_REV                 0x0001 /* Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                      0 /* MPU present or not                                                        */
#define __NVIC_PRIO_BITS                   2 /* Number of Bits used for Priority Levels                                   */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */

/* CMSIS includes */
#include "core_cm0plus.h"
#if defined USE_CMSIS_INIT
#include "system_pic32cm6408pl10048.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*         SOFTWARE PERIPHERAL API DEFINITIONS FOR PIC32CM6408PL10048         */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/ccl.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/fuses.h"
#include "component/gclk.h"
#include "component/hmatrixb.h"
#include "component/mclk.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/osc32kctrl.h"
#include "component/oscctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/supc.h"
#include "component/sysctrl.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*                INSTANCE DEFINITIONS FOR PIC32CM6408PL10048                 */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc0.h"
#include "instance/ccl.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/fuses.h"
#include "instance/gclk.h"
#include "instance/hmatrixhs.h"
#include "instance/mclk.h"
#include "instance/mtb.h"
#include "instance/nvmctrl.h"
#include "instance/osc32kctrl.h"
#include "instance/oscctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/supc.h"
#include "instance/sysctrl.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tcc0.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*              PERIPHERAL ID DEFINITIONS FOR PIC32CM6408PL10048              */
/* ************************************************************************** */
#define ID_PAC           (  0) /* Instance index for PAC (PAC) */
#define ID_PM            (  1) /* Instance index for PM (PM) */
#define ID_MCLK          (  2) /* Instance index for MCLK (MCLK) */
#define ID_RSTC          (  3) /* Instance index for RSTC (RSTC) */
#define ID_OSCCTRL       (  4) /* Instance index for OSCCTRL (OSCCTRL) */
#define ID_OSC32KCTRL    (  5) /* Instance index for OSC32KCTRL (OSC32KCTRL) */
#define ID_SUPC          (  6) /* Instance index for SUPC (SUPC) */
#define ID_GCLK          (  7) /* Instance index for GCLK (GCLK) */
#define ID_WDT           (  8) /* Instance index for WDT (WDT) */
#define ID_RTC           (  9) /* Instance index for RTC (RTC) */
#define ID_EIC           ( 10) /* Instance index for EIC (EIC) */
#define ID_PORT          ( 32) /* Instance index for PORT (PORT) */
#define ID_DSU           ( 33) /* Instance index for DSU (DSU) */
#define ID_NVMCTRL       ( 34) /* Instance index for NVMCTRL (NVMCTRL) */
#define ID_DMAC          ( 35) /* Instance index for DMAC (DMAC) */
#define ID_MTB           ( 36) /* Instance index for MTB (MTB) */
#define ID_HMATRIXHS     ( 37) /* Instance index for HMATRIXHS (HMATRIXHS) */
#define ID_EVSYS         ( 64) /* Instance index for EVSYS (EVSYS) */
#define ID_SERCOM0       ( 65) /* Instance index for SERCOM0 (SERCOM0) */
#define ID_SERCOM1       ( 66) /* Instance index for SERCOM1 (SERCOM1) */
#define ID_TC0           ( 67) /* Instance index for TC0 (TC0) */
#define ID_TC1           ( 68) /* Instance index for TC1 (TC1) */
#define ID_TC2           ( 69) /* Instance index for TC2 (TC2) */
#define ID_TCC0          ( 70) /* Instance index for TCC0 (TCC0) */
#define ID_ADC0          ( 71) /* Instance index for ADC0 (ADC0) */
#define ID_AC            ( 72) /* Instance index for AC (AC) */
#define ID_CCL           ( 73) /* Instance index for CCL (CCL) */
#define ID_PTC           ( 74) /* Instance index for PTC (PTC) */
#define ID_SYSCTRL       ( 75) /* Instance index for SYSCTRL (SYSCTRL) */

#define ID_PERIPH_MAX    ( 75) /* Number of peripheral IDs */

/* ************************************************************************** */
/*       REGISTER STRUCTURE ADDRESS DEFINITIONS FOR PIC32CM6408PL10048        */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42002000)                 /* AC Registers Address         */
#define ADC0_REGS                        ((adc_registers_t*)0x42001c00)                /* ADC0 Registers Address       */
#define CCL_REGS                         ((ccl_registers_t*)0x42002400)                /* CCL Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x41006000)               /* DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /* DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40002800)                /* EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000000)              /* EVSYS Registers Address      */
#define FUSES_BOOTCFG_REGS               ((fuses_bootcfg_registers_t*)0x0d000400)      /* FUSES Registers Address      */
#define FUSES_SIGNATURE_REGS             ((fuses_signature_registers_t*)0x0d000200)    /* FUSES Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40001c00)               /* GCLK Registers Address       */
#define HMATRIXHS_REGS                   ((hmatrixb_registers_t*)0x4100a000)           /* HMATRIXHS Registers Address  */
#define MCLK_REGS                        ((mclk_registers_t*)0x40000800)               /* MCLK Registers Address       */
#define MTB_REGS                         ((mtb_registers_t*)0x41008000)                /* MTB Registers Address        */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /* NVMCTRL Registers Address    */
#define OSC32KCTRL_REGS                  ((osc32kctrl_registers_t*)0x40001400)         /* OSC32KCTRL Registers Address */
#define OSCCTRL_REGS                     ((oscctrl_registers_t*)0x40001000)            /* OSCCTRL Registers Address    */
#define PAC_REGS                         ((pac_registers_t*)0x40000000)                /* PAC Registers Address        */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /* PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x41000000)               /* PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x50000000)               /* PORT Registers Address       */
#define RSTC_REGS                        ((rstc_registers_t*)0x40000c00)               /* RSTC Registers Address       */
#define RTC_REGS                         ((rtc_registers_t*)0x40002400)                /* RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000400)             /* SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000800)             /* SERCOM1 Registers Address    */
#define SUPC_REGS                        ((supc_registers_t*)0x40001800)               /* SUPC Registers Address       */
#define SYSCTRL_REGS                     ((sysctrl_registers_t*)0x42002c00)            /* SYSCTRL Registers Address    */
#define TC0_REGS                         ((tc_registers_t*)0x42000c00)                 /* TC0 Registers Address        */
#define TC1_REGS                         ((tc_registers_t*)0x42001000)                 /* TC1 Registers Address        */
#define TC2_REGS                         ((tc_registers_t*)0x42001400)                 /* TC2 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42001800)                /* TCC0 Registers Address       */
#define WDT_REGS                         ((wdt_registers_t*)0x40002000)                /* WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*              BASE ADDRESS DEFINITIONS FOR PIC32CM6408PL10048               */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UINT32_(0x42002000)                          /* AC Base Address */
#define ADC0_BASE_ADDRESS                _UINT32_(0x42001c00)                          /* ADC0 Base Address */
#define CCL_BASE_ADDRESS                 _UINT32_(0x42002400)                          /* CCL Base Address */
#define DMAC_BASE_ADDRESS                _UINT32_(0x41006000)                          /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UINT32_(0x41002000)                          /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0x40002800)                          /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UINT32_(0x42000000)                          /* EVSYS Base Address */
#define FUSES_BOOTCFG_BASE_ADDRESS       _UINT32_(0x0d000400)                          /* FUSES Base Address */
#define FUSES_SIGNATURE_BASE_ADDRESS     _UINT32_(0x0d000200)                          /* FUSES Base Address */
#define GCLK_BASE_ADDRESS                _UINT32_(0x40001c00)                          /* GCLK Base Address */
#define HMATRIXHS_BASE_ADDRESS           _UINT32_(0x4100a000)                          /* HMATRIXHS Base Address */
#define MCLK_BASE_ADDRESS                _UINT32_(0x40000800)                          /* MCLK Base Address */
#define MTB_BASE_ADDRESS                 _UINT32_(0x41008000)                          /* MTB Base Address */
#define NVMCTRL_BASE_ADDRESS             _UINT32_(0x41004000)                          /* NVMCTRL Base Address */
#define OSC32KCTRL_BASE_ADDRESS          _UINT32_(0x40001400)                          /* OSC32KCTRL Base Address */
#define OSCCTRL_BASE_ADDRESS             _UINT32_(0x40001000)                          /* OSCCTRL Base Address */
#define PAC_BASE_ADDRESS                 _UINT32_(0x40000000)                          /* PAC Base Address */
#define PM_BASE_ADDRESS                  _UINT32_(0x40000400)                          /* PM Base Address */
#define PORT_BASE_ADDRESS                _UINT32_(0x41000000)                          /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UINT32_(0x50000000)                          /* PORT Base Address */
#define RSTC_BASE_ADDRESS                _UINT32_(0x40000c00)                          /* RSTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x40002400)                          /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UINT32_(0x42000400)                          /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UINT32_(0x42000800)                          /* SERCOM1 Base Address */
#define SUPC_BASE_ADDRESS                _UINT32_(0x40001800)                          /* SUPC Base Address */
#define SYSCTRL_BASE_ADDRESS             _UINT32_(0x42002c00)                          /* SYSCTRL Base Address */
#define TC0_BASE_ADDRESS                 _UINT32_(0x42000c00)                          /* TC0 Base Address */
#define TC1_BASE_ADDRESS                 _UINT32_(0x42001000)                          /* TC1 Base Address */
#define TC2_BASE_ADDRESS                 _UINT32_(0x42001400)                          /* TC2 Base Address */
#define TCC0_BASE_ADDRESS                _UINT32_(0x42001800)                          /* TCC0 Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40002000)                          /* WDT Base Address */

/* ************************************************************************** */
/*                   PIO DEFINITIONS FOR PIC32CM6408PL10048                   */
/* ************************************************************************** */
#include "pio/pic32cm6408pl10048.h"

/* ************************************************************************** */
/*             MEMORY MAPPING DEFINITIONS FOR PIC32CM6408PL10048              */
/* ************************************************************************** */
#define BROM_SIZE                      _UINT32_(0x00008000)    /*   32kB Memory segment type: rom */
#define FLASH_SIZE                     _UINT32_(0x00010000)    /*   64kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UINT32_(       512)
#define FLASH_NB_OF_PAGES              _UINT32_(       128)

#define BOOTCFG_SIZE                   _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define SIGNATURE_SIZE                 _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define HSRAM_SIZE                     _UINT32_(0x00002000)    /*    8kB Memory segment type: ram */
#define APBA_SIZE                      _UINT32_(0x00004000)    /*   16kB Memory segment type: io */
#define APBB_SIZE                      _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define APBC_SIZE                      _UINT32_(0x00008000)    /*   32kB Memory segment type: io */
#define IOBUS_SIZE                     _UINT32_(0x00000200)    /*    0kB Memory segment type: io */
#define PPB_SIZE                       _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */

#define BROM_ADDR                      _UINT32_(0x00000000)    /* BROM base address (type: rom)*/
#define FLASH_ADDR                     _UINT32_(0x0c000000)    /* FLASH base address (type: flash)*/
#define BOOTCFG_ADDR                   _UINT32_(0x0d000400)    /* BOOTCFG base address (type: fuses)*/
#define SIGNATURE_ADDR                 _UINT32_(0x0d000200)    /* SIGNATURE base address (type: fuses)*/
#define HSRAM_ADDR                     _UINT32_(0x20000000)    /* HSRAM base address (type: ram)*/
#define APBA_ADDR                      _UINT32_(0x40000000)    /* APBA base address (type: io)*/
#define APBB_ADDR                      _UINT32_(0x41000000)    /* APBB base address (type: io)*/
#define APBC_ADDR                      _UINT32_(0x42000000)    /* APBC base address (type: io)*/
#define IOBUS_ADDR                     _UINT32_(0x50000000)    /* IOBUS base address (type: io)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/

/* ************************************************************************** */
/*                  DEVICE SIGNATURES FOR PIC32CM6408PL10048                  */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UINT32_(0X0BA02053)

/* ************************************************************************** */
/*               ELECTRICAL DEFINITIONS FOR PIC32CM6408PL10048                */
/* ************************************************************************** */

/* ************************************************************************** */
/*                  Event Generator IDs for C32CM6408PL10048                  */
/* ************************************************************************** */
#define EVENT_ID_GEN_OSC32KCTRL_CLKFAIL                   1 /* ID for OSC32KCTRL event generator CLKFAIL */
#define EVENT_ID_GEN_SUPC_MVIO                            2 /* ID for SUPC event generator MVIO */
#define EVENT_ID_GEN_SUPC_VLM                             3 /* ID for SUPC event generator VLM */
#define EVENT_ID_GEN_RTC_CMP_0                            4 /* ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            5 /* ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_OVF                              6 /* ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            7 /* ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            8 /* ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            9 /* ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                           10 /* ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                           11 /* ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                           12 /* ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           13 /* ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           14 /* ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        15 /* ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        16 /* ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        17 /* ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        18 /* ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        19 /* ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        20 /* ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        21 /* ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        22 /* ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        23 /* ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        24 /* ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       25 /* ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       26 /* ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       27 /* ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       28 /* ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       29 /* ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       30 /* ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_DMAC_CH_0                           31 /* ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           32 /* ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_TC0_OVF                             33 /* ID for TC0 event generator OVF */
#define EVENT_ID_GEN_TC0_MC_0                            34 /* ID for TC0 event generator MC_0 */
#define EVENT_ID_GEN_TC0_MC_1                            35 /* ID for TC0 event generator MC_1 */
#define EVENT_ID_GEN_TC1_OVF                             36 /* ID for TC1 event generator OVF */
#define EVENT_ID_GEN_TC1_MC_0                            37 /* ID for TC1 event generator MC_0 */
#define EVENT_ID_GEN_TC1_MC_1                            38 /* ID for TC1 event generator MC_1 */
#define EVENT_ID_GEN_TC2_OVF                             39 /* ID for TC2 event generator OVF */
#define EVENT_ID_GEN_TC2_MC_0                            40 /* ID for TC2 event generator MC_0 */
#define EVENT_ID_GEN_TC2_MC_1                            41 /* ID for TC2 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_OVF                            42 /* ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            43 /* ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            44 /* ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           45 /* ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           46 /* ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           47 /* ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           48 /* ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_ADC0_RESRDY                         49 /* ID for ADC0 event generator RESRDY */
#define EVENT_ID_GEN_ADC0_SAMPRDY                        50 /* ID for ADC0 event generator SAMPRDY */
#define EVENT_ID_GEN_ADC0_WCMP                           51 /* ID for ADC0 event generator WCMP */
#define EVENT_ID_GEN_AC_COMP_0                           52 /* ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           53 /* ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            54 /* ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_0                        55 /* ID for CCL event generator LUTOUT_0 */
#define EVENT_ID_GEN_CCL_LUTOUT_1                        56 /* ID for CCL event generator LUTOUT_1 */
#define EVENT_ID_GEN_CCL_LUTOUT_2                        57 /* ID for CCL event generator LUTOUT_2 */
#define EVENT_ID_GEN_CCL_LUTOUT_3                        58 /* ID for CCL event generator LUTOUT_3 */
#define EVENT_ID_GEN_SYSCTRL_OSCTEST                     59 /* ID for SYSCTRL event generator OSCTEST */
#define EVENT_ID_GEN_PAC_ACCERR                          60 /* ID for PAC event generator ACCERR */
#define EVENT_ID_GEN_DSU_SWCCSTAT                        61 /* ID for DSU event generator SWCCSTAT */
#define EVENT_ID_GEN_DSU_COMP                            62 /* ID for DSU event generator COMP */

/* ************************************************************************** */
/*                    Event User IDs for C32CM6408PL10048                     */
/* ************************************************************************** */
#define EVENT_ID_USER_PORT_EV_0                           0 /* ID for PORT event user EV_0 */
#define EVENT_ID_USER_PORT_EV_1                           1 /* ID for PORT event user EV_1 */
#define EVENT_ID_USER_PORT_EV_2                           2 /* ID for PORT event user EV_2 */
#define EVENT_ID_USER_PORT_EV_3                           3 /* ID for PORT event user EV_3 */
#define EVENT_ID_USER_DMAC_CH_0                           4 /* ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           5 /* ID for DMAC event user CH_1 */
#define EVENT_ID_USER_TC0_EVU                             6 /* ID for TC0 event user EVU */
#define EVENT_ID_USER_TC1_EVU                             7 /* ID for TC1 event user EVU */
#define EVENT_ID_USER_TC2_EVU                             8 /* ID for TC2 event user EVU */
#define EVENT_ID_USER_TCC0_EV_0                           9 /* ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                          10 /* ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                          11 /* ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                          12 /* ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                          13 /* ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                          14 /* ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_ADC0_START                         15 /* ID for ADC0 event user START */
#define EVENT_ID_USER_CCL_LUTIN_0                        16 /* ID for CCL event user LUTIN_0 */
#define EVENT_ID_USER_CCL_LUTIN_1                        17 /* ID for CCL event user LUTIN_1 */
#define EVENT_ID_USER_CCL_LUTIN_2                        18 /* ID for CCL event user LUTIN_2 */
#define EVENT_ID_USER_CCL_LUTIN_3                        19 /* ID for CCL event user LUTIN_3 */
#define EVENT_ID_USER_MTB_START                          20 /* ID for MTB event user START */
#define EVENT_ID_USER_MTB_STOP                           21 /* ID for MTB event user STOP */
#define EVENT_ID_USER_SYSCTRL_OSCTEST                    22 /* ID for SYSCTRL event user OSCTEST */

#ifdef __cplusplus
}
#endif

#endif /* _PIC32CM6408PL10048_H_ */

