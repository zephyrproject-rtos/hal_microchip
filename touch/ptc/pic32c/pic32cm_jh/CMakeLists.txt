# Copyright (c) 2026 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

# acquisition library
add_library(lib_touch STATIC IMPORTED GLOBAL)

zephyr_include_directories(.)

set_target_properties(lib_touch PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/pic32c/pic32cm_jh/qtm_acq_pic32cmjh_0x002f.X.a)
target_link_libraries(app PUBLIC lib_touch)
