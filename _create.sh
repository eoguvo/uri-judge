#!/bin/bash
dir_path=$(dirname $(realpath $0))
printf "Please, select an folder:\n"
select d in problems/*; do test -n "$d" && break; echo ">>> Invalid Selection"; done
mkdir -p $d/$1 \
    && cd "$_" \
    && touch main.cpp \
    && cp $dir_path/boilerplate.cpp main.cpp