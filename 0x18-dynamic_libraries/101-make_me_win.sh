#!/bin/bash

echo "int rand(void) { return 6; }" > rand.c
gcc -shared -o fake_rand.so -fPIC rand.c
rm rand.c
export LD_PRELOAD=./fake_rand.so

