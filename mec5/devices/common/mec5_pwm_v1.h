/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PWM_V1_H
#define _MEC5_PWM_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Pulse width modulator (MEC_PWM0)
  */

typedef struct mec_pwm_regs {                   /*!< (@ 0x40005800) MEC_PWM0 Structure                                         */
  __IOM uint32_t  CNT_ON;                       /*!< (@ 0x00000000) PWM counter on                                             */
  __IOM uint32_t  CNT_OFF;                      /*!< (@ 0x00000004) PWM counter off                                            */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000008) PWM configuration                                          */
} MEC_PWM_Type;                                 /*!< Size = 12 (0xc)                                                           */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
#define MEC_PWM_CONFIG_ENABLE_Pos         (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_PWM_CONFIG_ENABLE_Msk         (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_PWM_CONFIG_CLK_SRC_SLOW_Pos   (1UL)                     /*!< CLK_SRC_SLOW (Bit 1)                                  */
#define MEC_PWM_CONFIG_CLK_SRC_SLOW_Msk   (0x2UL)                   /*!< CLK_SRC_SLOW (Bitfield-Mask: 0x01)                    */
#define MEC_PWM_CONFIG_INVERT_Pos         (2UL)                     /*!< INVERT (Bit 2)                                        */
#define MEC_PWM_CONFIG_INVERT_Msk         (0x4UL)                   /*!< INVERT (Bitfield-Mask: 0x01)                          */
#define MEC_PWM_CONFIG_CLKDIV_Pos         (3UL)                     /*!< CLKDIV (Bit 3)                                        */
#define MEC_PWM_CONFIG_CLKDIV_Msk         (0x78UL)                  /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  CONFIG  ========================================================= */
/* =============================================  MEC_PWM CONFIG ENABLE [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_PWM_CONFIG_ENABLE                                                    */
  MEC_PWM_CONFIG_ENABLE_ON            = 1,     /*!< ON : Enable                                                               */
} MEC_PWM_CONFIG_ENABLE_Enum;

/* ==========================================  MEC_PWM CONFIG CLK_SRC_SLOW [1..1]  ========================================== */
typedef enum {                                  /*!< MEC_PWM_CONFIG_CLK_SRC_SLOW                                              */
  MEC_PWM_CONFIG_CLK_SRC_SLOW_ENABLE  = 1,     /*!< ENABLE : Use PCR slow clock as PWM source instead of 48MHz AHB
                                                     clock                                                                     */
} MEC_PWM_CONFIG_CLK_SRC_SLOW_Enum;

/* =============================================  MEC_PWM CONFIG INVERT [2..2]  ============================================= */
typedef enum {                                  /*!< MEC_PWM_CONFIG_INVERT                                                    */
  MEC_PWM_CONFIG_INVERT_EN            = 1,     /*!< EN : Invert output                                                        */
} MEC_PWM_CONFIG_INVERT_Enum;

/* =============================================  MEC_PWM CONFIG CLKDIV [3..6]  ============================================= */
typedef enum {                                  /*!< MEC_PWM_CONFIG_CLKDIV                                                    */
  MEC_PWM_CONFIG_CLKDIV_PR1           = 0,     /*!< PR1 : Pre-divider = 1                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR2           = 1,     /*!< PR2 : Pre-divider = 2                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR3           = 2,     /*!< PR3 : Pre-divider = 3                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR4           = 3,     /*!< PR4 : Pre-divider = 4                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR5           = 4,     /*!< PR5 : Pre-divider = 5                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR6           = 5,     /*!< PR6 : Pre-divider = 6                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR7           = 6,     /*!< PR7 : Pre-divider = 7                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR8           = 7,     /*!< PR8 : Pre-divider = 8                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR9           = 8,     /*!< PR9 : Pre-divider = 9                                                     */
  MEC_PWM_CONFIG_CLKDIV_PR10          = 9,     /*!< PR10 : Pre-divider = 10                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR11          = 10,    /*!< PR11 : Pre-divider = 11                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR12          = 11,    /*!< PR12 : Pre-divider = 12                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR13          = 12,    /*!< PR13 : Pre-divider = 13                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR14          = 13,    /*!< PR14 : Pre-divider = 14                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR15          = 14,    /*!< PR15 : Pre-divider = 15                                                   */
  MEC_PWM_CONFIG_CLKDIV_PR16          = 15,    /*!< PR16 : Pre-divider = 16                                                   */
} MEC_PWM_CONFIG_CLKDIV_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_PWM_V1_H */
