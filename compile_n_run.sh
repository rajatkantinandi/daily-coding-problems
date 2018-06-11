#!/bin/bash
echo "Enter filename to compile & run without extension: "
read filename
clang src/$filename.c -o out/$filename.out
echo "Compiled Successfully"
./out/$filename.out