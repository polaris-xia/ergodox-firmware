#!/bin/bash

sed 's/\([^|,]*\)|\([^|,]*\)|\([^|,]*\)/\1/g' $1 > keypress.layout
sed 's/\([^|,]*\)|\([^|,]*\)|\([^|,]*\)/\2/g' $1 > keyrelease.layout
sed 's/\([^|,]*\)|\([^|,]*\)|\([^|,]*\)/\3/g' $1 > keycode.layout
