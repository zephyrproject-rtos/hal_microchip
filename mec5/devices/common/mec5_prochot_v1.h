/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PROCHOT_V1_H
#define _MEC5_PROCHOT_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief PROCHOT Monitor (MEC_PROCHOT)
  */

typedef struct mec_phot_regs {                  /*!< (@ 0x40003400) MEC_PROCHOT Structure                                      */
  __IM  uint32_t  CUM_CNT;                      /*!< (@ 0x00000000) Cumulative count                                           */
  __IM  uint32_t  DUTY_CNT;                     /*!< (@ 0x00000004) Duty cycle count                                           */
  __IOM uint32_t  DUTY_PER;                     /*!< (@ 0x00000008) Duty cycle period                                          */
  __IOM uint32_t  CTR_STS;                      /*!< (@ 0x0000000C) Control and status                                         */
  __IM  uint32_t  ASSERT_CNT;                   /*!< (@ 0x00000010) 16-bit assertion counter (RO)                              */
  __IOM uint32_t  ASSERT_CNT_LIM;               /*!< (@ 0x00000014) 16-bit assertion counter limit                             */
} MEC_PHOT_Type;                                /*!< Size = 24 (0x18)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  CTR_STS  ======================================================== */
#define MEC_PHOT_CTR_STS_ENABLE_Pos       (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_PHOT_CTR_STS_ENABLE_Msk       (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_PHOT_CTR_STS_PIN_STATE_Pos    (1UL)                     /*!< PIN_STATE (Bit 1)                                     */
#define MEC_PHOT_CTR_STS_PIN_STATE_Msk    (0x2UL)                   /*!< PIN_STATE (Bitfield-Mask: 0x01)                       */
#define MEC_PHOT_CTR_STS_ASSERT_IEN_Pos   (2UL)                     /*!< ASSERT_IEN (Bit 2)                                    */
#define MEC_PHOT_CTR_STS_ASSERT_IEN_Msk   (0x4UL)                   /*!< ASSERT_IEN (Bitfield-Mask: 0x01)                      */
#define MEC_PHOT_CTR_STS_PERIOD_IEN_Pos   (3UL)                     /*!< PERIOD_IEN (Bit 3)                                    */
#define MEC_PHOT_CTR_STS_PERIOD_IEN_Msk   (0x8UL)                   /*!< PERIOD_IEN (Bitfield-Mask: 0x01)                      */
#define MEC_PHOT_CTR_STS_RESET_Pos        (4UL)                     /*!< RESET (Bit 4)                                         */
#define MEC_PHOT_CTR_STS_RESET_Msk        (0x10UL)                  /*!< RESET (Bitfield-Mask: 0x01)                           */
#define MEC_PHOT_CTR_STS_FILT_EN_Pos      (5UL)                     /*!< FILT_EN (Bit 5)                                       */
#define MEC_PHOT_CTR_STS_FILT_EN_Msk      (0x20UL)                  /*!< FILT_EN (Bitfield-Mask: 0x01)                         */
#define MEC_PHOT_CTR_STS_ASSERT_STS_Pos   (10UL)                    /*!< ASSERT_STS (Bit 10)                                   */
#define MEC_PHOT_CTR_STS_ASSERT_STS_Msk   (0x400UL)                 /*!< ASSERT_STS (Bitfield-Mask: 0x01)                      */
#define MEC_PHOT_CTR_STS_PERIOD_STS_Pos   (11UL)                    /*!< PERIOD_STS (Bit 11)                                   */
#define MEC_PHOT_CTR_STS_PERIOD_STS_Msk   (0x800UL)                 /*!< PERIOD_STS (Bitfield-Mask: 0x01)                      */

/** @} */ /* End of group PosMask_peripherals */

#endif /* _MEC5_PROCHOT_V1_H */
