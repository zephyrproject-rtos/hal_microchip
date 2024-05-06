/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include "mec_version.h"

#define MSTR_HELPER(x) #x
#define MSTR(x)        MSTR_HELPER(x)

#define LIB_NAME "LIBMEC5"

const char mec5_lib_ver[] __attribute__((aligned(4))) =
    LIB_NAME " v" MSTR(MEC5_VER_MAJOR) "." MSTR(MEC5_VER_MINOR) "." MSTR(MEC5_VER_REVISION) " " __DATE__ __TIME__;

size_t mec5_lib_version_size(void)
{
    return sizeof(mec5_lib_ver);
}

char const* mec5_lib_version_string(void)
{
    return mec5_lib_ver;
}

/* end mec_version.c */
