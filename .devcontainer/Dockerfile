FROM ubuntu:24.04

RUN \
  apt-get update -y && \
  apt-get install -y \
    git build-essential vim \
    python3 python3-pip python3-venv \
    gcc-avr avr-libc avrdude dfu-programmer dfu-util gcc-arm-none-eabi && \
  rm -rf /var/lib/apt/lists
