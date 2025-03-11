# Microchip PIC32C/PIC32M scripts

This folder contains `hal_microchip` scripts for generating PIC32C PINCFG files.

## PIC32C Dependencies

Scripts require Python 3.7+ and the Python dependencies listed in
`requirements.txt`. They can be installed by running:

```
pip install -r scripts/requirements.txt
```

## PIC32C Lint

Scripts should be formatted using `black` and linted using `flake8`.

Such development tools can be installed using:

```
pip install -r scripts/requirements-dev.txt
```

## PIC32 Tests

Before running tests make sure to have testing dependencies installed. They
can be installed by running:

```
pip install -r scripts/requirements-test.txt
```

Tests can be executed by running:

```
pytest
```
