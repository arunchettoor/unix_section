#!/bin/sh
#Put the one.sh and this file in the same directory to install at start up.
pw=$(pwd)
pw="source $pw/one.sh"
b="$HOME/.bashrc"
echo "$pw">>$b
echo "Added $pw to $b file\n"
