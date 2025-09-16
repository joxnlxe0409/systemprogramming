#!/bin/bash

i=0
sum=0

while [ $i -le 100 ]
do
	if [ $(expr $i % 7) -eq 0 ]
	then
		sum=$(expr $sum + $i)
		echo "$i"
	fi
	i=$(expr $i + 1)
done
echo "SUM = $sum"

