/**
 *
 * Copyright (c) 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _DEVICE_MEC5_H
#define _DEVICE_MEC5_H

#if defined (CONFIG_SOC_MEC1743_QLJ)
    #include <mec1743qlj_specs.h>
    #include <mec1743_qlj.h>
#elif defined (CONFIG_SOC_MEC1743_QSZ)
    #include <mec1743qsz_specs.h>
    #include <mec1743_qsz.h>
#elif defined (CONFIG_SOC_MEC1753_QLJ)
    #include <mec1753qlj_specs.h>
    #include <mec1753_qlj.h>
#elif defined (CONFIG_SOC_MEC1753_QSZ)
    #include <mec1753qsz_specs.h>
    #include <mec1753_qsz.h>
#elif defined (CONFIG_SOC_MECH1723_NLJ)
    #include <mech1723nlj_specs.h>
    #include <mech1723_nlj.h>
#elif defined (CONFIG_SOC_MECH1723_NSZ)
    #include <mech1723nsz_specs.h>
    #include <mech1723_nsz.h>
#else
    #error "No valid SoC defined!"
#endif

#endif /* _DEVICE_MEC5_H */
