#!/bin/bash
echo "Press any key to START"
read
start=$(date +%s)

echo "Press any key to STOP"
read
end=$(date +%s)

duration=$((end - start))
echo "Elapsed time: $duration seconds"
