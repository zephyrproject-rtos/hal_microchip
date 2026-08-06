# Copyright (c) 2026 Microchip Technology Inc.
#
# SPDX-License-Identifier: Apache-2.0
#

zephyr_include_directories(.)

# acquisition library
add_library(lib_touch STATIC IMPORTED GLOBAL)
set_target_properties(lib_touch PROPERTIES IMPORTED_LOCATION ${PTC_LIB_PATH}/pic32c/pic32cm_pl/pic32cm_pl10/qtm_acq_pic32cm_pl10_0x005b.X.a)
target_link_libraries(app PUBLIC lib_touch)
