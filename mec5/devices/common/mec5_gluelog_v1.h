/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_GLUELOG_V1_H
#define _MEC5_GLUELOG_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Glue Logic (MEC_GLUE)
  */

typedef struct mec_glue_regs {                  /*!< (@ 0x400F3C00) MEC_GLUE Structure                                         */
  __IM  uint32_t  RESERVED;
  __IOM uint8_t   S0IX_DEN;                     /*!< (@ 0x00000004) Glue Runtime: S0ix Detection Enable                        */
  __IM  uint8_t   RESERVED1;
  __IM  uint16_t  RESERVED2;
  __IM  uint32_t  RESERVED3[65];
  __IOM uint32_t  PWRGD_SRC_CFG;                /*!< (@ 0x0000010C) Glue power good signal source configuration                */
  __IOM uint32_t  S0IX_DET_CFG;                 /*!< (@ 0x00000110) Glue S0ix detection configuration                          */
  __IM  uint32_t  RESERVED4[5];
  __IM  uint32_t  SMON;                         /*!< (@ 0x00000128) Glue Signal Monitor State                                  */
  __IOM uint32_t  SMON_IPEND;                   /*!< (@ 0x0000012C) Glue Signal Monitor Interrupt Pending                      */
  __IOM uint32_t  SMON_IEN;                     /*!< (@ 0x00000130) Glue Signal Monitor Interrupt Enable                       */
} MEC_GLUE_Type;                                /*!< Size = 308 (0x134)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_GLUELOG_V1_H */
