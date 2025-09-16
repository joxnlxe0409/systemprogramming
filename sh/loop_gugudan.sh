#!/bin/bash

i=1

while [ "$i" -le 9 ]
do
	dan=2
	while [ $dan -le 9 ]
	do
		result=$((dan * i))
		printf "%-15s" "$dan x $i = $result"	
		dan=$((dan + 1))
	done
	echo 
	i=$((i+1))
done
