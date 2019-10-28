#!/bin/bash

if [[ "$#" != 1 ]]; then
	echo "Please enter a c file as an argument"
	exit
fi

file=$1
ext=$(echo $file | rev | cut -d'.' -f1)

if [[ $ext != "c" ]]; then
	echo "Error: Argument must be a c file"
fi

gcc -fno-stack-protector -z execstack -o $(echo $file | cut -d'.' -f1) $file
