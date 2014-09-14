#!/bin/bash

sed 's/\([^|,]*\)\|\([^|,]*\)\|\([^|,]*\)/\1/g' keylayout.txt > keypress.layout
sed 's/\([^|,]*\)\|\([^|,]*\)\|\([^|,]*\)/\2/g' keylayout.txt > keyrelease.layout
sed 's/\([^|,]*\)\|\([^|,]*\)\|\([^|,]*\)/\3/g' keylayout.txt > keycode.layout
