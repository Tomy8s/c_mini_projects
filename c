#!/bin/bash
if [ -f $1/$1.c ]
  then
    if [ -f $1/$1 ]
      then
        rm $1/$1
        echo Removed old binary!
      else
        echo No binary found, continuing to compile
    fi
    gcc -o "$1/$1" "$1/$1.c"
    if [ -f $1/$1 ]
      then
        echo Running $1:
        ./$1/$1
      else
        ./a.out
        echo No binary found, failed to compile
    fi
  else
    echo File not found
fi