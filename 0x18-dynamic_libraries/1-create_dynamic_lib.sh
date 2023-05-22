#!/bin/bash
gcc -c dynamo.c dynamo2.c dynamo3.c dynamo4.c
gcc -shared -o liball.so dynamo.o dynamo2.o dynamo3.o dynamo4.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
