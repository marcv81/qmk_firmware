# How to build?

In the dev container.

Build the firmware.

```
python3 -m venv venv
source venv/bin/activate
pip3 install qmk
qmk setup
qmk compile -kb keebio/nyquist/rev5 -km marcv81
```

Regenerate the keymap. Copy the output to `keyboards/keebio/nyquist/keymaps/marcv81/keymap.c`.

```
qmk json2c marcv81.json
```
