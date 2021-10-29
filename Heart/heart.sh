#!/bin/bash

declare -i size
size=15

for ((i = $size / 2; i <= $size; i = i+2));
do
    for (( j = 1; j < $size - i; j = j+2));
    do
	echo -n ' '
    done

    for (( j = 1; j <= i; j++));
    do
	echo -n '#'
    done

    for (( j = 1; j <= $size - i; j++));
    do
	echo -n ' '
    done

    for (( j = 1; j <= i - 1; j++));
    do
	echo -n '#'
    done

    echo
done

for (( i = $size; i > 0; i--));
do

    for (( j = i; j < $size; j++));
    do
	echo -n ' '
    done

    for (( j = 1; j <= ((i * 2) - 1); j++));
    do
	echo -n '#'
    done

    echo
done


