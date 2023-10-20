#!/bin/bash
# Compile all .c files to .o files
gcc -c *.c
# Create a static library from all .o files
ar rcs liball.a *.o
