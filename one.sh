#!/bin/sh
# New alias command for getting back easily from directory which replaces cd ..
# Please read this article for more details - http://www.chettoor.in/2014/11/bash-multiple-cd-using-alias.html

_backfunc(){
	count=$1
	while [ "$count" -ne 0 ] 
	do
		cd ..
		count=$(( count - 1 ))
	done
}

alias back='_backfunc'
#exit $?
