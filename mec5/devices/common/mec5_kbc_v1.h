/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_KBC_V1_H
#define _MEC5_KBC_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Host/EC Mailbox communication (MEC_KBC0)
  */

typedef struct mec_kbc_regs {                   /*!< (@ 0x400F0400) MEC_KBC0 Structure                                         */
  __IOM uint8_t   KHDATA;                       /*!< (@ 0x00000000) KBC Host to EC Data(WO), EC to Host (Aux)Data
                                                                    (RO)                                                       */
  __IM  uint8_t   RESERVED[3];
  __IOM uint8_t   KHCMDSTS;                     /*!< (@ 0x00000004) KBC Host command(WO), Host status(RO)                      */
  __IM  uint8_t   RESERVED1[251];
  __IOM uint8_t   KHECD;                        /*!< (@ 0x00000100) KBC Host to/from EC data                                   */
  __IM  uint8_t   RESERVED2[3];
  __IOM uint8_t   KESTATUS;                     /*!< (@ 0x00000104) KBC EC Status                                              */
  __IM  uint8_t   RESERVED3[3];
  __IOM uint8_t   KECR;                         /*!< (@ 0x00000108) KBC EC control                                             */
  __IM  uint8_t   RESERVED4[3];
  __OM  uint8_t   KEAUXD;                       /*!< (@ 0x0000010C) KBC EC auxiliary data                                      */
  __IM  uint8_t   RESERVED5[7];
  __IOM uint8_t   KPCOBF;                       /*!< (@ 0x00000114) KBC PC OBF                                                 */
  __IM  uint8_t   RESERVED6[539];
  __IOM uint8_t   ACTV;                         /*!< (@ 0x00000330) Enable KBC                                                 */
} MEC_KBC_Type;                                 /*!< Size = 817 (0x331)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  KESTATUS  ======================================================== */
#define MEC_KBC_KESTATUS_OBF_Pos          (0UL)                     /*!< OBF (Bit 0)                                           */
#define MEC_KBC_KESTATUS_OBF_Msk          (0x1UL)                   /*!< OBF (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KESTATUS_IBF_Pos          (1UL)                     /*!< IBF (Bit 1)                                           */
#define MEC_KBC_KESTATUS_IBF_Msk          (0x2UL)                   /*!< IBF (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KESTATUS_UD0_Pos          (2UL)                     /*!< UD0 (Bit 2)                                           */
#define MEC_KBC_KESTATUS_UD0_Msk          (0x4UL)                   /*!< UD0 (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KESTATUS_CD_Pos           (3UL)                     /*!< CD (Bit 3)                                            */
#define MEC_KBC_KESTATUS_CD_Msk           (0x8UL)                   /*!< CD (Bitfield-Mask: 0x01)                              */
#define MEC_KBC_KESTATUS_UD1_Pos          (4UL)                     /*!< UD1 (Bit 4)                                           */
#define MEC_KBC_KESTATUS_UD1_Msk          (0x10UL)                  /*!< UD1 (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KESTATUS_AUXOBF_Pos       (5UL)                     /*!< AUXOBF (Bit 5)                                        */
#define MEC_KBC_KESTATUS_AUXOBF_Msk       (0x20UL)                  /*!< AUXOBF (Bitfield-Mask: 0x01)                          */
#define MEC_KBC_KESTATUS_UD2_Pos          (6UL)                     /*!< UD2 (Bit 6)                                           */
#define MEC_KBC_KESTATUS_UD2_Msk          (0xc0UL)                  /*!< UD2 (Bitfield-Mask: 0x03)                             */
/* =========================================================  KECR  ========================================================== */
#define MEC_KBC_KECR_UD3_Pos              (0UL)                     /*!< UD3 (Bit 0)                                           */
#define MEC_KBC_KECR_UD3_Msk              (0x1UL)                   /*!< UD3 (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KECR_SAEN_Pos             (1UL)                     /*!< SAEN (Bit 1)                                          */
#define MEC_KBC_KECR_SAEN_Msk             (0x2UL)                   /*!< SAEN (Bitfield-Mask: 0x01)                            */
#define MEC_KBC_KECR_PCOBFEN_Pos          (2UL)                     /*!< PCOBFEN (Bit 2)                                       */
#define MEC_KBC_KECR_PCOBFEN_Msk          (0x4UL)                   /*!< PCOBFEN (Bitfield-Mask: 0x01)                         */
#define MEC_KBC_KECR_UD4_Pos              (3UL)                     /*!< UD4 (Bit 3)                                           */
#define MEC_KBC_KECR_UD4_Msk              (0x18UL)                  /*!< UD4 (Bitfield-Mask: 0x03)                             */
#define MEC_KBC_KECR_OBFEN_Pos            (5UL)                     /*!< OBFEN (Bit 5)                                         */
#define MEC_KBC_KECR_OBFEN_Msk            (0x20UL)                  /*!< OBFEN (Bitfield-Mask: 0x01)                           */
#define MEC_KBC_KECR_UD5_Pos              (6UL)                     /*!< UD5 (Bit 6)                                           */
#define MEC_KBC_KECR_UD5_Msk              (0x40UL)                  /*!< UD5 (Bitfield-Mask: 0x01)                             */
#define MEC_KBC_KECR_AUXH_Pos             (7UL)                     /*!< AUXH (Bit 7)                                          */
#define MEC_KBC_KECR_AUXH_Msk             (0x80UL)                  /*!< AUXH (Bitfield-Mask: 0x01)                            */
/* ========================================================  KEAUXD  ========================================================= */
/* ========================================================  KPCOBF  ========================================================= */
#define MEC_KBC_KPCOBF_PCOBF_Pos          (0UL)                     /*!< PCOBF (Bit 0)                                         */
#define MEC_KBC_KPCOBF_PCOBF_Msk          (0x1UL)                   /*!< PCOBF (Bitfield-Mask: 0x01)                           */
/* =========================================================  ACTV  ========================================================== */
#define MEC_KBC_ACTV_ENABLE_Pos           (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_KBC_ACTV_ENABLE_Msk           (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =======================================================  KESTATUS  ======================================================== */
/* =============================================  MEC_KBC KESTATUS OBF [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_OBF                                                     */
  MEC_KBC_KESTATUS_OBF_ACTIVE         = 1,     /*!< ACTIVE : OBF status is active                                             */
} MEC_KBC_KESTATUS_OBF_Enum;

/* =============================================  MEC_KBC KESTATUS IBF [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_IBF                                                     */
  MEC_KBC_KESTATUS_IBF_ACTIVE         = 1,     /*!< ACTIVE : IBF status is active                                             */
} MEC_KBC_KESTATUS_IBF_Enum;

/* =============================================  MEC_KBC KESTATUS UD0 [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_UD0                                                     */
  MEC_KBC_KESTATUS_UD0_ACTIVE         = 1,     /*!< ACTIVE : UD0 status is active                                             */
} MEC_KBC_KESTATUS_UD0_Enum;

/* ==============================================  MEC_KBC KESTATUS CD [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_CD                                                      */
  MEC_KBC_KESTATUS_CD_CMD             = 1,     /*!< CMD : CD indicates command was written by the Host                        */
} MEC_KBC_KESTATUS_CD_Enum;

/* =============================================  MEC_KBC KESTATUS UD1 [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_UD1                                                     */
  MEC_KBC_KESTATUS_UD1_ACTIVE         = 1,     /*!< ACTIVE : UD1 status is active                                             */
} MEC_KBC_KESTATUS_UD1_Enum;

/* ============================================  MEC_KBC KESTATUS AUXOBF [5..5]  ============================================ */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_AUXOBF                                                  */
  MEC_KBC_KESTATUS_AUXOBF_ACTIVE      = 1,     /*!< ACTIVE : AUXOBF status is active                                          */
} MEC_KBC_KESTATUS_AUXOBF_Enum;

/* =============================================  MEC_KBC KESTATUS UD2 [6..7]  ============================================== */
typedef enum {                                  /*!< MEC_KBC_KESTATUS_UD2                                                     */
  MEC_KBC_KESTATUS_UD2_ZERO           = 0,     /*!< ZERO : UD2 is 00b                                                         */
  MEC_KBC_KESTATUS_UD2_ONE            = 1,     /*!< ONE : UD2 is 01b                                                          */
  MEC_KBC_KESTATUS_UD2_TWO            = 2,     /*!< TWO : UD2 is 10b                                                          */
  MEC_KBC_KESTATUS_UD2_THREE          = 3,     /*!< THREE : UD2 is 11b                                                        */
} MEC_KBC_KESTATUS_UD2_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_KBC_V1_H */
