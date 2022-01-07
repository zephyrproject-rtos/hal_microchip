#
# Copyright (c) 2021, Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

zephyr_include_directories(.)
zephyr_include_directories(hal)
zephyr_include_directories(mpfs_hal)
zephyr_include_directories(boards/icicle-kit-es)
zephyr_include_directories(boards/icicle-kit-es/platform_config)
zephyr_include_directories(mpfs_hal/common)
zephyr_include_directories(mpfs_hal/common/nwc)
zephyr_include_directories(drivers/mss/mss_gpio)
add_subdirectory(drivers/mss/mss_gpio)
add_subdirectory(mpfs_hal/common)

