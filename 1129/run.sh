#!/bin/bash
gcc 1129.c
./a.out < input > output
diff output answer