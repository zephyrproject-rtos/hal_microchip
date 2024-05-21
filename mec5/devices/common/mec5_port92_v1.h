/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PORT92_V1_H
#define _MEC5_PORT92_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Keyboard Port92 emulation (MEC_PORT92)
  */

typedef struct mec_port92_regs {                /*!< (@ 0x400F2000) MEC_PORT92 Structure                                       */
  __IM  uint8_t   HP92D;                        /*!< (@ 0x00000000) Port92 Host accessible register                            */
  __IM  uint8_t   RESERVED[255];
  __IOM uint8_t   CTRLGA20;                     /*!< (@ 0x00000100) EC-only: Port92 Gate A20 control                           */
  __IM  uint8_t   RESERVED1[7];
  __OM  uint8_t   SETGA20L;                     /*!< (@ 0x00000108) EC-only: Port92 Set Gate A20                               */
  __IM  uint8_t   RESERVED2[3];
  __OM  uint8_t   RSTGA20L;                     /*!< (@ 0x0000010C) EC-only: Port92 Reset Gate A20                             */
  __IM  uint8_t   RESERVED3[547];
  __IOM uint8_t   P92ACT;                       /*!< (@ 0x00000330) Port92 Logical device activate                             */
} MEC_PORT92_Type;                              /*!< Size = 817 (0x331)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  CTRLGA20  ======================================================== */
#define MEC_PORT92_CTRLGA20_GA20_Pos      (0UL)                     /*!< GA20 (Bit 0)                                          */
#define MEC_PORT92_CTRLGA20_GA20_Msk      (0x1UL)                   /*!< GA20 (Bitfield-Mask: 0x01)                            */
/* ========================================================  P92ACT  ========================================================= */
#define MEC_PORT92_P92ACT_ENABLE_Pos      (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_PORT92_P92ACT_ENABLE_Msk      (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */

/** @} */ /* End of group PosMask_peripherals */

#endif /* _MEC5_PORT92_V1_H */
