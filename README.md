# Introduction

The **hal_microchip** is a set of register definitions for Microchip PIC32C/PIC32M SoC's.
The HAL is organized following the directory structure detailed below.

## Directory Structure

The directory is composed of:

```
.
├── CMakeLists.txt
├── dts
│   └── microchip
│       └── mec5
│           ├── MEC5 PINCTRL DTSI files
│
├── include
│   └── dt-bindings
│       ├── sam
|       |   └── sam_d5x_e5x — dt-binding header files for the SAM_D5X_E5X family devices
│       └── pinctrl
│           ├── PIC32CX PINCTRL C header files
│
├── mec
│   ├── Legacy MEC150x/2x C chip and peripheral header files
│
├── mec5
│   ├── CMakeLists.txt
│   ├── devices
│   │   ├── MEC5 HAL chip and peripheral header files
│   └── drivers
│       ├── MEC5 HAL peripheral C source files
│
├── mpfs
│   ├── PolarFire board and HAL files
│
├── pic32c
│   ├── CMakeLists.txt
│   ├── pic32cm_jh — DFP header files for PIC32CM JH family devices
│   ├── PIC32CX chip and peripheral HAL files
│   ├── pic32cz_ca — DFP header files for PIC32CZ CA family devices
│
├── pinconfigs
│   ├── PIC32CX pin config definition XML
│
├── sam
│   ├── CMakeLists.txt
│   ├── sam_d5x_e5x — DFP header files for SAM_D5X_E5X family devices
│
├── README.md
│
├── scripts
│   ├── PIC32C Python pin config generation scripts
│
└── zephyr
    └── module.yml

```

 - MEC5 chips Zephyr device tree PINCFG DTSI files
 - PIC32C SoC specific include libraries.
 - Includes specific for these platforms
   - devicetree bindings
 - Legacy MEC152x header files
 - MEC5 HAL chip and peripheral header and C source files
 - Device family DFP header files of PIC32C devices
 - [PIC32C Pin definitions](pinconfigs/README.md)
 - sam device family dfp header files
 - This README file
 - [PIC32C Scripts](scripts/README.md) used for code generation
 - ZephyrRTOS module directory (`zephyr`).

# How to submit code

Any contribution should follow the `How to submit code` using as premisses the
[Zephyr Contribution Guidelines](https://docs.zephyrproject.org/latest/contribute/index.html).
For more information about External Modules see
[Modules Section](https://docs.zephyrproject.org/latest/develop/modules.html) in special
[Submitting Changes to Modules](https://docs.zephyrproject.org/latest/develop/modules.html#submitting-changes-to-modules)

## MEC5 HAL
The MEC5 HAL currently support Microchip MEC172x (named MECH172x in Zephyr SoC), MEC174x, and MEC175x.<br/>
On the Zephyr side the SoC layer build rules set CONFIG_HAS_MEC5_HAL=y.<br/>
The top level CMakeLists.txt then processes the hal_microchip/mec5 subfolder.<br/>
The MEC5 HAL device is chosen using Zephyr CONFIG_SOC_SERIES and CONFIG_SOC.<br/>
Zephyr SoC layer soc.h for MECH172x, MEC174x, and MEC175x include device_mec5.h from the MEC5 HAL.<br/>
Zephyr drivres and applications should include individual HAL API headers to access specific peripherals.<br/>

## MPFS PolarFile HAL
The Microchip Polarfire SOC HAL was downloaded from:

https://github.com/polarfire-soc/platform

Addditionally, the bare metal samples from https://github.com/polarfire-soc/polarfire-soc-bare-metal-examples
are required to extract the Icicle Kit bopard configuration files.

Both are from Tag 21.08

The following changes were made:

 - platform-2021.08 top folder renamed to mpfs and located at modules/hal/microchip
 - The applications/mpfs-pmp-demo/mpfs-pmp-app-u54-1/src/boards folder is copied to modules/hal/microchip/mpfs

## PIC32C Repository specific guidelines

 - When submitting an updated firmware library version, it is important to make
   sure that the last firmware version will be merged. The library version is
   used to be checked at [Microchip packs download site](https://packs.download.microchip.com/).
 - When submitting an updated firmware library version the patchset already
   applied should be rebased on top of the newer version.
 - The patchset must be sent as an individual commit per SoC series to easy rebase.
 - This repository is managed mainly on Linux. This means that changes should
   be submitted using Linux LF format. Usually running a similar command to
   `find * type f -print0 | xargs -0 dos2unix -k` should be enough.
 - Make sure directory structure is respected.
 - The `pic32c/[pic32cxsg]/include/<soc>/README` file should be updated accordingly.
   If for some reason the file not exists it should be created.
 - Directory names should be converted to lowercase.
 - The recommendation is add **all fixups** in the `hal_microchip` instead on the
   ZephyrRTOS project.

The above are general guidelines and exceptions could happen. In this case, the
exception should be addressed at review phase.

## PIC32C Standard API

The PIC32C/PIC32M standard API define all information to access Microchip SoC's
peripherals. This library does not have namespaces and prefixes which
easily results in name collision with ZephyrRTOS core and libraries. To avoid
that situation, macros, enum values and function names should follow two
general rules:

 - Public API functions must be prefixed with `pic32cxsg_` or .
 - Public defines and enum values must be uppercase and prefixed with `PIC32CXSG_`
   or .
