#!/bin/bash

find . -type f \( -name *.exe -o -name *.out -o -name *.o -o -perm -u=x \) -not -path *.git* -print -delete

find . -type f -name tempCodeRunnerFile.* -print -delete

find . -type f -name test.* -print -delete

echo "All executable files have been deleted."
