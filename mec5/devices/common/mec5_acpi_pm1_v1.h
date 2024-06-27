/*
 * Copyright (c) 2024 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC5_ACPI_PM1_V1_H
#define _MEC5_ACPI_PM1_V1_H

/** @addtogroup Device_Peripheral_peripherals
  * @{
  */

/**
  * @brief ACPI PM1 interface (MEC_ACPI_PM1)
  */

typedef struct mec_acpi_pm1_regs {              /*!< (@ 0x400F1C00) MEC_ACPI_PM1 Structure                                     */
  __IM  uint8_t   HSTS1;                        /*!< (@ 0x00000000) ACPI PM1 status 1                                          */
  __IOM uint8_t   HSTS2;                        /*!< (@ 0x00000001) ACPI PM1 status 2                                          */
  __IM  uint8_t   HEN1;                         /*!< (@ 0x00000002) ACPI PM1 status 1                                          */
  __IOM uint8_t   HEN2;                         /*!< (@ 0x00000003) ACPI PM1 enable 2                                          */
  __IM  uint8_t   HCTRL1;                       /*!< (@ 0x00000004) ACPI PM1 control 1                                         */
  __IOM uint8_t   HCTRL2;                       /*!< (@ 0x00000005) ACPI PM1 control 2                                         */
  __IM  uint8_t   HP2CTRL1;                     /*!< (@ 0x00000006) ACPI PM1 power-man 2 control 1                             */
  __IM  uint8_t   HP2CTRL2;                     /*!< (@ 0x00000007) ACPI PM1 power-man 2 control 2                             */
  __IM  uint8_t   RESERVED[248];
  __IM  uint8_t   ESTS1;                        /*!< (@ 0x00000100) EC-only: ACPI PM1 status 1                                 */
  __IOM uint8_t   ESTS2;                        /*!< (@ 0x00000101) EC-only: ACPI PM1 status 2                                 */
  __IM  uint8_t   EEN1;                         /*!< (@ 0x00000102) EC-only: ACPI PM1 status 1                                 */
  __IOM uint8_t   EEN2;                         /*!< (@ 0x00000103) EC-only: ACPI PM1 enable 2                                 */
  __IM  uint8_t   ECTRL1;                       /*!< (@ 0x00000104) EC-only: ACPI PM1 control 1                                */
  __IOM uint8_t   ECTRL2;                       /*!< (@ 0x00000105) EC-only: ACPI PM1 control 2                                */
  __IM  uint8_t   EP2CTRL1;                     /*!< (@ 0x00000106) EC-only: ACPI PM1 power-man 2 control 1                    */
  __IM  uint8_t   EP2CTRL2;                     /*!< (@ 0x00000107) EC-only: ACPI PM1 power-man 2 control 2                    */
  __IM  uint8_t   RESERVED1[8];
  __IOM uint8_t   EPMSTS1;                      /*!< (@ 0x00000110) EC-only: ACPI PM1 EC PM SCI Status                         */
} MEC_ACPI_PM1_Type;                            /*!< Size = 273 (0x111)                                                        */
/** @} */ /* End of group Device_Peripheral_peripherals */

#endif /* _MEC5_ACPI_PM1_V1_H */
