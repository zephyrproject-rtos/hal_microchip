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
  * @brief Basic Timer: Instances 0-3 16-bit, 4-5 32-bit (BTMR)
  */

typedef struct btmr_regs {                      /*!< (@ 0x40000C00) BTMR Structure                                            */
  __IOM uint32_t  COUNT;                        /*!< (@ 0x00000000) Basic timer counter register                               */
  __IOM uint32_t  PRELOAD;                      /*!< (@ 0x00000004) 16-bit Basic timer preload value                           */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000008) Basic timer status                                         */
  __IOM uint32_t  IEN;                          /*!< (@ 0x0000000C) Basic timer interrupt enable                               */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000010) Basic timer control                                        */
} BTMR_Type;                                    /*!< Size = 20 (0x14)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* ========================================================  STATUS  ========================================================= */
#define BTMR_STATUS_EVENT_Pos             (0UL)                     /*!< EVENT (Bit 0)                                         */
#define BTMR_STATUS_EVENT_Msk             (0x1UL)                   /*!< EVENT (Bitfield-Mask: 0x01)                           */
/* ==========================================================  IEN  ========================================================== */
#define BTMR_IEN_EVENT_Pos                (0UL)                     /*!< EVENT (Bit 0)                                         */
#define BTMR_IEN_EVENT_Msk                (0x1UL)                   /*!< EVENT (Bitfield-Mask: 0x01)                           */
/* =========================================================  CTRL  ========================================================== */
#define BTMR_CTRL_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define BTMR_CTRL_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define BTMR_CTRL_CNT_DIR_Pos             (2UL)                     /*!< CNT_DIR (Bit 2)                                       */
#define BTMR_CTRL_CNT_DIR_Msk             (0x4UL)                   /*!< CNT_DIR (Bitfield-Mask: 0x01)                         */
#define BTMR_CTRL_RESTART_Pos             (3UL)                     /*!< RESTART (Bit 3)                                       */
#define BTMR_CTRL_RESTART_Msk             (0x8UL)                   /*!< RESTART (Bitfield-Mask: 0x01)                         */
#define BTMR_CTRL_RESET_Pos               (4UL)                     /*!< RESET (Bit 4)                                         */
#define BTMR_CTRL_RESET_Msk               (0x10UL)                  /*!< RESET (Bitfield-Mask: 0x01)                           */
#define BTMR_CTRL_START_Pos               (5UL)                     /*!< START (Bit 5)                                         */
#define BTMR_CTRL_START_Msk               (0x20UL)                  /*!< START (Bitfield-Mask: 0x01)                           */
#define BTMR_CTRL_RELOAD_Pos              (6UL)                     /*!< RELOAD (Bit 6)                                        */
#define BTMR_CTRL_RELOAD_Msk              (0x40UL)                  /*!< RELOAD (Bitfield-Mask: 0x01)                          */
#define BTMR_CTRL_HALT_Pos                (7UL)                     /*!< HALT (Bit 7)                                          */
#define BTMR_CTRL_HALT_Msk                (0x80UL)                  /*!< HALT (Bitfield-Mask: 0x01)                            */
#define BTMR_CTRL_PRESCALE_Pos            (16UL)                    /*!< PRESCALE (Bit 16)                                     */
#define BTMR_CTRL_PRESCALE_Msk            (0xffff0000UL)            /*!< PRESCALE (Bitfield-Mask: 0xffff)                      */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  COUNT  ========================================================= */
/* ========================================================  PRELOAD  ======================================================== */
/* ========================================================  STATUS  ========================================================= */
/* ===============================================  BTMR STATUS EVENT [0..0]  =============================================== */
typedef enum {                                  /*!< BTMR_STATUS_EVENT                                                        */
  BTMR_STATUS_EVENT_nACTIVE           = 0,     /*!< nACTIVE : Basic Timer interrupt event not active                          */
  BTMR_STATUS_EVENT_ACTIVE            = 1,     /*!< ACTIVE : Basic Timer interrupt event active                               */
} BTMR_STATUS_EVENT_Enum;

/* ==========================================================  IEN  ========================================================== */
/* ================================================  BTMR IEN EVENT [0..0]  ================================================= */
typedef enum {                                  /*!< BTMR_IEN_EVENT                                                           */
  BTMR_IEN_EVENT_DIS                  = 0,     /*!< DIS : Disable interrupt generation for Basic Timer interrupt
                                                     event                                                                     */
  BTMR_IEN_EVENT_EN                   = 1,     /*!< EN : Disable interrupt generation for Basic Timer interrupt
                                                     event                                                                     */
} BTMR_IEN_EVENT_Enum;

/* =========================================================  CTRL  ========================================================== */
/* ===============================================  BTMR CTRL ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< BTMR_CTRL_ENABLE                                                         */
  BTMR_CTRL_ENABLE_OFF                = 0,     /*!< OFF : Basic Timer peripheral block is off (clocks gated)                  */
  BTMR_CTRL_ENABLE_ON                 = 1,     /*!< ON : Basic Timer peripheral block is on (clocks ungated)                  */
} BTMR_CTRL_ENABLE_Enum;

/* ===============================================  BTMR CTRL CNT_DIR [2..2]  =============================================== */
typedef enum {                                  /*!< BTMR_CTRL_CNT_DIR                                                        */
  BTMR_CTRL_CNT_DIR_DOWN              = 0,     /*!< DOWN : Basic Timer counts down from preload value to 0                    */
  BTMR_CTRL_CNT_DIR_UP                = 1,     /*!< UP : Basic Timer counts up from preload value to maximum                  */
} BTMR_CTRL_CNT_DIR_Enum;

/* ===============================================  BTMR CTRL RESTART [3..3]  =============================================== */
typedef enum {                                  /*!< BTMR_CTRL_RESTART                                                        */
  BTMR_CTRL_RESTART_DIS               = 0,     /*!< DIS : One shot mode. Do not reload counter from preload register          */
  BTMR_CTRL_RESTART_EN                = 1,     /*!< EN : Reload counter from preload register when counter reaches
                                                     limit                                                                     */
} BTMR_CTRL_RESTART_Enum;

/* ================================================  BTMR CTRL RESET [4..4]  ================================================ */
typedef enum {                                  /*!< BTMR_CTRL_RESET                                                          */
  BTMR_CTRL_RESET_DIS                 = 0,     /*!< DIS : No soft-reset                                                       */
  BTMR_CTRL_RESET_EN                  = 1,     /*!< EN : Trigger Basic Timer soft-reset. Bit is self-clearing after
                                                     one AHB clock                                                             */
} BTMR_CTRL_RESET_Enum;

/* ================================================  BTMR CTRL START [5..5]  ================================================ */
typedef enum {                                  /*!< BTMR_CTRL_START                                                          */
  BTMR_CTRL_START_OFF                 = 0,     /*!< OFF : Stop timer current operation                                        */
  BTMR_CTRL_START_ON                  = 1,     /*!< ON : Start configured timer operation                                     */
} BTMR_CTRL_START_Enum;

/* ===============================================  BTMR CTRL RELOAD [6..6]  ================================================ */
typedef enum {                                  /*!< BTMR_CTRL_RELOAD                                                         */
  BTMR_CTRL_RELOAD_NOW                = 1,     /*!< NOW : When written to 1 reload counter from preload register              */
} BTMR_CTRL_RELOAD_Enum;

/* ================================================  BTMR CTRL HALT [7..7]  ================================================= */
typedef enum {                                  /*!< BTMR_CTRL_HALT                                                           */
  BTMR_CTRL_HALT_OFF                  = 0,     /*!< OFF : Unhalt timer count                                                  */
  BTMR_CTRL_HALT_ON                   = 1,     /*!< ON : Halt timer count                                                     */
} BTMR_CTRL_HALT_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BTMR_V1_H */
