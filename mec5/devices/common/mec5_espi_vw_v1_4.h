/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ESPI_VW_V1_4_H
#define _MEC5_ESPI_VW_V1_4_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */
/**
  * @brief MEC_ESPI_VW_CTVW [CTVW] (eSPI Host to Device Virtual Wire 96-bit registers)
  */
typedef struct mec_espi_vw_ctvw_regs {
  __IOM uint32_t  HIRSS;                        /*!< (@ 0x00000000) Host index, reset source and reset state for
                                                                    the group of 4 virtual wires                               */
  __IOM uint32_t  SRC_ISELS;                    /*!< (@ 0x00000004) VW group IRQ Select for each of the 4 VWires               */
  __IOM uint32_t  STATES;                       /*!< (@ 0x00000008) VW group VWire states                                      */
} MEC_ESPI_VW_CTVW_Type;                        /*!< Size = 12 (0xc)                                                           */


/**
  * @brief MEC_ESPI_VW_TCVW [TCVW] (Device to eSPI Host Wire 64-bit registers)
  */
typedef struct mec_espi_vw_tcvw_regs {
  __IOM uint32_t  HIRCS;                        /*!< (@ 0x00000000) Host index, reset configuration, and R/O change
                                                                    status                                                     */
  __IOM uint32_t  STATES;                       /*!< (@ 0x00000004) VW group register containing states of the 4
                                                                    VWires                                                     */
} MEC_ESPI_VW_TCVW_Type;                        /*!< Size = 8 (0x8)                                                            */
/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */
/**
  * @brief eSPI Virtual Wire Logic (MEC_ESPI_VW)
  */

typedef struct mec_espi_vw_regs {               /*!< (@ 0x400F9C00) MEC_ESPI_VW Structure                                      */
  __IOM MEC_ESPI_VW_CTVW_Type CTVW[11];         /*!< (@ 0x00000000) eSPI Host to Device Virtual Wire 96-bit registers          */
  __IM  uint32_t  RESERVED[95];
  __IOM MEC_ESPI_VW_TCVW_Type TCVW[11];         /*!< (@ 0x00000200) Device to eSPI Host Wire 64-bit registers                  */
} MEC_ESPI_VW_Type;                             /*!< Size = 600 (0x258)                                                        */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_clusters
  * @{
  */
/* ================                                           CTVW                                            ================ */
/* =========================================================  HIRSS  ========================================================= */
#define MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Pos (0UL)                   /*!< HOST_IDX (Bit 0)                                      */
#define MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Msk (0xffUL)                /*!< HOST_IDX (Bitfield-Mask: 0xff)                        */
#define MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Pos (8UL)                    /*!< RST_SRC (Bit 8)                                       */
#define MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Msk (0x300UL)                /*!< RST_SRC (Bitfield-Mask: 0x03)                         */
#define MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Pos (12UL)                 /*!< RST_STATE (Bit 12)                                    */
#define MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Msk (0xf000UL)             /*!< RST_STATE (Bitfield-Mask: 0x0f)                       */
/* =======================================================  SRC_ISELS  ======================================================= */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Pos (0UL)           /*!< SRC0_IRQ_SEL (Bit 0)                                  */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Msk (0xfUL)         /*!< SRC0_IRQ_SEL (Bitfield-Mask: 0x0f)                    */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_Pos (8UL)           /*!< SRC1_IRQ_SEL (Bit 8)                                  */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_Msk (0xf00UL)       /*!< SRC1_IRQ_SEL (Bitfield-Mask: 0x0f)                    */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_Pos (16UL)          /*!< SRC2_IRQ_SEL (Bit 16)                                 */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_Msk (0xf0000UL)     /*!< SRC2_IRQ_SEL (Bitfield-Mask: 0x0f)                    */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_Pos (24UL)          /*!< SRC3_IRQ_SEL (Bit 24)                                 */
#define MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_Msk (0xf000000UL)   /*!< SRC3_IRQ_SEL (Bitfield-Mask: 0x0f)                    */
/* ========================================================  STATES  ========================================================= */
#define MEC_ESPI_VW_CTVW_STATES_SRC0_Pos  (0UL)                     /*!< SRC0 (Bit 0)                                          */
#define MEC_ESPI_VW_CTVW_STATES_SRC0_Msk  (0x1UL)                   /*!< SRC0 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_CTVW_STATES_SRC1_Pos  (8UL)                     /*!< SRC1 (Bit 8)                                          */
#define MEC_ESPI_VW_CTVW_STATES_SRC1_Msk  (0x100UL)                 /*!< SRC1 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_CTVW_STATES_SRC2_Pos  (16UL)                    /*!< SRC2 (Bit 16)                                         */
#define MEC_ESPI_VW_CTVW_STATES_SRC2_Msk  (0x10000UL)               /*!< SRC2 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_CTVW_STATES_SRC3_Pos  (24UL)                    /*!< SRC3 (Bit 24)                                         */
#define MEC_ESPI_VW_CTVW_STATES_SRC3_Msk  (0x1000000UL)             /*!< SRC3 (Bitfield-Mask: 0x01)                            */

/* ================                                           TCVW                                            ================ */
/* =========================================================  HIRCS  ========================================================= */
#define MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Pos (0UL)                   /*!< HOST_IDX (Bit 0)                                      */
#define MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Msk (0xffUL)                /*!< HOST_IDX (Bitfield-Mask: 0xff)                        */
#define MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Pos (8UL)                    /*!< RST_SRC (Bit 8)                                       */
#define MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Msk (0x300UL)                /*!< RST_SRC (Bitfield-Mask: 0x03)                         */
#define MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Pos (12UL)                 /*!< RST_STATE (Bit 12)                                    */
#define MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Msk (0xf000UL)             /*!< RST_STATE (Bitfield-Mask: 0x0f)                       */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Pos (16UL)                   /*!< CHANGE0 (Bit 16)                                      */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Msk (0x10000UL)              /*!< CHANGE0 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE1_Pos (17UL)                   /*!< CHANGE1 (Bit 17)                                      */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE1_Msk (0x20000UL)              /*!< CHANGE1 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE2_Pos (18UL)                   /*!< CHANGE2 (Bit 18)                                      */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE2_Msk (0x40000UL)              /*!< CHANGE2 (Bitfield-Mask: 0x01)                         */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE3_Pos (19UL)                   /*!< CHANGE3 (Bit 19)                                      */
#define MEC_ESPI_VW_TCVW_HIRCS_CHANGE3_Msk (0x80000UL)              /*!< CHANGE3 (Bitfield-Mask: 0x01)                         */
/* ========================================================  STATES  ========================================================= */
#define MEC_ESPI_VW_TCVW_STATES_SRC0_Pos  (0UL)                     /*!< SRC0 (Bit 0)                                          */
#define MEC_ESPI_VW_TCVW_STATES_SRC0_Msk  (0x1UL)                   /*!< SRC0 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_TCVW_STATES_SRC1_Pos  (8UL)                     /*!< SRC1 (Bit 8)                                          */
#define MEC_ESPI_VW_TCVW_STATES_SRC1_Msk  (0x100UL)                 /*!< SRC1 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_TCVW_STATES_SRC2_Pos  (16UL)                    /*!< SRC2 (Bit 16)                                         */
#define MEC_ESPI_VW_TCVW_STATES_SRC2_Msk  (0x10000UL)               /*!< SRC2 (Bitfield-Mask: 0x01)                            */
#define MEC_ESPI_VW_TCVW_STATES_SRC3_Pos  (24UL)                    /*!< SRC3 (Bit 24)                                         */
#define MEC_ESPI_VW_TCVW_STATES_SRC3_Msk  (0x1000000UL)             /*!< SRC3 (Bitfield-Mask: 0x01)                            */

/** @} */ /* End of group PosMask_clusters */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* =========================================================  CTVW   ========================================================= */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW                                                          */
  MEC_CTVW_IDX00                       = 0,     /*!< IDX00 : CTVW array index 0                                                */
  MEC_CTVW_IDX01                       = 1,     /*!< IDX01 : CTVW array index 1                                                */
  MEC_CTVW_IDX02                       = 2,     /*!< IDX02 : CTVW array index 2                                                */
  MEC_CTVW_IDX03                       = 3,     /*!< IDX03 : CTVW array index 3                                                */
  MEC_CTVW_IDX04                       = 4,     /*!< IDX04 : CTVW array index 4                                                */
  MEC_CTVW_IDX05                       = 5,     /*!< IDX05 : CTVW array index 5                                                */
  MEC_CTVW_IDX06                       = 6,     /*!< IDX06 : CTVW array index 6                                                */
  MEC_CTVW_IDX07                       = 7,     /*!< IDX07 : CTVW array index 7                                                */
  MEC_CTVW_IDX08                       = 8,     /*!< IDX08 : CTVW array index 8                                                */
  MEC_CTVW_IDX09                       = 9,     /*!< IDX09 : CTVW array index 9                                                */
  MEC_CTVW_IDX10                       = 10,    /*!< IDX10 : CTVW array index 10                                               */
} MEC_CTVW_Enum;

/* =========================================================  HIRSS  ========================================================= */
/* ==============================================  CTVW HIRSS HOST_IDX [0..7]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX                                           */
  MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_MIN  = 2,     /*!< MIN : Minimum Host index value                                            */
} MEC_ESPI_VW_CTVW_HIRSS_HOST_IDX_Enum;

/* ===============================================  CTVW HIRSS RST_SRC [8..9]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_HIRSS_RST_SRC                                            */
  MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_RST_ESPI = 0,  /*!< RST_ESPI : VW group reset value loaded on rising edge of ESPI_nRESET      */
  MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_RST_SYS = 1,   /*!< RST_SYS : VW group reset value loaded on rising edge of RESET_SYS         */
  MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_RST_SIO = 2,   /*!< RST_SIO : VW group reset value loaded on rising edge of RESET_SIO         */
  MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_PLTRST = 3,    /*!< PLTRST : VW group reset value loaded on rising edge of PLTRST             */
} MEC_ESPI_VW_CTVW_HIRSS_RST_SRC_Enum;

/* =============================================  CTVW HIRSS RST_STATE [12..15]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_HIRSS_RST_STATE                                          */
  MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_ALL_ZERO = 0,/*!< ALL_ZERO : All 4 VWires reset to 0                                        */
  MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_ALL_ONE = 15,/*!< ALL_ONE : All 4 VWires reset to 1                                         */
} MEC_ESPI_VW_CTVW_HIRSS_RST_STATE_Enum;

/* =======================================================  SRC_ISELS  ======================================================= */
/* ==========================================  CTVW SRC_ISELS SRC0_IRQ_SEL [0..3]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL                                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_LEVEL_LO = 0,/*!< LEVEL_LO : VWire interrupt on low level                            */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_LEVEL_HI = 1,/*!< LEVEL_HI : VWire interrupt on high level                           */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_DIS = 4,/*!< DIS : VWire interrupt disabled                                          */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_RISING_EDGE = 13,/*!< RISING_EDGE : VWire interrupt on rising edge                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_FALLING_EDGE = 14,/*!< FALLING_EDGE : VWire interrupt on falling edge                */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_EITHER_EDGE = 15,/*!< EITHER_EDGE : VWire interrupt on either edge                   */
} MEC_ESPI_VW_CTVW_SRC_ISELS_SRC0_IRQ_SEL_Enum;

/* ==========================================  CTVW SRC_ISELS SRC1_IRQ_SEL [8..11]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL                                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_LEVEL_LO = 0,/*!< LEVEL_LO : VWire interrupt on low level                            */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_LEVEL_HI = 1,/*!< LEVEL_HI : VWire interrupt on high level                           */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_DIS = 4,/*!< DIS : VWire interrupt disabled                                          */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_RISING_EDGE = 13,/*!< RISING_EDGE : VWire interrupt on rising edge                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_FALLING_EDGE = 14,/*!< FALLING_EDGE : VWire interrupt on falling edge                */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_EITHER_EDGE = 15,/*!< EITHER_EDGE : VWire interrupt on either edge                   */
} MEC_ESPI_VW_CTVW_SRC_ISELS_SRC1_IRQ_SEL_Enum;

/* =========================================  CTVW SRC_ISELS SRC2_IRQ_SEL [16..19]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL                                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_LEVEL_LO = 0,/*!< LEVEL_LO : VWire interrupt on low level                            */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_LEVEL_HI = 1,/*!< LEVEL_HI : VWire interrupt on high level                           */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_DIS = 4,/*!< DIS : VWire interrupt disabled                                          */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_RISING_EDGE = 13,/*!< RISING_EDGE : VWire interrupt on rising edge                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_FALLING_EDGE = 14,/*!< FALLING_EDGE : VWire interrupt on falling edge                */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_EITHER_EDGE = 15,/*!< EITHER_EDGE : VWire interrupt on either edge                   */
} MEC_ESPI_VW_CTVW_SRC_ISELS_SRC2_IRQ_SEL_Enum;

/* =========================================  CTVW SRC_ISELS SRC3_IRQ_SEL [24..27]  ========================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL                                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_LEVEL_LO = 0,/*!< LEVEL_LO : VWire interrupt on low level                            */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_LEVEL_HI = 1,/*!< LEVEL_HI : VWire interrupt on high level                           */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_DIS = 4,/*!< DIS : VWire interrupt disabled                                          */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_RISING_EDGE = 13,/*!< RISING_EDGE : VWire interrupt on rising edge                   */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_FALLING_EDGE = 14,/*!< FALLING_EDGE : VWire interrupt on falling edge                */
  MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_EITHER_EDGE = 15,/*!< EITHER_EDGE : VWire interrupt on either edge                   */
} MEC_ESPI_VW_CTVW_SRC_ISELS_SRC3_IRQ_SEL_Enum;

/* ========================================================  STATES  ========================================================= */
/* ================================================  CTVW STATES SRC0 [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_STATES_SRC0                                              */
  MEC_ESPI_VW_CTVW_STATES_SRC0_HIGH    = 1,     /*!< HIGH : VW group Source 0 is high                                          */
} MEC_ESPI_VW_CTVW_STATES_SRC0_Enum;

/* ================================================  CTVW STATES SRC1 [8..8]  ================================================ */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_STATES_SRC1                                              */
  MEC_ESPI_VW_CTVW_STATES_SRC1_HIGH    = 1,     /*!< HIGH : VW group Source 1 is high                                          */
} MEC_ESPI_VW_CTVW_STATES_SRC1_Enum;

/* ===============================================  CTVW STATES SRC2 [16..16]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_STATES_SRC2                                              */
  MEC_ESPI_VW_CTVW_STATES_SRC2_HIGH    = 1,     /*!< HIGH : VW group Source 2 is high                                          */
} MEC_ESPI_VW_CTVW_STATES_SRC2_Enum;

/* ===============================================  CTVW STATES SRC3 [24..24]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_CTVW_STATES_SRC3                                              */
  MEC_ESPI_VW_CTVW_STATES_SRC3_HIGH    = 1,     /*!< HIGH : VW group Source 3 is high                                          */
} MEC_ESPI_VW_CTVW_STATES_SRC3_Enum;

/* =========================================================  TCVW   ========================================================= */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW                                                          */
  MEC_TCVW_IDX00                       = 0,     /*!< IDX00 : TCVW array index 0                                                */
  MEC_TCVW_IDX01                       = 1,     /*!< IDX01 : TCVW array index 1                                                */
  MEC_TCVW_IDX02                       = 2,     /*!< IDX02 : TCVW array index 2                                                */
  MEC_TCVW_IDX03                       = 3,     /*!< IDX03 : TCVW array index 3                                                */
  MEC_TCVW_IDX04                       = 4,     /*!< IDX04 : TCVW array index 4                                                */
  MEC_TCVW_IDX05                       = 5,     /*!< IDX05 : TCVW array index 5                                                */
  MEC_TCVW_IDX06                       = 6,     /*!< IDX06 : TCVW array index 6                                                */
  MEC_TCVW_IDX07                       = 7,     /*!< IDX07 : TCVW array index 7                                                */
  MEC_TCVW_IDX08                       = 8,     /*!< IDX08 : TCVW array index 8                                                */
  MEC_TCVW_IDX09                       = 9,     /*!< IDX09 : TCVW array index 9                                                */
  MEC_TCVW_IDX10                       = 10,    /*!< IDX10 : TCVW array index 10                                               */
} MEC_TCVW_Enum;

/* =========================================================  HIRCS  ========================================================= */
/* ==============================================  TCVW HIRCS HOST_IDX [0..7]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX                                           */
  MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_MIN_VAL = 2,  /*!< MIN_VAL : Minimum value of host index                                     */
} MEC_ESPI_VW_TCVW_HIRCS_HOST_IDX_Enum;

/* ===============================================  TCVW HIRCS RST_SRC [8..9]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_RST_SRC                                            */
  MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_RST_ESPI = 0,  /*!< RST_ESPI : VW group reset value loaded on rising edge of ESPI_nRESET      */
  MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_RST_SYS = 1,   /*!< RST_SYS : VW group reset value loaded on rising edge of RESET_SYS         */
  MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_RST_SIO = 2,   /*!< RST_SIO : VW group reset value loaded on rising edge of RESET_SIO         */
  MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_PLTRST = 3,    /*!< PLTRST : VW group reset value loaded on rising edge of PLTRST             */
} MEC_ESPI_VW_TCVW_HIRCS_RST_SRC_Enum;

/* =============================================  TCVW HIRCS RST_STATE [12..15]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_RST_STATE                                          */
  MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_ALL_ZERO = 0,/*!< ALL_ZERO : All 4 VWires reset to 0                                        */
  MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_ALL_ONE = 15,/*!< ALL_ONE : All 4 VWires reset to 1                                         */
} MEC_ESPI_VW_TCVW_HIRCS_RST_STATE_Enum;

/* ==============================================  TCVW HIRCS CHANGE0 [16..16]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_CHANGE0                                            */
  MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_ACTIVE = 1,    /*!< ACTIVE : VW group Source 0 changed state                                  */
} MEC_ESPI_VW_TCVW_HIRCS_CHANGE0_Enum;

/* ==============================================  TCVW HIRCS CHANGE1 [17..17]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_CHANGE1                                            */
  MEC_ESPI_VW_TCVW_HIRCS_CHANGE1_ACTIVE = 1,    /*!< ACTIVE : VW group Source 1 changed state                                  */
} MEC_ESPI_VW_TCVW_HIRCS_CHANGE1_Enum;

/* ==============================================  TCVW HIRCS CHANGE2 [18..18]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_CHANGE2                                            */
  MEC_ESPI_VW_TCVW_HIRCS_CHANGE2_ACTIVE = 1,    /*!< ACTIVE : VW group Source 2 changed state                                  */
} MEC_ESPI_VW_TCVW_HIRCS_CHANGE2_Enum;

/* ==============================================  TCVW HIRCS CHANGE3 [19..19]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_HIRCS_CHANGE3                                            */
  MEC_ESPI_VW_TCVW_HIRCS_CHANGE3_ACTIVE = 1,    /*!< ACTIVE : VW group Source 3 changed state                                  */
} MEC_ESPI_VW_TCVW_HIRCS_CHANGE3_Enum;

/* ========================================================  STATES  ========================================================= */
/* ================================================  TCVW STATES SRC0 [0..0]  ================================================ */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_STATES_SRC0                                              */
  MEC_ESPI_VW_TCVW_STATES_SRC0_HIGH    = 1,     /*!< HIGH : VW group Source 0 is one                                           */
} MEC_ESPI_VW_TCVW_STATES_SRC0_Enum;

/* ================================================  TCVW STATES SRC1 [8..8]  ================================================ */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_STATES_SRC1                                              */
  MEC_ESPI_VW_TCVW_STATES_SRC1_HIGH    = 1,     /*!< HIGH : VW group Source 1 is one                                           */
} MEC_ESPI_VW_TCVW_STATES_SRC1_Enum;

/* ===============================================  TCVW STATES SRC2 [16..16]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_STATES_SRC2                                              */
  MEC_ESPI_VW_TCVW_STATES_SRC2_HIGH    = 1,     /*!< HIGH : VW group Source 2 is one                                           */
} MEC_ESPI_VW_TCVW_STATES_SRC2_Enum;

/* ===============================================  TCVW STATES SRC3 [24..24]  =============================================== */
typedef enum {                                  /*!< MEC_ESPI_VW_TCVW_STATES_SRC3                                              */
  MEC_ESPI_VW_TCVW_STATES_SRC3_HIGH    = 1,     /*!< HIGH : VW group Source 3 is one                                           */
} MEC_ESPI_VW_TCVW_STATES_SRC3_Enum;

/** @} */ /* End of group EnumValue_clusters */

#endif /* _MEC5_ESPI_VW_V1_4_H */
