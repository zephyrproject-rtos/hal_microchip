/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_CHIP_CFG_V1_2_H
#define _MEC5_CHIP_CFG_V1_2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Chip configuration (MEC_CHIP_CFG)
  */

typedef struct mec_chip_cfg_regs {              /*!< (@ 0x400FFF00) MEC_CHIP_CFG Structure                                     */
  __IM  uint32_t  RESERVED;
  __IM  uint16_t  RESERVED1;
  __IM  uint8_t   RESERVED2;
  __IOM uint8_t   LDSEL;                        /*!< (@ 0x00000007) Chip config logical device select                          */
  __IM  uint32_t  RESERVED3[5];
  __IM  uint32_t  DEVID;                        /*!< (@ 0x0000001C) Chip config device ID and revision                         */
  __IM  uint8_t   LEGID;                        /*!< (@ 0x00000020) Chip config legacy ID                                      */
  __IM  uint8_t   RESERVED4;
  __IM  uint16_t  RESERVED5;
  __IM  uint8_t   OTPID;                        /*!< (@ 0x00000024) Chip config OTP ID                                         */
  __IM  uint8_t   VDID;                         /*!< (@ 0x00000025) Chip config validation ID                                  */
  __IM  uint16_t  BRID;                         /*!< (@ 0x00000026) Chip config Boot-ROM ID                                    */
} MEC_CHIP_CFG_Type;                            /*!< Size = 40 (0x28)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  LDSEL  ========================================================= */
/* =========================================================  DEVID  ========================================================= */
#define MEC_CHIP_CFG_DEVID_REV_Pos        (0UL)                     /*!< REV (Bit 0)                                           */
#define MEC_CHIP_CFG_DEVID_REV_Msk        (0xffUL)                  /*!< REV (Bitfield-Mask: 0xff)                             */
#define MEC_CHIP_CFG_DEVID_PKG_Pos        (8UL)                     /*!< PKG (Bit 8)                                           */
#define MEC_CHIP_CFG_DEVID_PKG_Msk        (0xf00UL)                 /*!< PKG (Bitfield-Mask: 0x0f)                             */
#define MEC_CHIP_CFG_DEVID_FAM_Pos        (12UL)                    /*!< FAM (Bit 12)                                          */
#define MEC_CHIP_CFG_DEVID_FAM_Msk        (0xf000UL)                /*!< FAM (Bitfield-Mask: 0x0f)                             */
#define MEC_CHIP_CFG_DEVID_DID_Pos        (16UL)                    /*!< DID (Bit 16)                                          */
#define MEC_CHIP_CFG_DEVID_DID_Msk        (0xffff0000UL)            /*!< DID (Bitfield-Mask: 0xffff)                           */
/* =========================================================  LEGID  ========================================================= */
/* =========================================================  OTPID  ========================================================= */
/* =========================================================  VDID  ========================================================== */
/* =========================================================  BRID  ========================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  LDSEL  ========================================================= */
/* =========================================================  DEVID  ========================================================= */
/* ============================================  MEC_CHIP_CFG DEVID PKG [8..11]  ============================================= */
typedef enum {                                  /*!< MEC_CHIP_CFG_DEVID_PKG                                                    */
  MEC_CHIP_CFG_DEVID_PKG_UNDEF         = 0,     /*!< UNDEF : Undefined                                                         */
  MEC_CHIP_CFG_DEVID_PKG_64PIN         = 1,     /*!< 64PIN : 64-pin                                                            */
  MEC_CHIP_CFG_DEVID_PKG_84PIN         = 2,     /*!< 84PIN : 84-pin                                                            */
  MEC_CHIP_CFG_DEVID_PKG_128PIN        = 3,     /*!< 128PIN : 128-pin                                                          */
  MEC_CHIP_CFG_DEVID_PKG_144PIN        = 4,     /*!< 144PIN : 144-pin                                                          */
  MEC_CHIP_CFG_DEVID_PKG_176PIN        = 7,     /*!< 176PIN : 176-pin                                                          */
} MEC_CHIP_CFG_DEVID_PKG_Enum;

/* ============================================  MEC_CHIP_CFG DEVID FAM [12..15]  ============================================ */
typedef enum {                                  /*!< MEC_CHIP_CFG_DEVID_FAM                                                    */
  MEC_CHIP_CFG_DEVID_FAM_UNDEF         = 0,     /*!< UNDEF : Undefined                                                         */
  MEC_CHIP_CFG_DEVID_FAM_F1            = 1,     /*!< F1 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F2            = 2,     /*!< F2 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F3            = 3,     /*!< F3 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F4            = 4,     /*!< F4 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F5            = 5,     /*!< F5 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F6            = 6,     /*!< F6 : Family                                                               */
  MEC_CHIP_CFG_DEVID_FAM_F7            = 7,     /*!< F7 : Family                                                               */
} MEC_CHIP_CFG_DEVID_FAM_Enum;

/* ============================================  MEC_CHIP_CFG DEVID DID [16..31]  ============================================ */
typedef enum {                                  /*!< MEC_CHIP_CFG_DEVID_DID                                                    */
  MEC_CHIP_CFG_DEVID_DID_MEC15XX       = 32,    /*!< MEC15XX : MEC15XX ID                                                      */
  MEC_CHIP_CFG_DEVID_DID_MEC172X       = 34,    /*!< MEC172X : MEC172X ID                                                      */
  MEC_CHIP_CFG_DEVID_DID_MEC174X       = 38,    /*!< MEC174X : MEC174X ID                                                      */
  MEC_CHIP_CFG_DEVID_DID_MEC175X       = 41,    /*!< MEC175X : MEC175X ID                                                      */
} MEC_CHIP_CFG_DEVID_DID_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_CHIP_CFG_V1_2_H */
