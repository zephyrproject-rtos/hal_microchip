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
  * @brief PS/2 controller (PS2)
  */

typedef struct ps2_regs {                       /*!< (@ 0x40009000) PS2 Structure                                         */
  __IOM uint8_t   RTXB;                         /*!< (@ 0x00000000) PS2 receive buffer(RO), transmit buffer(WO)                */
  __IM  uint8_t   RESERVED[3];
  __IOM uint8_t   CTRL;                         /*!< (@ 0x00000004) PS2 control                                                */
  __IM  uint8_t   RESERVED1[3];
  __IOM uint8_t   STATUS;                       /*!< (@ 0x00000008) PS2 status                                                 */
} PS2_Type;                                     /*!< Size = 9 (0x9)                                                            */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  RTXB  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
#define PS2_CTRL_TREN_Pos                 (0UL)                     /*!< TREN (Bit 0)                                          */
#define PS2_CTRL_TREN_Msk                 (0x1UL)                   /*!< TREN (Bitfield-Mask: 0x01)                            */
#define PS2_CTRL_ENABLE_Pos               (1UL)                     /*!< ENABLE (Bit 1)                                        */
#define PS2_CTRL_ENABLE_Msk               (0x2UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define PS2_CTRL_PARITY_Pos               (2UL)                     /*!< PARITY (Bit 2)                                        */
#define PS2_CTRL_PARITY_Msk               (0xcUL)                   /*!< PARITY (Bitfield-Mask: 0x03)                          */
#define PS2_CTRL_STOP_Pos                 (4UL)                     /*!< STOP (Bit 4)                                          */
#define PS2_CTRL_STOP_Msk                 (0x30UL)                  /*!< STOP (Bitfield-Mask: 0x03)                            */
/* ========================================================  STATUS  ========================================================= */
#define PS2_STATUS_RDRDY_Pos              (0UL)                     /*!< RDRDY (Bit 0)                                         */
#define PS2_STATUS_RDRDY_Msk              (0x1UL)                   /*!< RDRDY (Bitfield-Mask: 0x01)                           */
#define PS2_STATUS_RXTMO_Pos              (1UL)                     /*!< RXTMO (Bit 1)                                         */
#define PS2_STATUS_RXTMO_Msk              (0x2UL)                   /*!< RXTMO (Bitfield-Mask: 0x01)                           */
#define PS2_STATUS_PE_Pos                 (2UL)                     /*!< PE (Bit 2)                                            */
#define PS2_STATUS_PE_Msk                 (0x4UL)                   /*!< PE (Bitfield-Mask: 0x01)                              */
#define PS2_STATUS_FE_Pos                 (3UL)                     /*!< FE (Bit 3)                                            */
#define PS2_STATUS_FE_Msk                 (0x8UL)                   /*!< FE (Bitfield-Mask: 0x01)                              */
#define PS2_STATUS_TXIDLE_Pos             (4UL)                     /*!< TXIDLE (Bit 4)                                        */
#define PS2_STATUS_TXIDLE_Msk             (0x10UL)                  /*!< TXIDLE (Bitfield-Mask: 0x01)                          */
#define PS2_STATUS_TXTMO_Pos              (5UL)                     /*!< TXTMO (Bit 5)                                         */
#define PS2_STATUS_TXTMO_Msk              (0x20UL)                  /*!< TXTMO (Bitfield-Mask: 0x01)                           */
#define PS2_STATUS_RXBUSY_Pos             (6UL)                     /*!< RXBUSY (Bit 6)                                        */
#define PS2_STATUS_RXBUSY_Msk             (0x40UL)                  /*!< RXBUSY (Bitfield-Mask: 0x01)                          */
#define PS2_STATUS_TXSTTMO_Pos            (7UL)                     /*!< TXSTTMO (Bit 7)                                       */
#define PS2_STATUS_TXSTTMO_Msk            (0x80UL)                  /*!< TXSTTMO (Bitfield-Mask: 0x01)                         */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  RTXB  ========================================================== */
/* =========================================================  CTRL  ========================================================== */
/* ===============================================  PS2 CTRL TREN [0..0]  =============================================== */
typedef enum {                             /*!< PS2_CTRL_TREN                                                        */
  PS2_CTRL_TREN_ON                = 1,     /*!< ON : Enable                                                               */
} PS2_CTRL_TREN_Enum;

/* ==============================================  PS2 CTRL ENABLE [1..1]  ============================================== */
typedef enum {                             /*!< PS2_CTRL_ENABLE                                                      */
  PS2_CTRL_ENABLE_ON              = 1,     /*!< ON : Enable                                                               */
} PS2_CTRL_ENABLE_Enum;

/* ==============================================  PS2 CTRL PARITY [2..3]  ============================================== */
typedef enum {                             /*!< PS2_CTRL_PARITY                                                      */
  PS2_CTRL_PARITY_ODD             = 0,     /*!< ODD : Odd parity                                                          */
  PS2_CTRL_PARITY_EVEN            = 1,     /*!< EVEN : Even parity                                                        */
  PS2_CTRL_PARITY_IGNORE          = 2,     /*!< IGNORE : 10th bit is not intepreted as parity                             */
} PS2_CTRL_PARITY_Enum;

/* ===============================================  PS2 CTRL STOP [4..5]  =============================================== */
typedef enum {                             /*!< PS2_CTRL_STOP                                                        */
  PS2_CTRL_STOP_HI                = 0,     /*!< HI : Receiver expects active High STOP bit                                */
  PS2_CTRL_STOP_LO                = 1,     /*!< LO : Receiver expects active Low STOP bit                                 */
  PS2_CTRL_STOP_IGNORE            = 2,     /*!< IGNORE : Receiver ignores STOP(11th bit not interpreted as STOP)          */
} PS2_CTRL_STOP_Enum;

/* ========================================================  STATUS  ========================================================= */
/* =============================================  PS2 STATUS RDRDY [0..0]  ============================================== */
typedef enum {                             /*!< PS2_STATUS_RDRDY                                                     */
  PS2_STATUS_RDRDY_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_RDRDY_Enum;

/* =============================================  PS2 STATUS RXTMO [1..1]  ============================================== */
typedef enum {                             /*!< PS2_STATUS_RXTMO                                                     */
  PS2_STATUS_RXTMO_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_RXTMO_Enum;

/* ===============================================  PS2 STATUS PE [2..2]  =============================================== */
typedef enum {                             /*!< PS2_STATUS_PE                                                        */
  PS2_STATUS_PE_ACTIVE            = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_PE_Enum;

/* ===============================================  PS2 STATUS FE [3..3]  =============================================== */
typedef enum {                             /*!< PS2_STATUS_FE                                                        */
  PS2_STATUS_FE_ACTIVE            = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_FE_Enum;

/* =============================================  PS2 STATUS TXIDLE [4..4]  ============================================= */
typedef enum {                             /*!< PS2_STATUS_TXIDLE                                                    */
  PS2_STATUS_TXIDLE_ACTIVE        = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_TXIDLE_Enum;

/* =============================================  PS2 STATUS TXTMO [5..5]  ============================================== */
typedef enum {                             /*!< PS2_STATUS_TXTMO                                                     */
  PS2_STATUS_TXTMO_ACTIVE         = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_TXTMO_Enum;

/* =============================================  PS2 STATUS RXBUSY [6..6]  ============================================= */
typedef enum {                             /*!< PS2_STATUS_RXBUSY                                                    */
  PS2_STATUS_RXBUSY_ACTIVE        = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_RXBUSY_Enum;

/* ============================================  PS2 STATUS TXSTTMO [7..7]  ============================================= */
typedef enum {                             /*!< PS2_STATUS_TXSTTMO                                                   */
  PS2_STATUS_TXSTTMO_ACTIVE       = 1,     /*!< ACTIVE : Active                                                           */
} PS2_STATUS_TXSTTMO_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_PS2_V1_H */
