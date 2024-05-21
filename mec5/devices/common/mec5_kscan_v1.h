/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_KSCAN_V1_H
#define _MEC5_KSCAN_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Keyboard scan matrix (MEC_KSCAN0)
  */

typedef struct mec_kscan_regs {                 /*!< (@ 0x40009C00) MEC_KSCAN0 Structure                                       */
  __IM  uint8_t   RESERVED[4];
  __IOM uint8_t   KSO_SEL;                      /*!< (@ 0x00000004) Key scan output select                                     */
  __IM  uint8_t   RESERVED1[3];
  __IM  uint8_t   KSI_IN;                       /*!< (@ 0x00000008) Key scan input pin state                                   */
  __IM  uint8_t   RESERVED2[3];
  __IOM uint8_t   KSI_STS;                      /*!< (@ 0x0000000C) Key scan inputs status                                     */
  __IM  uint8_t   RESERVED3[3];
  __IOM uint8_t   KSI_INT_EN;                   /*!< (@ 0x00000010) Key scan inputs interrupt enables                          */
  __IM  uint8_t   RESERVED4[3];
  __OM  uint8_t   EXT_CTRL;                     /*!< (@ 0x00000014) Key scan extended control register                         */
} MEC_KSCAN_Type;                               /*!< Size = 21 (0x15)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  KSO_SEL  ======================================================== */
#define MEC_KSCAN_KSO_SEL_OSEL_Pos        (0UL)                     /*!< OSEL (Bit 0)                                          */
#define MEC_KSCAN_KSO_SEL_OSEL_Msk        (0x1fUL)                  /*!< OSEL (Bitfield-Mask: 0x1f)                            */
#define MEC_KSCAN_KSO_SEL_KSO_ALL_Pos     (5UL)                     /*!< KSO_ALL (Bit 5)                                       */
#define MEC_KSCAN_KSO_SEL_KSO_ALL_Msk     (0x20UL)                  /*!< KSO_ALL (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSO_SEL_KSCAN_DIS_Pos   (6UL)                     /*!< KSCAN_DIS (Bit 6)                                     */
#define MEC_KSCAN_KSO_SEL_KSCAN_DIS_Msk   (0x40UL)                  /*!< KSCAN_DIS (Bitfield-Mask: 0x01)                       */
#define MEC_KSCAN_KSO_SEL_KSO_INVERT_Pos  (7UL)                     /*!< KSO_INVERT (Bit 7)                                    */
#define MEC_KSCAN_KSO_SEL_KSO_INVERT_Msk  (0x80UL)                  /*!< KSO_INVERT (Bitfield-Mask: 0x01)                      */
/* ========================================================  KSI_IN  ========================================================= */
/* ========================================================  KSI_STS  ======================================================== */
#define MEC_KSCAN_KSI_STS_KSI_IN0_Pos     (0UL)                     /*!< KSI_IN0 (Bit 0)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN0_Msk     (0x1UL)                   /*!< KSI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN1_Pos     (1UL)                     /*!< KSI_IN1 (Bit 1)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN1_Msk     (0x2UL)                   /*!< KSI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN2_Pos     (2UL)                     /*!< KSI_IN2 (Bit 2)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN2_Msk     (0x4UL)                   /*!< KSI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN3_Pos     (3UL)                     /*!< KSI_IN3 (Bit 3)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN3_Msk     (0x8UL)                   /*!< KSI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN4_Pos     (4UL)                     /*!< KSI_IN4 (Bit 4)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN4_Msk     (0x10UL)                  /*!< KSI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN5_Pos     (5UL)                     /*!< KSI_IN5 (Bit 5)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN5_Msk     (0x20UL)                  /*!< KSI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN6_Pos     (6UL)                     /*!< KSI_IN6 (Bit 6)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN6_Msk     (0x40UL)                  /*!< KSI_IN6 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_STS_KSI_IN7_Pos     (7UL)                     /*!< KSI_IN7 (Bit 7)                                       */
#define MEC_KSCAN_KSI_STS_KSI_IN7_Msk     (0x80UL)                  /*!< KSI_IN7 (Bitfield-Mask: 0x01)                         */
/* ======================================================  KSI_INT_EN  ======================================================= */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN0_Pos  (0UL)                     /*!< KSI_IN0 (Bit 0)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN0_Msk  (0x1UL)                   /*!< KSI_IN0 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN1_Pos  (1UL)                     /*!< KSI_IN1 (Bit 1)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN1_Msk  (0x2UL)                   /*!< KSI_IN1 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN2_Pos  (2UL)                     /*!< KSI_IN2 (Bit 2)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN2_Msk  (0x4UL)                   /*!< KSI_IN2 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN3_Pos  (3UL)                     /*!< KSI_IN3 (Bit 3)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN3_Msk  (0x8UL)                   /*!< KSI_IN3 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN4_Pos  (4UL)                     /*!< KSI_IN4 (Bit 4)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN4_Msk  (0x10UL)                  /*!< KSI_IN4 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN5_Pos  (5UL)                     /*!< KSI_IN5 (Bit 5)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN5_Msk  (0x20UL)                  /*!< KSI_IN5 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN6_Pos  (6UL)                     /*!< KSI_IN6 (Bit 6)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN6_Msk  (0x40UL)                  /*!< KSI_IN6 (Bitfield-Mask: 0x01)                         */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN7_Pos  (7UL)                     /*!< KSI_IN7 (Bit 7)                                       */
#define MEC_KSCAN_KSI_INT_EN_KSI_IN7_Msk  (0x80UL)                  /*!< KSI_IN7 (Bitfield-Mask: 0x01)                         */
/* =======================================================  EXT_CTRL  ======================================================== */
#define MEC_KSCAN_EXT_CTRL_PREDRIVE_Pos   (0UL)                     /*!< PREDRIVE (Bit 0)                                      */
#define MEC_KSCAN_EXT_CTRL_PREDRIVE_Msk   (0x1UL)                   /*!< PREDRIVE (Bitfield-Mask: 0x01)                        */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  KSO_SEL  ======================================================== */
/* ============================================  MEC_KSCAN KSO_SEL OSEL [0..4]  ============================================= */
typedef enum {                                  /*!< MEC_KSCAN_KSO_SEL_OSEL                                                   */
  MEC_KSCAN_KSO_SEL_OSEL_KSO00        = 0,     /*!< KSO00 : Select KSO 0                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO01        = 1,     /*!< KSO01 : Select KSO 1                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO02        = 2,     /*!< KSO02 : Select KSO 2                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO03        = 3,     /*!< KSO03 : Select KSO 3                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO04        = 4,     /*!< KSO04 : Select KSO 4                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO05        = 5,     /*!< KSO05 : Select KSO 5                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO06        = 6,     /*!< KSO06 : Select KSO 6                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO07        = 7,     /*!< KSO07 : Select KSO 7                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO08        = 8,     /*!< KSO08 : Select KSO 8                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO09        = 9,     /*!< KSO09 : Select KSO 9                                                      */
  MEC_KSCAN_KSO_SEL_OSEL_KSO10        = 10,    /*!< KSO10 : Select KSO 10                                                     */
  MEC_KSCAN_KSO_SEL_OSEL_KSO11        = 11,    /*!< KSO11 : Select KSO 11                                                     */
  MEC_KSCAN_KSO_SEL_OSEL_KSO12        = 12,    /*!< KSO12 : Select KSO 12                                                     */
  MEC_KSCAN_KSO_SEL_OSEL_KSO13        = 13,    /*!< KSO13 : Select KSO 13                                                     */
  MEC_KSCAN_KSO_SEL_OSEL_KSO14        = 14,    /*!< KSO14 : Select KSO 14                                                     */
  MEC_KSCAN_KSO_SEL_OSEL_KSO15        = 15,    /*!< KSO15 : Select KSO 15                                                     */
} MEC_KSCAN_KSO_SEL_OSEL_Enum;

/* ========================================================  KSI_IN  ========================================================= */
/* ========================================================  KSI_STS  ======================================================== */
/* ===========================================  MEC_KSCAN KSI_STS KSI_IN0 [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN0                                                */
  MEC_KSCAN_KSI_STS_KSI_IN0_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN0 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN0_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN1 [1..1]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN1                                                */
  MEC_KSCAN_KSI_STS_KSI_IN1_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN1 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN1_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN2 [2..2]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN2                                                */
  MEC_KSCAN_KSI_STS_KSI_IN2_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN2 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN2_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN3 [3..3]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN3                                                */
  MEC_KSCAN_KSI_STS_KSI_IN3_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN3 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN3_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN4 [4..4]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN4                                                */
  MEC_KSCAN_KSI_STS_KSI_IN4_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN4 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN4_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN5 [5..5]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN5                                                */
  MEC_KSCAN_KSI_STS_KSI_IN5_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN5 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN5_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN6 [6..6]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN6                                                */
  MEC_KSCAN_KSI_STS_KSI_IN6_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN6 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN6_Enum;

/* ===========================================  MEC_KSCAN KSI_STS KSI_IN7 [7..7]  =========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_STS_KSI_IN7                                                */
  MEC_KSCAN_KSI_STS_KSI_IN7_ACTIVE    = 1,     /*!< ACTIVE : KSI_IN7 falling edge detected                                    */
} MEC_KSCAN_KSI_STS_KSI_IN7_Enum;

/* ======================================================  KSI_INT_EN  ======================================================= */
/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN0 [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN0                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN0_IEN    = 1,     /*!< IEN : KSI_IN0 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN0_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN1 [1..1]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN1                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN1_IEN    = 1,     /*!< IEN : KSI_IN1 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN1_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN2 [2..2]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN2                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN2_IEN    = 1,     /*!< IEN : KSI_IN2 enable falling edge interrupt                               */
} MEC_KSCAN_KSI_INT_EN_KSI_IN2_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN3 [3..3]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN3                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN3_IEN    = 1,     /*!< IEN : KSI_IN3 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN3_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN4 [4..4]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN4                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN4_IEN    = 1,     /*!< IEN : KSI_IN4 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN4_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN5 [5..5]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN5                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN5_IEN    = 1,     /*!< IEN : KSI_IN5 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN5_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN6 [6..6]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN6                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN6_IEN    = 1,     /*!< IEN : KSI_IN6 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN6_Enum;

/* =========================================  MEC_KSCAN KSI_INT_EN KSI_IN7 [7..7]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_KSI_INT_EN_KSI_IN7                                             */
  MEC_KSCAN_KSI_INT_EN_KSI_IN7_IEN    = 1,     /*!< IEN : KSI_IN7 falling edge detected                                       */
} MEC_KSCAN_KSI_INT_EN_KSI_IN7_Enum;

/* =======================================================  EXT_CTRL  ======================================================== */
/* ==========================================  MEC_KSCAN EXT_CTRL PREDRIVE [0..0]  ========================================== */
typedef enum {                                  /*!< MEC_KSCAN_EXT_CTRL_PREDRIVE                                              */
  MEC_KSCAN_EXT_CTRL_PREDRIVE_EN      = 1,     /*!< EN : Enable KSO pre-drive                                                 */
} MEC_KSCAN_EXT_CTRL_PREDRIVE_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_KSCAN_V1_H */
