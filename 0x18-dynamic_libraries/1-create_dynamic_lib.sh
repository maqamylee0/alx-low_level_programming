#!/bin/bash
gcc -c dynamo.c dynamo2.c dynamo3.c dynamo4.c
gcc -shared -o liball.so dynamo.c dynamo2.c dynamo3.c dynamo4.c
