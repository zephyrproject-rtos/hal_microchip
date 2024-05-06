/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_ESPI_API_H
#define _MEC_ESPI_API_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define MEC_ESPI_GIRQ               19
#define MEC_ESPI_PC_GIRQ_POS        0
#define MEC_ESPI_PC_BM1_GIRQ_POS    1
#define MEC_ESPI_PC_BM2_GIRQ_POS    2
#define MEC_ESPI_PC_LTR_GIRQ_POS    3
#define MEC_ESPI_OOB_UP_GIRQ_POS    4
#define MEC_ESPI_OOB_DN_GIRQ_POS    5
#define MEC_ESPI_FC_GIRQ_POS        6
#define MEC_ESPI_RESET_GIRQ_POS     7
#define MEC_ESPI_VW_CHEN_GIRQ_POS   8
#define MEC_ESPI_TAF_ECP_GIRQ_POS   9
#define MEC_ESPI_TAF_HWMON_GIRQ_POS 10

#define MEC_ESPI_GIRQ_AGGR_NVIC     11
#define MEC_ESPI_PC_NVIC            103
#define MEC_ESPI_PC_BM1_NVIC        104
#define MEC_ESPI_PC_BM2_NVIC        105
#define MEC_ESPI_PC_LTR_NVIC        106
#define MEC_ESPI_OOB_UP_NVIC        107
#define MEC_ESPI_OOB_DN_NVIC        108
#define MEC_ESPI_FC_NVIC            109
#define MEC_ESPI_RESET_NVIC         110
#define MEC_ESPI_VW_CHEN_NVIC       156
#define MEC_ESPI_TAF_ECP_NVIC       166
#define MEC_ESPI_TAF_HWMON_NVIC     167

#include "mec_espi_core.h"
#include "mec_espi_fc.h"
#include "mec_espi_oob.h"
#include "mec_espi_pc.h"
#include "mec_espi_taf.h"
#include "mec_espi_vw.h"

#endif /* #ifndef _MEC_ESPI_API_H */
