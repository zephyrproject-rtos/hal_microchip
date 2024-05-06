/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_BCL_V1_H
#define _MEC5_BCL_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief BC-Link controller (BCL)
  */

typedef struct bcl_regs {                       /*!< (@ 0x4000CD00) BCL Structure                                             */
  __IOM uint32_t  STATUS;                       /*!< (@ 0x00000000) BCL status                                             */
  __IOM uint32_t  DESTA;                        /*!< (@ 0x00000004) BCL destination address                                */
  __IOM uint32_t  DATA;                         /*!< (@ 0x00000008) BCL data                                               */
  __IOM uint32_t  CLKSEL;                       /*!< (@ 0x0000000C) BCL clock select                                       */
} BCL_Type;                                     /*!< Size = 16 (0x10)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* ========================================================  STATUS  ========================================================= */
#define BCL_STATUS_BUSY_Pos               (0UL)                     /*!< BUSY (Bit 0)                                          */
#define BCL_STATUS_BUSY_Msk               (0x1UL)                   /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define BCL_STATUS_BCLR_IEN_Pos           (4UL)                     /*!< BCLR_IEN (Bit 4)                                      */
#define BCL_STATUS_BCLR_IEN_Msk           (0x10UL)                  /*!< BCLR_IEN (Bitfield-Mask: 0x01)                        */
#define BCL_STATUS_BERR_IEN_Pos           (5UL)                     /*!< BERR_IEN (Bit 5)                                      */
#define BCL_STATUS_BERR_IEN_Msk           (0x20UL)                  /*!< BERR_IEN (Bitfield-Mask: 0x01)                        */
#define BCL_STATUS_BCERR_Pos              (6UL)                     /*!< BCERR (Bit 6)                                         */
#define BCL_STATUS_BCERR_Msk              (0x40UL)                  /*!< BCERR (Bitfield-Mask: 0x01)                           */
#define BCL_STATUS_SRST_Pos               (7UL)                     /*!< SRST (Bit 7)                                          */
#define BCL_STATUS_SRST_Msk               (0x80UL)                  /*!< SRST (Bitfield-Mask: 0x01)                            */
/* =========================================================  DESTA  ========================================================= */
/* =========================================================  DATA  ========================================================== */
/* ========================================================  CLKSEL  ========================================================= */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ========================================================  STATUS  ========================================================= */
/* ================================================  BCL STATUS BUSY [0..0]  ================================================ */
typedef enum {                                  /*!< BCL_STATUS_BUSY                                                          */
  BCL_STATUS_BUSY_ACTIVE              = 1,     /*!< ACTIVE : Active                                                           */
} BCL_STATUS_BUSY_Enum;

/* ==============================================  BCL STATUS BCLR_IEN [4..4]  ============================================== */
typedef enum {                                  /*!< BCL_STATUS_BCLR_IEN                                                      */
  BCL_STATUS_BCLR_IEN_EN              = 1,     /*!< EN : Enable                                                               */
} BCL_STATUS_BCLR_IEN_Enum;

/* ==============================================  BCL STATUS BERR_IEN [5..5]  ============================================== */
typedef enum {                                  /*!< BCL_STATUS_BERR_IEN                                                      */
  BCL_STATUS_BERR_IEN_EN              = 1,     /*!< EN : Enable                                                               */
} BCL_STATUS_BERR_IEN_Enum;

/* ===============================================  BCL STATUS BCERR [6..6]  ================================================ */
typedef enum {                                  /*!< BCL_STATUS_BCERR                                                         */
  BCL_STATUS_BCERR_ACTIVE             = 1,     /*!< ACTIVE : Active                                                           */
} BCL_STATUS_BCERR_Enum;

/* ================================================  BCL STATUS SRST [7..7]  ================================================ */
typedef enum {                                  /*!< BCL_STATUS_SRST                                                          */
  BCL_STATUS_SRST_EN                  = 1,     /*!< EN : Enable                                                               */
} BCL_STATUS_SRST_Enum;

/* =========================================================  DESTA  ========================================================= */
/* =========================================================  DATA  ========================================================== */
/* ========================================================  CLKSEL  ========================================================= */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BCL_V1_H */
