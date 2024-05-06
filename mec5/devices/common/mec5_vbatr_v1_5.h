/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_VBATR_V1_5_H
#define _MEC5_VBATR_V1_5_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief VBAT 0 register bank (VBATR)
  */

typedef struct vbatr_regs {                     /*!< (@ 0x4000A400) VBATR Structure                                            */
  __IOM uint32_t  PFRS;                         /*!< (@ 0x00000000) VBAT Power fail reset status                               */
  __IM  uint32_t  RESERVED;
  __IOM uint32_t  CLK32K_SRC;                   /*!< (@ 0x00000008) VBAT 32KHz source select                                   */
  __IM  uint32_t  RESERVED1[2];
  __IOM uint32_t  ST32KV;                       /*!< (@ 0x00000014) VBAT 32KHz silicon OSC trim value                          */
  __IM  uint32_t  RESERVED2;
  __IOM uint32_t  ST32KC;                       /*!< (@ 0x0000001C) VBAT 32KHz silicon OSC trim control                        */
  __IM  uint32_t  MCNTL;                        /*!< (@ 0x00000020) VBAT Monotonic counter bits[31:0]                          */
  __IOM uint32_t  MCNTH;                        /*!< (@ 0x00000024) VBAT Monotonic counter bits[63:32]                         */
  __IOM uint32_t  ROM_FEAT;                     /*!< (@ 0x00000028) VBAT ROM Feature                                           */
  __IM  uint32_t  RESERVED3[2];
  __IOM uint32_t  ERDE;                         /*!< (@ 0x00000034) VBAT embedded reset debounce enable                        */
} VBATR_Type;                                   /*!< Size = 56 (0x38)                                                          */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  PFRS  ========================================================== */
#define VBATR_PFRS_SOFT_SYS_Pos           (2UL)                     /*!< SOFT_SYS (Bit 2)                                      */
#define VBATR_PFRS_SOFT_SYS_Msk           (0x4UL)                   /*!< SOFT_SYS (Bitfield-Mask: 0x01)                        */
#define VBATR_PFRS_RESETI_Pos             (4UL)                     /*!< RESETI (Bit 4)                                        */
#define VBATR_PFRS_RESETI_Msk             (0x10UL)                  /*!< RESETI (Bitfield-Mask: 0x01)                          */
#define VBATR_PFRS_WDT_Pos                (5UL)                     /*!< WDT (Bit 5)                                           */
#define VBATR_PFRS_WDT_Msk                (0x20UL)                  /*!< WDT (Bitfield-Mask: 0x01)                             */
#define VBATR_PFRS_SYSRSTREQ_Pos          (6UL)                     /*!< SYSRSTREQ (Bit 6)                                     */
#define VBATR_PFRS_SYSRSTREQ_Msk          (0x40UL)                  /*!< SYSRSTREQ (Bitfield-Mask: 0x01)                       */
#define VBATR_PFRS_VBAT_RST_Pos           (7UL)                     /*!< VBAT_RST (Bit 7)                                      */
#define VBATR_PFRS_VBAT_RST_Msk           (0x80UL)                  /*!< VBAT_RST (Bitfield-Mask: 0x01)                        */
/* ======================================================  CLK32K_SRC  ======================================================= */
#define VBATR_CLK32K_SRC_SILOSC_Pos       (0UL)                     /*!< SILOSC (Bit 0)                                        */
#define VBATR_CLK32K_SRC_SILOSC_Msk       (0x1UL)                   /*!< SILOSC (Bitfield-Mask: 0x01)                          */
#define VBATR_CLK32K_SRC_XTAL_Pos         (8UL)                     /*!< XTAL (Bit 8)                                          */
#define VBATR_CLK32K_SRC_XTAL_Msk         (0x100UL)                 /*!< XTAL (Bitfield-Mask: 0x01)                            */
#define VBATR_CLK32K_SRC_XTAL_XOSEL_Pos   (9UL)                     /*!< XTAL_XOSEL (Bit 9)                                    */
#define VBATR_CLK32K_SRC_XTAL_XOSEL_Msk   (0x200UL)                 /*!< XTAL_XOSEL (Bitfield-Mask: 0x01)                      */
#define VBATR_CLK32K_SRC_XTAL_HSC_Pos     (10UL)                    /*!< XTAL_HSC (Bit 10)                                     */
#define VBATR_CLK32K_SRC_XTAL_HSC_Msk     (0x400UL)                 /*!< XTAL_HSC (Bitfield-Mask: 0x01)                        */
#define VBATR_CLK32K_SRC_XTAL_CNTR_Pos    (11UL)                    /*!< XTAL_CNTR (Bit 11)                                    */
#define VBATR_CLK32K_SRC_XTAL_CNTR_Msk    (0x1800UL)                /*!< XTAL_CNTR (Bitfield-Mask: 0x03)                       */
#define VBATR_CLK32K_SRC_PSSEL_Pos        (16UL)                    /*!< PSSEL (Bit 16)                                        */
#define VBATR_CLK32K_SRC_PSSEL_Msk        (0x30000UL)               /*!< PSSEL (Bitfield-Mask: 0x03)                           */
#define VBATR_CLK32K_SRC_NOVTR_SILOSC_Pos (18UL)                    /*!< NOVTR_SILOSC (Bit 18)                                 */
#define VBATR_CLK32K_SRC_NOVTR_SILOSC_Msk (0x40000UL)               /*!< NOVTR_SILOSC (Bitfield-Mask: 0x01)                    */
/* ========================================================  ST32KV  ========================================================= */
/* ========================================================  ST32KC  ========================================================= */
/* =========================================================  MCNTL  ========================================================= */
/* =========================================================  MCNTH  ========================================================= */
/* =======================================================  ROM_FEAT  ======================================================== */
/* =========================================================  ERDE  ========================================================== */
#define VBATR_ERDE_EN_Pos                 (0UL)                     /*!< EN (Bit 0)                                            */
#define VBATR_ERDE_EN_Msk                 (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  PFRS  ========================================================== */
/* ==============================================  VBATR PFRS SOFT_SYS [2..2]  =============================================== */
typedef enum {                                  /*!< VBATR_PFRS_SOFT_SYS                                                       */
  VBATR_PFRS_SOFT_SYS_STS              = 1,     /*!< STS : Active                                                              */
} VBATR_PFRS_SOFT_SYS_Enum;

/* ===============================================  VBATR PFRS RESETI [4..4]  ================================================ */
typedef enum {                                  /*!< VBATR_PFRS_RESETI                                                         */
  VBATR_PFRS_RESETI_STS                = 1,     /*!< STS : Active                                                              */
} VBATR_PFRS_RESETI_Enum;

/* =================================================  VBATR PFRS WDT [5..5]  ================================================= */
typedef enum {                                  /*!< VBATR_PFRS_WDT                                                            */
  VBATR_PFRS_WDT_STS                   = 1,     /*!< STS : Active                                                              */
} VBATR_PFRS_WDT_Enum;

/* ==============================================  VBATR PFRS SYSRSTREQ [6..6]  ============================================== */
typedef enum {                                  /*!< VBATR_PFRS_SYSRSTREQ                                                      */
  VBATR_PFRS_SYSRSTREQ_STS             = 1,     /*!< STS : Active                                                              */
} VBATR_PFRS_SYSRSTREQ_Enum;

/* ==============================================  VBATR PFRS VBAT_RST [7..7]  =============================================== */
typedef enum {                                  /*!< VBATR_PFRS_VBAT_RST                                                       */
  VBATR_PFRS_VBAT_RST_STS              = 1,     /*!< STS : Active                                                              */
} VBATR_PFRS_VBAT_RST_Enum;

/* ======================================================  CLK32K_SRC  ======================================================= */
/* ============================================  VBATR CLK32K_SRC SILOSC [0..0]  ============================================= */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_SILOSC                                                   */
  VBATR_CLK32K_SRC_SILOSC_EN           = 1,     /*!< EN : Enable                                                               */
} VBATR_CLK32K_SRC_SILOSC_Enum;

/* =============================================  VBATR CLK32K_SRC XTAL [8..8]  ============================================== */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_XTAL                                                     */
  VBATR_CLK32K_SRC_XTAL_EN             = 1,     /*!< EN : Enable                                                               */
} VBATR_CLK32K_SRC_XTAL_Enum;

/* ==========================================  VBATR CLK32K_SRC XTAL_XOSEL [9..9]  =========================================== */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_XTAL_XOSEL                                               */
  VBATR_CLK32K_SRC_XTAL_XOSEL_PAR      = 0,     /*!< PAR : Parallel connection between XTAL1 and XTAL2 pins                    */
  VBATR_CLK32K_SRC_XTAL_XOSEL_SE       = 1,     /*!< SE : Single-ended connection to XTAL2 pin only                            */
} VBATR_CLK32K_SRC_XTAL_XOSEL_Enum;

/* ==========================================  VBATR CLK32K_SRC XTAL_HSC [10..10]  =========================================== */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_XTAL_HSC                                                 */
  VBATR_CLK32K_SRC_XTAL_HSC_EN         = 0,     /*!< EN : Enable                                                               */
  VBATR_CLK32K_SRC_XTAL_HSC_DIS        = 1,     /*!< DIS : Enable                                                              */
} VBATR_CLK32K_SRC_XTAL_HSC_Enum;

/* ==========================================  VBATR CLK32K_SRC XTAL_CNTR [11..12]  ========================================== */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_XTAL_CNTR                                                */
  VBATR_CLK32K_SRC_XTAL_CNTR_MODE0     = 0,     /*!< MODE0 : Crystal startup mode 0                                            */
  VBATR_CLK32K_SRC_XTAL_CNTR_MODE1     = 1,     /*!< MODE1 : Crystal startup mode 1                                            */
  VBATR_CLK32K_SRC_XTAL_CNTR_MODE2     = 2,     /*!< MODE2 : Crystal startup mode 2                                            */
  VBATR_CLK32K_SRC_XTAL_CNTR_MODE3     = 3,     /*!< MODE3 : Crystal startup mode 3                                            */
} VBATR_CLK32K_SRC_XTAL_CNTR_Enum;

/* ============================================  VBATR CLK32K_SRC PSSEL [16..17]  ============================================ */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_PSSEL                                                    */
  VBATR_CLK32K_SRC_PSSEL_SILOSC        = 0,     /*!< SILOSC : Use silicon OSC for VTR and VBAT-only                            */
  VBATR_CLK32K_SRC_PSSEL_XTAL          = 1,     /*!< XTAL : Use crystal for VTR and VBAT-only                                  */
  VBATR_CLK32K_SRC_PSSEL_PIN_SIL       = 2,     /*!< PIN_SIL : Use 32KHZ_IN for VTR and Sil-OSC for VBAT-only                  */
  VBATR_CLK32K_SRC_PSSEL_PIN_XTAL      = 3,     /*!< PIN_XTAL : Use 32KHZ_IN pin for VTR and XTAL for VBAT-only                */
} VBATR_CLK32K_SRC_PSSEL_Enum;

/* ========================================  VBATR CLK32K_SRC NOVTR_SILOSC [18..18]  ========================================= */
typedef enum {                                  /*!< VBATR_CLK32K_SRC_NOVTR_SILOSC                                             */
  VBATR_CLK32K_SRC_NOVTR_SILOSC_EN     = 0,     /*!< EN : Keep silicon oscillator enabled when VTR is off                      */
  VBATR_CLK32K_SRC_NOVTR_SILOSC_DIS    = 1,     /*!< DIS : Disable silicon oscillator when VTR is off                          */
} VBATR_CLK32K_SRC_NOVTR_SILOSC_Enum;

/* ========================================================  ST32KV  ========================================================= */
/* ========================================================  ST32KC  ========================================================= */
/* =========================================================  MCNTL  ========================================================= */
/* =========================================================  MCNTH  ========================================================= */
/* =======================================================  ROM_FEAT  ======================================================== */
/* =========================================================  ERDE  ========================================================== */
/* =================================================  VBATR ERDE EN [0..0]  ================================================== */
typedef enum {                                  /*!< VBATR_ERDE_EN                                                             */
  VBATR_ERDE_EN_ON                     = 1,     /*!< ON : Enable                                                               */
} VBATR_ERDE_EN_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_VBATR_V1_5_H */
