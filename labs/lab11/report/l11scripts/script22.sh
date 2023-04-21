#!/bin/bash
gcc script2.c -lm && ./a.out
#echo $?
OUTPUT=$?
echo $OUTPUT
case $OUTPUT in
0 ) echo "null";;
1 ) echo "positive";;
2 ) echo "negative"
esac

