/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_PCFG_H
#define _MEC_PCFG_H

/* DMA API checks DMA channle ID parameter */
#define MEC_DMA_CHAN_VALID_CHECK

/* GPIO module checks ID */
#define MEC_GPIO_PIN_VALIDATION
/* #define MEC_GPIO_PAROUT_BITBAND */

/* GPIO module anomalies */
#define MEC_GPIO_IDET_CHG_ANOMALY_FIX

/* Timer modules checks ID */
#define MEC_BTIMER_CHECK_ID

/* Enable register pointer checks in eSPI TAF API's */
#define MEC_ESPI_TAF_CHECK_REG_ADDR

/* Enable checks of I2C base adress passed to I2C API's */
#define MEC_I2C_BASE_CHECK

/* Enable checks of base address passed to KBC API's */
/* #define MEC_KBC_BASE_CHECK */

/* Enable checks of base address passed to Key scan API's */
/* #define MEC_KSCAN_BASE_CHECK */

/* Enable checks of base address passed to ACPI_EC API's */
/* #define MEC_ACPI_EC_BASE_CHECK */

/* LED API checks LED ID parameter */
#define MEC_LED_ENABLE_VALID_CHECK

/* Enable checks of base address passed to PECI API's */
/* #define MEC_PECI_BASE_CHECK */

#define MEC_QSPI_BASE_CHECK

/* QSPI LDMA transfer API: treat TX and RX buffer NULL pointers
 * with non-zero length as a request to generate SPI clocks with
 * I/O lines tri-stated. Length is the number of clocks.
 */
#define MEC5_QSPI_LDMA_TX_NULL_LEN_ARE_CLOCKS

/* Enable checks of BC-Link base adress passed to BC-Link API's */
/* #define MEC_BCL_BASE_CHECK */

/* Enable checks of week timer base adress passed to API's */
/* #define MEC_WKTMR_BASE_CHECK */

#define MEC5_ROM_API_NDRNG_ENABLED

#define MEC5_ROM_API_HASH_ENABLED
#define MEC5_ROM_API_HMAC_ENABLED

#endif /* #ifndef _MEC_PCFG_H */
/* end mec_pcfg.h */
