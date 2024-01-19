#!/bin/bash
	gcc -wall -wextra -werror -pedantic -c -fpic *.c
	gcc -share -o liball.so *.o
	export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATHH

