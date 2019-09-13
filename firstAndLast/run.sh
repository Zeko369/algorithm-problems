#!/bin/bash

g++ firstAndLast.cpp -o firstAndLast

for i in {1..3}
do
  output=$(./firstAndLast < ./test/in.$i | diff ./test/out.$i -)
  len=${#output}

  if [ $len = 0 ]; then
    echo "Pass"
  else
    echo Fail $i: $output
  fi
done