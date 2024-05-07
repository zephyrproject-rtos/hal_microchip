# Copyright (c) 2024 Microchip
# SPDX-License-Identifier: Apache-2.0

from sampinctrl import main


def test_main(data, tmp_path):
    """Test that pinctrl headers are generated correctly."""

    main(data, tmp_path)

    FILES = (
        "pic32cxsg41100-pinctrl.h",
        "pic32cxsg41128-pinctrl.h",
        "pic32cxsg60100-pinctrl.h",
        "pic32cxsg60128-pinctrl.h",
        "pic32cxsg61100-pinctrl.h",
        "pic32cxsg61128-pinctrl.h",
    )

    for file in FILES:
        ref_file = data / file
        gen_file = tmp_path / file

        assert gen_file.exists()

        with open(ref_file) as ref, open(gen_file) as gen:
            assert ref.read() == gen.read()