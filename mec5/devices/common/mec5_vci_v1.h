/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_VCI_V1_H
#define _MEC5_VCI_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief VBAT Control interface (VCI)
  */

typedef struct vci_regs {                       /*!< (@ 0x4000AE00) VCI Structure                                              */
  __IOM uint32_t  CFGIN;                        /*!< (@ 0x00000000) VCI config                                                 */
  __IOM uint32_t  VLATCH;                       /*!< (@ 0x00000004) VCI latch enables                                          */
  __IOM uint32_t  VLRST;                        /*!< (@ 0x00000008) VCI latch reset                                            */
  __IOM uint32_t  VINE;                         /*!< (@ 0x0000000C) VCI input enable                                           */
  __IOM uint32_t  HOCNT;                        /*!< (@ 0x00000010) VCI hold-off count                                         */
  __IOM uint32_t  VPOL;                         /*!< (@ 0x00000014) VCI polarity                                               */
  __IOM uint32_t  VPED;                         /*!< (@ 0x00000018) VCP pos-edge detect                                        */
  __IOM uint32_t  VNED;                         /*!< (@ 0x0000001C) VCI neg-edge detect                                        */
  __IOM uint32_t  VBEN;                         /*!< (@ 0x00000020) VCI buffer enable                                          */
} VCI_Type;                                     /*!< Size = 36 (0x24)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  CFGIN  ========================================================= */
#define VCI_CFGIN_LIN_Pos                 (0UL)                     /*!< LIN (Bit 0)                                           */
#define VCI_CFGIN_LIN_Msk                 (0x7fUL)                  /*!< LIN (Bitfield-Mask: 0x7f)                             */
#define VCI_CFGIN_OVRD_IN_Pos             (8UL)                     /*!< OVRD_IN (Bit 8)                                       */
#define VCI_CFGIN_OVRD_IN_Msk             (0x100UL)                 /*!< OVRD_IN (Bitfield-Mask: 0x01)                         */
#define VCI_CFGIN_OUT_Pos                 (9UL)                     /*!< OUT (Bit 9)                                           */
#define VCI_CFGIN_OUT_Msk                 (0x200UL)                 /*!< OUT (Bitfield-Mask: 0x01)                             */
#define VCI_CFGIN_FW_VCOUT_Pos            (10UL)                    /*!< FW_VCOUT (Bit 10)                                     */
#define VCI_CFGIN_FW_VCOUT_Msk            (0x400UL)                 /*!< FW_VCOUT (Bitfield-Mask: 0x01)                        */
#define VCI_CFGIN_VCOUT_SRC_Pos           (11UL)                    /*!< VCOUT_SRC (Bit 11)                                    */
#define VCI_CFGIN_VCOUT_SRC_Msk           (0x800UL)                 /*!< VCOUT_SRC (Bitfield-Mask: 0x01)                       */
#define VCI_CFGIN_VCI_FILT_Pos            (12UL)                    /*!< VCI_FILT (Bit 12)                                     */
#define VCI_CFGIN_VCI_FILT_Msk            (0x1000UL)                /*!< VCI_FILT (Bitfield-Mask: 0x01)                        */
#define VCI_CFGIN_WKALARM_Pos             (16UL)                    /*!< WKALARM (Bit 16)                                      */
#define VCI_CFGIN_WKALARM_Msk             (0x10000UL)               /*!< WKALARM (Bitfield-Mask: 0x01)                         */
#define VCI_CFGIN_RTCALARM_Pos            (17UL)                    /*!< RTCALARM (Bit 17)                                     */
#define VCI_CFGIN_RTCALARM_Msk            (0x20000UL)               /*!< RTCALARM (Bitfield-Mask: 0x01)                        */
#define VCI_CFGIN_SYSPWR_SEL_Pos          (18UL)                    /*!< SYSPWR_SEL (Bit 18)                                   */
#define VCI_CFGIN_SYSPWR_SEL_Msk          (0x40000UL)               /*!< SYSPWR_SEL (Bitfield-Mask: 0x01)                      */
/* ========================================================  VLATCH  ========================================================= */
#define VCI_VLATCH_LE_Pos                 (0UL)                     /*!< LE (Bit 0)                                            */
#define VCI_VLATCH_LE_Msk                 (0x7fUL)                  /*!< LE (Bitfield-Mask: 0x7f)                              */
#define VCI_VLATCH_WKALRM_LE_Pos          (16UL)                    /*!< WKALRM_LE (Bit 16)                                    */
#define VCI_VLATCH_WKALRM_LE_Msk          (0x10000UL)               /*!< WKALRM_LE (Bitfield-Mask: 0x01)                       */
#define VCI_VLATCH_RTCALRM_LE_Pos         (17UL)                    /*!< RTCALRM_LE (Bit 17)                                   */
#define VCI_VLATCH_RTCALRM_LE_Msk         (0x20000UL)               /*!< RTCALRM_LE (Bitfield-Mask: 0x01)                      */
/* =========================================================  VLRST  ========================================================= */
#define VCI_VLRST_LRST_Pos                (0UL)                     /*!< LRST (Bit 0)                                          */
#define VCI_VLRST_LRST_Msk                (0x7fUL)                  /*!< LRST (Bitfield-Mask: 0x7f)                            */
#define VCI_VLRST_WKALRM_LRST_Pos         (16UL)                    /*!< WKALRM_LRST (Bit 16)                                  */
#define VCI_VLRST_WKALRM_LRST_Msk         (0x10000UL)               /*!< WKALRM_LRST (Bitfield-Mask: 0x01)                     */
#define VCI_VLRST_RTCALRM_LRST_Pos        (17UL)                    /*!< RTCALRM_LRST (Bit 17)                                 */
#define VCI_VLRST_RTCALRM_LRST_Msk        (0x20000UL)               /*!< RTCALRM_LRST (Bitfield-Mask: 0x01)                    */
/* =========================================================  VINE  ========================================================== */
/* =========================================================  HOCNT  ========================================================= */
/* =========================================================  VPOL  ========================================================== */
/* =========================================================  VPED  ========================================================== */
/* =========================================================  VNED  ========================================================== */
/* =========================================================  VBEN  ========================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  CFGIN  ========================================================= */
/* ===============================================  VCI CFGIN OVRD_IN [8..8]  ================================================ */
typedef enum {                                  /*!< VCI_CFGIN_OVRD_IN                                                         */
  VCI_CFGIN_OVRD_IN_HI                 = 1,     /*!< HI : High                                                                 */
} VCI_CFGIN_OVRD_IN_Enum;

/* =================================================  VCI CFGIN OUT [9..9]  ================================================== */
typedef enum {                                  /*!< VCI_CFGIN_OUT                                                             */
  VCI_CFGIN_OUT_HI                     = 1,     /*!< HI : High                                                                 */
} VCI_CFGIN_OUT_Enum;

/* ==============================================  VCI CFGIN FW_VCOUT [10..10]  ============================================== */
typedef enum {                                  /*!< VCI_CFGIN_FW_VCOUT                                                        */
  VCI_CFGIN_FW_VCOUT_HI                = 1,     /*!< HI : High                                                                 */
} VCI_CFGIN_FW_VCOUT_Enum;

/* =============================================  VCI CFGIN VCOUT_SRC [11..11]  ============================================== */
typedef enum {                                  /*!< VCI_CFGIN_VCOUT_SRC                                                       */
  VCI_CFGIN_VCOUT_SRC_EXT              = 0,     /*!< EXT : External inputs                                                     */
  VCI_CFGIN_VCOUT_SRC_FW               = 1,     /*!< FW : Software controlled                                                  */
} VCI_CFGIN_VCOUT_SRC_Enum;

/* ==============================================  VCI CFGIN VCI_FILT [12..12]  ============================================== */
typedef enum {                                  /*!< VCI_CFGIN_VCI_FILT                                                        */
  VCI_CFGIN_VCI_FILT_DIS               = 1,     /*!< DIS : Disable                                                             */
} VCI_CFGIN_VCI_FILT_Enum;

/* ==============================================  VCI CFGIN WKALARM [16..16]  =============================================== */
typedef enum {                                  /*!< VCI_CFGIN_WKALARM                                                         */
  VCI_CFGIN_WKALARM_ACTIVE             = 1,     /*!< ACTIVE : Active                                                           */
} VCI_CFGIN_WKALARM_Enum;

/* ==============================================  VCI CFGIN RTCALARM [17..17]  ============================================== */
typedef enum {                                  /*!< VCI_CFGIN_RTCALARM                                                        */
  VCI_CFGIN_RTCALARM_ACTIVE            = 1,     /*!< ACTIVE : Active                                                           */
} VCI_CFGIN_RTCALARM_Enum;

/* =============================================  VCI CFGIN SYSPWR_SEL [18..18]  ============================================= */
typedef enum {                                  /*!< VCI_CFGIN_SYSPWR_SEL                                                      */
  VCI_CFGIN_SYSPWR_SEL_VCI_IN3         = 0,     /*!< VCI_IN3 : Select VCI_IN                                                   */
  VCI_CFGIN_SYSPWR_SEL_SYSPWR          = 1,     /*!< SYSPWR : Select SYSPWR                                                    */
} VCI_CFGIN_SYSPWR_SEL_Enum;

/* ========================================================  VLATCH  ========================================================= */
/* =============================================  VCI VLATCH WKALRM_LE [16..16]  ============================================= */
typedef enum {                                  /*!< VCI_VLATCH_WKALRM_LE                                                      */
  VCI_VLATCH_WKALRM_LE_EN              = 1,     /*!< EN : Enable                                                               */
} VCI_VLATCH_WKALRM_LE_Enum;

/* ============================================  VCI VLATCH RTCALRM_LE [17..17]  ============================================= */
typedef enum {                                  /*!< VCI_VLATCH_RTCALRM_LE                                                     */
  VCI_VLATCH_RTCALRM_LE_EN             = 1,     /*!< EN : Enable                                                               */
} VCI_VLATCH_RTCALRM_LE_Enum;

/* =========================================================  VLRST  ========================================================= */
/* ============================================  VCI VLRST WKALRM_LRST [16..16]  ============================================= */
typedef enum {                                  /*!< VCI_VLRST_WKALRM_LRST                                                     */
  VCI_VLRST_WKALRM_LRST_EN             = 1,     /*!< EN : Enable                                                               */
} VCI_VLRST_WKALRM_LRST_Enum;

/* ============================================  VCI VLRST RTCALRM_LRST [17..17]  ============================================ */
typedef enum {                                  /*!< VCI_VLRST_RTCALRM_LRST                                                    */
  VCI_VLRST_RTCALRM_LRST_EN            = 1,     /*!< EN : Enable                                                               */
} VCI_VLRST_RTCALRM_LRST_Enum;

/* =========================================================  VINE  ========================================================== */
/* =========================================================  HOCNT  ========================================================= */
/* =========================================================  VPOL  ========================================================== */
/* =========================================================  VPED  ========================================================== */
/* =========================================================  VNED  ========================================================== */
/* =========================================================  VBEN  ========================================================== */
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_VCI_V1_H */
