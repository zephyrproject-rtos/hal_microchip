/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_EMI_V2_H
#define _MEC5_EMI_V2_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief EMI Embedded Microcontroller interface (EMI)
  */

typedef struct emi_regs {                       /*!< (@ 0x400F4000) EMI Structure                                             */
  __IOM uint8_t   RT_H2EMB;                     /*!< (@ 0x00000000) EMI Runtime: Host to EC mailbox                            */
  __IOM uint8_t   RT_E2HMB;                     /*!< (@ 0x00000001) EMI Runtime: EC to Host mailbox                            */
  __IOM uint16_t  RT_RGO;                       /*!< (@ 0x00000002) EMI Runtime: region and offset                             */
  __IOM uint32_t  RT_DATA;                      /*!< (@ 0x00000004) EMI Runtime: Data. Access size should be size
                                                                    specified in ACC_TYPE field of RT_RGO register             */
  __IOM uint16_t  RT_ISRC;                      /*!< (@ 0x00000008) EMI Runtime: interrupt source bitmap                       */
  __IOM uint16_t  RT_IMASK;                     /*!< (@ 0x0000000A) EMI Runtime: interrupt source mask bitmap                  */
  __IOM uint8_t   RT_AID;                       /*!< (@ 0x0000000C) EMI Runtime: application ID                                */
  __IM  uint8_t   RESERVED;
  __IM  uint16_t  RESERVED1;
  __IOM uint8_t   RT_ASAID;                     /*!< (@ 0x00000010) EMI Runtime: application ID assignment                     */
  __IM  uint8_t   RESERVED2;
  __IM  uint16_t  RESERVED3;
  __IM  uint32_t  RESERVED4[59];
  __IOM uint8_t   H2EMB;                        /*!< (@ 0x00000100) EMI EC-only: Host to EC mailbox                            */
  __IOM uint8_t   E2HMB;                        /*!< (@ 0x00000101) EMI EC-only: EC to Host mailbox                            */
  __IM  uint16_t  RESERVED5;
  __IOM uint32_t  MR0B;                         /*!< (@ 0x00000104) EMI EC-only: EC SRAM memory region 0 base address
                                                                    b[31:2]. Bits[1:0] forced to 0                             */
  __IOM uint32_t  MR0L;                         /*!< (@ 0x00000108) EMI EC-only: EC SRAM memory region 0 read/write
                                                                    limits                                                     */
  __IOM uint32_t  MR1B;                         /*!< (@ 0x0000010C) EMI EC-only: EC SRAM memory region 1 base address          */
  __IOM uint32_t  MR1L;                         /*!< (@ 0x00000110) EMI EC-only: EC SRAM memory region 1 read/write
                                                                    limits                                                     */
  __IOM uint16_t  ISEN;                         /*!< (@ 0x00000114) EMI EC-only: EC to Host interrupt source set               */
  __IOM uint16_t  IHCEN;                        /*!< (@ 0x00000116) EMI EC-only: EC to Host interrupt host clear
                                                                    enable                                                     */
  __IM  uint32_t  RESERVED6[2];
  __IOM uint32_t  AIDS[8];                      /*!< (@ 0x00000120) EMI EC-only: Application ID status bitmaps                 */
} EMI_Type;                                     /*!< Size = 320 (0x140)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  RT_H2EMB  ======================================================== */
/* =======================================================  RT_E2HMB  ======================================================== */
/* ========================================================  RT_RGO  ========================================================= */
#define EMI_RT_RGO_ACC_TYPE_Pos           (0UL)                     /*!< ACC_TYPE (Bit 0)                                      */
#define EMI_RT_RGO_ACC_TYPE_Msk           (0x3UL)                   /*!< ACC_TYPE (Bitfield-Mask: 0x03)                        */
#define EMI_RT_RGO_EC_ADDR_Pos            (2UL)                     /*!< EC_ADDR (Bit 2)                                       */
#define EMI_RT_RGO_EC_ADDR_Msk            (0x7ffcUL)                /*!< EC_ADDR (Bitfield-Mask: 0x1fff)                       */
#define EMI_RT_RGO_SEL_MEM1_Pos           (15UL)                    /*!< SEL_MEM1 (Bit 15)                                     */
#define EMI_RT_RGO_SEL_MEM1_Msk           (0x8000UL)                /*!< SEL_MEM1 (Bitfield-Mask: 0x01)                        */
/* ========================================================  RT_DATA  ======================================================== */
/* ========================================================  RT_ISRC  ======================================================== */
#define EMI_RT_ISRC_EC_WR_Pos             (0UL)                     /*!< EC_WR (Bit 0)                                         */
#define EMI_RT_ISRC_EC_WR_Msk             (0x1UL)                   /*!< EC_WR (Bitfield-Mask: 0x01)                           */
#define EMI_RT_ISRC_EC_SWI_Pos            (1UL)                     /*!< EC_SWI (Bit 1)                                        */
#define EMI_RT_ISRC_EC_SWI_Msk            (0xfffeUL)                /*!< EC_SWI (Bitfield-Mask: 0x7fff)                        */
/* =======================================================  RT_IMASK  ======================================================== */
#define EMI_RT_IMASK_EC_SWI_EN_Pos        (1UL)                     /*!< EC_SWI_EN (Bit 1)                                     */
#define EMI_RT_IMASK_EC_SWI_EN_Msk        (0xfffeUL)                /*!< EC_SWI_EN (Bitfield-Mask: 0x7fff)                     */
/* ========================================================  RT_AID  ========================================================= */
/* =======================================================  RT_ASAID  ======================================================== */
/* =========================================================  H2EMB  ========================================================= */
/* =========================================================  E2HMB  ========================================================= */
/* =========================================================  MR0B  ========================================================== */
/* =========================================================  MR0L  ========================================================== */
#define EMI_MR0L_RD_LIM_Pos               (2UL)                     /*!< RD_LIM (Bit 2)                                        */
#define EMI_MR0L_RD_LIM_Msk               (0x7ffcUL)                /*!< RD_LIM (Bitfield-Mask: 0x1fff)                        */
#define EMI_MR0L_WR_LIM_Pos               (18UL)                    /*!< WR_LIM (Bit 18)                                       */
#define EMI_MR0L_WR_LIM_Msk               (0x7ffc0000UL)            /*!< WR_LIM (Bitfield-Mask: 0x1fff)                        */
/* =========================================================  MR1B  ========================================================== */
/* =========================================================  MR1L  ========================================================== */
#define EMI_MR1L_RD_LIM_Pos               (2UL)                     /*!< RD_LIM (Bit 2)                                        */
#define EMI_MR1L_RD_LIM_Msk               (0x7ffcUL)                /*!< RD_LIM (Bitfield-Mask: 0x1fff)                        */
#define EMI_MR1L_WR_LIM_Pos               (18UL)                    /*!< WR_LIM (Bit 18)                                       */
#define EMI_MR1L_WR_LIM_Msk               (0x7ffc0000UL)            /*!< WR_LIM (Bitfield-Mask: 0x1fff)                        */
/* =========================================================  ISEN  ========================================================== */
#define EMI_ISEN_EC_SWI_SET_Pos           (1UL)                     /*!< EC_SWI_SET (Bit 1)                                    */
#define EMI_ISEN_EC_SWI_SET_Msk           (0xfffeUL)                /*!< EC_SWI_SET (Bitfield-Mask: 0x7fff)                    */
/* =========================================================  IHCEN  ========================================================= */
#define EMI_IHCEN_HCLR_EN_Pos             (1UL)                     /*!< HCLR_EN (Bit 1)                                       */
#define EMI_IHCEN_HCLR_EN_Msk             (0xfffeUL)                /*!< HCLR_EN (Bitfield-Mask: 0x7fff)                       */
/* =========================================================  AIDS  ========================================================== */
/** @} */ /* End of group PosMask_peripherals */

/** @addtogroup EnumValue_peripherals
  * @{
  */
/* ==============================================  EMI RT_RGO ACC_TYPE [0..1]  ============================================== */
typedef enum {                                  /*!< EMI_RT_RGO_ACC_TYPE                                                      */
  EMI_RT_RGO_ACC_TYPE_8BIT            = 0,     /*!< 8BIT : EC Data register accesses memory as 8-bit                          */
  EMI_RT_RGO_ACC_TYPE_16BIT           = 1,     /*!< 16BIT : EC Data register accesses memory as 16-bit                        */
  EMI_RT_RGO_ACC_TYPE_32BIT           = 2,     /*!< 32BIT : EC Data register accesses memory as 32-bit                        */
  EMI_RT_RGO_ACC_TYPE_32BIT_AUTO_INC  = 3,     /*!< 32BIT_AUTO_INC : EC Data register accesses memory as 32-bit
                                                     and increments EC address by 4                                            */
} EMI_RT_RGO_ACC_TYPE_Enum;
/** @} */ /* End of group EnumValue_peripherals */

#endif /* _MEC5_EMI_V2_H */
