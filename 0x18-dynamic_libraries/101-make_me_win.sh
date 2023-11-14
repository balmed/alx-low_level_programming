#!/bin/bash
wget -P /tmp  https://github.com/balmed/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libbalm.so
export LD_PRELOAD=/tmp/libbalm.so
