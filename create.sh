#!/bin/bash
dir_path=$(dirname $(realpath $0))
mkdir -p "$dir_path/problems/$1" \
    && cd "$_" \
    && touch main.cpp \
    && cp $dir_path/boilerplate.cpp main.cpp