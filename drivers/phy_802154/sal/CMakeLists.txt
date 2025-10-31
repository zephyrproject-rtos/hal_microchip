#Set the Minimum Cmak version
cmake_minimum_required(VERSION 3.13)

#Include the Zephyr build system
find_package(Zephyr REQUIRED)

# Optimize board checks using a list and foreach
set(PIC32CX_BZ2_BOARDS
    wbz451_curiosity
    wbz450_curiosity
    wbz451hpe_curiosity
)

if("${BOARD}" IN_LIST PIC32CX_BZ2_BOARDS)
    zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/pic32cx_bz2)
	zephyr_library_sources(${CMAKE_CURRENT_SOURCE_DIR}/pic32cx_bz2/sal.c)
endif()
