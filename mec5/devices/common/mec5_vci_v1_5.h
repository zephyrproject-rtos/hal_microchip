/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_VCI_V1_H
#define _MEC5_VCI_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief VBAT Control interface (MEC_VCI)
  */

typedef struct mec_vci_regs {                   /*!< (@ 0x4000AE00) MEC_VCI Structure                                          */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000000) VCI config                                                 */
  __IOM uint32_t  LATCH_EN;                     /*!< (@ 0x00000004) Preserves state of signal events: VCI_IN, Week
                                                                    alarm, and RTC alarm                                       */
  __IOM uint32_t  LATCH_RESET;                  /*!< (@ 0x00000008) Clear latched values of VCI_IN, Week Alarm, or
                                                                    RTC Alarm                                                  */
  __IOM uint32_t  VCI_INPUT_EN;                 /*!< (@ 0x0000000C) Selects VCI_IN pins used in VCI_OUT generation
                                                                    logic                                                      */
  __IOM uint32_t  HOLD_OFF_CNT;                 /*!< (@ 0x00000010) Hold off asserting VCI_OUT. Units of 125 ms                */
  __IOM uint32_t  VCI_POLARITY;                 /*!< (@ 0x00000014) Select active polarity of VCI_IN pins                      */
  __IOM uint32_t  VCI_IN_POSED_STS;             /*!< (@ 0x00000018) Positive edge detect status for VCI_IN pins                */
  __IOM uint32_t  VCI_IN_NEGED_STS;             /*!< (@ 0x0000001C) Positive edge detect status for VCI_IN pins                */
  __IOM uint32_t  VCI_IN_VBAT_BUFEN;            /*!< (@ 0x00000020) VCI_IN VBAT powered buffer enables. No effect
                                                                    when VTR_CORE is on                                        */
  __IOM uint32_t  VCI_LID_OPEN_DET_EN;          /*!< (@ 0x00000024) VCI_IN2 open lid detection feature enable                  */
} MEC_VCI_Type;                                 /*!< Size = 40 (0x28)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN0_N_Pos (0UL)                  /*!< LATCHED_VCI_IN0_N (Bit 0)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN0_N_Msk (0x1UL)                /*!< LATCHED_VCI_IN0_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN1_N_Pos (1UL)                  /*!< LATCHED_VCI_IN1_N (Bit 1)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN1_N_Msk (0x2UL)                /*!< LATCHED_VCI_IN1_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN2_N_Pos (2UL)                  /*!< LATCHED_VCI_IN2_N (Bit 2)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN2_N_Msk (0x4UL)                /*!< LATCHED_VCI_IN2_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN3_N_Pos (3UL)                  /*!< LATCHED_VCI_IN3_N (Bit 3)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN3_N_Msk (0x8UL)                /*!< LATCHED_VCI_IN3_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN4_N_Pos (4UL)                  /*!< LATCHED_VCI_IN4_N (Bit 4)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN4_N_Msk (0x10UL)               /*!< LATCHED_VCI_IN4_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN5_N_Pos (5UL)                  /*!< LATCHED_VCI_IN5_N (Bit 5)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN5_N_Msk (0x20UL)               /*!< LATCHED_VCI_IN5_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN6_N_Pos (6UL)                  /*!< LATCHED_VCI_IN6_N (Bit 6)                             */
#define MEC_VCI_CONFIG_LATCHED_VCI_IN6_N_Msk (0x40UL)               /*!< LATCHED_VCI_IN6_N (Bitfield-Mask: 0x01)               */
#define MEC_VCI_CONFIG_VCI_OVRD_IN_Pos    (8UL)                     /*!< VCI_OVRD_IN (Bit 8)                                   */
#define MEC_VCI_CONFIG_VCI_OVRD_IN_Msk    (0x100UL)                 /*!< VCI_OVRD_IN (Bitfield-Mask: 0x01)                     */
#define MEC_VCI_CONFIG_VCI_OUT_Pos        (9UL)                     /*!< VCI_OUT (Bit 9)                                       */
#define MEC_VCI_CONFIG_VCI_OUT_Msk        (0x200UL)                 /*!< VCI_OUT (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_CONFIG_FW_VCI_OUT_Pos     (10UL)                    /*!< FW_VCI_OUT (Bit 10)                                   */
#define MEC_VCI_CONFIG_FW_VCI_OUT_Msk     (0x400UL)                 /*!< FW_VCI_OUT (Bitfield-Mask: 0x01)                      */
#define MEC_VCI_CONFIG_VCI_OUT_SRC_Pos    (11UL)                    /*!< VCI_OUT_SRC (Bit 11)                                  */
#define MEC_VCI_CONFIG_VCI_OUT_SRC_Msk    (0x800UL)                 /*!< VCI_OUT_SRC (Bitfield-Mask: 0x01)                     */
#define MEC_VCI_CONFIG_VCI_FILT_Pos       (12UL)                    /*!< VCI_FILT (Bit 12)                                     */
#define MEC_VCI_CONFIG_VCI_FILT_Msk       (0x1000UL)                /*!< VCI_FILT (Bitfield-Mask: 0x01)                        */
#define MEC_VCI_CONFIG_WEEK_ALARM_STS_Pos (16UL)                    /*!< WEEK_ALARM_STS (Bit 16)                               */
#define MEC_VCI_CONFIG_WEEK_ALARM_STS_Msk (0x10000UL)               /*!< WEEK_ALARM_STS (Bitfield-Mask: 0x01)                  */
#define MEC_VCI_CONFIG_RTC_ALARM_STS_Pos  (17UL)                    /*!< RTC_ALARM_STS (Bit 17)                                */
#define MEC_VCI_CONFIG_RTC_ALARM_STS_Msk  (0x20000UL)               /*!< RTC_ALARM_STS (Bitfield-Mask: 0x01)                   */
#define MEC_VCI_CONFIG_SYSPWR_SEL_Pos     (18UL)                    /*!< SYSPWR_SEL (Bit 18)                                   */
#define MEC_VCI_CONFIG_SYSPWR_SEL_Msk     (0x40000UL)               /*!< SYSPWR_SEL (Bitfield-Mask: 0x01)                      */
/* =======================================================  LATCH_EN  ======================================================== */
#define MEC_VCI_LATCH_EN_VCI_IN0_Pos      (0UL)                     /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN0_Msk      (0x1UL)                   /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN1_Pos      (1UL)                     /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN1_Msk      (0x2UL)                   /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN2_Pos      (2UL)                     /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN2_Msk      (0x4UL)                   /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN3_Pos      (3UL)                     /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN3_Msk      (0x8UL)                   /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN4_Pos      (4UL)                     /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN4_Msk      (0x10UL)                  /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN5_Pos      (5UL)                     /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN5_Msk      (0x20UL)                  /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_VCI_IN6_Pos      (6UL)                     /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_LATCH_EN_VCI_IN6_Msk      (0x40UL)                  /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_EN_WEEK_ALARM_Pos   (16UL)                    /*!< WEEK_ALARM (Bit 16)                                   */
#define MEC_VCI_LATCH_EN_WEEK_ALARM_Msk   (0x10000UL)               /*!< WEEK_ALARM (Bitfield-Mask: 0x01)                      */
#define MEC_VCI_LATCH_EN_RTC_ALARM_Pos    (17UL)                    /*!< RTC_ALARM (Bit 17)                                    */
#define MEC_VCI_LATCH_EN_RTC_ALARM_Msk    (0x20000UL)               /*!< RTC_ALARM (Bitfield-Mask: 0x01)                       */
/* ======================================================  LATCH_RESET  ====================================================== */
#define MEC_VCI_LATCH_RESET_VCI_IN0_Pos   (0UL)                     /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN0_Msk   (0x1UL)                   /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN1_Pos   (1UL)                     /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN1_Msk   (0x2UL)                   /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN2_Pos   (2UL)                     /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN2_Msk   (0x4UL)                   /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN3_Pos   (3UL)                     /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN3_Msk   (0x8UL)                   /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN4_Pos   (4UL)                     /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN4_Msk   (0x10UL)                  /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN5_Pos   (5UL)                     /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN5_Msk   (0x20UL)                  /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_VCI_IN6_Pos   (6UL)                     /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_LATCH_RESET_VCI_IN6_Msk   (0x40UL)                  /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_LATCH_RESET_WEEK_ALARM_Pos (16UL)                   /*!< WEEK_ALARM (Bit 16)                                   */
#define MEC_VCI_LATCH_RESET_WEEK_ALARM_Msk (0x10000UL)              /*!< WEEK_ALARM (Bitfield-Mask: 0x01)                      */
#define MEC_VCI_LATCH_RESET_RTC_ALARM_Pos (17UL)                    /*!< RTC_ALARM (Bit 17)                                    */
#define MEC_VCI_LATCH_RESET_RTC_ALARM_Msk (0x20000UL)               /*!< RTC_ALARM (Bitfield-Mask: 0x01)                       */
/* =====================================================  VCI_INPUT_EN  ====================================================== */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN0_Pos  (0UL)                     /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN0_Msk  (0x1UL)                   /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN1_Pos  (1UL)                     /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN1_Msk  (0x2UL)                   /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN2_Pos  (2UL)                     /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN2_Msk  (0x4UL)                   /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN3_Pos  (3UL)                     /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN3_Msk  (0x8UL)                   /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN4_Pos  (4UL)                     /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN4_Msk  (0x10UL)                  /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN5_Pos  (5UL)                     /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN5_Msk  (0x20UL)                  /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN6_Pos  (6UL)                     /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_VCI_INPUT_EN_VCI_IN6_Msk  (0x40UL)                  /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
/* =====================================================  HOLD_OFF_CNT  ====================================================== */
/* =====================================================  VCI_POLARITY  ====================================================== */
#define MEC_VCI_VCI_POLARITY_VCI_IN0_ACTIVE_HI_Pos (0UL)            /*!< VCI_IN0_ACTIVE_HI (Bit 0)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN0_ACTIVE_HI_Msk (0x1UL)          /*!< VCI_IN0_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN1_ACTIVE_HI_Pos (1UL)            /*!< VCI_IN1_ACTIVE_HI (Bit 1)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN1_ACTIVE_HI_Msk (0x2UL)          /*!< VCI_IN1_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN2_ACTIVE_HI_Pos (2UL)            /*!< VCI_IN2_ACTIVE_HI (Bit 2)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN2_ACTIVE_HI_Msk (0x4UL)          /*!< VCI_IN2_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN3_ACTIVE_HI_Pos (3UL)            /*!< VCI_IN3_ACTIVE_HI (Bit 3)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN3_ACTIVE_HI_Msk (0x8UL)          /*!< VCI_IN3_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN4_ACTIVE_HI_Pos (4UL)            /*!< VCI_IN4_ACTIVE_HI (Bit 4)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN4_ACTIVE_HI_Msk (0x10UL)         /*!< VCI_IN4_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN5_ACTIVE_HI_Pos (5UL)            /*!< VCI_IN5_ACTIVE_HI (Bit 5)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN5_ACTIVE_HI_Msk (0x20UL)         /*!< VCI_IN5_ACTIVE_HI (Bitfield-Mask: 0x01)               */
#define MEC_VCI_VCI_POLARITY_VCI_IN6_ACTIVE_HI_Pos (6UL)            /*!< VCI_IN6_ACTIVE_HI (Bit 6)                             */
#define MEC_VCI_VCI_POLARITY_VCI_IN6_ACTIVE_HI_Msk (0x40UL)         /*!< VCI_IN6_ACTIVE_HI (Bitfield-Mask: 0x01)               */
/* ===================================================  VCI_IN_POSED_STS  ==================================================== */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN0_Pos (0UL)                  /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN0_Msk (0x1UL)                /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN1_Pos (1UL)                  /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN1_Msk (0x2UL)                /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN2_Pos (2UL)                  /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN2_Msk (0x4UL)                /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN3_Pos (3UL)                  /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN3_Msk (0x8UL)                /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN4_Pos (4UL)                  /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN4_Msk (0x10UL)               /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN5_Pos (5UL)                  /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN5_Msk (0x20UL)               /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN6_Pos (6UL)                  /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_VCI_IN_POSED_STS_VCI_IN6_Msk (0x40UL)               /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
/* ===================================================  VCI_IN_NEGED_STS  ==================================================== */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN0_Pos (0UL)                  /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN0_Msk (0x1UL)                /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN1_Pos (1UL)                  /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN1_Msk (0x2UL)                /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN2_Pos (2UL)                  /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN2_Msk (0x4UL)                /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN3_Pos (3UL)                  /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN3_Msk (0x8UL)                /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN4_Pos (4UL)                  /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN4_Msk (0x10UL)               /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN5_Pos (5UL)                  /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN5_Msk (0x20UL)               /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN6_Pos (6UL)                  /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_VCI_IN_NEGED_STS_VCI_IN6_Msk (0x40UL)               /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
/* ===================================================  VCI_IN_VBAT_BUFEN  =================================================== */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN0_Pos (0UL)                 /*!< VCI_IN0 (Bit 0)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN0_Msk (0x1UL)               /*!< VCI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN1_Pos (1UL)                 /*!< VCI_IN1 (Bit 1)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN1_Msk (0x2UL)               /*!< VCI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN2_Pos (2UL)                 /*!< VCI_IN2 (Bit 2)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN2_Msk (0x4UL)               /*!< VCI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN3_Pos (3UL)                 /*!< VCI_IN3 (Bit 3)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN3_Msk (0x8UL)               /*!< VCI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN4_Pos (4UL)                 /*!< VCI_IN4 (Bit 4)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN4_Msk (0x10UL)              /*!< VCI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN5_Pos (5UL)                 /*!< VCI_IN5 (Bit 5)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN5_Msk (0x20UL)              /*!< VCI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN6_Pos (6UL)                 /*!< VCI_IN6 (Bit 6)                                       */
#define MEC_VCI_VCI_IN_VBAT_BUFEN_VCI_IN6_Msk (0x40UL)              /*!< VCI_IN6 (Bitfield-Mask: 0x01)                         */
/* ==================================================  VCI_LID_OPEN_DET_EN  ================================================== */
#define MEC_VCI_VCI_LID_OPEN_DET_EN_VCI_LID_EN_Pos (0UL)            /*!< VCI_LID_EN (Bit 0)                                    */
#define MEC_VCI_VCI_LID_OPEN_DET_EN_VCI_LID_EN_Msk (0x1UL)          /*!< VCI_LID_EN (Bitfield-Mask: 0x01)                      */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
/* ===========================================  MEC_VCI CONFIG VCI_OVRD_IN [8..8]  =========================================== */
typedef enum {                                  /*!< MEC_VCI_CONFIG_VCI_OVRD_IN                                                */
  MEC_VCI_CONFIG_VCI_OVRD_IN_HI        = 1,     /*!< HI : High                                                                 */
} MEC_VCI_CONFIG_VCI_OVRD_IN_Enum;

/* =============================================  MEC_VCI CONFIG VCI_OUT [9..9]  ============================================= */
typedef enum {                                  /*!< MEC_VCI_CONFIG_VCI_OUT                                                    */
  MEC_VCI_CONFIG_VCI_OUT_HI            = 1,     /*!< HI : High                                                                 */
} MEC_VCI_CONFIG_VCI_OUT_Enum;

/* ==========================================  MEC_VCI CONFIG FW_VCI_OUT [10..10]  =========================================== */
typedef enum {                                  /*!< MEC_VCI_CONFIG_FW_VCI_OUT                                                 */
  MEC_VCI_CONFIG_FW_VCI_OUT_HI         = 1,     /*!< HI : High                                                                 */
} MEC_VCI_CONFIG_FW_VCI_OUT_Enum;

/* ==========================================  MEC_VCI CONFIG VCI_OUT_SRC [11..11]  ========================================== */
typedef enum {                                  /*!< MEC_VCI_CONFIG_VCI_OUT_SRC                                                */
  MEC_VCI_CONFIG_VCI_OUT_SRC_EXT       = 0,     /*!< EXT : External inputs                                                     */
  MEC_VCI_CONFIG_VCI_OUT_SRC_FW        = 1,     /*!< FW : Software controlled                                                  */
} MEC_VCI_CONFIG_VCI_OUT_SRC_Enum;

/* ===========================================  MEC_VCI CONFIG VCI_FILT [12..12]  ============================================ */
typedef enum {                                  /*!< MEC_VCI_CONFIG_VCI_FILT                                                   */
  MEC_VCI_CONFIG_VCI_FILT_DIS          = 1,     /*!< DIS : Disable                                                             */
} MEC_VCI_CONFIG_VCI_FILT_Enum;

/* ========================================  MEC_VCI CONFIG WEEK_ALARM_STS [16..16]  ========================================= */
typedef enum {                                  /*!< MEC_VCI_CONFIG_WEEK_ALARM_STS                                             */
  MEC_VCI_CONFIG_WEEK_ALARM_STS_ACTIVE = 1,     /*!< ACTIVE : Active                                                           */
} MEC_VCI_CONFIG_WEEK_ALARM_STS_Enum;

/* =========================================  MEC_VCI CONFIG RTC_ALARM_STS [17..17]  ========================================= */
typedef enum {                                  /*!< MEC_VCI_CONFIG_RTC_ALARM_STS                                              */
  MEC_VCI_CONFIG_RTC_ALARM_STS_ACTIVE  = 1,     /*!< ACTIVE : Active                                                           */
} MEC_VCI_CONFIG_RTC_ALARM_STS_Enum;

/* ==========================================  MEC_VCI CONFIG SYSPWR_SEL [18..18]  =========================================== */
typedef enum {                                  /*!< MEC_VCI_CONFIG_SYSPWR_SEL                                                 */
  MEC_VCI_CONFIG_SYSPWR_SEL_VCI_IN3    = 0,     /*!< VCI_IN3 : Select VCI_IN                                                   */
  MEC_VCI_CONFIG_SYSPWR_SEL_SYSPWR     = 1,     /*!< SYSPWR : Select SYSPWR                                                    */
} MEC_VCI_CONFIG_SYSPWR_SEL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_VCI_V1_H */
