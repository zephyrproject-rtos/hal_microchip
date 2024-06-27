/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_BTMR_V1_H
#define _MEC5_BTMR_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Basic Timer: Instances 0-3 16-bit, 4-5 32-bit (MEC_BTMR0)
  */

typedef struct mec_btmr_regs {                  /*!< (@ 0x40000C00) MEC_BTMR0 Structure                                        */
  __IOM uint32_t  COUNT;                        /*!< (@ 0x00000000) Basic timer counter register                               */
  __IOM uint32_t  PRELOAD;                      /*!< (@ 0x00000004) 16-bit Basic timer preload value                           */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000008) Basic timer status                                         */
  __IOM uint32_t  IEN;                          /*!< (@ 0x0000000C) Basic timer interrupt enable                               */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000010) Basic timer control                                        */
} MEC_BTMR_Type;                                /*!< Size = 20 (0x14)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* ========================================================  STATUS  ========================================================= */
#define MEC_BTMR_STATUS_EVENT_Pos         (0UL)                     /*!< EVENT (Bit 0)                                         */
#define MEC_BTMR_STATUS_EVENT_Msk         (0x1UL)                   /*!< EVENT (Bitfield-Mask: 0x01)                           */
/* ==========================================================  IEN  ========================================================== */
#define MEC_BTMR_IEN_EVENT_Pos            (0UL)                     /*!< EVENT (Bit 0)                                         */
#define MEC_BTMR_IEN_EVENT_Msk            (0x1UL)                   /*!< EVENT (Bitfield-Mask: 0x01)                           */
/* =========================================================  CTRL  ========================================================== */
#define MEC_BTMR_CTRL_ENABLE_Pos          (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_BTMR_CTRL_ENABLE_Msk          (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_BTMR_CTRL_CNT_DIR_Pos         (2UL)                     /*!< CNT_DIR (Bit 2)                                       */
#define MEC_BTMR_CTRL_CNT_DIR_Msk         (0x4UL)                   /*!< CNT_DIR (Bitfield-Mask: 0x01)                         */
#define MEC_BTMR_CTRL_RESTART_Pos         (3UL)                     /*!< RESTART (Bit 3)                                       */
#define MEC_BTMR_CTRL_RESTART_Msk         (0x8UL)                   /*!< RESTART (Bitfield-Mask: 0x01)                         */
#define MEC_BTMR_CTRL_RESET_Pos           (4UL)                     /*!< RESET (Bit 4)                                         */
#define MEC_BTMR_CTRL_RESET_Msk           (0x10UL)                  /*!< RESET (Bitfield-Mask: 0x01)                           */
#define MEC_BTMR_CTRL_START_Pos           (5UL)                     /*!< START (Bit 5)                                         */
#define MEC_BTMR_CTRL_START_Msk           (0x20UL)                  /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_BTMR_CTRL_RELOAD_Pos          (6UL)                     /*!< RELOAD (Bit 6)                                        */
#define MEC_BTMR_CTRL_RELOAD_Msk          (0x40UL)                  /*!< RELOAD (Bitfield-Mask: 0x01)                          */
#define MEC_BTMR_CTRL_HALT_Pos            (7UL)                     /*!< HALT (Bit 7)                                          */
#define MEC_BTMR_CTRL_HALT_Msk            (0x80UL)                  /*!< HALT (Bitfield-Mask: 0x01)                            */
#define MEC_BTMR_CTRL_PRESCALE_Pos        (16UL)                    /*!< PRESCALE (Bit 16)                                     */
#define MEC_BTMR_CTRL_PRESCALE_Msk        (0xffff0000UL)            /*!< PRESCALE (Bitfield-Mask: 0xffff)                      */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* ========================================================  STATUS  ========================================================= */
/* =============================================  MEC_BTMR STATUS EVENT [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_BTMR_STATUS_EVENT                                                    */
  MEC_BTMR_STATUS_EVENT_nACTIVE       = 0,     /*!< nACTIVE : Basic Timer interrupt event not active                          */
  MEC_BTMR_STATUS_EVENT_ACTIVE        = 1,     /*!< ACTIVE : Basic Timer interrupt event active                               */
} MEC_BTMR_STATUS_EVENT_Enum;

/* ==========================================================  IEN  ========================================================== */
/* ==============================================  MEC_BTMR IEN EVENT [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_BTMR_IEN_EVENT                                                       */
  MEC_BTMR_IEN_EVENT_DIS              = 0,     /*!< DIS : Disable interrupt generation for Basic Timer interrupt
                                                     event                                                                     */
  MEC_BTMR_IEN_EVENT_EN               = 1,     /*!< EN : Disable interrupt generation for Basic Timer interrupt
                                                     event                                                                     */
} MEC_BTMR_IEN_EVENT_Enum;

/* =========================================================  CTRL  ========================================================== */
/* =============================================  MEC_BTMR CTRL ENABLE [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_BTMR_CTRL_ENABLE                                                     */
  MEC_BTMR_CTRL_ENABLE_OFF            = 0,     /*!< OFF : Basic Timer peripheral block is off (clocks gated)                  */
  MEC_BTMR_CTRL_ENABLE_ON             = 1,     /*!< ON : Basic Timer peripheral block is on (clocks ungated)                  */
} MEC_BTMR_CTRL_ENABLE_Enum;

/* =============================================  MEC_BTMR CTRL CNT_DIR [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_BTMR_CTRL_CNT_DIR                                                    */
  MEC_BTMR_CTRL_CNT_DIR_DOWN          = 0,     /*!< DOWN : Basic Timer counts down from preload value to 0                    */
  MEC_BTMR_CTRL_CNT_DIR_UP            = 1,     /*!< UP : Basic Timer counts up from preload value to maximum                  */
} MEC_BTMR_CTRL_CNT_DIR_Enum;

/* =============================================  MEC_BTMR CTRL RESTART [3..3]  ============================================= */
typedef enum {                                  /*!< MEC_BTMR_CTRL_RESTART                                                    */
  MEC_BTMR_CTRL_RESTART_DIS           = 0,     /*!< DIS : One shot mode. Do not reload counter from preload register          */
  MEC_BTMR_CTRL_RESTART_EN            = 1,     /*!< EN : Reload counter from preload register when counter reaches
                                                     limit                                                                     */
} MEC_BTMR_CTRL_RESTART_Enum;

/* ==============================================  MEC_BTMR CTRL RESET [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_BTMR_CTRL_RESET                                                      */
  MEC_BTMR_CTRL_RESET_DIS             = 0,     /*!< DIS : No soft-reset                                                       */
  MEC_BTMR_CTRL_RESET_EN              = 1,     /*!< EN : Trigger Basic Timer soft-reset. Bit is self-clearing after
                                                     one AHB clock                                                             */
} MEC_BTMR_CTRL_RESET_Enum;

/* ==============================================  MEC_BTMR CTRL START [5..5]  ============================================== */
typedef enum {                                  /*!< MEC_BTMR_CTRL_START                                                      */
  MEC_BTMR_CTRL_START_OFF             = 0,     /*!< OFF : Stop timer current operation                                        */
  MEC_BTMR_CTRL_START_ON              = 1,     /*!< ON : Start configured timer operation                                     */
} MEC_BTMR_CTRL_START_Enum;

/* =============================================  MEC_BTMR CTRL RELOAD [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_BTMR_CTRL_RELOAD                                                     */
  MEC_BTMR_CTRL_RELOAD_NOW            = 1,     /*!< NOW : When written to 1 reload counter from preload register              */
} MEC_BTMR_CTRL_RELOAD_Enum;

/* ==============================================  MEC_BTMR CTRL HALT [7..7]  =============================================== */
typedef enum {                                  /*!< MEC_BTMR_CTRL_HALT                                                       */
  MEC_BTMR_CTRL_HALT_OFF              = 0,     /*!< OFF : Unhalt timer count                                                  */
  MEC_BTMR_CTRL_HALT_ON               = 1,     /*!< ON : Halt timer count                                                     */
} MEC_BTMR_CTRL_HALT_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BTMR_V1_H */
