#!/bin/sh -ef

# Copy a file so that it ends up with dos line endings so that for example,
# batch files will run properly under Windows 98.

cat $1 | awk '{sub(/$/,"\r");print}' > $2
