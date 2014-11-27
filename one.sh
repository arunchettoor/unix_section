#!/bin/sh
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
