# Copyright (c) 2025 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

if(CONFIG_SOC_SERIES_SAMA5D27SOM)
  zephyr_include_directories(sama5d27som/include)
elseif(CONFIG_SOC_SERIES_SAMA5D29)
  zephyr_include_directories(sama5d29/include)
else()
  zephyr_include_directories(${CONFIG_SOC_SERIES}/include)
endif()
