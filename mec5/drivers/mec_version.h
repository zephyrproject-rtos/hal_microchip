/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef MEC5_LIB_VERSION_H_
#define MEC5_LIB_VERSION_H_

#include <stdint.h>
#include <stddef.h>

#define MEC5_VER_MAJOR    0
#define MEC5_VER_MINOR    1
#define MEC5_VER_REVISION 0

size_t mec5_lib_version_size(void);
char const *mec5_lib_version_string(void);

#endif /* MEC5_LIB_VERSION_H_ */
