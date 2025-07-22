/*
 * Copyright (c) 2024 Microchip
 *
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _SOC_MICROCHIP_PIC32CXSG41_FIXUPS_H_
#define _SOC_MICROCHIP_PIC32CXSG41_FIXUPS_H_

#if !defined(SKIP_INTEGER_LITERALS)
#if defined(_U_) || defined(_L_) || defined(_UL_)
#error "Integer Literals macros already defined elsewhere"
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++
 */
#define _U_(x) x##U /**< C code: Unsigned integer literal constant value */
#define _L_(x) x##L /**< C code: Long integer literal constant value */
#define _UL_(x)                                                                \
  x##UL          /**< C code: Unsigned Long integer literal constant value */
#else            /* Assembler */
#define _U_(x) x /**< Assembler: Unsigned integer literal constant value */
#define _L_(x) x /**< Assembler: Long integer literal constant value */
#define _UL_(x)                                                                \
  x    /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t
    ro_reg; /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t
    ro_reg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t
    ro_reg8; /**< Read only  8-bit register (volatile const unsigned int) */
#else        /* #ifndef __cplusplus */
typedef volatile uint32_t
    ro_reg; /**< Read only 32-bit reg (volatile const unsigned int) */
typedef volatile uint16_t
    ro_reg16; /**< Read only 16-bit reg (volatile const unsigned int) */
typedef volatile uint8_t
    ro_reg8; /**< Read only  8-bit reg (volatile const unsigned int) */
#endif
typedef volatile uint32_t
    wo_reg; /**< Write only 32-bit reg (volatile unsigned int) */
typedef volatile uint16_t
    wo_reg16; /**< Write only 16-bit reg (volatile unsigned int) */
typedef volatile uint8_t
    wo_reg8; /**< Write only  8-bit reg (volatile unsigned int) */
typedef volatile uint32_t
    rw_reg; /**< Read-Write 32-bit reg (volatile unsigned int) */
typedef volatile uint16_t
    rw_reg16; /**< Read-Write 16-bit reg (volatile unsigned int) */
typedef volatile uint8_t
    rw_reg8; /**< Read-Write  8-bit reg (volatile unsigned int) */
#endif       /* #if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#include "sercom_fixup_pic32cxsg.h"
#include "tc_fixup_pic32cxsg.h"
#include "gmac_fixup_pic32cxsg.h"
#include "adc_fixup_pic32cxsg.h"

#include "component/ac_component_fixup_pic32cxsg.h"
#include "component/adc_component_fixup_pic32cxsg.h"
#include "component/aes_component_fixup_pic32cxsg.h"
#include "component/can_component_fixup_pic32cxsg.h"
#include "component/ccl_component_fixup_pic32cxsg.h"
#include "component/cmcc_component_fixup_pic32cxsg.h"
#include "component/dac_component_fixup_pic32cxsg.h"
#include "component/dmac_component_fixup_pic32cxsg.h"
#include "component/dsu_component_fixup_pic32cxsg.h"
#include "component/eic_component_fixup_pic32cxsg.h"
#include "component/evsys_component_fixup_pic32cxsg.h"
#include "component/freqm_component_fixup_pic32cxsg.h"
#include "component/gclk_component_fixup_pic32cxsg.h"
#include "component/gmac_component_fixup_pic32cxsg.h"
#include "component/hmatrixb_component_fixup_pic32cxsg.h"
#include "component/i2s_component_fixup_pic32cxsg.h"
#include "component/icm_component_fixup_pic32cxsg.h"
#include "component/mclk_component_fixup_pic32cxsg.h"
#include "component/nvmctrl_component_fixup_pic32cxsg.h"
#include "component/osc32kctrl_component_fixup_pic32cxsg.h"
#include "component/oscctrl_component_fixup_pic32cxsg.h"
#include "component/pac_component_fixup_pic32cxsg.h"
#include "component/pcc_component_fixup_pic32cxsg.h"
#include "component/pdec_component_fixup_pic32cxsg.h"
#include "component/port_component_fixup_pic32cxsg.h"
#include "component/qspi_component_fixup_pic32cxsg.h"
#include "component/ramecc_component_fixup_pic32cxsg.h"
#include "component/rstc_component_fixup_pic32cxsg.h"
#include "component/rtc_component_fixup_pic32cxsg.h"
#include "component/sdhc_component_fixup_pic32cxsg.h"
#include "component/sercom_component_fixup_pic32cxsg.h"
#include "component/supc_component_fixup_pic32cxsg.h"
#include "component/tc_component_fixup_pic32cxsg.h"
#include "component/tcc_component_fixup_pic32cxsg.h"
#include "component/trng_component_fixup_pic32cxsg.h"
#include "component/usb_component_fixup_pic32cxsg.h"
#include "component/wdt_component_fixup_pic32cxsg.h"

#include "instance/ac_instance_fixup_pic32cxsg.h"
#include "instance/adc0_instance_fixup_pic32cxsg.h"
#include "instance/adc1_instance_fixup_pic32cxsg.h"
#include "instance/aes_instance_fixup_pic32cxsg.h"
#include "instance/can0_instance_fixup_pic32cxsg.h"
#include "instance/can1_instance_fixup_pic32cxsg.h"
#include "instance/ccl_instance_fixup_pic32cxsg.h"
#include "instance/cmcc_instance_fixup_pic32cxsg.h"
#include "instance/dac_instance_fixup_pic32cxsg.h"
#include "instance/dmac_instance_fixup_pic32cxsg.h"
#include "instance/dsu_instance_fixup_pic32cxsg.h"
#include "instance/eic_instance_fixup_pic32cxsg.h"
#include "instance/evsys_instance_fixup_pic32cxsg.h"
#include "instance/freqm_instance_fixup_pic32cxsg.h"
#include "instance/gclk_instance_fixup_pic32cxsg.h"
#include "instance/gmac_instance_fixup_pic32cxsg.h"
#include "instance/hmatrix_instance_fixup_pic32cxsg.h"
#include "instance/i2s_instance_fixup_pic32cxsg.h"
#include "instance/icm_instance_fixup_pic32cxsg.h"
#include "instance/mclk_instance_fixup_pic32cxsg.h"
#include "instance/nvmctrl_instance_fixup_pic32cxsg.h"
#include "instance/osc32kctrl_instance_fixup_pic32cxsg.h"
#include "instance/oscctrl_instance_fixup_pic32cxsg.h"
#include "instance/pac_instance_fixup_pic32cxsg.h"
#include "instance/pcc_instance_fixup_pic32cxsg.h"
#include "instance/pdec_instance_fixup_pic32cxsg.h"
#include "instance/port_instance_fixup_pic32cxsg.h"
#include "instance/qspi_instance_fixup_pic32cxsg.h"
#include "instance/ramecc_instance_fixup_pic32cxsg.h"
#include "instance/rstc_instance_fixup_pic32cxsg.h"
#include "instance/rtc_instance_fixup_pic32cxsg.h"
#include "instance/sdhc0_instance_fixup_pic32cxsg.h"
#include "instance/sdhc1_instance_fixup_pic32cxsg.h"

#include "instance/sercom0_instance_fixup_pic32cxsg.h"
#include "instance/sercom1_instance_fixup_pic32cxsg.h"
#include "instance/sercom2_instance_fixup_pic32cxsg.h"
#include "instance/sercom3_instance_fixup_pic32cxsg.h"
#include "instance/sercom4_instance_fixup_pic32cxsg.h"
#include "instance/sercom5_instance_fixup_pic32cxsg.h"

#if   defined(__PIC32CX1025SG41080__) || defined(__PIC32CX1025SG41100__) || defined(__PIC32CX1025SG41128__)
#include "instance/sercom6_instance_fixup_pic32cxsg.h"
#include "instance/sercom7_instance_fixup_pic32cxsg.h"
#endif

#include "instance/supc_instance_fixup_pic32cxsg.h"
#include "instance/tc0_instance_fixup_pic32cxsg.h"
#include "instance/tc1_instance_fixup_pic32cxsg.h"
#include "instance/tc2_instance_fixup_pic32cxsg.h"
#include "instance/tc3_instance_fixup_pic32cxsg.h"
#include "instance/tc4_instance_fixup_pic32cxsg.h"
#include "instance/tc5_instance_fixup_pic32cxsg.h"

#if   defined(__PIC32CX1025SG41080__) || defined(__PIC32CX1025SG41100__) || defined(__PIC32CX1025SG41128__)
#include "instance/tc6_instance_fixup_pic32cxsg.h"
#include "instance/tc7_instance_fixup_pic32cxsg.h"
#endif

#include "instance/tcc0_instance_fixup_pic32cxsg.h"
#include "instance/tcc1_instance_fixup_pic32cxsg.h"
#include "instance/tcc2_instance_fixup_pic32cxsg.h"
#include "instance/tcc3_instance_fixup_pic32cxsg.h"
#include "instance/tcc4_instance_fixup_pic32cxsg.h"

#include "instance/trng_instance_fixup_pic32cxsg.h"
#include "instance/usb_instance_fixup_pic32cxsg.h"
#include "instance/wdt_instance_fixup_pic32cxsg.h"

#endif /* _SOC_MICROCHIP_PIC32CXSG41_FIXUPS_H_ */
