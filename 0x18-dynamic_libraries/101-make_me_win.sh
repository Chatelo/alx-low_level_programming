#!/bin/bash
ls -la
history -c
clear
ls -la
md5_output=$(md5sum gm)
expected_md5="d52e6c18e0723f5b025a75dea19ef365  gm"

if [ "$md5_output" = "$expected_md5" ]; then
    echo "MD5 verification successful. Proceeding with winning the jackpot."
    echo -e "#include <stdio.h>\n#include <stdlib.h>\n\nvoid win_the_jackpot(void) __attribute__((constructor));\n\nvoid win_the_jackpot(void) {\n    system(\"echo 'Please make me win!' >> win.txt\");\n}" > win.c
    gcc -shared -o win.so -fPIC win.c
    rm win.c
    export LD_PRELOAD=./win.so
else
    echo "MD5 verification failed. Exiting without winning the jackpot."
fi

