The MEC1701 HAL was downloaded from:

https://github.com/MicrochipTech/Peripheral-mec1701

Massaged the file with :
sed -i -e 's/[ \t\r]*$//g' MCHP_MEC1701_bit_fields.h, then file was renamed
to MCHP_MEC1701.h

Field EOF was renamed to PEOF as it was collapsing with EOF defined in stdio.h

---

The CEC1702 HAL is downloaded from:
http://ww1.microchip.com/downloads/en/softwarelibrary/cec1702_sdk/cec1702_hw_blks_b0_build_0300.zip

Header files are from:
Source/hw_blks_B0/common/include

Treated with:
sed -i -e 's/[ \t\r]*$//g' -e '/system_CEC1702_C0.h/d'
