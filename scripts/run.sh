#!/bin/bash

counter=1

x=$(dirname $(pwd))

while true
do
        make -C $x all

        if cmp -s "$x/tests/output_brute_force.txt" "$x/tests/output_solution.txt"; then
                echo "Test nr '$counter': PASSED"
        else
                echo "Test nr '$counter': FAILED"
                break
        fi
        
        ((counter++))
done