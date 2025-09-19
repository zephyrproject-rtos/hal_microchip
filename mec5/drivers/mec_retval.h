/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_RETVAL_H
#define _MEC_RETVAL_H

#define MEC_RET_OK                0
#define MEC_RET_ERR               1
#define MEC_RET_ERR_INVAL         2 /* bad parameter */
#define MEC_RET_ERR_BUSY          3
#define MEC_RET_ERR_NOP           4
#define MEC_RET_ERR_XFR           5
#define MEC_RET_ERR_TIMEOUT       6
#define MEC_RET_ERR_NACK          7 /* a device did not respond */
#define MEC_RET_ERR_HW            8
#define MEC_RET_ERR_NO_DATA       9 /* No data available */
#define MEC_RET_ERR_DATA_LEN      10 /* bad data buffer size */
#define MEC_RET_ERR_DATA_ALIGN    11 /* bad data buffer alignment */
#define MEC_RET_ERR_BAD_DATA      12 /* data corruption, etc. */
#define MEC_RET_ERR_NO_RES        13
#define MEC_RET_ERR_HW_NOT_INIT   14
#define MEC_RET_ERR_BUS_NOT_OWNED 15 /* Bus not owned by controller */
#define MEC_RET_ERR_HW_NOT_SUPP   16

#define MEC_FALSE 0
#define MEC_TRUE  1

#define MEC_OFF 0
#define MEC_ON  1

#endif /* #ifndef _MEC_RETVAL_H */
