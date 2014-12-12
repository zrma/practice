#!/bin/bash
./build.py > Makefile
if [[ $1 == "all" ]];then
	make $1
else
	make $@
fi
