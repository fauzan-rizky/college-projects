#!/bin/bash

name="Ojan"
echo "Hello, $name!"
brainrots=("tripleT" "Ballerina Cappucina" "Tralalelo Tralala")

number1=34
number2=33

number3=$((number1 + number2))
echo "Ayo guys $number3!!!!\n\n\n"

for char in "${brainrots[@]}" 
do
	echo "$char"
done
