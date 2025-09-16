#!/bin/bash
echo "Input 3 numbers:"
read a
read b
read c
max=$a
min=$a

(( b > max )) && max=$b
(( b < min )) && min=$b

(( c > max )) && max=$c
(( c < min )) && min=$c
printf "Biggest num: %d, Smallest num: %d\n" "$max" "$min"

