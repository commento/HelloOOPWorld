#!/bin/bash

echo "-----------------------"
echo 
echo "Build the application"
echo 
echo "-----------------------"
echo 


RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color


g++ main.cpp
if [ $? -eq 0 ]; then
    echo
    printf "${GREEN}OK${NC}"
    echo
    echo "-----------------------"
    echo
    echo "Execute the application"
    echo
    echo "-----------------------"
    echo
    ./a.out
else
    echo
    printf "${RED}FAIL${NC}"
fi

