# How to build?

## Setup

Start a Nix shell and initialise the submodules.

    nix develop
    git submodule update --init --recursive

## Build

    qmk compile -kb keebio/nyquist/rev5 -km marcv81
    qmk compile -kb silakka54 -km marcv81

## Keymap updates

    qmk json2c keyboards/keebio/nyquist/keymaps/marcv81/configurator.json
    qmk json2c keyboards/silakka54/keymaps/marcv81/configurator.json

Insert the output into `keyboards/keebio/nyquist/keymaps/marcv81/keymap.c` or `keyboards/silakka54/keymaps/marcv81/keymap.c`. 
