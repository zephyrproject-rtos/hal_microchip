/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_TACH_V1_H
#define _MEC5_TACH_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Tachometer (TACH)
  */

typedef struct tach_regs {                      /*!< (@ 0x40006000) TACH Structure                                            */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) Tachometer control                                         */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000004) Tachometer status                                          */
  __IOM uint32_t  LIMIT_HI;                     /*!< (@ 0x00000008) Tachometer high limit                                      */
  __IOM uint32_t  LIMIT_LO;                     /*!< (@ 0x0000000C) Tachometer low limit                                       */
} TACH_Type;                                    /*!< Size = 16 (0x10)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define TACH_CTRL_ENOOL_Pos               (0UL)                     /*!< ENOOL (Bit 0)                                         */
#define TACH_CTRL_ENOOL_Msk               (0x1UL)                   /*!< ENOOL (Bitfield-Mask: 0x01)                           */
#define TACH_CTRL_ENABLE_Pos              (1UL)                     /*!< ENABLE (Bit 1)                                        */
#define TACH_CTRL_ENABLE_Msk              (0x2UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define TACH_CTRL_FILT_IN_Pos             (8UL)                     /*!< FILT_IN (Bit 8)                                       */
#define TACH_CTRL_FILT_IN_Msk             (0x100UL)                 /*!< FILT_IN (Bitfield-Mask: 0x01)                         */
#define TACH_CTRL_RDMODE_Pos              (10UL)                    /*!< RDMODE (Bit 10)                                       */
#define TACH_CTRL_RDMODE_Msk              (0x400UL)                 /*!< RDMODE (Bitfield-Mask: 0x01)                          */
#define TACH_CTRL_EDGES_Pos               (11UL)                    /*!< EDGES (Bit 11)                                        */
#define TACH_CTRL_EDGES_Msk               (0x1800UL)                /*!< EDGES (Bitfield-Mask: 0x03)                           */
#define TACH_CTRL_CNTRDY_IEN_Pos          (14UL)                    /*!< CNTRDY_IEN (Bit 14)                                   */
#define TACH_CTRL_CNTRDY_IEN_Msk          (0x4000UL)                /*!< CNTRDY_IEN (Bitfield-Mask: 0x01)                      */
#define TACH_CTRL_INTOG_IEN_Pos           (15UL)                    /*!< INTOG_IEN (Bit 15)                                    */
#define TACH_CTRL_INTOG_IEN_Msk           (0x8000UL)                /*!< INTOG_IEN (Bitfield-Mask: 0x01)                       */
#define TACH_CTRL_COUNT_Pos               (16UL)                    /*!< COUNT (Bit 16)                                        */
#define TACH_CTRL_COUNT_Msk               (0xffff0000UL)            /*!< COUNT (Bitfield-Mask: 0xffff)                         */
/* ========================================================  STATUS  ========================================================= */
#define TACH_STATUS_OOL_Pos               (0UL)                     /*!< OOL (Bit 0)                                           */
#define TACH_STATUS_OOL_Msk               (0x1UL)                   /*!< OOL (Bitfield-Mask: 0x01)                             */
#define TACH_STATUS_PIN_Pos               (1UL)                     /*!< PIN (Bit 1)                                           */
#define TACH_STATUS_PIN_Msk               (0x2UL)                   /*!< PIN (Bitfield-Mask: 0x01)                             */
#define TACH_STATUS_TOGL_Pos              (2UL)                     /*!< TOGL (Bit 2)                                          */
#define TACH_STATUS_TOGL_Msk              (0x4UL)                   /*!< TOGL (Bitfield-Mask: 0x01)                            */
#define TACH_STATUS_CNTRDY_Pos            (3UL)                     /*!< CNTRDY (Bit 3)                                        */
#define TACH_STATUS_CNTRDY_Msk            (0x8UL)                   /*!< CNTRDY (Bitfield-Mask: 0x01)                          */
/* =======================================================  LIMIT_HI  ======================================================== */
/* =======================================================  LIMIT_LO  ======================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ================================================  TACH CTRL ENOOL [0..0]  ================================================ */
typedef enum {                                  /*!< TACH_CTRL_ENOOL                                                          */
  TACH_CTRL_ENOOL_ON                  = 1,     /*!< ON : Enable                                                               */
} TACH_CTRL_ENOOL_Enum;

/* ===============================================  TACH CTRL ENABLE [1..1]  ================================================ */
typedef enum {                                  /*!< TACH_CTRL_ENABLE                                                         */
  TACH_CTRL_ENABLE_ON                 = 1,     /*!< ON : Enable                                                               */
} TACH_CTRL_ENABLE_Enum;

/* ===============================================  TACH CTRL FILT_IN [8..8]  =============================================== */
typedef enum {                                  /*!< TACH_CTRL_FILT_IN                                                        */
  TACH_CTRL_FILT_IN_EN                = 1,     /*!< EN : Enable                                                               */
} TACH_CTRL_FILT_IN_Enum;

/* ==============================================  TACH CTRL RDMODE [10..10]  =============================================== */
typedef enum {                                  /*!< TACH_CTRL_RDMODE                                                         */
  TACH_CTRL_RDMODE_REPIN              = 0,     /*!< REPIN : Increment on rising edge of TACH input pin                        */
  TACH_CTRL_RDMODE_RE100K             = 1,     /*!< RE100K : Increment on rising edge of 100K clock                           */
} TACH_CTRL_RDMODE_Enum;

/* ===============================================  TACH CTRL EDGES [11..12]  =============================================== */
typedef enum {                                  /*!< TACH_CTRL_EDGES                                                          */
  TACH_CTRL_EDGES_E2                  = 0,     /*!< E2 : Increment every two edges (1/2 period)                               */
  TACH_CTRL_EDGES_E3                  = 1,     /*!< E3 : Increment every 3 edges (1 period)                                   */
  TACH_CTRL_EDGES_E5                  = 2,     /*!< E5 : Increment every 5 edges (2 periods)                                  */
  TACH_CTRL_EDGES_E9                  = 3,     /*!< E9 : Increment every 9 edges (4 periods)                                  */
} TACH_CTRL_EDGES_Enum;

/* ============================================  TACH CTRL CNTRDY_IEN [14..14]  ============================================= */
typedef enum {                                  /*!< TACH_CTRL_CNTRDY_IEN                                                     */
  TACH_CTRL_CNTRDY_IEN_ON             = 1,     /*!< ON : Enable                                                               */
} TACH_CTRL_CNTRDY_IEN_Enum;

/* =============================================  TACH CTRL INTOG_IEN [15..15]  ============================================= */
typedef enum {                                  /*!< TACH_CTRL_INTOG_IEN                                                      */
  TACH_CTRL_INTOG_IEN_ON              = 1,     /*!< ON : Enable                                                               */
} TACH_CTRL_INTOG_IEN_Enum;

/* ========================================================  STATUS  ========================================================= */
/* ================================================  TACH STATUS OOL [0..0]  ================================================ */
typedef enum {                                  /*!< TACH_STATUS_OOL                                                          */
  TACH_STATUS_OOL_ACTIVE              = 1,     /*!< ACTIVE : Status active                                                    */
} TACH_STATUS_OOL_Enum;

/* ================================================  TACH STATUS PIN [1..1]  ================================================ */
typedef enum {                                  /*!< TACH_STATUS_PIN                                                          */
  TACH_STATUS_PIN_ACTIVE              = 1,     /*!< ACTIVE : Status active                                                    */
} TACH_STATUS_PIN_Enum;

/* ===============================================  TACH STATUS TOGL [2..2]  ================================================ */
typedef enum {                                  /*!< TACH_STATUS_TOGL                                                         */
  TACH_STATUS_TOGL_ACTIVE             = 1,     /*!< ACTIVE : Status active                                                    */
} TACH_STATUS_TOGL_Enum;

/* ==============================================  TACH STATUS CNTRDY [3..3]  =============================================== */
typedef enum {                                  /*!< TACH_STATUS_CNTRDY                                                       */
  TACH_STATUS_CNTRDY_ACTIVE           = 1,     /*!< ACTIVE : Status active                                                    */
} TACH_STATUS_CNTRDY_Enum;

/* =======================================================  LIMIT_HI  ======================================================== */
/* =======================================================  LIMIT_LO  ======================================================== */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_TACH_V1_H */
