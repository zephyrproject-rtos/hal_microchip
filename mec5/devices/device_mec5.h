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
#elif defined (CONFIG_SOC_MEC1747_QLJ)
    #include <mec1747qlj_specs.h>
    #include <mec1747_qlj.h>
#elif defined (CONFIG_SOC_MEC1747_QSZ)
    #include <mec1747qsz_specs.h>
    #include <mec1747_qsz.h>
#elif defined (CONFIG_SOC_MEC1753_QLJ)
    #include <mec1753qlj_specs.h>
    #include <mec1753_qlj.h>
#elif defined (CONFIG_SOC_MEC1753_QSZ)
    #include <mec1753qsz_specs.h>
    #include <mec1753_qsz.h>
#elif defined (CONFIG_SOC_MEC1757_QLJ)
    #include <mec1757qlj_specs.h>
    #include <mec1757_qlj.h>
#elif defined (CONFIG_SOC_MEC1757_QSZ)
    #include <mec1757qsz_specs.h>
    #include <mec1757_qsz.h>
#elif defined (CONFIG_SOC_MECH1723_NLJ)
    #include <mech1723nlj_specs.h>
    #include <mech1723_nlj.h>
#elif defined (CONFIG_SOC_MECH1723_NSZ)
    #include <mech1723nsz_specs.h>
    #include <mech1723_nsz.h>
#elif defined (CONFIG_SOC_MECH1727_NLJ)
    #include <mech1727nlj_specs.h>
    #include <mech1727_nlj.h>
#elif defined (CONFIG_SOC_MECH1727_NSZ)
    #include <mech1727nsz_specs.h>
    #include <mech1727_nsz.h>
#elif defined (CONFIG_SOC_MEC1653B_NSZ)
    #include <mec1653b_nsz_specs.h>
    #include <mec1653b_nsz.h>
#else
    #error "No valid SoC defined!"
#endif

#endif /* _DEVICE_MEC5_H */
