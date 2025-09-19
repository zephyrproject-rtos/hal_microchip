/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_BDP_V1_H
#define _MEC5_BDP_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief BDP BIOS Debug Port: Host I/O Ports 80/90 (MEC_BDP0)
  */

typedef struct mec_bdp_regs {                   /*!< (@ 0x400F8000) MEC_BDP0 Structure                                         */
  __OM  uint32_t  HP80D;                        /*!< (@ 0x00000000) BDP Runtime: Host Port80 data                              */
  __IM  uint32_t  RESERVED[63];
  __IM  uint32_t  DATRB;                        /*!< (@ 0x00000100) BDP EC-only: data with attributes                          */
  __IOM uint32_t  CONFIG;                       /*!< (@ 0x00000104) BDP EC-only: configuration                                 */
  __IM  uint8_t   STATUS;                       /*!< (@ 0x00000108) BDP EC-only: status(RO)                                    */
  __IOM uint8_t   IEN;                          /*!< (@ 0x00000109) BDP EC-only: interrupt enable                              */
  __IM  uint16_t  RESERVED1;
  __IM  uint32_t  SNAP;                         /*!< (@ 0x0000010C) BDP EC-only: snapshot register                             */
  __IOM uint32_t  CAPT;                         /*!< (@ 0x00000110) BDP EC-only: capture register                              */
  __IM  uint32_t  RESERVED2[135];
  __IOM uint8_t   ACTV80;                       /*!< (@ 0x00000330) BDP EC-only: Port80 logical device activate                */
  __IM  uint8_t   RESERVED3;
  __IM  uint16_t  RESERVED4;
  __IM  uint32_t  RESERVED5[51];
  __OM  uint32_t  HP80AD;                       /*!< (@ 0x00000400) BDP Runtime: Host Port80 alias data                        */
  __IM  uint32_t  RESERVED6[203];
  __IOM uint8_t   ACTV80A;                      /*!< (@ 0x00000730) BDP EC-only: Port80 alias logical device activate          */
  __IM  uint8_t   RESERVED7;
  __IM  uint16_t  RESERVED8;
  __IM  uint32_t  RESERVED9[47];
  __IOM uint8_t   BL80A;                        /*!< (@ 0x000007F0) BDP EC-only: Port80 alias byte lane                        */
  __IM  uint8_t   RESERVED10;
  __IM  uint16_t  RESERVED11;
} MEC_BDP_Type;                                 /*!< Size = 2036 (0x7f4)                                                       */

/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =========================================================  HP80D  ========================================================= */
/* =========================================================  DATRB  ========================================================= */
#define MEC_BDP_DATRB_DATA_Pos            (0UL)                     /*!< DATA (Bit 0)                                          */
#define MEC_BDP_DATRB_DATA_Msk            (0xffUL)                  /*!< DATA (Bitfield-Mask: 0xff)                            */
#define MEC_BDP_DATRB_LANE_Pos            (8UL)                     /*!< LANE (Bit 8)                                          */
#define MEC_BDP_DATRB_LANE_Msk            (0x300UL)                 /*!< LANE (Bitfield-Mask: 0x03)                            */
#define MEC_BDP_DATRB_LEN_Pos             (10UL)                    /*!< LEN (Bit 10)                                          */
#define MEC_BDP_DATRB_LEN_Msk             (0xc00UL)                 /*!< LEN (Bitfield-Mask: 0x03)                             */
#define MEC_BDP_DATRB_NOT_EMPTY_Pos       (12UL)                    /*!< NOT_EMPTY (Bit 12)                                    */
#define MEC_BDP_DATRB_NOT_EMPTY_Msk       (0x1000UL)                /*!< NOT_EMPTY (Bitfield-Mask: 0x01)                       */
#define MEC_BDP_DATRB_OVERRUN_Pos         (13UL)                    /*!< OVERRUN (Bit 13)                                      */
#define MEC_BDP_DATRB_OVERRUN_Msk         (0x2000UL)                /*!< OVERRUN (Bitfield-Mask: 0x01)                         */
#define MEC_BDP_DATRB_THRES_Pos           (14UL)                    /*!< THRES (Bit 14)                                        */
#define MEC_BDP_DATRB_THRES_Msk           (0x4000UL)                /*!< THRES (Bitfield-Mask: 0x01)                           */
/* ========================================================  CONFIG  ========================================================= */
#define MEC_BDP_CONFIG_FLUSH_FIFO_Pos     (0UL)                     /*!< FLUSH_FIFO (Bit 0)                                    */
#define MEC_BDP_CONFIG_FLUSH_FIFO_Msk     (0x1UL)                   /*!< FLUSH_FIFO (Bitfield-Mask: 0x01)                      */
#define MEC_BDP_CONFIG_CLR_SNAPSHOT_Pos   (1UL)                     /*!< CLR_SNAPSHOT (Bit 1)                                  */
#define MEC_BDP_CONFIG_CLR_SNAPSHOT_Msk   (0x2UL)                   /*!< CLR_SNAPSHOT (Bitfield-Mask: 0x01)                    */
#define MEC_BDP_CONFIG_FIFO_THRES_Pos     (8UL)                     /*!< FIFO_THRES (Bit 8)                                    */
#define MEC_BDP_CONFIG_FIFO_THRES_Msk     (0x700UL)                 /*!< FIFO_THRES (Bitfield-Mask: 0x07)                      */
#define MEC_BDP_CONFIG_SRST_Pos           (31UL)                    /*!< SRST (Bit 31)                                         */
#define MEC_BDP_CONFIG_SRST_Msk           (0x80000000UL)            /*!< SRST (Bitfield-Mask: 0x01)                            */
/* ========================================================  STATUS  ========================================================= */
#define MEC_BDP_STATUS_NOT_EMPTY_Pos      (0UL)                     /*!< NOT_EMPTY (Bit 0)                                     */
#define MEC_BDP_STATUS_NOT_EMPTY_Msk      (0x1UL)                   /*!< NOT_EMPTY (Bitfield-Mask: 0x01)                       */
#define MEC_BDP_STATUS_OVERRUN_Pos        (1UL)                     /*!< OVERRUN (Bit 1)                                       */
#define MEC_BDP_STATUS_OVERRUN_Msk        (0x2UL)                   /*!< OVERRUN (Bitfield-Mask: 0x01)                         */
#define MEC_BDP_STATUS_THRES_Pos          (2UL)                     /*!< THRES (Bit 2)                                         */
#define MEC_BDP_STATUS_THRES_Msk          (0x4UL)                   /*!< THRES (Bitfield-Mask: 0x01)                           */
/* ==========================================================  IEN  ========================================================== */
#define MEC_BDP_IEN_THRES_Pos             (0UL)                     /*!< THRES (Bit 0)                                         */
#define MEC_BDP_IEN_THRES_Msk             (0x1UL)                   /*!< THRES (Bitfield-Mask: 0x01)                           */
/* =========================================================  SNAP  ========================================================== */
/* =========================================================  CAPT  ========================================================== */
/* ========================================================  ACTV80  ========================================================= */
#define MEC_BDP_ACTV80_ENABLE_Pos         (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_BDP_ACTV80_ENABLE_Msk         (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
/* ========================================================  HP80AD  ========================================================= */
/* ========================================================  ACTV80A  ======================================================== */
#define MEC_BDP_ACTV80A_ENABLE_Pos        (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MEC_BDP_ACTV80A_ENABLE_Msk        (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
/* =========================================================  BL80A  ========================================================= */
#define MEC_BDP_BL80A_ASBL_Pos            (0UL)                     /*!< ASBL (Bit 0)                                          */
#define MEC_BDP_BL80A_ASBL_Msk            (0x3UL)                   /*!< ASBL (Bitfield-Mask: 0x03)                            */

/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* =========================================================  HP80D  ========================================================= */
/* =========================================================  DATRB  ========================================================= */
/* ==============================================  MEC_BDP DATRB LANE [8..9]  =============================================== */
typedef enum {                                  /*!< MEC_BDP_DATRB_LANE                                                       */
  MEC_BDP_DATRB_LANE_B0               = 0,     /*!< B0 : Byte lane 0                                                          */
  MEC_BDP_DATRB_LANE_B1               = 1,     /*!< B1 : Byte lane 1                                                          */
  MEC_BDP_DATRB_LANE_B2               = 2,     /*!< B2 : Byte lane 2                                                          */
  MEC_BDP_DATRB_LANE_B3               = 3,     /*!< B3 : Byte lane 3                                                          */
} MEC_BDP_DATRB_LANE_Enum;

/* ==============================================  MEC_BDP DATRB LEN [10..11]  ============================================== */
typedef enum {                                  /*!< MEC_BDP_DATRB_LEN                                                        */
  MEC_BDP_DATRB_LEN_IO8               = 0,     /*!< IO8 : One byte or continuation of a mutli-byte value                      */
  MEC_BDP_DATRB_LEN_IO16B0            = 1,     /*!< IO16B0 : First byte of a 16-bit I/O write                                 */
  MEC_BDP_DATRB_LEN_IO32B0            = 2,     /*!< IO32B0 : First byte of a 32-bit I/O write                                 */
  MEC_BDP_DATRB_LEN_IO_INVAL          = 3,     /*!< IO_INVAL : Lost byte of a previous overrun. Should be discarded           */
} MEC_BDP_DATRB_LEN_Enum;

/* ========================================================  CONFIG  ========================================================= */
/* ==========================================  MEC_BDP CONFIG FIFO_THRES [8..10]  =========================================== */
typedef enum {                                  /*!< MEC_BDP_CONFIG_FIFO_THRES                                                */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_1 = 0,     /*!< ENTRIES_1 : FIFO Threshold status set if number of entries >= 1           */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_4 = 1,     /*!< ENTRIES_4 : FIFO Threshold status set if number of entries >= 4           */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_8 = 2,     /*!< ENTRIES_8 : FIFO Threshold status set if number of entries >= 8           */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_16 = 3,    /*!< ENTRIES_16 : FIFO Threshold status set if number of entries >= 16         */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_20 = 4,    /*!< ENTRIES_20 : FIFO Threshold status set if number of entries >= 20         */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_24 = 5,    /*!< ENTRIES_24 : FIFO Threshold status set if number of entries >= 24         */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_28 = 6,    /*!< ENTRIES_28 : FIFO Threshold status set if number of entries >= 28         */
  MEC_BDP_CONFIG_FIFO_THRES_ENTRIES_30 = 7,    /*!< ENTRIES_30 : FIFO Threshold status set if number of entries >= 30         */
} MEC_BDP_CONFIG_FIFO_THRES_Enum;

/* ========================================================  STATUS  ========================================================= */
/* ==========================================================  IEN  ========================================================== */
/* =========================================================  SNAP  ========================================================== */
/* =========================================================  CAPT  ========================================================== */
/* ========================================================  ACTV80  ========================================================= */
/* ========================================================  HP80AD  ========================================================= */
/* ========================================================  ACTV80A  ======================================================== */
/* =========================================================  BL80A  ========================================================= */
/* ==============================================  MEC_BDP BL80A ASBL [0..1]  =============================================== */
typedef enum {                                  /*!< MEC_BDP_BL80A_ASBL                                                       */
  MEC_BDP_BL80A_ASBL_BL0              = 0,     /*!< BL0 : Host write to 8-bit Alias I/O port is stored in byte lane
                                                     0 of primary 4-byte range                                                 */
  MEC_BDP_BL80A_ASBL_BL1              = 1,     /*!< BL1 : Host write to 8-bit Alias I/O port is stored in byte lane
                                                     1 of primary 4-byte range                                                 */
  MEC_BDP_BL80A_ASBL_BL2              = 2,     /*!< BL2 : Host write to 8-bit Alias I/O port is stored in byte lane
                                                     2 of primary 4-byte range                                                 */
  MEC_BDP_BL80A_ASBL_BL3              = 3,     /*!< BL3 : Host write to 8-bit Alias I/O port is stored in byte lane
                                                     3 of primary 4-byte range                                                 */
} MEC_BDP_BL80A_ASBL_Enum;

/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_BDP_V1_H */
