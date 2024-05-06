/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_CTMR_V1_H
#define _MEC5_CTMR_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief 16-bit Event Counter/Timer (CTMR0)
  */

typedef struct ctmr_regs {                      /*!< (@ 0x40000D00) CTMR0 Structure                                            */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) 16-bit Event Counter/Timer Control                         */
  __IOM uint32_t  CEV_CTRL;                     /*!< (@ 0x00000004) 16-bit Event Counter/Timer clock and event control         */
  __IOM uint16_t  RELOAD;                       /*!< (@ 0x00000008) 16-bit Event Counter/Timer reload                          */
  __IM  uint16_t  RESERVED;
  __IOM uint16_t  COUNT;                        /*!< (@ 0x0000000C) 16-bit Event Counter/Timer counter(RO)                     */
  __IM  uint16_t  RESERVED1;
} CTMR_Type;                                    /*!< Size = 16 (0x10)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define CTMR_CTRL_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define CTMR_CTRL_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define CTMR_CTRL_RESET_Pos               (1UL)                     /*!< RESET (Bit 1)                                         */
#define CTMR_CTRL_RESET_Msk               (0x2UL)                   /*!< RESET (Bitfield-Mask: 0x01)                           */
#define CTMR_CTRL_MODE_Pos                (2UL)                     /*!< MODE (Bit 2)                                          */
#define CTMR_CTRL_MODE_Msk                (0xcUL)                   /*!< MODE (Bitfield-Mask: 0x03)                            */
#define CTMR_CTRL_INPOL_Pos               (4UL)                     /*!< INPOL (Bit 4)                                         */
#define CTMR_CTRL_INPOL_Msk               (0x10UL)                  /*!< INPOL (Bitfield-Mask: 0x01)                           */
#define CTMR_CTRL_CNT_DIR_Pos             (5UL)                     /*!< CNT_DIR (Bit 5)                                       */
#define CTMR_CTRL_CNT_DIR_Msk             (0x20UL)                  /*!< CNT_DIR (Bitfield-Mask: 0x01)                         */
#define CTMR_CTRL_TOUT_EN_Pos             (6UL)                     /*!< TOUT_EN (Bit 6)                                       */
#define CTMR_CTRL_TOUT_EN_Msk             (0x40UL)                  /*!< TOUT_EN (Bitfield-Mask: 0x01)                         */
#define CTMR_CTRL_RLOAD_Pos               (7UL)                     /*!< RLOAD (Bit 7)                                         */
#define CTMR_CTRL_RLOAD_Msk               (0x80UL)                  /*!< RLOAD (Bitfield-Mask: 0x01)                           */
#define CTMR_CTRL_FILT_BYP_Pos            (8UL)                     /*!< FILT_BYP (Bit 8)                                      */
#define CTMR_CTRL_FILT_BYP_Msk            (0x100UL)                 /*!< FILT_BYP (Bitfield-Mask: 0x01)                        */
#define CTMR_CTRL_PD_Pos                  (9UL)                     /*!< PD (Bit 9)                                            */
#define CTMR_CTRL_PD_Msk                  (0x200UL)                 /*!< PD (Bitfield-Mask: 0x01)                              */
#define CTMR_CTRL_TOUT_POL_Pos            (10UL)                    /*!< TOUT_POL (Bit 10)                                     */
#define CTMR_CTRL_TOUT_POL_Msk            (0x400UL)                 /*!< TOUT_POL (Bitfield-Mask: 0x01)                        */
#define CTMR_CTRL_SLP_EN_Pos              (11UL)                    /*!< SLP_EN (Bit 11)                                       */
#define CTMR_CTRL_SLP_EN_Msk              (0x800UL)                 /*!< SLP_EN (Bitfield-Mask: 0x01)                          */
#define CTMR_CTRL_CLK_REQ_Pos             (12UL)                    /*!< CLK_REQ (Bit 12)                                      */
#define CTMR_CTRL_CLK_REQ_Msk             (0x1000UL)                /*!< CLK_REQ (Bitfield-Mask: 0x01)                         */
/* =======================================================  CEV_CTRL  ======================================================== */
#define CTMR_CEV_CTRL_TCLK_FREQ_Pos       (0UL)                     /*!< TCLK_FREQ (Bit 0)                                     */
#define CTMR_CEV_CTRL_TCLK_FREQ_Msk       (0xfUL)                   /*!< TCLK_FREQ (Bitfield-Mask: 0x0f)                       */
#define CTMR_CEV_CTRL_EDGE_Pos            (5UL)                     /*!< EDGE (Bit 5)                                          */
#define CTMR_CEV_CTRL_EDGE_Msk            (0x60UL)                  /*!< EDGE (Bitfield-Mask: 0x03)                            */
#define CTMR_CEV_CTRL_EVENT_SRC_Pos       (7UL)                     /*!< EVENT_SRC (Bit 7)                                     */
#define CTMR_CEV_CTRL_EVENT_SRC_Msk       (0x80UL)                  /*!< EVENT_SRC (Bitfield-Mask: 0x01)                       */
#define CTMR_CEV_CTRL_FCLK_FREQ_Pos       (8UL)                     /*!< FCLK_FREQ (Bit 8)                                     */
#define CTMR_CEV_CTRL_FCLK_FREQ_Msk       (0xf00UL)                 /*!< FCLK_FREQ (Bitfield-Mask: 0x0f)                       */
/* ========================================================  RELOAD  ========================================================= */
/* =========================================================  COUNT  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  CTMR CTRL ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< CTMR_CTRL_ENABLE                                                         */
  CTMR_CTRL_ENABLE_OFF                = 0,     /*!< OFF : Timer block is off and clocks are gated                             */
  CTMR_CTRL_ENABLE_ON                 = 1,     /*!< ON : Timer block is off and clocks are ungated                            */
} CTMR_CTRL_ENABLE_Enum;

/* ================================================  CTMR CTRL RESET [1..1]  ================================================ */
typedef enum {                                  /*!< CTMR_CTRL_RESET                                                          */
  CTMR_CTRL_RESET_OFF                 = 0,     /*!< OFF : Self-reset not active                                               */
  CTMR_CTRL_RESET_ON                  = 1,     /*!< ON : Enable timer self-reset                                              */
} CTMR_CTRL_RESET_Enum;

/* ================================================  CTMR CTRL MODE [2..3]  ================================================= */
typedef enum {                                  /*!< CTMR_CTRL_MODE                                                           */
  CTMR_CTRL_MODE_TIMER                = 0,     /*!< TIMER : Timer mode selected                                               */
  CTMR_CTRL_MODE_EVENT                = 1,     /*!< EVENT : Event mode selected                                               */
  CTMR_CTRL_MODE_ONE_SHOT             = 2,     /*!< ONE_SHOT : One shot mode selected                                         */
  CTMR_CTRL_MODE_MEAS                 = 3,     /*!< MEAS : Measurement mode selected                                          */
} CTMR_CTRL_MODE_Enum;

/* ================================================  CTMR CTRL INPOL [4..4]  ================================================ */
typedef enum {                                  /*!< CTMR_CTRL_INPOL                                                          */
  CTMR_CTRL_INPOL_INVERTED            = 1,     /*!< INVERTED : TIN input signa polarity is inverted                           */
} CTMR_CTRL_INPOL_Enum;

/* ===============================================  CTMR CTRL CNT_DIR [5..5]  =============================================== */
typedef enum {                                  /*!< CTMR_CTRL_CNT_DIR                                                        */
  CTMR_CTRL_CNT_DIR_UP                = 1,     /*!< UP : Event mode(Count up). Timer mode(pause when TIN de-asserted)         */
} CTMR_CTRL_CNT_DIR_Enum;

/* ===============================================  CTMR CTRL TOUT_EN [6..6]  =============================================== */
typedef enum {                                  /*!< CTMR_CTRL_TOUT_EN                                                        */
  CTMR_CTRL_TOUT_EN_ON                = 1,     /*!< ON : TOU pin function enabled                                             */
} CTMR_CTRL_TOUT_EN_Enum;

/* ================================================  CTMR CTRL RLOAD [7..7]  ================================================ */
typedef enum {                                  /*!< CTMR_CTRL_RLOAD                                                          */
  CTMR_CTRL_RLOAD_EN                  = 1,     /*!< EN : Reload timer from preload register on over/under flow                */
} CTMR_CTRL_RLOAD_Enum;

/* ==============================================  CTMR CTRL FILT_BYP [8..8]  =============================================== */
typedef enum {                                  /*!< CTMR_CTRL_FILT_BYP                                                       */
  CTMR_CTRL_FILT_BYP_EN               = 1,     /*!< EN : Bypass TIN input filter                                              */
} CTMR_CTRL_FILT_BYP_Enum;

/* =================================================  CTMR CTRL PD [9..9]  ================================================== */
typedef enum {                                  /*!< CTMR_CTRL_PD                                                             */
  CTMR_CTRL_PD_EN                     = 1,     /*!< EN : Power down (clock gate) timer                                        */
} CTMR_CTRL_PD_Enum;

/* =============================================  CTMR CTRL TOUT_POL [10..10]  ============================================== */
typedef enum {                                  /*!< CTMR_CTRL_TOUT_POL                                                       */
  CTMR_CTRL_TOUT_POL_INVERT           = 1,     /*!< INVERT : Invert TOUT signal(active low)                                   */
} CTMR_CTRL_TOUT_POL_Enum;

/* ==============================================  CTMR CTRL SLP_EN [11..11]  =============================================== */
typedef enum {                                  /*!< CTMR_CTRL_SLP_EN                                                         */
  CTMR_CTRL_SLP_EN_ACTIVE             = 1,     /*!< ACTIVE : Read-only state of Timer's PCR Sleep Enable bit                  */
} CTMR_CTRL_SLP_EN_Enum;

/* ==============================================  CTMR CTRL CLK_REQ [12..12]  ============================================== */
typedef enum {                                  /*!< CTMR_CTRL_CLK_REQ                                                        */
  CTMR_CTRL_CLK_REQ_ACTIVE            = 1,     /*!< ACTIVE : Read-only state of Timer's PCR Clock Required bit                */
} CTMR_CTRL_CLK_REQ_Enum;

/* =======================================================  CEV_CTRL  ======================================================== */
/* ============================================  CTMR CEV_CTRL TCLK_FREQ [0..3]  ============================================ */
typedef enum {                                  /*!< CTMR_CEV_CTRL_TCLK_FREQ                                                  */
  CTMR_CEV_CTRL_TCLK_FREQ_48M         = 0,     /*!< 48M : Select 48MHz timer clock                                            */
  CTMR_CEV_CTRL_TCLK_FREQ_24M         = 1,     /*!< 24M : Select 24MHz timer clock                                            */
  CTMR_CEV_CTRL_TCLK_FREQ_12M         = 2,     /*!< 12M : Select 12MHz timer clock                                            */
  CTMR_CEV_CTRL_TCLK_FREQ_6M          = 3,     /*!< 6M : Select 6MHz timer clock                                              */
  CTMR_CEV_CTRL_TCLK_FREQ_3M          = 4,     /*!< 3M : Select 3MHz timer clock                                              */
  CTMR_CEV_CTRL_TCLK_FREQ_1500K       = 5,     /*!< 1500K : Select 1500KHz timer clock                                        */
  CTMR_CEV_CTRL_TCLK_FREQ_750K        = 6,     /*!< 750K : Select 750KHz timer clock                                          */
  CTMR_CEV_CTRL_TCLK_FREQ_375K        = 7,     /*!< 375K : Select 375KHz timer clock                                          */
} CTMR_CEV_CTRL_TCLK_FREQ_Enum;

/* ==============================================  CTMR CEV_CTRL EDGE [5..6]  =============================================== */
typedef enum {                                  /*!< CTMR_CEV_CTRL_EDGE                                                       */
  CTMR_CEV_CTRL_EDGE_FALLING          = 0,     /*!< FALLING : Falling edge trigger                                            */
  CTMR_CEV_CTRL_EDGE_RISING           = 1,     /*!< RISING : Rising edge trigger                                              */
  CTMR_CEV_CTRL_EDGE_BOTH             = 2,     /*!< BOTH : Trigger on both edges                                              */
  CTMR_CEV_CTRL_EDGE_ONE_SHOT_EN      = 3,     /*!< ONE_SHOT_EN : Only for One shot mode: trigger when timer enable
                                                     set                                                                       */
} CTMR_CEV_CTRL_EDGE_Enum;

/* ============================================  CTMR CEV_CTRL EVENT_SRC [7..7]  ============================================ */
typedef enum {                                  /*!< CTMR_CEV_CTRL_EVENT_SRC                                                  */
  CTMR_CEV_CTRL_EVENT_SRC_OVERFLOW    = 0,     /*!< OVERFLOW : Event mode count source is overflow                            */
  CTMR_CEV_CTRL_EVENT_SRC_TIN         = 1,     /*!< TIN : Event mode count source in TIN pin                                  */
} CTMR_CEV_CTRL_EVENT_SRC_Enum;

/* ===========================================  CTMR CEV_CTRL FCLK_FREQ [8..11]  ============================================ */
typedef enum {                                  /*!< CTMR_CEV_CTRL_FCLK_FREQ                                                  */
  CTMR_CEV_CTRL_FCLK_FREQ_48M         = 0,     /*!< 48M : Select 48MHz timer clock                                            */
  CTMR_CEV_CTRL_FCLK_FREQ_24M         = 1,     /*!< 24M : Select 24MHz timer clock                                            */
  CTMR_CEV_CTRL_FCLK_FREQ_12M         = 2,     /*!< 12M : Select 12MHz timer clock                                            */
  CTMR_CEV_CTRL_FCLK_FREQ_6M          = 3,     /*!< 6M : Select 6MHz timer clock                                              */
  CTMR_CEV_CTRL_FCLK_FREQ_3M          = 4,     /*!< 3M : Select 3MHz timer clock                                              */
  CTMR_CEV_CTRL_FCLK_FREQ_1500K       = 5,     /*!< 1500K : Select 1500KHz timer clock                                        */
  CTMR_CEV_CTRL_FCLK_FREQ_750K        = 6,     /*!< 750K : Select 750KHz timer clock                                          */
  CTMR_CEV_CTRL_FCLK_FREQ_375K        = 7,     /*!< 375K : Select 375KHz timer clock                                          */
} CTMR_CEV_CTRL_FCLK_FREQ_Enum;

/* ========================================================  RELOAD  ========================================================= */
/* =========================================================  COUNT  ========================================================= */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CTMR_V1_H */
