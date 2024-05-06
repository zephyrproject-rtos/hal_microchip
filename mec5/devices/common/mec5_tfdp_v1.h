/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_TFDP_V1_H
#define _MEC5_TFDP_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Trace FIFO Debug Port (TFDP)
  */

typedef struct tfdp_regs {                      /*!< (@ 0x40008C00) TFDP Structure                                            */
  __IOM uint8_t   DATA;                         /*!< (@ 0x00000000) TFDP data                                                  */
  __IM  uint8_t   RESERVED[3];
  __IOM uint8_t   CTRL;                         /*!< (@ 0x00000004) TFDP control                                               */
} TFDP_Type;                                    /*!< Size = 5 (0x5)                                                            */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  DATA  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
#define TFDP_CTRL_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define TFDP_CTRL_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define TFDP_CTRL_EDGE_SEL_Pos            (1UL)                     /*!< EDGE_SEL (Bit 1)                                      */
#define TFDP_CTRL_EDGE_SEL_Msk            (0x2UL)                   /*!< EDGE_SEL (Bitfield-Mask: 0x01)                        */
#define TFDP_CTRL_CLKDIV_Pos              (2UL)                     /*!< CLKDIV (Bit 2)                                        */
#define TFDP_CTRL_CLKDIV_Msk              (0xcUL)                   /*!< CLKDIV (Bitfield-Mask: 0x03)                          */
#define TFDP_CTRL_IPDLY_Pos               (4UL)                     /*!< IPDLY (Bit 4)                                         */
#define TFDP_CTRL_IPDLY_Msk               (0x70UL)                  /*!< IPDLY (Bitfield-Mask: 0x07)                           */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  DATA  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  TFDP CTRL ENABLE [0..0]  ================================================ */
typedef enum {                                  /*!< TFDP_CTRL_ENABLE                                                         */
  TFDP_CTRL_ENABLE_ON                 = 1,     /*!< ON : Enable                                                               */
} TFDP_CTRL_ENABLE_Enum;

/* ==============================================  TFDP CTRL EDGE_SEL [1..1]  =============================================== */
typedef enum {                                  /*!< TFDP_CTRL_EDGE_SEL                                                       */
  TFDP_CTRL_EDGE_SEL_RISING           = 0,     /*!< RISING : Rising Edge                                                      */
  TFDP_CTRL_EDGE_SEL_FALLING          = 1,     /*!< FALLING : Falling Edge                                                    */
} TFDP_CTRL_EDGE_SEL_Enum;

/* ===============================================  TFDP CTRL CLKDIV [2..3]  ================================================ */
typedef enum {                                  /*!< TFDP_CTRL_CLKDIV                                                         */
  TFDP_CTRL_CLKDIV_24M                = 0,     /*!< 24M : 24MHz                                                               */
  TFDP_CTRL_CLKDIV_12M                = 1,     /*!< 12M : 12MHz                                                               */
  TFDP_CTRL_CLKDIV_6M                 = 2,     /*!< 6M : 6MHz                                                                 */
} TFDP_CTRL_CLKDIV_Enum;

/* ================================================  TFDP CTRL IPDLY [4..6]  ================================================ */
typedef enum {                                  /*!< TFDP_CTRL_IPDLY                                                          */
  TFDP_CTRL_IPDLY_1CLK                = 0,     /*!< 1CLK : 1 TFDP clock1 delay                                                */
  TFDP_CTRL_IPDLY_2CLK                = 1,     /*!< 2CLK : 2 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_3CLK                = 2,     /*!< 3CLK : 3 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_4CLK                = 3,     /*!< 4CLK : 4 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_5CLK                = 4,     /*!< 5CLK : 5 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_6CLK                = 5,     /*!< 6CLK : 6 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_7CLK                = 6,     /*!< 7CLK : 7 TFDP clocks delay                                                */
  TFDP_CTRL_IPDLY_8CLK                = 7,     /*!< 8CLK : 8 TFDP clocks delay                                                */
} TFDP_CTRL_IPDLY_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_TFDP_V1_H */
