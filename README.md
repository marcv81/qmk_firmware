# How to build?

In the dev container.

    python3 -m venv venv
    source venv/bin/activate
    pip3 install qmk
    qmk setup
    qmk compile marcv81.json -kb keebio/nyquist/rev5
