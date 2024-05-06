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
  * @brief Breathing-blinking LED controller (BBLED)
  */

typedef struct bbled_regs {                     /*!< (@ 0x4000B800) BBLED Structure                                          */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000000) BBLED config                                             */
  __IOM uint32_t  LIMITS;                       /*!< (@ 0x00000004) BBLED limits                                             */
  __IOM uint32_t  DELAY;                        /*!< (@ 0x00000008) BBLED delay                                              */
  __IOM uint32_t  UPDSS;                        /*!< (@ 0x0000000C) BBLED update step size                                   */
  __IOM uint32_t  UPINVL;                       /*!< (@ 0x00000010) BBLED update interval                                    */
  __IOM uint32_t  OUTDLY;                       /*!< (@ 0x00000014) BBLED output delay                                       */
} BBLED_Type;                                   /*!< Size = 24 (0x18)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
#define BBLED_CONFIG_CTRL_Pos               (0UL)                   /*!< CTRL (Bit 0)                                          */
#define BBLED_CONFIG_CTRL_Msk               (0x3UL)                 /*!< CTRL (Bitfield-Mask: 0x03)                            */
#define BBLED_CONFIG_CLKSRC_Pos             (2UL)                   /*!< CLKSRC (Bit 2)                                        */
#define BBLED_CONFIG_CLKSRC_Msk             (0x4UL)                 /*!< CLKSRC (Bitfield-Mask: 0x01)                          */
#define BBLED_CONFIG_SYNC_Pos               (3UL)                   /*!< SYNC (Bit 3)                                          */
#define BBLED_CONFIG_SYNC_Msk               (0x8UL)                 /*!< SYNC (Bitfield-Mask: 0x01)                            */
#define BBLED_CONFIG_PWM_SZ_Pos             (4UL)                   /*!< PWM_SZ (Bit 4)                                        */
#define BBLED_CONFIG_PWM_SZ_Msk             (0x30UL)                /*!< PWM_SZ (Bitfield-Mask: 0x03)                          */
#define BBLED_CONFIG_UPDATE_Pos             (6UL)                   /*!< UPDATE (Bit 6)                                        */
#define BBLED_CONFIG_UPDATE_Msk             (0x40UL)                /*!< UPDATE (Bitfield-Mask: 0x01)                          */
#define BBLED_CONFIG_SRST_Pos               (7UL)                   /*!< SRST (Bit 7)                                          */
#define BBLED_CONFIG_SRST_Msk               (0x80UL)                /*!< SRST (Bitfield-Mask: 0x01)                            */
#define BBLED_CONFIG_WDTRLD_Pos             (8UL)                   /*!< WDTRLD (Bit 8)                                        */
#define BBLED_CONFIG_WDTRLD_Msk             (0xff00UL)              /*!< WDTRLD (Bitfield-Mask: 0xff)                          */
#define BBLED_CONFIG_ASYM_Pos               (16UL)                  /*!< ASYM (Bit 16)                                         */
#define BBLED_CONFIG_ASYM_Msk               (0x10000UL)             /*!< ASYM (Bitfield-Mask: 0x01)                            */
/* ========================================================  LIMITS  ========================================================= */
#define BBLED_LIMITS_MIN_Pos                (0UL)                   /*!< MIN (Bit 0)                                           */
#define BBLED_LIMITS_MIN_Msk                (0xffUL)                /*!< MIN (Bitfield-Mask: 0xff)                             */
#define BBLED_LIMITS_MAX_Pos                (8UL)                   /*!< MAX (Bit 8)                                           */
#define BBLED_LIMITS_MAX_Msk                (0xff00UL)              /*!< MAX (Bitfield-Mask: 0xff)                             */
/* =========================================================  DELAY  ========================================================= */
#define BBLED_DELAY_LO_Pos                  (0UL)                   /*!< LO (Bit 0)                                            */
#define BBLED_DELAY_LO_Msk                  (0xfffUL)               /*!< LO (Bitfield-Mask: 0xfff)                             */
#define BBLED_DELAY_HI_Pos                  (12UL)                  /*!< HI (Bit 12)                                           */
#define BBLED_DELAY_HI_Msk                  (0xfff000UL)            /*!< HI (Bitfield-Mask: 0xfff)                             */
/* =========================================================  UPDSS  ========================================================= */
#define BBLED_UPDSS_STEP0_Pos               (0UL)                   /*!< STEP0 (Bit 0)                                         */
#define BBLED_UPDSS_STEP0_Msk               (0xfUL)                 /*!< STEP0 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP1_Pos               (4UL)                   /*!< STEP1 (Bit 4)                                         */
#define BBLED_UPDSS_STEP1_Msk               (0xf0UL)                /*!< STEP1 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP2_Pos               (8UL)                   /*!< STEP2 (Bit 8)                                         */
#define BBLED_UPDSS_STEP2_Msk               (0xf00UL)               /*!< STEP2 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP3_Pos               (12UL)                  /*!< STEP3 (Bit 12)                                        */
#define BBLED_UPDSS_STEP3_Msk               (0xf000UL)              /*!< STEP3 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP4_Pos               (16UL)                  /*!< STEP4 (Bit 16)                                        */
#define BBLED_UPDSS_STEP4_Msk               (0xf0000UL)             /*!< STEP4 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP5_Pos               (20UL)                  /*!< STEP5 (Bit 20)                                        */
#define BBLED_UPDSS_STEP5_Msk               (0xf00000UL)            /*!< STEP5 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP6_Pos               (24UL)                  /*!< STEP6 (Bit 24)                                        */
#define BBLED_UPDSS_STEP6_Msk               (0xf000000UL)           /*!< STEP6 (Bitfield-Mask: 0x0f)                           */
#define BBLED_UPDSS_STEP7_Pos               (28UL)                  /*!< STEP7 (Bit 28)                                        */
#define BBLED_UPDSS_STEP7_Msk               (0xf0000000UL)          /*!< STEP7 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  UPINVL  ========================================================= */
#define BBLED_UPINVL_INTRV0_Pos             (0UL)                   /*!< INTRV0 (Bit 0)                                        */
#define BBLED_UPINVL_INTRV0_Msk             (0xfUL)                 /*!< INTRV0 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV1_Pos             (4UL)                   /*!< INTRV1 (Bit 4)                                        */
#define BBLED_UPINVL_INTRV1_Msk             (0xf0UL)                /*!< INTRV1 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV2_Pos             (8UL)                   /*!< INTRV2 (Bit 8)                                        */
#define BBLED_UPINVL_INTRV2_Msk             (0xf00UL)               /*!< INTRV2 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV3_Pos             (12UL)                  /*!< INTRV3 (Bit 12)                                       */
#define BBLED_UPINVL_INTRV3_Msk             (0xf000UL)              /*!< INTRV3 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV4_Pos             (16UL)                  /*!< INTRV4 (Bit 16)                                       */
#define BBLED_UPINVL_INTRV4_Msk             (0xf0000UL)             /*!< INTRV4 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV5_Pos             (20UL)                  /*!< INTRV5 (Bit 20)                                       */
#define BBLED_UPINVL_INTRV5_Msk             (0xf00000UL)            /*!< INTRV5 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV6_Pos             (24UL)                  /*!< INTRV6 (Bit 24)                                       */
#define BBLED_UPINVL_INTRV6_Msk             (0xf000000UL)           /*!< INTRV6 (Bitfield-Mask: 0x0f)                          */
#define BBLED_UPINVL_INTRV7_Pos             (28UL)                  /*!< INTRV7 (Bit 28)                                       */
#define BBLED_UPINVL_INTRV7_Msk             (0xf0000000UL)          /*!< INTRV7 (Bitfield-Mask: 0x0f)                          */
/* ========================================================  OUTDLY  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
/* ================================================  BBLED CONFIG CTRL [0..1]  ================================================ */
typedef enum {                                  /*!< BBLED_CONFIG_CTRL                                                          */
  BBLED_CONFIG_CTRL_OFF                 = 0,     /*!< OFF : Always off                                                          */
  BBLED_CONFIG_CTRL_BREATH              = 1,     /*!< BREATH : LED breathing mode                                               */
  BBLED_CONFIG_CTRL_BLINK               = 2,     /*!< BLINK : LED blink mode                                                    */
  BBLED_CONFIG_CTRL_ON                  = 3,     /*!< ON : PWM always ON                                                        */
} BBLED_CONFIG_CTRL_Enum;

/* ===============================================  BBLED CONFIG CLKSRC [2..2]  =============================================== */
typedef enum {                                  /*!< BBLED_CONFIG_CLKSRC                                                        */
  BBLED_CONFIG_CLKSRC_32K               = 0,     /*!< 32K : 32KHz                                                               */
  BBLED_CONFIG_CLKSRC_48M               = 1,     /*!< 48M : 48MHz                                                               */
} BBLED_CONFIG_CLKSRC_Enum;

/* ================================================  BBLED CONFIG SYNC [3..3]  ================================================ */
typedef enum {                                  /*!< BBLED_CONFIG_SYNC                                                          */
  BBLED_CONFIG_SYNC_EN                  = 1,     /*!< EN : Enable                                                               */
} BBLED_CONFIG_SYNC_Enum;

/* ===============================================  BBLED CONFIG PWM_SZ [4..5]  =============================================== */
typedef enum {                                  /*!< BBLED_CONFIG_PWM_SZ                                                        */
  BBLED_CONFIG_PWM_SZ_8BIT              = 0,     /*!< 8BIT : PWM counter is 8-bit                                               */
  BBLED_CONFIG_PWM_SZ_7BIT              = 1,     /*!< 7BIT : PWM counter is 7-bit                                               */
  BBLED_CONFIG_PWM_SZ_6BIT              = 2,     /*!< 6BIT : PWM counter is 6-bit                                               */
  BBLED_CONFIG_PWM_SZ_RSVD              = 3,     /*!< RSVD : PWM size reserved value                                            */
} BBLED_CONFIG_PWM_SZ_Enum;

/* ===============================================  BBLED CONFIG UPDATE [6..6]  =============================================== */
typedef enum {                                  /*!< BBLED_CONFIG_UPDATE                                                        */
  BBLED_CONFIG_UPDATE_EN                = 1,     /*!< EN : Enable                                                               */
} BBLED_CONFIG_UPDATE_Enum;

/* ================================================  BBLED CONFIG SRST [7..7]  ================================================ */
typedef enum {                                  /*!< BBLED_CONFIG_SRST                                                          */
  BBLED_CONFIG_SRST_EN                  = 1,     /*!< EN : Enable                                                               */
} BBLED_CONFIG_SRST_Enum;

/* ===============================================  BBLED CONFIG ASYM [16..16]  =============================================== */
typedef enum {                                  /*!< BBLED_CONFIG_ASYM                                                          */
  BBLED_CONFIG_ASYM_EN                  = 1,     /*!< EN : Enable                                                               */
} BBLED_CONFIG_ASYM_Enum;

/* ========================================================  LIMITS  ========================================================= */
/* =========================================================  DELAY  ========================================================= */
/* =========================================================  UPDSS  ========================================================= */
/* ================================================  BBLED UPDSS STEP0 [0..3]  ================================================ */
typedef enum {                                  /*!< BBLED_UPDSS_STEP0                                                          */
  BBLED_UPDSS_STEP0_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP0_Enum;

/* ================================================  BBLED UPDSS STEP1 [4..7]  ================================================ */
typedef enum {                                  /*!< BBLED_UPDSS_STEP1                                                          */
  BBLED_UPDSS_STEP1_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP1_Enum;

/* ===============================================  BBLED UPDSS STEP2 [8..11]  ================================================ */
typedef enum {                                  /*!< BBLED_UPDSS_STEP2                                                          */
  BBLED_UPDSS_STEP2_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP2_Enum;

/* ===============================================  BBLED UPDSS STEP3 [12..15]  =============================================== */
typedef enum {                                  /*!< BBLED_UPDSS_STEP3                                                          */
  BBLED_UPDSS_STEP3_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP3_Enum;

/* ===============================================  BBLED UPDSS STEP4 [16..19]  =============================================== */
typedef enum {                                  /*!< BBLED_UPDSS_STEP4                                                          */
  BBLED_UPDSS_STEP4_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP4_Enum;

/* ===============================================  BBLED UPDSS STEP5 [20..23]  =============================================== */
typedef enum {                                  /*!< BBLED_UPDSS_STEP5                                                          */
  BBLED_UPDSS_STEP5_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP5_Enum;

/* ===============================================  BBLED UPDSS STEP6 [24..27]  =============================================== */
typedef enum {                                  /*!< BBLED_UPDSS_STEP6                                                          */
  BBLED_UPDSS_STEP6_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP6_Enum;

/* ===============================================  BBLED UPDSS STEP7 [28..31]  =============================================== */
typedef enum {                                  /*!< BBLED_UPDSS_STEP7                                                          */
  BBLED_UPDSS_STEP7_VAL1                = 0,     /*!< VAL1 : Step by 1                                                          */
} BBLED_UPDSS_STEP7_Enum;

/* ========================================================  UPINVL  ========================================================= */
/* ===============================================  BBLED UPINVL INTRV0 [0..3]  =============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV0                                                        */
  BBLED_UPINVL_INTRV0_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV0_Enum;

/* ===============================================  BBLED UPINVL INTRV1 [4..7]  =============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV1                                                        */
  BBLED_UPINVL_INTRV1_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV1_Enum;

/* ==============================================  BBLED UPINVL INTRV2 [8..11]  =============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV2                                                        */
  BBLED_UPINVL_INTRV2_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV2_Enum;

/* ==============================================  BBLED UPINVL INTRV3 [12..15]  ============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV3                                                        */
  BBLED_UPINVL_INTRV3_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV3_Enum;

/* ==============================================  BBLED UPINVL INTRV4 [16..19]  ============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV4                                                        */
  BBLED_UPINVL_INTRV4_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV4_Enum;

/* ==============================================  BBLED UPINVL INTRV5 [20..23]  ============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV5                                                        */
  BBLED_UPINVL_INTRV5_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV5_Enum;

/* ==============================================  BBLED UPINVL INTRV6 [24..27]  ============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV6                                                        */
  BBLED_UPINVL_INTRV6_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV6_Enum;

/* ==============================================  BBLED UPINVL INTRV7 [28..31]  ============================================== */
typedef enum {                                  /*!< BBLED_UPINVL_INTRV7                                                        */
  BBLED_UPINVL_INTRV7_PER1              = 0,     /*!< PER1 : 1 PWM period                                                       */
} BBLED_UPINVL_INTRV7_Enum;

/* ========================================================  OUTDLY  ========================================================= */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BBLED_V1_H */
