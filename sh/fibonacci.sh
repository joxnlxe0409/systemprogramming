#!/bin/bash

i=1
t1=0
t2=1
x=0
while [ $i -le 10 ]
do
	echo -n "$t1 "
	x=`expr $t1 + $t2`
	t1=$t2
	t2=$x
	i=`expr $i + 1`
done
echo

