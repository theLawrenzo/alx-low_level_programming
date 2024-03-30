#!/bin/bash
gcc -shared -o inject.so _printf.o
export LD_PRELOAD=./inject.so:$LD_LIBRARY_PATH
