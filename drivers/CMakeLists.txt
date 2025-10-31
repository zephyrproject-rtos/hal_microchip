
#Set the Minimum Cmak version
cmake_minimum_required(VERSION 3.13)

#Include the Zephyr build system
find_package(Zephyr REQUIRED)

# zephyr_library()

#Include subdirectories for the different modules
add_subdirectory(phy_802154)