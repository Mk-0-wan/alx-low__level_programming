#!/bin/bash
wget -q -P /tmp http://github.com/Mk-0-wan/alx-low_level_programming/raw/master/0x18-dynamic_libraries/quite.so
export LD_PRELOAD=/tmp/quite.so
