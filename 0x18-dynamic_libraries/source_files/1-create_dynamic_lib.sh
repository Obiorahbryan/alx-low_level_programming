#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o 100-operations.so
rm *.o
