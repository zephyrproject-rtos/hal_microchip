/*
 * Instance header file for PIC32CM5164JH01100
 *
 * Copyright (c) 2025 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* file generated from device description file (ATDF) version 2025-02-18T10:55:45Z */
#ifndef _PIC32CMJH01_DMAC_INSTANCE_
#define _PIC32CMJH01_DMAC_INSTANCE_


/* ========== Instance Parameter definitions for DMAC peripheral ========== */
#define DMAC_CH_BITS                             (4)        /* Number of bits to select channel */
#define DMAC_CH_NUM                              (12)       /* Number of channels */
#define DMAC_EVIN_NUM                            (4)        /* Number of input events */
#define DMAC_EVOUT_NUM                           (4)        /* Number of output events */
#define DMAC_INSTANCE_ID                         (35)       /* Instance index for DMAC */
#define DMAC_LVL_BITS                            (2)        /* Number of bit to select level priority */
#define DMAC_LVL_NUM                             (4)        /* Enable priority level number */
#define DMAC_QOSCTRL_D_RESETVALUE                (2)        /* QOS dmac ahb interface reset value */
#define DMAC_QOSCTRL_F_RESETVALUE                (2)        /* QOS dmac fetch interface reset value */
#define DMAC_QOSCTRL_WRB_RESETVALUE              (2)        /* QOS dmac write back interface reset value */
#define DMAC_SPLIT_IRQ_NUM                       (0)        /* Number of IRQ split out */
#define DMAC_TRIG_BITS                           (6)        /* Number of bits to select trigger source */
#define DMAC_TRIG_NUM                            (63)       /* Number of peripheral triggers */

#endif /* _PIC32CMJH01_DMAC_INSTANCE_ */
