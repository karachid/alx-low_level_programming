#!/bin/bash
wget -P /tmp https://github.com/karachid/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrand.so
export LD_PRELOAD=/tmp/nrand.so
