/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mec_version.h"

#define MSTR_HELPER(x) #x
#define MSTR(x)        MSTR_HELPER(x)

#define HAL_NAME "MEC5_HAL"

const char mec5_hal_ver[] __attribute__((aligned(4))) =
    HAL_NAME " v" MSTR(MEC5_VER_MAJOR) "." MSTR(MEC5_VER_MINOR) "." MSTR(MEC5_VER_REVISION) " " __DATE__ __TIME__;

size_t mec5_hal_version_size(void)
{
    return sizeof(mec5_hal_ver);
}

char const* mec5_hal_version_string(void)
{
    return mec5_hal_ver;
}

/* end mec_version.c */
