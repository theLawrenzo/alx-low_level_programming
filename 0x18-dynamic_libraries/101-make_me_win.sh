#!/bin/bash
gcc -shared -o inject.so -fPIC _printf.c
export LD_PRELOAD=./inject.so:$LD_LIBRARY_PATH
