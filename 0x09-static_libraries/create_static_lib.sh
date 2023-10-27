#!bin/bash
gcc -Wall ipedantic -werror -c *.c
ar -rc liball.a *.o
ranlib liball.a
