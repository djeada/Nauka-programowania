#!/usr/bin/env bash

#Napisz funkcje, ktora dla otrzymanej liczby 
#wypisze trojkat prostokatny rownoboczny o 
#wysokosci rownej otrzymanej liczbie.

trojkat() {

	a=$1

	for (( i=0; i<$a; i++ )); do
		for (( j=0; j<=$i; j++ )); do
			echo -n "x"
		done
		echo ""
	done

}

main() {

	trojkat 5	

}

main "$@"

