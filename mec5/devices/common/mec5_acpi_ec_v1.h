/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ACPI_EC_V1_H
#define _MEC5_ACPI_EC_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief ACPI Host to EC command interface (ACPI_EC)
  */

typedef struct acpi_ec_regs {                   /*!< (@ 0x400F0800) ACPI_EC Structure                                         */
  __IOM uint32_t  AEC_HDATA;                    /*!< (@ 0x00000000) Host Data                                                  */
  __OM  uint8_t   AEC_HCMDSTS;                  /*!< (@ 0x00000004) Host Command(WO), Status(RO)                               */
  __IM  uint8_t   AEC_HBYTE_CTRL;               /*!< (@ 0x00000005) Byte Access Control                                        */
  __IM  uint16_t  RESERVED;
  __IM  uint32_t  RESERVED1[62];
  __IOM uint32_t  AEC_E2H_DATA;                 /*!< (@ 0x00000100) EC to Host data                                            */
  __IOM uint8_t   AEC_STATUS;                   /*!< (@ 0x00000104) EC only accessible status                                  */
  __IOM uint8_t   AEC_BYTE_CTRL;                /*!< (@ 0x00000105) EC only accessible byte access control                     */
  __IM  uint16_t  RESERVED2;
  __IOM uint32_t  AEC_H2E_DATA;                 /*!< (@ 0x00000108) Host to EC data                                            */
} ACPI_EC_Type;                                 /*!< Size = 268 (0x10c)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

/** @addtogroup PosMask_peripherals
  * @{
  */
/* =======================================================  AEC_HDATA  ======================================================= */
/* ======================================================  AEC_HCMDSTS  ====================================================== */
/* ====================================================  AEC_HBYTE_CTRL  ===================================================== */
/* =====================================================  AEC_E2H_DATA  ====================================================== */
/* ======================================================  AEC_STATUS  ======================================================= */
#define ACPI_EC_AEC_STATUS_OBF_Pos        (0UL)                     /*!< OBF (Bit 0)                                           */
#define ACPI_EC_AEC_STATUS_OBF_Msk        (0x1UL)                   /*!< OBF (Bitfield-Mask: 0x01)                             */
#define ACPI_EC_AEC_STATUS_IBF_Pos        (1UL)                     /*!< IBF (Bit 1)                                           */
#define ACPI_EC_AEC_STATUS_IBF_Msk        (0x2UL)                   /*!< IBF (Bitfield-Mask: 0x01)                             */
#define ACPI_EC_AEC_STATUS_UD1A_Pos       (2UL)                     /*!< UD1A (Bit 2)                                          */
#define ACPI_EC_AEC_STATUS_UD1A_Msk       (0x4UL)                   /*!< UD1A (Bitfield-Mask: 0x01)                            */
#define ACPI_EC_AEC_STATUS_CMD_Pos        (3UL)                     /*!< CMD (Bit 3)                                           */
#define ACPI_EC_AEC_STATUS_CMD_Msk        (0x8UL)                   /*!< CMD (Bitfield-Mask: 0x01)                             */
#define ACPI_EC_AEC_STATUS_BURST_Pos      (4UL)                     /*!< BURST (Bit 4)                                         */
#define ACPI_EC_AEC_STATUS_BURST_Msk      (0x10UL)                  /*!< BURST (Bitfield-Mask: 0x01)                           */
#define ACPI_EC_AEC_STATUS_SCI_EVT_Pos    (5UL)                     /*!< SCI_EVT (Bit 5)                                       */
#define ACPI_EC_AEC_STATUS_SCI_EVT_Msk    (0x20UL)                  /*!< SCI_EVT (Bitfield-Mask: 0x01)                         */
#define ACPI_EC_AEC_STATUS_SMI_EVT_Pos    (6UL)                     /*!< SMI_EVT (Bit 6)                                       */
#define ACPI_EC_AEC_STATUS_SMI_EVT_Msk    (0x40UL)                  /*!< SMI_EVT (Bitfield-Mask: 0x01)                         */
#define ACPI_EC_AEC_STATUS_UD0A_Pos       (7UL)                     /*!< UD0A (Bit 7)                                          */
#define ACPI_EC_AEC_STATUS_UD0A_Msk       (0x80UL)                  /*!< UD0A (Bitfield-Mask: 0x01)                            */
/* =====================================================  AEC_BYTE_CTRL  ===================================================== */
#define ACPI_EC_AEC_BYTE_CTRL_FOUR_BYTE_MODE_Pos (0UL)              /*!< FOUR_BYTE_MODE (Bit 0)                                */
#define ACPI_EC_AEC_BYTE_CTRL_FOUR_BYTE_MODE_Msk (0x1UL)            /*!< FOUR_BYTE_MODE (Bitfield-Mask: 0x01)                  */
/* =====================================================  AEC_H2E_DATA  ====================================================== */
/** @} */ /* End of group PosMask_peripherals */

#endif /* _MEC5_ACPI_EC_V1_H */
