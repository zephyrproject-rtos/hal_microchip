# Copyright (c) 2025 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

zephyr_include_directories_ifdef(CONFIG_SOC_SERIES_MCHP_SAMD51 samd51/include)
zephyr_include_directories_ifdef(CONFIG_SOC_SERIES_MCHP_SAME51 same51/include)
zephyr_include_directories_ifdef(CONFIG_SOC_SERIES_MCHP_SAME53 same53/include)
zephyr_include_directories_ifdef(CONFIG_SOC_SERIES_MCHP_SAME54 same54/include)
