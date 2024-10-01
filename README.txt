The MEC1701 HAL was downloaded from:

https://github.com/MicrochipTech/Peripheral-mec1701

Massaged the file with :
sed -i -e 's/[ \t\r]*$//g' MCHP_MEC1701_bit_fields.h, then file was renamed
to MCHP_MEC1701.h

Field EOF was renamed to PEOF as it was collapsing with EOF defined in stdio.h

Microchip HAL contianing the above MEC1701 single header and the
MEC1501 component style is located at:

https://github.com/MicrochipTech/hal_microchip

Version: 1.2.1
Add missing eSPI Virtual Wires groups 8 - 10 GIRQ definitions.
Make sure all typedef's of structures are "typedef struct struct_name".
Remove non-printable character from SAF header
Add max name to GPIO ID enum
Rename the SPISLV to SPIP

Version: 1.2.1
Update eSPI definitions
Changed all hex upper case 'ABCDEF' to lower case
Changed all 'ul/UL' unsigned numeric suffix to 'u'


The Microchip Polarfire SOC HAL was downloaded from:

https://github.com/polarfire-soc/platform

Addditionally, the bare metal samples from https://github.com/polarfire-soc/polarfire-soc-bare-metal-examples
are required to extract the Icicle Kit bopard configuration files.

Both are from Tag 21.08

The following changes were made:

 - platform-2021.08 top folder renamed to mpfs and located at modules/hal/microchip
 - The applications/mpfs-pmp-demo/mpfs-pmp-app-u54-1/src/boards folder is copied to modules/hal/microchip/mpfs

========================================================================
Microchip MEC5 HAL for MEC1723, MEC1743 and MEC1753 CMSIS based headers
using common peripheral headers.
NOTE: Due to a legacy version of MEC172x with register files is in the
zephyr tree, MEC172x is named MECH172x in  the HAL.

Location:
https://github.com/MicrochipTech/hal_microchip

Refer to the mec5 subdirectory.

Initial version 0.1

------------------------------------------------
2024-10-01: Microchip MEC5 HAL version 0.3.0 release
Refer to the mec5 subdirectory.

