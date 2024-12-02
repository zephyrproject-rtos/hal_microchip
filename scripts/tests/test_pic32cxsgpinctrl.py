# Copyright (c) 2024 Microchip
# SPDX-License-Identifier: Apache-2.0

from pic32cxsgpinctrl import main


def test_main(data, tmp_path):
    """Test that pinctrl headers are generated correctly."""

    main(data, tmp_path)

    FILES = (
        "pic32cx1025sg41064-pinctrl.h",
        "pic32cx1025sg41080-pinctrl.h",
        "pic32cx1025sg41100-pinctrl.h",
        "pic32cx1025sg41128-pinctrl.h",
        "pic32cx1025sg60100-pinctrl.h",
        "pic32cx1025sg60128-pinctrl.h",
        "pic32cx1025sg61100-pinctrl.h",
        "pic32cx1025sg61128-pinctrl.h",
    )

    for file in FILES:
        ref_file = data / file
        gen_file = tmp_path / file

        assert gen_file.exists()

        with open(ref_file) as ref, open(gen_file) as gen:
            assert ref.read() == gen.read()
