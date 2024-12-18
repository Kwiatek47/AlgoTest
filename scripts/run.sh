#!/bin/bash

# Initizalize counter
counter=1

# Get the parent dir of the current one to get access to makefile 
x=$(dirname $(pwd))

# Compile generator brute and solution
make -C $x compile_GSB

# Main loop
while true
do
        # /dev/null 2>&1 to hide unnecessary paths and other shit
        make -C $x run_GSB > /dev/null 2>&1

        # Compare two output files
        if cmp -s "$x/tests/output_brute_force.txt" "$x/tests/output_solution.txt"; then
                echo "Test nr '$counter': PASSED ✅"
        else
                echo "Test nr '$counter': FAILED ❌"
                break
        fi

        ((counter++))
done

make -C $x clean > /dev/null 2>&1