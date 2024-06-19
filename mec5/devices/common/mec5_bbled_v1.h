/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_BBLED_V1_H
#define _MEC5_BBLED_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Breathing-blinking LED controller (MEC_BBLED)
  */

typedef struct mec_bbled_regs {                 /*!< (@ 0x4000B800) MEC_LED0 Structure                                         */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000000) LED config                                                 */
  __IOM uint32_t  LIMITS;                       /*!< (@ 0x00000004) LED limits                                                 */
  __IOM uint32_t  DELAY;                        /*!< (@ 0x00000008) LED delay                                                  */
  __IOM uint32_t  UPDSS;                        /*!< (@ 0x0000000C) LED update step size                                       */
  __IOM uint32_t  UPINVL;                       /*!< (@ 0x00000010) LED update interval                                        */
  __IOM uint32_t  OUTDLY;                       /*!< (@ 0x00000014) LED output delay                                           */
} MEC_BBLED_Type;                               /*!< Size = 24 (0x18)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
#define MEC_BBLED_CONFIG_CTRL_Pos         (0UL)                     /*!< CTRL (Bit 0)                                          */
#define MEC_BBLED_CONFIG_CTRL_Msk         (0x3UL)                   /*!< CTRL (Bitfield-Mask: 0x03)                            */
#define MEC_BBLED_CONFIG_CLKSRC_Pos       (2UL)                     /*!< CLKSRC (Bit 2)                                        */
#define MEC_BBLED_CONFIG_CLKSRC_Msk       (0x4UL)                   /*!< CLKSRC (Bitfield-Mask: 0x01)                          */
#define MEC_BBLED_CONFIG_SYNC_Pos         (3UL)                     /*!< SYNC (Bit 3)                                          */
#define MEC_BBLED_CONFIG_SYNC_Msk         (0x8UL)                   /*!< SYNC (Bitfield-Mask: 0x01)                            */
#define MEC_BBLED_CONFIG_PWM_SZ_Pos       (4UL)                     /*!< PWM_SZ (Bit 4)                                        */
#define MEC_BBLED_CONFIG_PWM_SZ_Msk       (0x30UL)                  /*!< PWM_SZ (Bitfield-Mask: 0x03)                          */
#define MEC_BBLED_CONFIG_UPDATE_Pos       (6UL)                     /*!< UPDATE (Bit 6)                                        */
#define MEC_BBLED_CONFIG_UPDATE_Msk       (0x40UL)                  /*!< UPDATE (Bitfield-Mask: 0x01)                          */
#define MEC_BBLED_CONFIG_SRST_Pos         (7UL)                     /*!< SRST (Bit 7)                                          */
#define MEC_BBLED_CONFIG_SRST_Msk         (0x80UL)                  /*!< SRST (Bitfield-Mask: 0x01)                            */
#define MEC_BBLED_CONFIG_WDTRLD_Pos       (8UL)                     /*!< WDTRLD (Bit 8)                                        */
#define MEC_BBLED_CONFIG_WDTRLD_Msk       (0xff00UL)                /*!< WDTRLD (Bitfield-Mask: 0xff)                          */
#define MEC_BBLED_CONFIG_ASYM_Pos         (16UL)                    /*!< ASYM (Bit 16)                                         */
#define MEC_BBLED_CONFIG_ASYM_Msk         (0x10000UL)               /*!< ASYM (Bitfield-Mask: 0x01)                            */
/* ========================================================  LIMITS  ========================================================= */
#define MEC_BBLED_LIMITS_MIN_Pos          (0UL)                     /*!< MIN (Bit 0)                                           */
#define MEC_BBLED_LIMITS_MIN_Msk          (0xffUL)                  /*!< MIN (Bitfield-Mask: 0xff)                             */
#define MEC_BBLED_LIMITS_MAX_Pos          (8UL)                     /*!< MAX (Bit 8)                                           */
#define MEC_BBLED_LIMITS_MAX_Msk          (0xff00UL)                /*!< MAX (Bitfield-Mask: 0xff)                             */
/* =========================================================  DELAY  ========================================================= */
#define MEC_BBLED_DELAY_LO_Pos            (0UL)                     /*!< LO (Bit 0)                                            */
#define MEC_BBLED_DELAY_LO_Msk            (0xfffUL)                 /*!< LO (Bitfield-Mask: 0xfff)                             */
#define MEC_BBLED_DELAY_HI_Pos            (12UL)                    /*!< HI (Bit 12)                                           */
#define MEC_BBLED_DELAY_HI_Msk            (0xfff000UL)              /*!< HI (Bitfield-Mask: 0xfff)                             */
/* =========================================================  UPDSS  ========================================================= */
#define MEC_BBLED_UPDSS_STEP0_Pos         (0UL)                     /*!< STEP0 (Bit 0)                                         */
#define MEC_BBLED_UPDSS_STEP0_Msk         (0xfUL)                   /*!< STEP0 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP1_Pos         (4UL)                     /*!< STEP1 (Bit 4)                                         */
#define MEC_BBLED_UPDSS_STEP1_Msk         (0xf0UL)                  /*!< STEP1 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP2_Pos         (8UL)                     /*!< STEP2 (Bit 8)                                         */
#define MEC_BBLED_UPDSS_STEP2_Msk         (0xf00UL)                 /*!< STEP2 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP3_Pos         (12UL)                    /*!< STEP3 (Bit 12)                                        */
#define MEC_BBLED_UPDSS_STEP3_Msk         (0xf000UL)                /*!< STEP3 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP4_Pos         (16UL)                    /*!< STEP4 (Bit 16)                                        */
#define MEC_BBLED_UPDSS_STEP4_Msk         (0xf0000UL)               /*!< STEP4 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP5_Pos         (20UL)                    /*!< STEP5 (Bit 20)                                        */
#define MEC_BBLED_UPDSS_STEP5_Msk         (0xf00000UL)              /*!< STEP5 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP6_Pos         (24UL)                    /*!< STEP6 (Bit 24)                                        */
#define MEC_BBLED_UPDSS_STEP6_Msk         (0xf000000UL)             /*!< STEP6 (Bitfield-Mask: 0x0f)                           */
#define MEC_BBLED_UPDSS_STEP7_Pos         (28UL)                    /*!< STEP7 (Bit 28)                                        */
#define MEC_BBLED_UPDSS_STEP7_Msk         (0xf0000000UL)            /*!< STEP7 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  UPINVL  ========================================================= */
#define MEC_BBLED_UPINVL_INTRV0_Pos       (0UL)                     /*!< INTRV0 (Bit 0)                                        */
#define MEC_BBLED_UPINVL_INTRV0_Msk       (0xfUL)                   /*!< INTRV0 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV1_Pos       (4UL)                     /*!< INTRV1 (Bit 4)                                        */
#define MEC_BBLED_UPINVL_INTRV1_Msk       (0xf0UL)                  /*!< INTRV1 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV2_Pos       (8UL)                     /*!< INTRV2 (Bit 8)                                        */
#define MEC_BBLED_UPINVL_INTRV2_Msk       (0xf00UL)                 /*!< INTRV2 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV3_Pos       (12UL)                    /*!< INTRV3 (Bit 12)                                       */
#define MEC_BBLED_UPINVL_INTRV3_Msk       (0xf000UL)                /*!< INTRV3 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV4_Pos       (16UL)                    /*!< INTRV4 (Bit 16)                                       */
#define MEC_BBLED_UPINVL_INTRV4_Msk       (0xf0000UL)               /*!< INTRV4 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV5_Pos       (20UL)                    /*!< INTRV5 (Bit 20)                                       */
#define MEC_BBLED_UPINVL_INTRV5_Msk       (0xf00000UL)              /*!< INTRV5 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV6_Pos       (24UL)                    /*!< INTRV6 (Bit 24)                                       */
#define MEC_BBLED_UPINVL_INTRV6_Msk       (0xf000000UL)             /*!< INTRV6 (Bitfield-Mask: 0x0f)                          */
#define MEC_BBLED_UPINVL_INTRV7_Pos       (28UL)                    /*!< INTRV7 (Bit 28)                                       */
#define MEC_BBLED_UPINVL_INTRV7_Msk       (0xf0000000UL)            /*!< INTRV7 (Bitfield-Mask: 0x0f)                          */
/* ========================================================  OUTDLY  ========================================================= */
#define MEC_BBLED_OUTDLY_CNT_Pos          (0UL)                     /*!< CNT (Bit 0)                                           */
#define MEC_BBLED_OUTDLY_CNT_Msk          (0xffUL)                    /*!< CNT (Bitfield-Mask: 0xff)                           */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
/* ==============================================  MEC_BBLED CONFIG CTRL [0..1]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_CTRL                                                      */
  MEC_BBLED_CONFIG_CTRL_OFF             = 0,    /*!< OFF : Always off                                                          */
  MEC_BBLED_CONFIG_CTRL_BREATH          = 1,    /*!< BREATH : LED breathing mode                                               */
  MEC_BBLED_CONFIG_CTRL_BLINK           = 2,    /*!< BLINK : LED blink mode                                                    */
  MEC_BBLED_CONFIG_CTRL_ON              = 3,    /*!< ON : PWM always ON                                                        */
} MEC_BBLED_CONFIG_CTRL_Enum;

/* =============================================  MEC_BBLED CONFIG CLKSRC [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_CLKSRC                                                    */
  MEC_BBLED_CONFIG_CLKSRC_32K           = 0,    /*!< 32K : 32KHz                                                               */
  MEC_BBLED_CONFIG_CLKSRC_48M           = 1,    /*!< 48M : 48MHz                                                               */
} MEC_BBLED_CONFIG_CLKSRC_Enum;

/* ==============================================  MEC_BBLED CONFIG SYNC [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_SYNC                                                      */
  MEC_BBLED_CONFIG_SYNC_EN              = 1,    /*!< EN : Enable                                                               */
} MEC_BBLED_CONFIG_SYNC_Enum;

/* =============================================  MEC_BBLED CONFIG PWM_SZ [4..5]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_PWM_SZ                                                    */
  MEC_BBLED_CONFIG_PWM_SZ_8BIT          = 0,    /*!< 8BIT : PWM counter is 8-bit                                               */
  MEC_BBLED_CONFIG_PWM_SZ_7BIT          = 1,    /*!< 7BIT : PWM counter is 7-bit                                               */
  MEC_BBLED_CONFIG_PWM_SZ_6BIT          = 2,    /*!< 6BIT : PWM counter is 6-bit                                               */
  MEC_BBLED_CONFIG_PWM_SZ_RSVD          = 3,    /*!< RSVD : PWM size reserved value                                            */
} MEC_BBLED_CONFIG_PWM_SZ_Enum;

/* =============================================  MEC_BBLED CONFIG UPDATE [6..6]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_UPDATE                                                    */
  MEC_BBLED_CONFIG_UPDATE_EN            = 1,    /*!< EN : Enable                                                               */
} MEC_BBLED_CONFIG_UPDATE_Enum;

/* ==============================================  MEC_BBLED CONFIG SRST [7..7]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_SRST                                                      */
  MEC_BBLED_CONFIG_SRST_EN              = 1,    /*!< EN : Enable                                                               */
} MEC_BBLED_CONFIG_SRST_Enum;

/* =============================================  MEC_BBLED CONFIG ASYM [16..16]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_CONFIG_ASYM                                                      */
  MEC_BBLED_CONFIG_ASYM_EN              = 1,    /*!< EN : Enable                                                               */
} MEC_BBLED_CONFIG_ASYM_Enum;

/* ========================================================  LIMITS  ========================================================= */
/* =========================================================  DELAY  ========================================================= */
/* =========================================================  UPDSS  ========================================================= */
/* ==============================================  MEC_BBLED UPDSS STEP0 [0..3]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP0                                                      */
  MEC_BBLED_UPDSS_STEP0_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP0_Enum;

/* ==============================================  MEC_BBLED UPDSS STEP1 [4..7]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP1                                                      */
  MEC_BBLED_UPDSS_STEP1_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP1_Enum;

/* =============================================  MEC_BBLED UPDSS STEP2 [8..11]  ============================================== */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP2                                                      */
  MEC_BBLED_UPDSS_STEP2_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP2_Enum;

/* =============================================  MEC_BBLED UPDSS STEP3 [12..15]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP3                                                      */
  MEC_BBLED_UPDSS_STEP3_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP3_Enum;

/* =============================================  MEC_BBLED UPDSS STEP4 [16..19]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP4                                                      */
  MEC_BBLED_UPDSS_STEP4_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP4_Enum;

/* =============================================  MEC_BBLED UPDSS STEP5 [20..23]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP5                                                      */
  MEC_BBLED_UPDSS_STEP5_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP5_Enum;

/* =============================================  MEC_BBLED UPDSS STEP6 [24..27]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP6                                                      */
  MEC_BBLED_UPDSS_STEP6_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP6_Enum;

/* =============================================  MEC_BBLED UPDSS STEP7 [28..31]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPDSS_STEP7                                                      */
  MEC_BBLED_UPDSS_STEP7_VAL1            = 0,    /*!< VAL1 : Step by 1                                                          */
} MEC_BBLED_UPDSS_STEP7_Enum;

/* ========================================================  UPINVL  ========================================================= */
/* =============================================  MEC_BBLED UPINVL INTRV0 [0..3]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV0                                                    */
  MEC_BBLED_UPINVL_INTRV0_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV0_Enum;

/* =============================================  MEC_BBLED UPINVL INTRV1 [4..7]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV1                                                    */
  MEC_BBLED_UPINVL_INTRV1_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV1_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV2 [8..11]  ============================================= */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV2                                                    */
  MEC_BBLED_UPINVL_INTRV2_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV2_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV3 [12..15]  ============================================ */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV3                                                    */
  MEC_BBLED_UPINVL_INTRV3_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV3_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV4 [16..19]  ============================================ */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV4                                                    */
  MEC_BBLED_UPINVL_INTRV4_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV4_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV5 [20..23]  ============================================ */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV5                                                    */
  MEC_BBLED_UPINVL_INTRV5_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV5_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV6 [24..27]  ============================================ */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV6                                                    */
  MEC_BBLED_UPINVL_INTRV6_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV6_Enum;

/* ============================================  MEC_BBLED UPINVL INTRV7 [28..31]  ============================================ */
typedef enum {                                  /*!< MEC_BBLED_UPINVL_INTRV7                                                    */
  MEC_BBLED_UPINVL_INTRV7_PER1          = 0,    /*!< PER1 : 1 PWM period                                                       */
} MEC_BBLED_UPINVL_INTRV7_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BBLED_V1_H */
