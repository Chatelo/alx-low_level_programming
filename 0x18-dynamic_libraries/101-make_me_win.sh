#!/bin/bash
wget -P https://github.com/Chatelo/alx-low_level_programming/blob/master/0x18-dynamic_libraries/chatelo.so
export LD_PRELOAD=/tmp/chatelo.so
