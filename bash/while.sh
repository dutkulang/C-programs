#!/usr/bin/env bash
# using while loops to print out text
i=0
while [ $i -lt 10 ]
do
    echo "$i Best school"
    ((i++))
done
