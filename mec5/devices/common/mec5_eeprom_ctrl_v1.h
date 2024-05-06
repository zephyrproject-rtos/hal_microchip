/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_EEPROM_CTRL_V1_H
#define _MEC5_EEPROM_CTRL_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief EEPROM Controller interface to optional internal EEPROM (EEPROM_CTRL0)
  */

typedef struct eeprom_ctrl_regs {               /*!< (@ 0x40002C00) EEPROM_CTRL Structure                                     */
  __IOM uint32_t  MODE;                         /*!< (@ 0x00000000) Mode register                                              */
  __IOM uint32_t  EXE;                          /*!< (@ 0x00000004) Execute register                                           */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000008) Controller status register                                 */
  __IOM uint32_t  INTR_EN;                      /*!< (@ 0x0000000C) Interrupt enable register                                  */
  __OM  uint32_t  PSWD;                         /*!< (@ 0x00000010) EEPROM password register is write-once and stores
                                                                    a 31-bit password to lock the controller                   */
  __OM  uint32_t  UNLOCK;                       /*!< (@ 0x00000014) EEPROM unlock register. Value written is compared
                                                                    to stored password and access is unlocked
                                                                    on match                                                   */
  __IOM uint32_t  LOCK;                         /*!< (@ 0x00000018) EEPROM lock enable register. Enable lock feature           */
  __IM  uint32_t  RESERVED;
  __IOM uint32_t  DATA[8];                      /*!< (@ 0x00000020) EEPROM data buffer register array for the 32-byte
                                                                    data buffer                                                */
} EEPROM_CTRL_Type;                             /*!< Size = 64 (0x40)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  MODE  ========================================================== */
#define EEPROM_CTRL_MODE_ACTV_Pos         (0UL)                     /*!< ACTV (Bit 0)                                          */
#define EEPROM_CTRL_MODE_ACTV_Msk         (0x1UL)                   /*!< ACTV (Bitfield-Mask: 0x01)                            */
#define EEPROM_CTRL_MODE_SRST_Pos         (1UL)                     /*!< SRST (Bit 1)                                          */
#define EEPROM_CTRL_MODE_SRST_Msk         (0x2UL)                   /*!< SRST (Bitfield-Mask: 0x01)                            */
/* ==========================================================  EXE  ========================================================== */
#define EEPROM_CTRL_EXE_TADDR_Pos         (0UL)                     /*!< TADDR (Bit 0)                                         */
#define EEPROM_CTRL_EXE_TADDR_Msk         (0xffffUL)                /*!< TADDR (Bitfield-Mask: 0xffff)                         */
#define EEPROM_CTRL_EXE_CMD_Pos           (16UL)                    /*!< CMD (Bit 16)                                          */
#define EEPROM_CTRL_EXE_CMD_Msk           (0x70000UL)               /*!< CMD (Bitfield-Mask: 0x07)                             */
#define EEPROM_CTRL_EXE_XFRSZ_Pos         (24UL)                    /*!< XFRSZ (Bit 24)                                        */
#define EEPROM_CTRL_EXE_XFRSZ_Msk         (0x1f000000UL)            /*!< XFRSZ (Bitfield-Mask: 0x1f)                           */
/* ========================================================  STATUS  ========================================================= */
#define EEPROM_CTRL_STATUS_XFR_DONE_Pos   (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define EEPROM_CTRL_STATUS_XFR_DONE_Msk   (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define EEPROM_CTRL_STATUS_ERROR_Pos      (1UL)                     /*!< ERROR (Bit 1)                                         */
#define EEPROM_CTRL_STATUS_ERROR_Msk      (0x2UL)                   /*!< ERROR (Bitfield-Mask: 0x01)                           */
#define EEPROM_CTRL_STATUS_XFR_ACTIVE_Pos (8UL)                     /*!< XFR_ACTIVE (Bit 8)                                    */
#define EEPROM_CTRL_STATUS_XFR_ACTIVE_Msk (0x100UL)                 /*!< XFR_ACTIVE (Bitfield-Mask: 0x01)                      */
/* ========================================================  INTR_EN  ======================================================== */
#define EEPROM_CTRL_INTR_EN_XFR_DONE_Pos  (0UL)                     /*!< XFR_DONE (Bit 0)                                      */
#define EEPROM_CTRL_INTR_EN_XFR_DONE_Msk  (0x1UL)                   /*!< XFR_DONE (Bitfield-Mask: 0x01)                        */
#define EEPROM_CTRL_INTR_EN_ERROR_Pos     (1UL)                     /*!< ERROR (Bit 1)                                         */
#define EEPROM_CTRL_INTR_EN_ERROR_Msk     (0x2UL)                   /*!< ERROR (Bitfield-Mask: 0x01)                           */
/* =========================================================  PSWD  ========================================================== */
/* ========================================================  UNLOCK  ========================================================= */
/* =========================================================  LOCK  ========================================================== */
#define EEPROM_CTRL_LOCK_JTAG_LOCK_Pos    (0UL)                     /*!< JTAG_LOCK (Bit 0)                                     */
#define EEPROM_CTRL_LOCK_JTAG_LOCK_Msk    (0x1UL)                   /*!< JTAG_LOCK (Bitfield-Mask: 0x01)                       */
#define EEPROM_CTRL_LOCK_LOCK_Pos         (1UL)                     /*!< LOCK (Bit 1)                                          */
#define EEPROM_CTRL_LOCK_LOCK_Msk         (0x2UL)                   /*!< LOCK (Bitfield-Mask: 0x01)                            */
/* =========================================================  DATA  ========================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =============================================  EEPROM_CTRL0 EXE CMD [16..18]  ============================================= */
typedef enum {                                  /*!< EEPROM_CTRL0_EXE_CMD                                                      */
  EEPROM_CTRL0_EXE_CMD_READ            = 0,     /*!< READ : Read data from EEPROM                                              */
  EEPROM_CTRL0_EXE_CMD_WRITE           = 1,     /*!< WRITE : Write data to EEPROM                                              */
  EEPROM_CTRL0_EXE_CMD_RDSTS           = 2,     /*!< RDSTS : Read status byte from EEPROM                                      */
  EEPROM_CTRL0_EXE_CMD_WRSTS           = 3,     /*!< WRSTS : Write status byte in EEPROM                                       */
} EEPROM_CTRL0_EXE_CMD_Enum;

/* ============================================  EEPROM_CTRL0 EXE XFRSZ [24..28]  ============================================ */
typedef enum {                                  /*!< EEPROM_CTRL0_EXE_XFRSZ                                                    */
  EEPROM_CTRL0_EXE_XFRSZ_MAX_BYTES32   = 0,     /*!< MAX_BYTES32 : Transfer maximum size of 32 bytes                           */
  EEPROM_CTRL0_EXE_XFRSZ_BYTES1        = 1,     /*!< BYTES1 : Transfer one byte                                                */
  EEPROM_CTRL0_EXE_XFRSZ_BYTES2        = 2,     /*!< BYTES2 : Transfer two bytes                                               */
  EEPROM_CTRL0_EXE_XFRSZ_BYTES3        = 3,     /*!< BYTES3 : Transfer three bytes                                             */
  EEPROM_CTRL0_EXE_XFRSZ_BYTES4        = 4,     /*!< BYTES4 : Transfer four bytes                                              */
  EEPROM_CTRL0_EXE_XFRSZ_BYTES31       = 31,    /*!< BYTES31 : Transfer 31 bytes                                               */
} EEPROM_CTRL0_EXE_XFRSZ_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_EEPROM_CTRL_V1_H */
