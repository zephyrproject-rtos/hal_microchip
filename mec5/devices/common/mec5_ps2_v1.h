/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PS2_V1_H
#define _MEC5_PS2_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief PS/2 controller 0 (MEC_PS2CTL)
  */

typedef struct mec_ps2_regs {                   /*!< (@ 0x40009000) MEC_PS2CTL Structure                                      */
  __IOM uint8_t   RTXB;                         /*!< (@ 0x00000000) PS2 receive buffer(RO), transmit buffer(WO)                */
  __IM  uint8_t   RESERVED[3];
  __IOM uint8_t   CTRL;                         /*!< (@ 0x00000004) PS2 control                                                */
  __IM  uint8_t   RESERVED1[3];
  __IOM uint8_t   STATUS;                       /*!< (@ 0x00000008) PS2 status                                                 */
} MEC_PS2_Type;                                 /*!< Size = 9 (0x9)                                                            */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_PS2_CTRL_TREN_Pos             (0UL)                     /*!< TREN (Bit 0)                                          */
#define MEC_PS2_CTRL_TREN_Msk             (0x1UL)                   /*!< TREN (Bitfield-Mask: 0x01)                            */
#define MEC_PS2_CTRL_ENABLE_Pos           (1UL)                     /*!< ENABLE (Bit 1)                                        */
#define MEC_PS2_CTRL_ENABLE_Msk           (0x2UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MEC_PS2_CTRL_PARITY_Pos           (2UL)                     /*!< PARITY (Bit 2)                                        */
#define MEC_PS2_CTRL_PARITY_Msk           (0xcUL)                   /*!< PARITY (Bitfield-Mask: 0x03)                          */
#define MEC_PS2_CTRL_STOP_Pos             (4UL)                     /*!< STOP (Bit 4)                                          */
#define MEC_PS2_CTRL_STOP_Msk             (0x30UL)                  /*!< STOP (Bitfield-Mask: 0x03)                            */
/* ========================================================  STATUS  ========================================================= */
#define MEC_PS2_STATUS_RDRDY_Pos          (0UL)                     /*!< RDRDY (Bit 0)                                         */
#define MEC_PS2_STATUS_RDRDY_Msk          (0x1UL)                   /*!< RDRDY (Bitfield-Mask: 0x01)                           */
#define MEC_PS2_STATUS_RXTMO_Pos          (1UL)                     /*!< RXTMO (Bit 1)                                         */
#define MEC_PS2_STATUS_RXTMO_Msk          (0x2UL)                   /*!< RXTMO (Bitfield-Mask: 0x01)                           */
#define MEC_PS2_STATUS_PE_Pos             (2UL)                     /*!< PE (Bit 2)                                            */
#define MEC_PS2_STATUS_PE_Msk             (0x4UL)                   /*!< PE (Bitfield-Mask: 0x01)                              */
#define MEC_PS2_STATUS_FE_Pos             (3UL)                     /*!< FE (Bit 3)                                            */
#define MEC_PS2_STATUS_FE_Msk             (0x8UL)                   /*!< FE (Bitfield-Mask: 0x01)                              */
#define MEC_PS2_STATUS_TXIDLE_Pos         (4UL)                     /*!< TXIDLE (Bit 4)                                        */
#define MEC_PS2_STATUS_TXIDLE_Msk         (0x10UL)                  /*!< TXIDLE (Bitfield-Mask: 0x01)                          */
#define MEC_PS2_STATUS_TXTMO_Pos          (5UL)                     /*!< TXTMO (Bit 5)                                         */
#define MEC_PS2_STATUS_TXTMO_Msk          (0x20UL)                  /*!< TXTMO (Bitfield-Mask: 0x01)                           */
#define MEC_PS2_STATUS_RXBUSY_Pos         (6UL)                     /*!< RXBUSY (Bit 6)                                        */
#define MEC_PS2_STATUS_RXBUSY_Msk         (0x40UL)                  /*!< RXBUSY (Bitfield-Mask: 0x01)                          */
#define MEC_PS2_STATUS_TXSTTMO_Pos        (7UL)                     /*!< TXSTTMO (Bit 7)                                       */
#define MEC_PS2_STATUS_TXSTTMO_Msk        (0x80UL)                  /*!< TXSTTMO (Bitfield-Mask: 0x01)                         */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* =============================================  MEC_PS2CTL CTRL TREN [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_PS2CTL_CTRL_TREN                                                     */
  MEC_PS2CTL_CTRL_TREN_ON             = 1,     /*!< ON : Enable                                                               */
} MEC_PS2CTL_CTRL_TREN_Enum;

/* ============================================  MEC_PS2CTL CTRL ENABLE [1..1]  ============================================= */
typedef enum {                                  /*!< MEC_PS2CTL_CTRL_ENABLE                                                   */
  MEC_PS2CTL_CTRL_ENABLE_ON           = 1,     /*!< ON : Enable                                                               */
} MEC_PS2CTL_CTRL_ENABLE_Enum;

/* ============================================  MEC_PS2CTL CTRL PARITY [2..3]  ============================================= */
typedef enum {                                  /*!< MEC_PS2CTL_CTRL_PARITY                                                   */
  MEC_PS2CTL_CTRL_PARITY_ODD          = 0,     /*!< ODD : Odd parity                                                          */
  MEC_PS2CTL_CTRL_PARITY_EVEN         = 1,     /*!< EVEN : Even parity                                                        */
  MEC_PS2CTL_CTRL_PARITY_IGNORE       = 2,     /*!< IGNORE : 10th bit is not intepreted as parity                             */
} MEC_PS2CTL_CTRL_PARITY_Enum;

/* =============================================  MEC_PS2CTL CTRL STOP [4..5]  ============================================== */
typedef enum {                                  /*!< MEC_PS2CTL_CTRL_STOP                                                     */
  MEC_PS2CTL_CTRL_STOP_HI             = 0,     /*!< HI : Receiver expects active High STOP bit                                */
  MEC_PS2CTL_CTRL_STOP_LO             = 1,     /*!< LO : Receiver expects active Low STOP bit                                 */
  MEC_PS2CTL_CTRL_STOP_IGNORE         = 2,     /*!< IGNORE : Receiver ignores STOP(11th bit not interpreted as STOP)          */
} MEC_PS2CTL_CTRL_STOP_Enum;

/* ========================================================  STATUS  ========================================================= */
/* ============================================  MEC_PS2CTL STATUS RDRDY [0..0]  ============================================ */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_RDRDY                                                  */
  MEC_PS2CTL_STATUS_RDRDY_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_RDRDY_Enum;

/* ============================================  MEC_PS2CTL STATUS RXTMO [1..1]  ============================================ */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_RXTMO                                                  */
  MEC_PS2CTL_STATUS_RXTMO_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_RXTMO_Enum;

/* =============================================  MEC_PS2CTL STATUS PE [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_PE                                                     */
  MEC_PS2CTL_STATUS_PE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_PE_Enum;

/* =============================================  MEC_PS2CTL STATUS FE [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_FE                                                     */
  MEC_PS2CTL_STATUS_FE_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_FE_Enum;

/* ===========================================  MEC_PS2CTL STATUS TXIDLE [4..4]  ============================================ */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_TXIDLE                                                 */
  MEC_PS2CTL_STATUS_TXIDLE_ACTIVE     = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_TXIDLE_Enum;

/* ============================================  MEC_PS2CTL STATUS TXTMO [5..5]  ============================================ */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_TXTMO                                                  */
  MEC_PS2CTL_STATUS_TXTMO_ACTIVE      = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_TXTMO_Enum;

/* ===========================================  MEC_PS2CTL STATUS RXBUSY [6..6]  ============================================ */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_RXBUSY                                                 */
  MEC_PS2CTL_STATUS_RXBUSY_ACTIVE     = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_RXBUSY_Enum;

/* ===========================================  MEC_PS2CTL STATUS TXSTTMO [7..7]  =========================================== */
typedef enum {                                  /*!< MEC_PS2CTL_STATUS_TXSTTMO                                                */
  MEC_PS2CTL_STATUS_TXSTTMO_ACTIVE    = 1,     /*!< ACTIVE : Active                                                           */
} MEC_PS2CTL_STATUS_TXSTTMO_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_PS2_V1_H */
