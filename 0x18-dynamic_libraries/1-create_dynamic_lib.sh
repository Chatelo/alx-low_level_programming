#!/bin/bash

# Compile all .c files into object files
gcc -c -Wall -Werror -fpic *.c

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o

