#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Anthony9370/alx-low_level_programming/master/0x18-dynamic_libraries/libfile.so
export LD_PRELOAD=/"$PWD/../libfile.so"
