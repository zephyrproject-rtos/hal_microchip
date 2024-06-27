/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ESPI_MEM_V1_4_H
#define _MEC5_ESPI_MEM_V1_4_H

/** @addtogroup Device_Peripheral_clusters
  * @{
  */

/**
  * @brief MEC_ESPI_MEM_EC_MEM_BAR [EC_MEM_BAR] (Memory BAR LDN and memory address mask. EC-only access)
  */
typedef struct mec_espi_mem_ec_mem_bar_regs {
  __IM  uint16_t  LDN_MSK;                      /*!< (@ 0x00000000) eSPI Memory BAR LDN and address mask (EC-only
                                                                    access)                                                    */
  __IM  uint16_t  RSVD_H1;                      /*!< (@ 0x00000002) Bits[31:16] reserved                                       */
  __IM  uint16_t  RSVD_H2;                      /*!< (@ 0x00000004) Bits[47:32] reserved                                       */
  __IM  uint16_t  RSVD_H3;                      /*!< (@ 0x00000006) Bits[63:48] reserved                                       */
  __IM  uint16_t  RSVD_H4;                      /*!< (@ 0x00000008) Bits[79:64] reserved                                       */
} MEC_ESPI_MEM_EC_MEM_BAR_Type;                 /*!< Size = 10 (0xa)                                                           */


/**
  * @brief MEC_ESPI_MEM_EC_SRAM_BAR [EC_SRAM_BAR] (SRAM Memory BAR valid, access, size, and EC memory base. EC-only access)
  */
typedef struct mec_espi_mem_ec_sram_bar_regs {
  __IOM uint16_t  VASZ;                         /*!< (@ 0x00000000) 16-bit register with valid(enable), access mode,
                                                                    and size                                                   */
  __IOM uint16_t  EC_SRAM_ADDR_15_0;            /*!< (@ 0x00000002) EC SRAM region base address[15:0]                          */
  __IOM uint16_t  EC_SRAM_ADDR_31_16;           /*!< (@ 0x00000004) EC SRAM region base address[31:16]                         */
  __IM  uint16_t  RESERVED[2];
} MEC_ESPI_MEM_EC_SRAM_BAR_Type;                /*!< Size = 10 (0xa)                                                           */


/**
  * @brief MEC_ESPI_MEM_HOST_MEM_BAR [HOST_MEM_BAR] (Memory BAR Host memory address mask. Host and EC access)
  */
typedef struct mec_espi_mem_host_mem_bar_regs {
  __IOM uint16_t  VALID;                        /*!< (@ 0x00000000) eSPI Memory Host memory valid enable                       */
  __IOM uint16_t  HOST_MEM_ADDR_B15_0;          /*!< (@ 0x00000002) Host memory address bits[15:0]                             */
  __IOM uint16_t  HOST_MEM_ADDR_B31_16;         /*!< (@ 0x00000004) Host memory address bits[31:16]                            */
  __IOM uint16_t  RSVD_H3;                      /*!< (@ 0x00000006) Bits[63:48] reserved                                       */
  __IOM uint16_t  RSVD_H4;                      /*!< (@ 0x00000008) Bits[79:64] reserved                                       */
} MEC_ESPI_MEM_HOST_MEM_BAR_Type;               /*!< Size = 10 (0xa)                                                           */


/**
  * @brief MEC_ESPI_MEM_HOST_SRAM_BAR [HOST_SRAM_BAR] (SRAM Memory BAR valid, access, size, and EC memory base. EC-only access)
  */
typedef struct mec_espi_mem_host_sram_bar_regs {
  __IM  uint16_t  VASZ;                         /*!< (@ 0x00000000) 16-bit register with valid(enable), access mode,
                                                                    and size                                                   */
  __IOM uint16_t  HOST_ADDR_15_0;               /*!< (@ 0x00000002) Host address[15:0] for accessing the EC SRAM
                                                                    region                                                     */
  __IOM uint16_t  HOST_ADDR_31_16;              /*!< (@ 0x00000004) Host address[31:16] for access the EC SRAM region          */
  __IM  uint16_t  RESERVED[2];
} MEC_ESPI_MEM_HOST_SRAM_BAR_Type;              /*!< Size = 10 (0xa)                                                           */

/** @} */ /* End of group Device_Peripheral_clusters */

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief eSPI Memory component (MEC_ESPI_MEM)
  */

typedef struct mec_espi_mem_regs {              /*!< (@ 0x400F3800) MEC_ESPI_MEM Structure                                     */
  __IM  uint32_t  RESERVED[76];
  __IM  MEC_ESPI_MEM_EC_MEM_BAR_Type EC_MEM_BAR[10];/*!< (@ 0x00000130) Memory BAR LDN and memory address mask. EC-only
                                                                    access                                                     */
  __IM  uint32_t  RESERVED1[6];
  __IOM MEC_ESPI_MEM_EC_SRAM_BAR_Type EC_SRAM_BAR[2];/*!< (@ 0x000001AC) SRAM Memory BAR valid, access, size, and EC memory
                                                                    base. EC-only access                                       */
  __IM  uint32_t  RESERVED2[16];
  __IOM uint32_t  BM_STATUS;                    /*!< (@ 0x00000200) eSPI Memory Component Bus Master Status register           */
  __IOM uint32_t  BM_IEN;                       /*!< (@ 0x00000204) eSPI Memory Component Bus Master Interrupt Enable
                                                                    register                                                   */
  __IOM uint32_t  BM_CONFIG;                    /*!< (@ 0x00000208) eSPI Memory Component Bus Master Configuration
                                                                    register                                                   */
  __IM  uint32_t  RESERVED3;
  __IOM uint32_t  BM_CTRL1;                     /*!< (@ 0x00000210) eSPI Memory Component Bus Master Control 1 register        */
  __IOM uint32_t  BM1_HADDR_LSW;                /*!< (@ 0x00000214) eSPI Memory Component Bus Master 1 Host Address
                                                                    b[31:0]                                                    */
  __IOM uint32_t  BM1_HADDR_MSW;                /*!< (@ 0x00000218) eSPI Memory Component Bus Master 1 Host Address
                                                                    b[63:32]                                                   */
  __IOM uint32_t  BM1_EC_ADDR_LSW;              /*!< (@ 0x0000021C) eSPI Memory Component Bus Master 1 EC SRAM Address
                                                                    b[31:0]                                                    */
  __IOM uint32_t  BM1_EC_ADDR_MSW;              /*!< (@ 0x00000220) eSPI Memory Component Bus Master 1 EC SRAM Address
                                                                    b[63:32]                                                   */
  __IOM uint32_t  BM_CTRL2;                     /*!< (@ 0x00000224) eSPI Memory Component Bus Master Control 2 register        */
  __IOM uint32_t  BM2_HADDR_LSW;                /*!< (@ 0x00000228) eSPI Memory Component Bus Master 2 Host Address
                                                                    b[31:0]                                                    */
  __IOM uint32_t  BM2_HADDR_MSW;                /*!< (@ 0x0000022C) eSPI Memory Component Bus Master 2 Host Address
                                                                    b[63:32]                                                   */
  __IOM uint32_t  BM2_EC_ADDR_LSW;              /*!< (@ 0x00000230) eSPI Memory Component Bus Master 2 EC SRAM Address
                                                                    b[31:0]                                                    */
  __IOM uint32_t  BM2_EC_ADDR_MSW;              /*!< (@ 0x00000234) eSPI Memory Component Bus Master 2 EC SRAM Address
                                                                    b[63:32]                                                   */
  __IM  uint32_t  RESERVED4[62];
  __IOM MEC_ESPI_MEM_HOST_MEM_BAR_Type HOST_MEM_BAR[10];/*!< (@ 0x00000330) Memory BAR Host memory address mask. Host and
                                                                    EC access                                                  */
  __IM  uint32_t  RESERVED5[5];
  __IOM uint32_t  MBAR_HOST_EXTEND;             /*!< (@ 0x000003A8) Host and EC access: Provides Host memory address
                                                                    bits[47:32] for all Logical Device memory
                                                                    BARs                                                       */
  __IOM MEC_ESPI_MEM_HOST_SRAM_BAR_Type HOST_SRAM_BAR[2];/*!< (@ 0x000003AC) SRAM Memory BAR valid, access, size, and EC memory
                                                                    base. EC-only access                                       */
  __IM  uint32_t  RESERVED6[15];
  __IOM uint32_t  SRAM_BAR_HOST_EXTEND;         /*!< (@ 0x000003FC) Host and EC access: provides Host memory address
                                                                    bits[47:32]. Applies to both SRAM memory
                                                                    BARs                                                       */
} MEC_ESPI_MEM_Type;                            /*!< Size = 1024 (0x400)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_clusters
  * @{
  */
/* ================                                        EC_MEM_BAR                                         ================ */
/* ========================================================  LDN_MSK  ======================================================== */
#define MEC_ESPI_MEM_EC_MEM_BAR_LDN_MSK_LDN_Pos (0UL)               /*!< LDN (Bit 0)                                           */
#define MEC_ESPI_MEM_EC_MEM_BAR_LDN_MSK_LDN_Msk (0xffUL)            /*!< LDN (Bitfield-Mask: 0xff)                             */
#define MEC_ESPI_MEM_EC_MEM_BAR_LDN_MSK_MSK_Pos (8UL)               /*!< MSK (Bit 8)                                           */
#define MEC_ESPI_MEM_EC_MEM_BAR_LDN_MSK_MSK_Msk (0x3f00UL)          /*!< MSK (Bitfield-Mask: 0x3f)                             */

/* =========================================================  VASZ  ========================================================== */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Pos (0UL)               /*!< VALID (Bit 0)                                         */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Msk (0x1UL)             /*!< VALID (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Pos (1UL)              /*!< ACCESS (Bit 1)                                        */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Msk (0x6UL)            /*!< ACCESS (Bitfield-Mask: 0x03)                          */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Pos (4UL)                /*!< SIZE (Bit 4)                                          */
#define MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Msk (0xf0UL)             /*!< SIZE (Bitfield-Mask: 0x0f)                            */

/* =========================================================  VALID  ========================================================= */
#define MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Pos (0UL)                /*!< EN (Bit 0)                                            */
#define MEC_ESPI_MEM_HOST_MEM_BAR_VALID_EN_Msk (0x1UL)              /*!< EN (Bitfield-Mask: 0x01)                              */

/* ================                                       HOST_SRAM_BAR                                       ================ */
/* =========================================================  VASZ  ========================================================== */
#define MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_Pos (1UL)            /*!< ACCESS (Bit 1)                                        */
#define MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_Msk (0x6UL)          /*!< ACCESS (Bitfield-Mask: 0x03)                          */
#define MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_Pos (4UL)              /*!< SIZE (Bit 4)                                          */
#define MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_Msk (0xf0UL)           /*!< SIZE (Bitfield-Mask: 0x0f)                            */


/** @} */ /* End of group PosMask_clusters */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  BM_STATUS  ======================================================= */
#define MEC_ESPI_MEM_BM_STATUS_BM1_XFR_DONE_Pos (0UL)               /*!< BM1_XFR_DONE (Bit 0)                                  */
#define MEC_ESPI_MEM_BM_STATUS_BM1_XFR_DONE_Msk (0x1UL)             /*!< BM1_XFR_DONE (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_MEM_BM_STATUS_BM1_BUSY_Pos (1UL)                   /*!< BM1_BUSY (Bit 1)                                      */
#define MEC_ESPI_MEM_BM_STATUS_BM1_BUSY_Msk (0x2UL)                 /*!< BM1_BUSY (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_MEM_BM_STATUS_BM1_EC_ABORT_Pos (2UL)               /*!< BM1_EC_ABORT (Bit 2)                                  */
#define MEC_ESPI_MEM_BM_STATUS_BM1_EC_ABORT_Msk (0x4UL)             /*!< BM1_EC_ABORT (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_MEM_BM_STATUS_BM1_HOST_ABORT_Pos (3UL)             /*!< BM1_HOST_ABORT (Bit 3)                                */
#define MEC_ESPI_MEM_BM_STATUS_BM1_HOST_ABORT_Msk (0x8UL)           /*!< BM1_HOST_ABORT (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_MEM_BM_STATUS_BM1_CH2_ERR_ABORT_Pos (4UL)          /*!< BM1_CH2_ERR_ABORT (Bit 4)                             */
#define MEC_ESPI_MEM_BM_STATUS_BM1_CH2_ERR_ABORT_Msk (0x10UL)       /*!< BM1_CH2_ERR_ABORT (Bitfield-Mask: 0x01)               */
#define MEC_ESPI_MEM_BM_STATUS_BM1_START_OVRFL_Pos (5UL)            /*!< BM1_START_OVRFL (Bit 5)                               */
#define MEC_ESPI_MEM_BM_STATUS_BM1_START_OVRFL_Msk (0x20UL)         /*!< BM1_START_OVRFL (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_MEM_BM_STATUS_BM1_DATA_OVRUN_Pos (6UL)             /*!< BM1_DATA_OVRUN (Bit 6)                                */
#define MEC_ESPI_MEM_BM_STATUS_BM1_DATA_OVRUN_Msk (0x40UL)          /*!< BM1_DATA_OVRUN (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_MEM_BM_STATUS_BM1_INCOMPL_Pos (7UL)                /*!< BM1_INCOMPL (Bit 7)                                   */
#define MEC_ESPI_MEM_BM_STATUS_BM1_INCOMPL_Msk (0x80UL)             /*!< BM1_INCOMPL (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_MEM_BM_STATUS_BM1_FAIL_Pos (8UL)                   /*!< BM1_FAIL (Bit 8)                                      */
#define MEC_ESPI_MEM_BM_STATUS_BM1_FAIL_Msk (0x100UL)               /*!< BM1_FAIL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_MEM_BM_STATUS_BM1_AHB_BUS_ERR_Pos (9UL)            /*!< BM1_AHB_BUS_ERR (Bit 9)                               */
#define MEC_ESPI_MEM_BM_STATUS_BM1_AHB_BUS_ERR_Msk (0x200UL)        /*!< BM1_AHB_BUS_ERR (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_MEM_BM_STATUS_BM1_BAD_REQ_Pos (11UL)               /*!< BM1_BAD_REQ (Bit 11)                                  */
#define MEC_ESPI_MEM_BM_STATUS_BM1_BAD_REQ_Msk (0x800UL)            /*!< BM1_BAD_REQ (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_MEM_BM_STATUS_BM2_XFR_DONE_Pos (16UL)              /*!< BM2_XFR_DONE (Bit 16)                                 */
#define MEC_ESPI_MEM_BM_STATUS_BM2_XFR_DONE_Msk (0x10000UL)         /*!< BM2_XFR_DONE (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_MEM_BM_STATUS_BM2_BUSY_Pos (17UL)                  /*!< BM2_BUSY (Bit 17)                                     */
#define MEC_ESPI_MEM_BM_STATUS_BM2_BUSY_Msk (0x20000UL)             /*!< BM2_BUSY (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_MEM_BM_STATUS_BM2_EC_ABORT_Pos (18UL)              /*!< BM2_EC_ABORT (Bit 18)                                 */
#define MEC_ESPI_MEM_BM_STATUS_BM2_EC_ABORT_Msk (0x40000UL)         /*!< BM2_EC_ABORT (Bitfield-Mask: 0x01)                    */
#define MEC_ESPI_MEM_BM_STATUS_BM2_HOST_ABORT_Pos (19UL)            /*!< BM2_HOST_ABORT (Bit 19)                               */
#define MEC_ESPI_MEM_BM_STATUS_BM2_HOST_ABORT_Msk (0x80000UL)       /*!< BM2_HOST_ABORT (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_MEM_BM_STATUS_BM2_CH1_ERR_ABORT_Pos (20UL)         /*!< BM2_CH1_ERR_ABORT (Bit 20)                            */
#define MEC_ESPI_MEM_BM_STATUS_BM2_CH1_ERR_ABORT_Msk (0x100000UL)   /*!< BM2_CH1_ERR_ABORT (Bitfield-Mask: 0x01)               */
#define MEC_ESPI_MEM_BM_STATUS_BM2_START_OVRFL_Pos (21UL)           /*!< BM2_START_OVRFL (Bit 21)                              */
#define MEC_ESPI_MEM_BM_STATUS_BM2_START_OVRFL_Msk (0x200000UL)     /*!< BM2_START_OVRFL (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_MEM_BM_STATUS_BM2_DATA_OVRUN_Pos (22UL)            /*!< BM2_DATA_OVRUN (Bit 22)                               */
#define MEC_ESPI_MEM_BM_STATUS_BM2_DATA_OVRUN_Msk (0x400000UL)      /*!< BM2_DATA_OVRUN (Bitfield-Mask: 0x01)                  */
#define MEC_ESPI_MEM_BM_STATUS_BM2_INCOMPL_Pos (23UL)               /*!< BM2_INCOMPL (Bit 23)                                  */
#define MEC_ESPI_MEM_BM_STATUS_BM2_INCOMPL_Msk (0x800000UL)         /*!< BM2_INCOMPL (Bitfield-Mask: 0x01)                     */
#define MEC_ESPI_MEM_BM_STATUS_BM2_FAIL_Pos (24UL)                  /*!< BM2_FAIL (Bit 24)                                     */
#define MEC_ESPI_MEM_BM_STATUS_BM2_FAIL_Msk (0x1000000UL)           /*!< BM2_FAIL (Bitfield-Mask: 0x01)                        */
#define MEC_ESPI_MEM_BM_STATUS_BM2_AHB_BUS_ERR_Pos (25UL)           /*!< BM2_AHB_BUS_ERR (Bit 25)                              */
#define MEC_ESPI_MEM_BM_STATUS_BM2_AHB_BUS_ERR_Msk (0x2000000UL)    /*!< BM2_AHB_BUS_ERR (Bitfield-Mask: 0x01)                 */
#define MEC_ESPI_MEM_BM_STATUS_BM2_BAD_REQ_Pos (27UL)               /*!< BM2_BAD_REQ (Bit 27)                                  */
#define MEC_ESPI_MEM_BM_STATUS_BM2_BAD_REQ_Msk (0x8000000UL)        /*!< BM2_BAD_REQ (Bitfield-Mask: 0x01)                     */
/* ========================================================  BM_IEN  ========================================================= */
#define MEC_ESPI_MEM_BM_IEN_BM1_XFR_DONE_IEN_Pos (0UL)              /*!< BM1_XFR_DONE_IEN (Bit 0)                              */
#define MEC_ESPI_MEM_BM_IEN_BM1_XFR_DONE_IEN_Msk (0x1UL)            /*!< BM1_XFR_DONE_IEN (Bitfield-Mask: 0x01)                */
#define MEC_ESPI_MEM_BM_IEN_BM2_XFR_DONE_IEN_Pos (16UL)             /*!< BM2_XFR_DONE_IEN (Bit 16)                             */
#define MEC_ESPI_MEM_BM_IEN_BM2_XFR_DONE_IEN_Msk (0x10000UL)        /*!< BM2_XFR_DONE_IEN (Bitfield-Mask: 0x01)                */
/* =======================================================  BM_CONFIG  ======================================================= */
#define MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_Pos (0UL)                    /*!< BM1_TAG (Bit 0)                                       */
#define MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_Msk (0xfUL)                  /*!< BM1_TAG (Bitfield-Mask: 0x0f)                         */
#define MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_Pos (16UL)                   /*!< BM2_TAG (Bit 16)                                      */
#define MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_Msk (0xf0000UL)              /*!< BM2_TAG (Bitfield-Mask: 0x0f)                         */
/* =======================================================  BM_CTRL1  ======================================================== */
#define MEC_ESPI_MEM_BM_CTRL1_START_Pos   (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_MEM_BM_CTRL1_START_Msk   (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_MEM_BM_CTRL1_ABORT_Pos   (1UL)                     /*!< ABORT (Bit 1)                                         */
#define MEC_ESPI_MEM_BM_CTRL1_ABORT_Msk   (0x2UL)                   /*!< ABORT (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_MEM_BM_CTRL1_INCR_AHB_ADDR_Pos (2UL)               /*!< INCR_AHB_ADDR (Bit 2)                                 */
#define MEC_ESPI_MEM_BM_CTRL1_INCR_AHB_ADDR_Msk (0x4UL)             /*!< INCR_AHB_ADDR (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_MEM_BM_CTRL1_WAIT_BM2_NOT_BUSY_Pos (3UL)           /*!< WAIT_BM2_NOT_BUSY (Bit 3)                             */
#define MEC_ESPI_MEM_BM_CTRL1_WAIT_BM2_NOT_BUSY_Msk (0x8UL)         /*!< WAIT_BM2_NOT_BUSY (Bitfield-Mask: 0x01)               */
#define MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_Pos (8UL)                  /*!< CYCLE_TYPE (Bit 8)                                    */
#define MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_Msk (0x300UL)              /*!< CYCLE_TYPE (Bitfield-Mask: 0x03)                      */
#define MEC_ESPI_MEM_BM_CTRL1_LEN_Pos     (16UL)                    /*!< LEN (Bit 16)                                          */
#define MEC_ESPI_MEM_BM_CTRL1_LEN_Msk     (0x1fff0000UL)            /*!< LEN (Bitfield-Mask: 0x1fff)                           */
/* =====================================================  BM1_HADDR_LSW  ===================================================== */
/* =====================================================  BM1_HADDR_MSW  ===================================================== */
/* ====================================================  BM1_EC_ADDR_LSW  ==================================================== */
/* ====================================================  BM1_EC_ADDR_MSW  ==================================================== */
/* =======================================================  BM_CTRL2  ======================================================== */
#define MEC_ESPI_MEM_BM_CTRL2_START_Pos   (0UL)                     /*!< START (Bit 0)                                         */
#define MEC_ESPI_MEM_BM_CTRL2_START_Msk   (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_MEM_BM_CTRL2_ABORT_Pos   (1UL)                     /*!< ABORT (Bit 1)                                         */
#define MEC_ESPI_MEM_BM_CTRL2_ABORT_Msk   (0x2UL)                   /*!< ABORT (Bitfield-Mask: 0x01)                           */
#define MEC_ESPI_MEM_BM_CTRL2_INCR_AHB_ADDR_Pos (2UL)               /*!< INCR_AHB_ADDR (Bit 2)                                 */
#define MEC_ESPI_MEM_BM_CTRL2_INCR_AHB_ADDR_Msk (0x4UL)             /*!< INCR_AHB_ADDR (Bitfield-Mask: 0x01)                   */
#define MEC_ESPI_MEM_BM_CTRL2_WAIT_BM2_NOT_BUSY_Pos (3UL)           /*!< WAIT_BM2_NOT_BUSY (Bit 3)                             */
#define MEC_ESPI_MEM_BM_CTRL2_WAIT_BM2_NOT_BUSY_Msk (0x8UL)         /*!< WAIT_BM2_NOT_BUSY (Bitfield-Mask: 0x01)               */
#define MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_Pos (8UL)                  /*!< CYCLE_TYPE (Bit 8)                                    */
#define MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_Msk (0x300UL)              /*!< CYCLE_TYPE (Bitfield-Mask: 0x03)                      */
#define MEC_ESPI_MEM_BM_CTRL2_LEN_Pos     (16UL)                    /*!< LEN (Bit 16)                                          */
#define MEC_ESPI_MEM_BM_CTRL2_LEN_Msk     (0x1fff0000UL)            /*!< LEN (Bitfield-Mask: 0x1fff)                           */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_clusters
  * @{
  */
/* ======================================================  EC_MEM_BAR   ====================================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_EC_MEM_BAR                                                   */
  MEC_ESPI_MEM_EC_MEM_BAR_MBOX         = 0,     /*!< MBOX : Mailbox LDN and memory address mask                                */
  MEC_ESPI_MEM_EC_MEM_BAR_ACPI_EC0     = 1,     /*!< ACPI_EC0 : eSPI ACPI EC0 LDN and memory address mask                      */
  MEC_ESPI_MEM_EC_MEM_BAR_ACPI_EC1     = 2,     /*!< ACPI_EC1 : eSPI ACPI EC1 LDN and memory address mask                      */
  MEC_ESPI_MEM_EC_MEM_BAR_ACPI_EC2     = 3,     /*!< ACPI_EC2 : eSPI ACPI EC2 LDN and memory address mask                      */
  MEC_ESPI_MEM_EC_MEM_BAR_ACPI_EC3     = 4,     /*!< ACPI_EC3 : eSPI ACPI EC3 LDN and memory address mask                      */
  MEC_ESPI_MEM_EC_MEM_BAR_ACPI_EC4     = 5,     /*!< ACPI_EC4 : eSPI ACPI EC4 LDN and memory address mask                      */
  MEC_ESPI_MEM_EC_MEM_BAR_EMI0         = 6,     /*!< EMI0 : eSPI EMI0 LDN and memory address mask                              */
  MEC_ESPI_MEM_EC_MEM_BAR_EMI1         = 7,     /*!< EMI1 : eSPI EMI1 LDN and memory address mask                              */
  MEC_ESPI_MEM_EC_MEM_BAR_EMI2         = 8,     /*!< EMI2 : eSPI EMI2 LDN and memory address mask                              */
  MEC_ESPI_MEM_EC_MEM_BAR_RSVD9        = 9,     /*!< RSVD9 : eSPI Reserved LDN and memory address mask                         */
} MEC_ESPI_MEM_EC_MEM_BAR_Enum;

/* ================                                        EC_SRAM_BAR                                        ================ */
/* =============================================  EC_SRAM_BAR VASZ VALID [0..0]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID                                       */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_EN = 1,   /*!< EN : Enable BAR to participate in eSPI memory address matches             */
} MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_VALID_Enum;

/* ============================================  EC_SRAM_BAR VASZ ACCESS [1..2]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS                                      */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_NONE = 0,/*!< NONE : Host has no access to this region                                  */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_RO = 1,  /*!< RO : Host has read-only access to this region                             */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_WO = 2,  /*!< WO : Host has write-only access to this region                            */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_RW = 3,  /*!< RW : Host has read-write access to this region                            */
} MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_ACCESS_Enum;

/* =============================================  EC_SRAM_BAR VASZ SIZE [4..7]  ============================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE                                        */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_1B = 0,    /*!< 1B : Size is one byte                                                     */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_2B = 1,    /*!< 2B : Size is two bytes                                                    */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_4B = 2,    /*!< 4B : Size is four bytes                                                   */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_8B = 3,    /*!< 8B : Size is eight bytes                                                  */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_16B = 4,   /*!< 16B : Size is 16 bytes                                                    */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_32B = 5,   /*!< 32B : Size is 32 bytes                                                    */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_64B = 6,   /*!< 64B : Size is 64 bytes                                                    */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_128B = 7,  /*!< 128B : Size is 128 bytes                                                  */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_256B = 8,  /*!< 256B : Size is 256 bytes                                                  */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_512B = 9,  /*!< 512B : Size is 512 bytes                                                  */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_1KB = 10,  /*!< 1KB : Size is 1KB                                                         */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_2KB = 11,  /*!< 2KB : Size is 2KB                                                         */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_4KB = 12,  /*!< 4KB : Size is 4KB                                                         */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_8KB = 13,  /*!< 8KB : Size is 8KB                                                         */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_16KB = 14, /*!< 16KB : Size is 16KB                                                       */
  MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_32KB = 15, /*!< 32KB : Size is 32KB                                                       */
} MEC_ESPI_MEM_EC_SRAM_BAR_VASZ_SIZE_Enum;

/* ================                                       HOST_MEM_BAR                                        ================ */
typedef enum {                                  /*!< MEC_ESPI_MEM_HOST_MEM_BAR                                                 */
  MEC_ESPI_MEM_HOST_MEM_BAR_MBOX       = 0,     /*!< MBOX : Mailbox memory address bits[31:0] and valid bit                    */
  MEC_ESPI_MEM_HOST_MEM_BAR_ACPI_EC0   = 1,     /*!< ACPI_EC0 : ACPI EC0 memory address bits[31:0] and valid bit               */
  MEC_ESPI_MEM_HOST_MEM_BAR_ACPI_EC1   = 2,     /*!< ACPI_EC1 : ACPI EC1 memory address bits[31:0] and valid bit               */
  MEC_ESPI_MEM_HOST_MEM_BAR_ACPI_EC2   = 3,     /*!< ACPI_EC2 : ACPI EC2 memory address bits[31:0] and valid bit               */
  MEC_ESPI_MEM_HOST_MEM_BAR_ACPI_EC3   = 4,     /*!< ACPI_EC3 : ACPI EC3 memory address bits[31:0] and valid bit               */
  MEC_ESPI_MEM_HOST_MEM_BAR_ACPI_EC4   = 5,     /*!< ACPI_EC4 : ACPI EC4 memory address bits[31:0] and valid bit               */
  MEC_ESPI_MEM_HOST_MEM_BAR_EMI0       = 6,     /*!< EMI0 : EMI0 memory address bits[31:0] and valid bit                       */
  MEC_ESPI_MEM_HOST_MEM_BAR_EMI1       = 7,     /*!< EMI1 : EMI1 memory address bits[31:0] and valid bit                       */
  MEC_ESPI_MEM_HOST_MEM_BAR_EMI2       = 8,     /*!< EMI2 : EMI2 memory address bits[31:0] and valid bit                       */
  MEC_ESPI_MEM_HOST_MEM_BAR_RSVD9      = 9,     /*!< RSVD9 : eSPI Reserved memory address bits[31:0] and valid bit             */
} MEC_ESPI_MEM_HOST_MEM_BAR_Enum;

/* ================                                       HOST_SRAM_BAR                                       ================ */
/* ===========================================  HOST_SRAM_BAR VASZ ACCESS [1..2]  ============================================ */
typedef enum {                                  /*!< MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS                                    */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_NONE = 0,/*!< NONE : Host has no access to this region                                */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_RO = 1,/*!< RO : Host has read-only access to this region                             */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_WO = 2,/*!< WO : Host has write-only access to this region                            */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_RW = 3,/*!< RW : Host has read-write access to this region                            */
} MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_ACCESS_Enum;

/* ============================================  HOST_SRAM_BAR VASZ SIZE [4..7]  ============================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE                                      */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_1B = 0,  /*!< 1B : Size is one byte                                                     */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_2B = 1,  /*!< 2B : Size is two bytes                                                    */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_4B = 2,  /*!< 4B : Size is four bytes                                                   */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_8B = 3,  /*!< 8B : Size is eight bytes                                                  */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_16B = 4, /*!< 16B : Size is 16 bytes                                                    */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_32B = 5, /*!< 32B : Size is 32 bytes                                                    */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_64B = 6, /*!< 64B : Size is 64 bytes                                                    */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_128B = 7,/*!< 128B : Size is 128 bytes                                                  */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_256B = 8,/*!< 256B : Size is 256 bytes                                                  */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_512B = 9,/*!< 512B : Size is 512 bytes                                                  */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_1KB = 10,/*!< 1KB : Size is 1KB                                                         */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_2KB = 11,/*!< 2KB : Size is 2KB                                                         */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_4KB = 12,/*!< 4KB : Size is 4KB                                                         */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_8KB = 13,/*!< 8KB : Size is 8KB                                                         */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_16KB = 14,/*!< 16KB : Size is 16KB                                                      */
  MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_32KB = 15,/*!< 32KB : Size is 32KB                                                      */
} MEC_ESPI_MEM_HOST_SRAM_BAR_VASZ_SIZE_Enum;

/** @} */ /* End of group EnumValue_clusters */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =======================================================  BM_STATUS  ======================================================= */
/* ======================================  MEC_ESPI_MEM BM_STATUS BM1_XFR_DONE [0..0]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_XFR_DONE                                       */
  MEC_ESPI_MEM_BM_STATUS_BM1_XFR_DONE_ACTV = 1, /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_XFR_DONE_Enum;

/* ========================================  MEC_ESPI_MEM BM_STATUS BM1_BUSY [1..1]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_BUSY                                           */
  MEC_ESPI_MEM_BM_STATUS_BM1_BUSY_ACTV = 1,     /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_BUSY_Enum;

/* ======================================  MEC_ESPI_MEM BM_STATUS BM1_EC_ABORT [2..2]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_EC_ABORT                                       */
  MEC_ESPI_MEM_BM_STATUS_BM1_EC_ABORT_ACTV = 1, /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_EC_ABORT_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM1_HOST_ABORT [3..3]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_HOST_ABORT                                     */
  MEC_ESPI_MEM_BM_STATUS_BM1_HOST_ABORT_ACTV = 1,/*!< ACTV : Status is active                                                  */
} MEC_ESPI_MEM_BM_STATUS_BM1_HOST_ABORT_Enum;

/* ====================================  MEC_ESPI_MEM BM_STATUS BM1_CH2_ERR_ABORT [4..4]  ==================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_CH2_ERR_ABORT                                  */
  MEC_ESPI_MEM_BM_STATUS_BM1_CH2_ERR_ABORT_ACTV = 1,/*!< ACTV : Status is active                                               */
} MEC_ESPI_MEM_BM_STATUS_BM1_CH2_ERR_ABORT_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM1_START_OVRFL [5..5]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_START_OVRFL                                    */
  MEC_ESPI_MEM_BM_STATUS_BM1_START_OVRFL_ACTV = 1,/*!< ACTV : Status is active                                                 */
} MEC_ESPI_MEM_BM_STATUS_BM1_START_OVRFL_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM1_DATA_OVRUN [6..6]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_DATA_OVRUN                                     */
  MEC_ESPI_MEM_BM_STATUS_BM1_DATA_OVRUN_ACTV = 1,/*!< ACTV : Status is active                                                  */
} MEC_ESPI_MEM_BM_STATUS_BM1_DATA_OVRUN_Enum;

/* =======================================  MEC_ESPI_MEM BM_STATUS BM1_INCOMPL [7..7]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_INCOMPL                                        */
  MEC_ESPI_MEM_BM_STATUS_BM1_INCOMPL_ACTV = 1,  /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_INCOMPL_Enum;

/* ========================================  MEC_ESPI_MEM BM_STATUS BM1_FAIL [8..8]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_FAIL                                           */
  MEC_ESPI_MEM_BM_STATUS_BM1_FAIL_ACTV = 1,     /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_FAIL_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM1_AHB_BUS_ERR [9..9]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_AHB_BUS_ERR                                    */
  MEC_ESPI_MEM_BM_STATUS_BM1_AHB_BUS_ERR_ACTV = 1,/*!< ACTV : Status is active                                                 */
} MEC_ESPI_MEM_BM_STATUS_BM1_AHB_BUS_ERR_Enum;

/* ======================================  MEC_ESPI_MEM BM_STATUS BM1_BAD_REQ [11..11]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM1_BAD_REQ                                        */
  MEC_ESPI_MEM_BM_STATUS_BM1_BAD_REQ_ACTV = 1,  /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM1_BAD_REQ_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM2_XFR_DONE [16..16]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_XFR_DONE                                       */
  MEC_ESPI_MEM_BM_STATUS_BM2_XFR_DONE_ACTV = 1, /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_XFR_DONE_Enum;

/* =======================================  MEC_ESPI_MEM BM_STATUS BM2_BUSY [17..17]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_BUSY                                           */
  MEC_ESPI_MEM_BM_STATUS_BM2_BUSY_ACTV = 1,     /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_BUSY_Enum;

/* =====================================  MEC_ESPI_MEM BM_STATUS BM2_EC_ABORT [18..18]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_EC_ABORT                                       */
  MEC_ESPI_MEM_BM_STATUS_BM2_EC_ABORT_ACTV = 1, /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_EC_ABORT_Enum;

/* ====================================  MEC_ESPI_MEM BM_STATUS BM2_HOST_ABORT [19..19]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_HOST_ABORT                                     */
  MEC_ESPI_MEM_BM_STATUS_BM2_HOST_ABORT_ACTV = 1,/*!< ACTV : Status is active                                                  */
} MEC_ESPI_MEM_BM_STATUS_BM2_HOST_ABORT_Enum;

/* ===================================  MEC_ESPI_MEM BM_STATUS BM2_CH1_ERR_ABORT [20..20]  =================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_CH1_ERR_ABORT                                  */
  MEC_ESPI_MEM_BM_STATUS_BM2_CH1_ERR_ABORT_ACTV = 1,/*!< ACTV : Status is active                                               */
} MEC_ESPI_MEM_BM_STATUS_BM2_CH1_ERR_ABORT_Enum;

/* ====================================  MEC_ESPI_MEM BM_STATUS BM2_START_OVRFL [21..21]  ==================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_START_OVRFL                                    */
  MEC_ESPI_MEM_BM_STATUS_BM2_START_OVRFL_ACTV = 1,/*!< ACTV : Status is active                                                 */
} MEC_ESPI_MEM_BM_STATUS_BM2_START_OVRFL_Enum;

/* ====================================  MEC_ESPI_MEM BM_STATUS BM2_DATA_OVRUN [22..22]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_DATA_OVRUN                                     */
  MEC_ESPI_MEM_BM_STATUS_BM2_DATA_OVRUN_ACTV = 1,/*!< ACTV : Status is active                                                  */
} MEC_ESPI_MEM_BM_STATUS_BM2_DATA_OVRUN_Enum;

/* ======================================  MEC_ESPI_MEM BM_STATUS BM2_INCOMPL [23..23]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_INCOMPL                                        */
  MEC_ESPI_MEM_BM_STATUS_BM2_INCOMPL_ACTV = 1,  /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_INCOMPL_Enum;

/* =======================================  MEC_ESPI_MEM BM_STATUS BM2_FAIL [24..24]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_FAIL                                           */
  MEC_ESPI_MEM_BM_STATUS_BM2_FAIL_ACTV = 1,     /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_FAIL_Enum;

/* ====================================  MEC_ESPI_MEM BM_STATUS BM2_AHB_BUS_ERR [25..25]  ==================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_AHB_BUS_ERR                                    */
  MEC_ESPI_MEM_BM_STATUS_BM2_AHB_BUS_ERR_ACTV = 1,/*!< ACTV : Status is active                                                 */
} MEC_ESPI_MEM_BM_STATUS_BM2_AHB_BUS_ERR_Enum;

/* ======================================  MEC_ESPI_MEM BM_STATUS BM2_BAD_REQ [27..27]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_STATUS_BM2_BAD_REQ                                        */
  MEC_ESPI_MEM_BM_STATUS_BM2_BAD_REQ_ACTV = 1,  /*!< ACTV : Status is active                                                   */
} MEC_ESPI_MEM_BM_STATUS_BM2_BAD_REQ_Enum;

/* ========================================================  BM_IEN  ========================================================= */
/* ======================================  MEC_ESPI_MEM BM_IEN BM1_XFR_DONE_IEN [0..0]  ====================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_IEN_BM1_XFR_DONE_IEN                                      */
  MEC_ESPI_MEM_BM_IEN_BM1_XFR_DONE_IEN_EN = 1,  /*!< EN : Enable                                                               */
} MEC_ESPI_MEM_BM_IEN_BM1_XFR_DONE_IEN_Enum;

/* =====================================  MEC_ESPI_MEM BM_IEN BM2_XFR_DONE_IEN [16..16]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_IEN_BM2_XFR_DONE_IEN                                      */
  MEC_ESPI_MEM_BM_IEN_BM2_XFR_DONE_IEN_EN = 1,  /*!< EN : Enable                                                               */
} MEC_ESPI_MEM_BM_IEN_BM2_XFR_DONE_IEN_Enum;

/* =======================================================  BM_CONFIG  ======================================================= */
/* =========================================  MEC_ESPI_MEM BM_CONFIG BM1_TAG [0..3]  ========================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CONFIG_BM1_TAG                                            */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG0 = 0, /*!< ESPI_TAG0 : eSPI traffic 4-bit TAG 0                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG1 = 1, /*!< ESPI_TAG1 : eSPI traffic 4-bit TAG 1                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG2 = 2, /*!< ESPI_TAG2 : eSPI traffic 4-bit TAG 2                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG3 = 3, /*!< ESPI_TAG3 : eSPI traffic 4-bit TAG 3                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG4 = 4, /*!< ESPI_TAG4 : eSPI traffic 4-bit TAG 4                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG5 = 5, /*!< ESPI_TAG5 : eSPI traffic 4-bit TAG 5                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG6 = 6, /*!< ESPI_TAG6 : eSPI traffic 4-bit TAG 6                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG7 = 7, /*!< ESPI_TAG7 : eSPI traffic 4-bit TAG 7                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG8 = 8, /*!< ESPI_TAG8 : eSPI traffic 4-bit TAG 8                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG9 = 9, /*!< ESPI_TAG9 : eSPI traffic 4-bit TAG 9                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG10 = 10,/*!< ESPI_TAG10 : eSPI traffic 4-bit TAG 10                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG11 = 11,/*!< ESPI_TAG11 : eSPI traffic 4-bit TAG 11                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG12 = 12,/*!< ESPI_TAG12 : eSPI traffic 4-bit TAG 12                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG13 = 13,/*!< ESPI_TAG13 : eSPI traffic 4-bit TAG 13                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG14 = 14,/*!< ESPI_TAG14 : eSPI traffic 4-bit TAG 14                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_ESPI_TAG15 = 15,/*!< ESPI_TAG15 : eSPI traffic 4-bit TAG 15                                   */
} MEC_ESPI_MEM_BM_CONFIG_BM1_TAG_Enum;

/* ========================================  MEC_ESPI_MEM BM_CONFIG BM2_TAG [16..19]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CONFIG_BM2_TAG                                            */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG0 = 0, /*!< ESPI_TAG0 : eSPI traffic 4-bit TAG 0                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG1 = 1, /*!< ESPI_TAG1 : eSPI traffic 4-bit TAG 1                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG2 = 2, /*!< ESPI_TAG2 : eSPI traffic 4-bit TAG 2                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG3 = 3, /*!< ESPI_TAG3 : eSPI traffic 4-bit TAG 3                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG4 = 4, /*!< ESPI_TAG4 : eSPI traffic 4-bit TAG 4                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG5 = 5, /*!< ESPI_TAG5 : eSPI traffic 4-bit TAG 5                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG6 = 6, /*!< ESPI_TAG6 : eSPI traffic 4-bit TAG 6                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG7 = 7, /*!< ESPI_TAG7 : eSPI traffic 4-bit TAG 7                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG8 = 8, /*!< ESPI_TAG8 : eSPI traffic 4-bit TAG 8                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG9 = 9, /*!< ESPI_TAG9 : eSPI traffic 4-bit TAG 9                                      */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG10 = 10,/*!< ESPI_TAG10 : eSPI traffic 4-bit TAG 10                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG11 = 11,/*!< ESPI_TAG11 : eSPI traffic 4-bit TAG 11                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG12 = 12,/*!< ESPI_TAG12 : eSPI traffic 4-bit TAG 12                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG13 = 13,/*!< ESPI_TAG13 : eSPI traffic 4-bit TAG 13                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG14 = 14,/*!< ESPI_TAG14 : eSPI traffic 4-bit TAG 14                                   */
  MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_ESPI_TAG15 = 15,/*!< ESPI_TAG15 : eSPI traffic 4-bit TAG 15                                   */
} MEC_ESPI_MEM_BM_CONFIG_BM2_TAG_Enum;

/* =======================================================  BM_CTRL1  ======================================================== */
/* ==========================================  MEC_ESPI_MEM BM_CTRL1 START [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL1_START                                               */
  MEC_ESPI_MEM_BM_CTRL1_START_EN       = 1,     /*!< EN : Enable start value                                                   */
} MEC_ESPI_MEM_BM_CTRL1_START_Enum;

/* ==========================================  MEC_ESPI_MEM BM_CTRL1 ABORT [1..1]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL1_ABORT                                               */
  MEC_ESPI_MEM_BM_CTRL1_ABORT_EN       = 1,     /*!< EN : Enable abort value                                                   */
} MEC_ESPI_MEM_BM_CTRL1_ABORT_Enum;

/* ======================================  MEC_ESPI_MEM BM_CTRL1 INCR_AHB_ADDR [2..2]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL1_INCR_AHB_ADDR                                       */
  MEC_ESPI_MEM_BM_CTRL1_INCR_AHB_ADDR_EN = 1,   /*!< EN : AHB address increment enable value                                   */
} MEC_ESPI_MEM_BM_CTRL1_INCR_AHB_ADDR_Enum;

/* ====================================  MEC_ESPI_MEM BM_CTRL1 WAIT_BM2_NOT_BUSY [3..3]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL1_WAIT_BM2_NOT_BUSY                                   */
  MEC_ESPI_MEM_BM_CTRL1_WAIT_BM2_NOT_BUSY_EN = 1,/*!< EN : Wait for BM2 not busy enable value                                  */
} MEC_ESPI_MEM_BM_CTRL1_WAIT_BM2_NOT_BUSY_Enum;

/* ========================================  MEC_ESPI_MEM BM_CTRL1 CYCLE_TYPE [8..9]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE                                          */
  MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_RD32 = 0,    /*!< RD32 : Memory read using 32-bit address                                   */
  MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_WR32 = 1,    /*!< WR32 : Memory write using 32-bit address                                  */
  MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_RD64 = 2,    /*!< RD64 : Memory read using 64-bit address                                   */
  MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_WR64 = 3,    /*!< WR64 : Memory write using 64-bit address                                  */
} MEC_ESPI_MEM_BM_CTRL1_CYCLE_TYPE_Enum;

/* =====================================================  BM1_HADDR_LSW  ===================================================== */
/* =====================================================  BM1_HADDR_MSW  ===================================================== */
/* ====================================================  BM1_EC_ADDR_LSW  ==================================================== */
/* ====================================================  BM1_EC_ADDR_MSW  ==================================================== */
/* =======================================================  BM_CTRL2  ======================================================== */
/* ==========================================  MEC_ESPI_MEM BM_CTRL2 START [0..0]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL2_START                                               */
  MEC_ESPI_MEM_BM_CTRL2_START_EN       = 1,     /*!< EN : Enable start value                                                   */
} MEC_ESPI_MEM_BM_CTRL2_START_Enum;

/* ==========================================  MEC_ESPI_MEM BM_CTRL2 ABORT [1..1]  =========================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL2_ABORT                                               */
  MEC_ESPI_MEM_BM_CTRL2_ABORT_EN       = 1,     /*!< EN : Enable abort value                                                   */
} MEC_ESPI_MEM_BM_CTRL2_ABORT_Enum;

/* ======================================  MEC_ESPI_MEM BM_CTRL2 INCR_AHB_ADDR [2..2]  ======================================= */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL2_INCR_AHB_ADDR                                       */
  MEC_ESPI_MEM_BM_CTRL2_INCR_AHB_ADDR_EN = 1,   /*!< EN : AHB address increment enable value                                   */
} MEC_ESPI_MEM_BM_CTRL2_INCR_AHB_ADDR_Enum;

/* ====================================  MEC_ESPI_MEM BM_CTRL2 WAIT_BM2_NOT_BUSY [3..3]  ===================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL2_WAIT_BM2_NOT_BUSY                                   */
  MEC_ESPI_MEM_BM_CTRL2_WAIT_BM2_NOT_BUSY_EN = 1,/*!< EN : Wait for BM2 not busy enable value                                  */
} MEC_ESPI_MEM_BM_CTRL2_WAIT_BM2_NOT_BUSY_Enum;

/* ========================================  MEC_ESPI_MEM BM_CTRL2 CYCLE_TYPE [8..9]  ======================================== */
typedef enum {                                  /*!< MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE                                          */
  MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_RD32 = 0,    /*!< RD32 : Memory read using 32-bit address                                   */
  MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_WR32 = 1,    /*!< WR32 : Memory write using 32-bit address                                  */
  MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_RD64 = 2,    /*!< RD64 : Memory read using 64-bit address                                   */
  MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_WR64 = 3,    /*!< WR64 : Memory write using 64-bit address                                  */
} MEC_ESPI_MEM_BM_CTRL2_CYCLE_TYPE_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_ESPI_MEM_V1_4_H */
