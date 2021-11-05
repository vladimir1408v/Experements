#!/bin/bash

mkdir ./.build
cd ./.build
cmake ../
make
rm -r ../.build
chmod -R 777 ../bin
