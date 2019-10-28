#!/bin/bash

if [[ $(id -u root) != 0 ]]; then
	echo "Please run as sudo"
	exit
fi

sysctl -w kernel.randomize_va_space=0
