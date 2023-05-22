#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so dynamo.o dynamo2.o dynamo3.o dynamo4.o
