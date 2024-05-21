/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_MBOX_V1_H
#define _MEC5_MBOX_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Host/EC Mailbox communication (MEC_MBOX0)
  */

typedef struct mec_mbox_regs {                  /*!< (@ 0x400F0000) MEC_MBOX0 Structure                                        */
  __IOM uint8_t   HINDEX;                       /*!< (@ 0x00000000) Mailbox Host Index                                         */
  __IOM uint8_t   HDATA;                        /*!< (@ 0x00000001) Mailbox Host Data                                          */
  __IM  uint16_t  RESERVED;
  __IM  uint32_t  RESERVED1[63];
  __IOM uint8_t   H2EC;                         /*!< (@ 0x00000100) Mailbox Host to EC                                         */
  __IM  uint8_t   RESERVED2;
  __IM  uint16_t  RESERVED3;
  __IOM uint8_t   EC2H;                         /*!< (@ 0x00000104) Mailbox EC to Host                                         */
  __IM  uint8_t   RESERVED4;
  __IM  uint16_t  RESERVED5;
  __IOM uint8_t   ECSMIT;                       /*!< (@ 0x00000108) Mailbox EC SMI trigger                                     */
  __IM  uint8_t   RESERVED6;
  __IM  uint16_t  RESERVED7;
  __IOM uint8_t   ECSMIM;                       /*!< (@ 0x0000010C) Mailbox EC SMI mask                                        */
  __IM  uint8_t   RESERVED8;
  __IM  uint16_t  RESERVED9;
  __IOM uint32_t  MBOXD[8];                     /*!< (@ 0x00000110) Mailbox data registers 32-bit access                       */
} MEC_MBOX_Type;                                /*!< Size = 304 (0x130)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  ECSMIT  ========================================================= */
#define MEC_MBOX_ECSMIT_EC_WR_Pos         (0UL)                     /*!< EC_WR (Bit 0)                                         */
#define MEC_MBOX_ECSMIT_EC_WR_Msk         (0x1UL)                   /*!< EC_WR (Bitfield-Mask: 0x01)                           */
#define MEC_MBOX_ECSMIT_EC_SWI_Pos        (1UL)                     /*!< EC_SWI (Bit 1)                                        */
#define MEC_MBOX_ECSMIT_EC_SWI_Msk        (0xfeUL)                  /*!< EC_SWI (Bitfield-Mask: 0x7f)                          */
/* ========================================================  ECSMIM  ========================================================= */
#define MEC_MBOX_ECSMIM_EC_WR_EN_Pos      (0UL)                     /*!< EC_WR_EN (Bit 0)                                      */
#define MEC_MBOX_ECSMIM_EC_WR_EN_Msk      (0x1UL)                   /*!< EC_WR_EN (Bitfield-Mask: 0x01)                        */
#define MEC_MBOX_ECSMIM_EC_SWI_EN_Pos     (1UL)                     /*!< EC_SWI_EN (Bit 1)                                     */
#define MEC_MBOX_ECSMIM_EC_SWI_EN_Msk     (0xfeUL)                  /*!< EC_SWI_EN (Bitfield-Mask: 0x7f)                       */

/** @} */ /* End of group PosMask_peripherals */

#endif /* _MEC5_MBOX_V1_H */
