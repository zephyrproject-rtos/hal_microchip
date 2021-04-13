/**
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

/** @file glue.h
 * MEC172x Glue Logic controller registers
 */
/** @defgroup MEC172x Peripherals Glue Logic
 */

#ifndef _COMPONENT_GLUE_H
#define _COMPONENT_GLUE_H

#include <stdint.h>
#include <stddef.h>

#include <mec_defs.h>
#include <regaccess.h>

#define MCHP_GLUE_0_BASE_ADDR	0x400F3C00ul

#define MCHP_GLUE_GIRQ		21u
#define MCHP_GLUE_NVIC_GIRQ	13u
#define MCHP_GLUE_POS		26u
#define MCHP_GLUE_NVIC		172u
#define MCHP_GLUE_GIRQ_VAL	BIT(MCHP_GLUE_POS)

/* Glue runtime S0ix state detection register at 0x04 */
#define MCHP_GLUE_S0IX_DET_OFS		0x04u
#define MCHP_GLUE_S0IX_DET_MASK		0x01u
#define MCHP_GLUE_S0IX_DET_EN		BIT(0)

/* EC-only registers */

/* Glue PWRGD State source configuration at 0x10C */
#define MCHP_GLUE_PGSC_OFS		0x10Cu
#define MCHP_GLUE_PGSC_MSK		0x03u
#define MCHP_GLUE_PGSC_PG2_PG		0x00u
#define MCHP_GLUE_PGSC_PG2_S0IX		0x01u
#define MCHP_GLUE_PGSC_PG2_PG_AND_S0IX	0x03u

/* Glue S0ix State Detection Configuration at 0x110 */
#define MCHP_GLUE_S0SDC_OFS		0x110u
#define MCHP_GLUE_S0SDC_MASK		0x3Fu
#define MCHP_GLUE_S0SDC_SRC_POS		0
#define MCHP_GLUE_S0SDC_SRC_MSK		0x03u
#define MCHP_GLUE_S0SDC_SRC_LO		0x00
#define MCHP_GLUE_S0SDC_SRC_SLP_S0	0x01
#define MCHP_GLUE_S0SDC_SRC_C10		0x02
#define MCHP_GLUE_S0SDC_SRC_C10_SLP_S0	0x03
#define MCHP_GLUE_S0SDC_SLP_S0_INV	BIT(2)
#define MCHP_GLUE_S0SDC_C10_INV		BIT(3)
#define MCHP_GLUE_S0SDC_C10_VW		BIT(4)
#define MCHP_GLUE_S0SDC_FW_PGSEL	BIT(5)

#endif	/* #ifndef _COMPONENT_GLUE_H */
/* end glue.h */
/**   @}
 */
