/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_PECI_V1_H
#define _MEC5_PECI_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief Platform Environment Control Interface (MEC_PECI0)
  */

typedef struct mec_peci_regs {                  /*!< (@ 0x40006400) MEC_PECI0 Structure                                        */
    __IOM uint8_t  WR_DATA;                     /*!< (@ 0x00000000) PECI write data                                            */
    __IM  uint8_t  RSVD1[3];
    __IOM uint8_t  RD_DATA;                     /*!< (@ 0x00000004) PECI read data                                             */
    __IM  uint8_t  RSVD2[3];
    __IOM uint8_t  CTRL;                        /*!< (@ 0x00000008) PECI control                                               */
    __IM  uint8_t  RSVD3[3];
    __IOM uint8_t  STATUS1;                     /*!< (@ 0x0000000C) PECI status 1                                              */
    __IM  uint8_t  RSVD4[3];
    __IM  uint8_t  STATUS2;                     /*!< (@ 0x00000010) PECI status 2                                              */
    __IM  uint8_t  RSVD5[3];
    __IOM uint8_t  ERROR;                       /*!< (@ 0x00000014) PECI error status register                                 */
    __IM  uint8_t  RSVD6[3];
    __IOM uint8_t  IEN1;                        /*!< (@ 0x00000018) PECI interrupt enable 1                                    */
    __IM  uint8_t  RSVD7[3];
    __IOM uint8_t  IEN2;                        /*!< (@ 0x0000001C) PECI interrupt enable 2                                    */
    __IM  uint8_t  RSVD8[3];
    __IOM uint8_t  OPTBTM_LO;                   /*!< (@ 0x00000020) PECI optimal bit time LSB                                  */
    __IM  uint8_t  RSVD9[3];
    __IOM uint8_t  OPTBTM_HI;                   /*!< (@ 0x00000024) PECI optimal bit time MSB                                  */
    __IM  uint8_t  RSVD10[3];
    __IOM uint8_t  REQ_TIMER_LSB;               /*!< (@ 0x00000028) PECI Request timer LSB                                     */
    __IM  uint8_t  RSVD11[3];
    __IOM uint8_t  REQ_TIMER_MSB;               /*!< (@ 0x0000002C) PECI Request timer MSB                                     */
    __IM  uint8_t  RSVD12[3];
    __IOM uint16_t BAUD_CTRL;                   /*!< (@ 0x00000030) PECI BAUD control                                          */
    __IM  uint16_t RSVD13[7];
    __IM  uint32_t BLKID;                       /*!< (@ 0x00000040) PECI block ID                                              */
    __IM  uint32_t REVID;                       /*!< (@ 0x00000044) PECI revision ID                                           */
    __IOM uint8_t  SSTCTL1;                     /*!< (@ 0x00000048) PECI Host SST Control 1                                    */
    __IM  uint8_t  RSVD14[3];
} MEC_PECI_Type;                                /*!< Size = 76 (0x4c)                                                          */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
#define MEC_PECI_CTRL_PWRDN_Pos           (0UL)                     /*!< PWRDN (Bit 0)                                         */
#define MEC_PECI_CTRL_PWRDN_Msk           (0x1UL)                   /*!< PWRDN (Bitfield-Mask: 0x01)                           */
#define MEC_PECI_CTRL_RST_Pos             (3UL)                     /*!< RST (Bit 3)                                           */
#define MEC_PECI_CTRL_RST_Msk             (0x8UL)                   /*!< RST (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_CTRL_FRST_Pos            (5UL)                     /*!< FRST (Bit 5)                                          */
#define MEC_PECI_CTRL_FRST_Msk            (0x20UL)                  /*!< FRST (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_CTRL_TXEN_Pos            (6UL)                     /*!< TXEN (Bit 6)                                          */
#define MEC_PECI_CTRL_TXEN_Msk            (0x40UL)                  /*!< TXEN (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_CTRL_MIEN_Pos            (7UL)                     /*!< MIEN (Bit 7)                                          */
#define MEC_PECI_CTRL_MIEN_Msk            (0x80UL)                  /*!< MIEN (Bitfield-Mask: 0x01)                            */
/* ========================================================  STATUS1  ======================================================== */
#define MEC_PECI_STATUS1_BOF_Pos          (0UL)                     /*!< BOF (Bit 0)                                           */
#define MEC_PECI_STATUS1_BOF_Msk          (0x1UL)                   /*!< BOF (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS1_EOF_Pos          (1UL)                     /*!< EOF (Bit 1)                                           */
#define MEC_PECI_STATUS1_EOF_Msk          (0x2UL)                   /*!< EOF (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS1_ERR_Pos          (2UL)                     /*!< ERR (Bit 2)                                           */
#define MEC_PECI_STATUS1_ERR_Msk          (0x4UL)                   /*!< ERR (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS1_MINT_Pos         (7UL)                     /*!< MINT (Bit 7)                                          */
#define MEC_PECI_STATUS1_MINT_Msk         (0x80UL)                  /*!< MINT (Bitfield-Mask: 0x01)                            */
/* ========================================================  STATUS2  ======================================================== */
#define MEC_PECI_STATUS2_WFF_Pos          (0UL)                     /*!< WFF (Bit 0)                                           */
#define MEC_PECI_STATUS2_WFF_Msk          (0x1UL)                   /*!< WFF (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS2_WFE_Pos          (1UL)                     /*!< WFE (Bit 1)                                           */
#define MEC_PECI_STATUS2_WFE_Msk          (0x2UL)                   /*!< WFE (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS2_RFF_Pos          (2UL)                     /*!< RFF (Bit 2)                                           */
#define MEC_PECI_STATUS2_RFF_Msk          (0x4UL)                   /*!< RFF (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS2_RFE_Pos          (3UL)                     /*!< RFE (Bit 3)                                           */
#define MEC_PECI_STATUS2_RFE_Msk          (0x8UL)                   /*!< RFE (Bitfield-Mask: 0x01)                             */
#define MEC_PECI_STATUS2_IDLE_Pos         (7UL)                     /*!< IDLE (Bit 7)                                          */
#define MEC_PECI_STATUS2_IDLE_Msk         (0x80UL)                  /*!< IDLE (Bitfield-Mask: 0x01)                            */
/* =========================================================  ERROR  ========================================================= */
#define MEC_PECI_ERROR_FERR_Pos           (0UL)                     /*!< FERR (Bit 0)                                          */
#define MEC_PECI_ERROR_FERR_Msk           (0x1UL)                   /*!< FERR (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_ERROR_BERR_Pos           (1UL)                     /*!< BERR (Bit 1)                                          */
#define MEC_PECI_ERROR_BERR_Msk           (0x2UL)                   /*!< BERR (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_ERROR_WROV_Pos           (4UL)                     /*!< WROV (Bit 4)                                          */
#define MEC_PECI_ERROR_WROV_Msk           (0x10UL)                  /*!< WROV (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_ERROR_WRUN_Pos           (5UL)                     /*!< WRUN (Bit 5)                                          */
#define MEC_PECI_ERROR_WRUN_Msk           (0x20UL)                  /*!< WRUN (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_ERROR_RDOV_Pos           (6UL)                     /*!< RDOV (Bit 6)                                          */
#define MEC_PECI_ERROR_RDOV_Msk           (0x40UL)                  /*!< RDOV (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_ERROR_CLKERR_Pos         (7UL)                     /*!< CLKERR (Bit 7)                                        */
#define MEC_PECI_ERROR_CLKERR_Msk         (0x80UL)                  /*!< CLKERR (Bitfield-Mask: 0x01)                          */
/* =========================================================  IEN1  ========================================================== */
#define MEC_PECI_IEN1_BIEN_Pos            (0UL)                     /*!< BIEN (Bit 0)                                          */
#define MEC_PECI_IEN1_BIEN_Msk            (0x1UL)                   /*!< BIEN (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_IEN1_EIEN_Pos            (1UL)                     /*!< EIEN (Bit 1)                                          */
#define MEC_PECI_IEN1_EIEN_Msk            (0x2UL)                   /*!< EIEN (Bitfield-Mask: 0x01)                            */
#define MEC_PECI_IEN1_EREN_Pos            (2UL)                     /*!< EREN (Bit 2)                                          */
#define MEC_PECI_IEN1_EREN_Msk            (0x4UL)                   /*!< EREN (Bitfield-Mask: 0x01)                            */
/* =========================================================  IEN2  ========================================================== */
#define MEC_PECI_IEN2_ENWFE_Pos           (1UL)                     /*!< ENWFE (Bit 1)                                         */
#define MEC_PECI_IEN2_ENWFE_Msk           (0x2UL)                   /*!< ENWFE (Bitfield-Mask: 0x01)                           */
#define MEC_PECI_IEN2_ENRFF_Pos           (2UL)                     /*!< ENRFF (Bit 2)                                         */
#define MEC_PECI_IEN2_ENRFF_Msk           (0x4UL)                   /*!< ENRFF (Bitfield-Mask: 0x01)                           */
/* ========================================================  SSTCTL1  ======================================================== */
#define MEC_PECI_SSTCTL1_DNBTC_Pos        (0UL)                     /*!< DNBTC (Bit 0)                                         */
#define MEC_PECI_SSTCTL1_DNBTC_Msk        (0x1UL)                   /*!< DNBTC (Bitfield-Mask: 0x01)                           */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CTRL  ========================================================== */
/* ==============================================  MEC_PECI CTRL PWRDN [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_CTRL_PWRDN                                                      */
  MEC_PECI_CTRL_PWRDN_EN              = 1,     /*!< EN : Enable power down                                                    */
} MEC_PECI_CTRL_PWRDN_Enum;

/* ===============================================  MEC_PECI CTRL RST [3..3]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_CTRL_RST                                                        */
  MEC_PECI_CTRL_RST_EN                = 1,     /*!< EN : Enable soft reset                                                    */
} MEC_PECI_CTRL_RST_Enum;

/* ==============================================  MEC_PECI CTRL FRST [5..5]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_CTRL_FRST                                                       */
  MEC_PECI_CTRL_FRST_EN               = 1,     /*!< EN : Enable FIFO reset                                                    */
} MEC_PECI_CTRL_FRST_Enum;

/* ==============================================  MEC_PECI CTRL TXEN [6..6]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_CTRL_TXEN                                                       */
  MEC_PECI_CTRL_TXEN_ON               = 1,     /*!< ON : Enable transmit                                                      */
} MEC_PECI_CTRL_TXEN_Enum;

/* ==============================================  MEC_PECI CTRL MIEN [7..7]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_CTRL_MIEN                                                       */
  MEC_PECI_CTRL_MIEN_ON               = 1,     /*!< ON : Enable PECI controller interrupts                                    */
} MEC_PECI_CTRL_MIEN_Enum;

/* ========================================================  STATUS1  ======================================================== */
/* =============================================  MEC_PECI STATUS1 BOF [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS1_BOF                                                     */
  MEC_PECI_STATUS1_BOF_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS1_BOF_Enum;

/* =============================================  MEC_PECI STATUS1 EOF [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS1_EOF                                                     */
  MEC_PECI_STATUS1_EOF_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS1_EOF_Enum;

/* =============================================  MEC_PECI STATUS1 ERR [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS1_ERR                                                     */
  MEC_PECI_STATUS1_ERR_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS1_ERR_Enum;

/* =============================================  MEC_PECI STATUS1 MINT [7..7]  ============================================= */
typedef enum {                                  /*!< MEC_PECI_STATUS1_MINT                                                    */
  MEC_PECI_STATUS1_MINT_ACTIVE        = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS1_MINT_Enum;

/* ========================================================  STATUS2  ======================================================== */
/* =============================================  MEC_PECI STATUS2 WFF [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS2_WFF                                                     */
  MEC_PECI_STATUS2_WFF_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS2_WFF_Enum;

/* =============================================  MEC_PECI STATUS2 WFE [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS2_WFE                                                     */
  MEC_PECI_STATUS2_WFE_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS2_WFE_Enum;

/* =============================================  MEC_PECI STATUS2 RFF [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS2_RFF                                                     */
  MEC_PECI_STATUS2_RFF_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS2_RFF_Enum;

/* =============================================  MEC_PECI STATUS2 RFE [3..3]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_STATUS2_RFE                                                     */
  MEC_PECI_STATUS2_RFE_ACTIVE         = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS2_RFE_Enum;

/* =============================================  MEC_PECI STATUS2 IDLE [7..7]  ============================================= */
typedef enum {                                  /*!< MEC_PECI_STATUS2_IDLE                                                    */
  MEC_PECI_STATUS2_IDLE_ACTIVE        = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_STATUS2_IDLE_Enum;

/* =========================================================  ERROR  ========================================================= */
/* ==============================================  MEC_PECI ERROR FERR [0..0]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_ERROR_FERR                                                      */
  MEC_PECI_ERROR_FERR_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_FERR_Enum;

/* ==============================================  MEC_PECI ERROR BERR [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_ERROR_BERR                                                      */
  MEC_PECI_ERROR_BERR_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_BERR_Enum;

/* ==============================================  MEC_PECI ERROR WROV [4..4]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_ERROR_WROV                                                      */
  MEC_PECI_ERROR_WROV_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_WROV_Enum;

/* ==============================================  MEC_PECI ERROR WRUN [5..5]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_ERROR_WRUN                                                      */
  MEC_PECI_ERROR_WRUN_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_WRUN_Enum;

/* ==============================================  MEC_PECI ERROR RDOV [6..6]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_ERROR_RDOV                                                      */
  MEC_PECI_ERROR_RDOV_ACTIVE          = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_RDOV_Enum;

/* =============================================  MEC_PECI ERROR CLKERR [7..7]  ============================================= */
typedef enum {                                  /*!< MEC_PECI_ERROR_CLKERR                                                    */
  MEC_PECI_ERROR_CLKERR_ACTIVE        = 1,     /*!< ACTIVE : Status active                                                    */
} MEC_PECI_ERROR_CLKERR_Enum;

/* =========================================================  IEN1  ========================================================== */
/* ==============================================  MEC_PECI IEN1 BIEN [0..0]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_IEN1_BIEN                                                       */
  MEC_PECI_IEN1_BIEN_ON               = 1,     /*!< ON : Enable                                                               */
} MEC_PECI_IEN1_BIEN_Enum;

/* ==============================================  MEC_PECI IEN1 EIEN [1..1]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_IEN1_EIEN                                                       */
  MEC_PECI_IEN1_EIEN_ON               = 1,     /*!< ON : Enable                                                               */
} MEC_PECI_IEN1_EIEN_Enum;

/* ==============================================  MEC_PECI IEN1 EREN [2..2]  =============================================== */
typedef enum {                                  /*!< MEC_PECI_IEN1_EREN                                                       */
  MEC_PECI_IEN1_EREN_ON               = 1,     /*!< ON : Enable                                                               */
} MEC_PECI_IEN1_EREN_Enum;

/* =========================================================  IEN2  ========================================================== */
/* ==============================================  MEC_PECI IEN2 ENWFE [1..1]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_IEN2_ENWFE                                                      */
  MEC_PECI_IEN2_ENWFE_ON              = 1,     /*!< ON : Enable                                                               */
} MEC_PECI_IEN2_ENWFE_Enum;

/* ==============================================  MEC_PECI IEN2 ENRFF [2..2]  ============================================== */
typedef enum {                                  /*!< MEC_PECI_IEN2_ENRFF                                                      */
  MEC_PECI_IEN2_ENRFF_ON              = 1,     /*!< ON : Enable                                                               */
} MEC_PECI_IEN2_ENRFF_Enum;

/* ========================================================  SSTCTL1  ======================================================== */
/* ============================================  MEC_PECI SSTCTL1 DNBTC [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_PECI_SSTCTL1_DNBTC                                                   */
  MEC_PECI_SSTCTL1_DNBTC_ON           = 1,     /*!< ON : Set bit to disable                                                   */
} MEC_PECI_SSTCTL1_DNBTC_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_PECI_V1_H */
