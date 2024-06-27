/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_GPIO_8F_6PORT_V1_5_H
#define _MEC5_GPIO_8F_6PORT_V1_5_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief GPIO pin control and access as register arrays (MEC_GPIO)
  */

typedef struct mec_gpio_regs {                  /*!< (@ 0x40081000) MEC_GPIO Structure                                         */
  __IOM uint32_t  CTRL[192];                    /*!< (@ 0x00000000) GPIO Control n                                             */
  __IOM uint32_t  PARIN[6];                     /*!< (@ 0x00000300) GPIO bank n parallel input                                 */
  __IM  uint32_t  RESERVED[26];
  __IOM uint32_t  PAROUT[6];                    /*!< (@ 0x00000380) GPIO bank n parallel outpu                                 */
  __IM  uint32_t  RESERVED1[20];
  __IOM uint32_t  LOCK[6];                      /*!< (@ 0x000003E8) Lock registers for each GPIO bank of pins                  */
  __IM  uint32_t  RESERVED2[64];
  __IOM uint32_t  CTL2[192];                    /*!< (@ 0x00000500) GPIO n Control 2: Drive str. and slew control              */
} MEC_GPIO_Type;                                /*!< Size = 2048 (0x800)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_GPIO_CTRL_PUD_Pos             (0UL)                     /*!< PUD (Bit 0)                                           */
#define MEC_GPIO_CTRL_PUD_Msk             (0x3UL)                   /*!< PUD (Bitfield-Mask: 0x03)                             */
#define MEC_GPIO_CTRL_PGS_Pos             (2UL)                     /*!< PGS (Bit 2)                                           */
#define MEC_GPIO_CTRL_PGS_Msk             (0xcUL)                   /*!< PGS (Bitfield-Mask: 0x03)                             */
#define MEC_GPIO_CTRL_IDET_Pos            (4UL)                     /*!< IDET (Bit 4)                                          */
#define MEC_GPIO_CTRL_IDET_Msk            (0xf0UL)                  /*!< IDET (Bitfield-Mask: 0x0f)                            */
#define MEC_GPIO_CTRL_OBT_Pos             (8UL)                     /*!< OBT (Bit 8)                                           */
#define MEC_GPIO_CTRL_OBT_Msk             (0x100UL)                 /*!< OBT (Bitfield-Mask: 0x01)                             */
#define MEC_GPIO_CTRL_DIR_Pos             (9UL)                     /*!< DIR (Bit 9)                                           */
#define MEC_GPIO_CTRL_DIR_Msk             (0x200UL)                 /*!< DIR (Bitfield-Mask: 0x01)                             */
#define MEC_GPIO_CTRL_PAREN_Pos           (10UL)                    /*!< PAREN (Bit 10)                                        */
#define MEC_GPIO_CTRL_PAREN_Msk           (0x400UL)                 /*!< PAREN (Bitfield-Mask: 0x01)                           */
#define MEC_GPIO_CTRL_ALTPOL_Pos          (11UL)                    /*!< ALTPOL (Bit 11)                                       */
#define MEC_GPIO_CTRL_ALTPOL_Msk          (0x800UL)                 /*!< ALTPOL (Bitfield-Mask: 0x01)                          */
#define MEC_GPIO_CTRL_MUX_Pos             (12UL)                    /*!< MUX (Bit 12)                                          */
#define MEC_GPIO_CTRL_MUX_Msk             (0x7000UL)                /*!< MUX (Bitfield-Mask: 0x07)                             */
#define MEC_GPIO_CTRL_INPD_Pos            (15UL)                    /*!< INPD (Bit 15)                                         */
#define MEC_GPIO_CTRL_INPD_Msk            (0x8000UL)                /*!< INPD (Bitfield-Mask: 0x01)                            */
#define MEC_GPIO_CTRL_ALTVAL_Pos          (16UL)                    /*!< ALTVAL (Bit 16)                                       */
#define MEC_GPIO_CTRL_ALTVAL_Msk          (0x10000UL)               /*!< ALTVAL (Bitfield-Mask: 0x01)                          */
#define MEC_GPIO_CTRL_PADIN_Pos           (24UL)                    /*!< PADIN (Bit 24)                                        */
#define MEC_GPIO_CTRL_PADIN_Msk           (0x1000000UL)             /*!< PADIN (Bitfield-Mask: 0x01)                           */
/* =========================================================  PARIN  ========================================================= */
/* ========================================================  PAROUT  ========================================================= */
/* =========================================================  LOCK  ========================================================== */
/* =========================================================  CTL2  ========================================================== */
#define MEC_GPIO_CTL2_SLR_Pos             (0UL)                     /*!< SLR (Bit 0)                                           */
#define MEC_GPIO_CTL2_SLR_Msk             (0x1UL)                   /*!< SLR (Bitfield-Mask: 0x01)                             */
#define MEC_GPIO_CTL2_DRVSTR_Pos          (4UL)                     /*!< DRVSTR (Bit 4)                                        */
#define MEC_GPIO_CTL2_DRVSTR_Msk          (0x30UL)                  /*!< DRVSTR (Bitfield-Mask: 0x03)                          */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  MEC_GPIO CTRL PUD [0..1]  ================================================ */
typedef enum {                                  /*!< MEC_GPIO_CTRL_PUD                                                         */
  MEC_GPIO_CTRL_PUD_NONE               = 0,     /*!< NONE : No internal pull up/down enabled                                   */
  MEC_GPIO_CTRL_PUD_PULLUP             = 1,     /*!< PULLUP : Enable internal(weak) pull up resistor                           */
  MEC_GPIO_CTRL_PUD_PULLDN             = 2,     /*!< PULLDN : Enable internal(weak) pull down resistor                         */
  MEC_GPIO_CTRL_PUD_REPEATER           = 3,     /*!< REPEATER : Pin kept at previous voltage level when no active
                                                     driver present                                                            */
} MEC_GPIO_CTRL_PUD_Enum;

/* ===============================================  MEC_GPIO CTRL PGS [2..3]  ================================================ */
typedef enum {                                  /*!< MEC_GPIO_CTRL_PGS                                                         */
  MEC_GPIO_CTRL_PGS_VTR                = 0,     /*!< VTR : Pin output buffer tri-stated when VTR_PWRGD is 0                    */
  MEC_GPIO_CTRL_PGS_VCC                = 1,     /*!< VCC : Pin output buffer tri-stated when VCC_PWRGD is 0                    */
  MEC_GPIO_CTRL_PGS_UNPWRD             = 2,     /*!< UNPWRD : Disable pin input and output                                     */
  MEC_GPIO_CTRL_PGS_RSVD               = 3,     /*!< RSVD : Reserved value                                                     */
} MEC_GPIO_CTRL_PGS_Enum;

/* ===============================================  MEC_GPIO CTRL IDET [4..7]  =============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTRL_IDET                                                        */
  MEC_GPIO_CTRL_IDET_LVL_LO            = 0,     /*!< LVL_LO : Level Low interrupt detection                                    */
  MEC_GPIO_CTRL_IDET_LVL_HI            = 1,     /*!< LVL_HI : Level High interrupt detection                                   */
  MEC_GPIO_CTRL_IDET_DIS               = 4,     /*!< DIS : Interrupt detection is disabled                                     */
  MEC_GPIO_CTRL_IDET_REDGE             = 13,    /*!< REDGE : Rising edge interrupt detection                                   */
  MEC_GPIO_CTRL_IDET_FEDGE             = 14,    /*!< FEDGE : Falling edge interrupt detection                                  */
  MEC_GPIO_CTRL_IDET_BEDGE             = 15,    /*!< BEDGE : Both edges interrupt detection                                    */
} MEC_GPIO_CTRL_IDET_Enum;

/* ===============================================  MEC_GPIO CTRL OBT [8..8]  ================================================ */
typedef enum {                                  /*!< MEC_GPIO_CTRL_OBT                                                         */
  MEC_GPIO_CTRL_OBT_PUSH_PULL          = 0,     /*!< PUSH_PULL : Output buffer is push-pull                                    */
  MEC_GPIO_CTRL_OBT_OPEN_DRAIN         = 1,     /*!< OPEN_DRAIN : Output buffer is open-drain                                  */
} MEC_GPIO_CTRL_OBT_Enum;

/* ===============================================  MEC_GPIO CTRL DIR [9..9]  ================================================ */
typedef enum {                                  /*!< MEC_GPIO_CTRL_DIR                                                         */
  MEC_GPIO_CTRL_DIR_INPUT              = 0,     /*!< INPUT : GPIO is in input mode                                             */
  MEC_GPIO_CTRL_DIR_OUTPUT             = 1,     /*!< OUTPUT : GPIO is in output mode                                           */
} MEC_GPIO_CTRL_DIR_Enum;

/* =============================================  MEC_GPIO CTRL PAREN [10..10]  ============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTRL_PAREN                                                       */
  MEC_GPIO_CTRL_PAREN_DISABLE          = 0,     /*!< DISABLE : Disable parallel(grouped) output bit. Output state
                                                     is Control register bit[16]                                               */
  MEC_GPIO_CTRL_PAREN_ENABLE           = 1,     /*!< ENABLE : Enable parallel(grouped) output bit. Control register
                                                     bit[16] disabled                                                          */
} MEC_GPIO_CTRL_PAREN_Enum;

/* =============================================  MEC_GPIO CTRL ALTPOL [11..11]  ============================================= */
typedef enum {                                  /*!< MEC_GPIO_CTRL_ALTPOL                                                      */
  MEC_GPIO_CTRL_ALTPOL_NORM            = 0,     /*!< NORM : Pin alternate function polarity is normal                          */
  MEC_GPIO_CTRL_ALTPOL_INVERT          = 1,     /*!< INVERT : Pin alternate function polarity is inverted                      */
} MEC_GPIO_CTRL_ALTPOL_Enum;

/* ==============================================  MEC_GPIO CTRL MUX [12..14]  =============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTRL_MUX                                                         */
  MEC_GPIO_CTRL_MUX_GPIO               = 0,     /*!< GPIO : GPIO function                                                      */
  MEC_GPIO_CTRL_MUX_FUNC1              = 1,     /*!< FUNC1 : Pin function 1                                                    */
  MEC_GPIO_CTRL_MUX_FUNC2              = 2,     /*!< FUNC2 : Pin function 2                                                    */
  MEC_GPIO_CTRL_MUX_FUNC3              = 3,     /*!< FUNC3 : Pin function 3                                                    */
  MEC_GPIO_CTRL_MUX_FUNC4              = 4,     /*!< FUNC4 : Pin function 4                                                    */
  MEC_GPIO_CTRL_MUX_FUNC5              = 5,     /*!< FUNC5 : Pin function 5                                                    */
  MEC_GPIO_CTRL_MUX_FUNC6              = 6,     /*!< FUNC6 : Pin function 6                                                    */
  MEC_GPIO_CTRL_MUX_FUNC7              = 7,     /*!< FUNC7 : Pin function 7                                                    */
} MEC_GPIO_CTRL_MUX_Enum;

/* ==============================================  MEC_GPIO CTRL INPD [15..15]  ============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTRL_INPD                                                        */
  MEC_GPIO_CTRL_INPD_PAD_EN            = 0,     /*!< PAD_EN : Input pad is Not disabled                                        */
  MEC_GPIO_CTRL_INPD_PAD_DIS           = 1,     /*!< PAD_DIS : Input pad is disabled                                           */
} MEC_GPIO_CTRL_INPD_Enum;

/* =============================================  MEC_GPIO CTRL ALTVAL [16..16]  ============================================= */
typedef enum {                                  /*!< MEC_GPIO_CTRL_ALTVAL                                                      */
  MEC_GPIO_CTRL_ALTVAL_LO              = 0,     /*!< LO : Drive GPIO pin output low                                            */
  MEC_GPIO_CTRL_ALTVAL_HI              = 1,     /*!< HI : Drive GPIO pin output high                                           */
} MEC_GPIO_CTRL_ALTVAL_Enum;

/* =============================================  MEC_GPIO CTRL PADIN [24..24]  ============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTRL_PADIN                                                       */
  MEC_GPIO_CTRL_PADIN_LO               = 0,     /*!< LO : GPIO input pad value is low                                          */
  MEC_GPIO_CTRL_PADIN_HI               = 1,     /*!< HI : GPIO input pad value is high                                         */
} MEC_GPIO_CTRL_PADIN_Enum;

/* =========================================================  PARIN  ========================================================= */
/* ========================================================  PAROUT  ========================================================= */
/* =========================================================  LOCK  ========================================================== */
/* =====================================================  MEC_GPIO LOCK  ===================================================== */
typedef enum {                                  /*!< MEC_GPIO_LOCK                                                             */
  MEC_GPIO_LOCK5_IDX                   = 0,     /*!< LOCK5_IDX : Array index for GPIO LOCK5                                    */
  MEC_GPIO_LOCK4_IDX                   = 1,     /*!< LOCK4_IDX : Array index for GPIO LOCK4                                    */
  MEC_GPIO_LOCK3_IDX                   = 2,     /*!< LOCK3_IDX : Array index for GPIO LOCK3                                    */
  MEC_GPIO_LOCK2_IDX                   = 3,     /*!< LOCK2_IDX : Array index for GPIO LOCK2                                    */
  MEC_GPIO_LOCK1_IDX                   = 4,     /*!< LOCK1_IDX : Array index for GPIO LOCK1                                    */
  MEC_GPIO_LOCK0_IDX                   = 5,     /*!< LOCK0_IDX : Array index for GPIO LOCK0                                    */
} MEC_GPIO_Enum;

/* =========================================================  CTL2  ========================================================== */
/* ===============================================  MEC_GPIO CTL2 SLR [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_GPIO_CTL2_SLR                                                         */
  MEC_GPIO_CTL2_SLR_SLOW               = 0,     /*!< SLOW : Slow(half-frequency) slew rate                                     */
  MEC_GPIO_CTL2_SLR_FAST               = 1,     /*!< FAST : Fast slew rate                                                     */
} MEC_GPIO_CTL2_SLR_Enum;

/* ==============================================  MEC_GPIO CTL2 DRVSTR [4..5]  ============================================== */
typedef enum {                                  /*!< MEC_GPIO_CTL2_DRVSTR                                                      */
  MEC_GPIO_CTL2_DRVSTR_2MA             = 0,     /*!< 2MA : Driver strength is 2 mA                                             */
  MEC_GPIO_CTL2_DRVSTR_4MA             = 1,     /*!< 4MA : Driver strength is 4 mA                                             */
  MEC_GPIO_CTL2_DRVSTR_8MA             = 2,     /*!< 8MA : Driver strength is 8 mA                                             */
  MEC_GPIO_CTL2_DRVSTR_12MA            = 3,     /*!< 12MA : Driver strength is 12 mA                                           */
} MEC_GPIO_CTL2_DRVSTR_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_GPIO_8F_6PORT_V1_5_H */
