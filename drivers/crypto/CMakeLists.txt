#Set the Minimum Cmak version
cmake_minimum_required(VERSION 3.13)

#Include the Zephyr build system
find_package(Zephyr REQUIRED)

zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR}/)
