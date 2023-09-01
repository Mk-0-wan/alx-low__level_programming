#!/bin/bash
gcc -Wextra -Werror -Wall -pedantic -std=gnu89 -c *.c
ar -rcs liball.a ./*.c

