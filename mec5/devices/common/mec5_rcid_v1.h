/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_RCID_V1_H
#define _MEC5_RCID_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief RC ID (MEC_RCID)
  */

typedef struct mec_rcid_regs {                  /*!< (@ 0x40001400) MEC_RCID Structure                                        */
  __IOM uint32_t  CTRL;                         /*!< (@ 0x00000000) RC ID control                                              */
  __IOM uint32_t  DATA;                         /*!< (@ 0x00000004) RC ID 16-bit data                                          */
} MEC_RCID_Type;                                /*!< Size = 8 (0x8)                                                            */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_RCID_CTRL_DONE_Pos            (0UL)                     /*!< DONE (Bit 0)                                          */
#define MEC_RCID_CTRL_DONE_Msk            (0x1UL)                   /*!< DONE (Bitfield-Mask: 0x01)                            */
#define MEC_RCID_CTRL_TC_Pos              (1UL)                     /*!< TC (Bit 1)                                            */
#define MEC_RCID_CTRL_TC_Msk              (0x2UL)                   /*!< TC (Bitfield-Mask: 0x01)                              */
#define MEC_RCID_CTRL_CY_Pos              (2UL)                     /*!< CY (Bit 2)                                            */
#define MEC_RCID_CTRL_CY_Msk              (0x4UL)                   /*!< CY (Bitfield-Mask: 0x01)                              */
#define MEC_RCID_CTRL_START_Pos           (6UL)                     /*!< START (Bit 6)                                         */
#define MEC_RCID_CTRL_START_Msk           (0x40UL)                  /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_RCID_CTRL_ENABLE_Pos          (7UL)                     /*!< ENABLE (Bit 7)                                        */
#define MEC_RCID_CTRL_ENABLE_Msk          (0x80UL)                  /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_RCID_CTRL_CLKSEL_Pos          (8UL)                     /*!< CLKSEL (Bit 8)                                        */
#define MEC_RCID_CTRL_CLKSEL_Msk          (0x300UL)                 /*!< CLKSEL (Bitfield-Mask: 0x03)                          */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ==============================================  MEC_RCID CTRL DONE [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_RCID_CTRL_DONE                                                       */
  MEC_RCID_CTRL_DONE_ACTIVE           = 1,     /*!< ACTIVE : Done status is active                                            */
} MEC_RCID_CTRL_DONE_Enum;

/* ===============================================  MEC_RCID CTRL TC [1..1]  ================================================ */
typedef enum {                                  /*!< MEC_RCID_CTRL_TC                                                         */
  MEC_RCID_CTRL_TC_ACTIVE             = 1,     /*!< ACTIVE : Discharge phase is complete status                               */
} MEC_RCID_CTRL_TC_Enum;

/* ===============================================  MEC_RCID CTRL CY [2..2]  ================================================ */
typedef enum {                                  /*!< MEC_RCID_CTRL_CY                                                         */
  MEC_RCID_CTRL_CY_ACTIVE             = 1,     /*!< ACTIVE : Measurement error status is active                               */
} MEC_RCID_CTRL_CY_Enum;

/* ==============================================  MEC_RCID CTRL START [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_RCID_CTRL_START                                                      */
  MEC_RCID_CTRL_START_MEAS            = 1,     /*!< MEAS : Measurement start                                                  */
} MEC_RCID_CTRL_START_Enum;

/* =============================================  MEC_RCID CTRL ENABLE [7..7]  ============================================== */
typedef enum {                                  /*!< MEC_RCID_CTRL_ENABLE                                                     */
  MEC_RCID_CTRL_ENABLE_ON             = 1,     /*!< ON : Enable RC-ID block(ungate clocks)                                    */
} MEC_RCID_CTRL_ENABLE_Enum;

/* =============================================  MEC_RCID CTRL CLKSEL [8..9]  ============================================== */
typedef enum {                                  /*!< MEC_RCID_CTRL_CLKSEL                                                     */
  MEC_RCID_CTRL_CLKSEL_48M            = 0,     /*!< 48M : Select 48MHz clock                                                  */
  MEC_RCID_CTRL_CLKSEL_24M            = 1,     /*!< 24M : Select 24MHz clock                                                  */
  MEC_RCID_CTRL_CLKSEL_12M            = 2,     /*!< 12M : Select 12MHz clock                                                  */
  MEC_RCID_CTRL_CLKSEL_6M             = 3,     /*!< 6M : Select 6MHz clock                                                    */
} MEC_RCID_CTRL_CLKSEL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_RCID_V1_H */
