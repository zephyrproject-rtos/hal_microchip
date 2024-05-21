/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_VBAT_MEM_128B_V1_H
#define _MEC5_VBAT_MEM_128B_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief VBAT powered 128 byte SRAM (MEC_VBATM)
  */

typedef struct mec_vbatm_regs {                 /*!< (@ 0x4000A800) MEC_VBATM Structure                                        */
  __IOM uint8_t   VBMEM[128];                   /*!< (@ 0x00000000) 8-bit access to VBAT memory                                */
} MEC_VBATM_Type;                               /*!< Size = 128 (0x80)                                                         */

/** @} */ /* End of group Device_Peripheral_peripherals */

#endif /* _MEC5_VBAT_MEM_128B_V1_H */
