#pragma once
#include "PangStack.h"	


void PangStack::push(int rowinput, int colinput, int directioninput, int countinput) {
	row[pushnum] = rowinput;
	col[pushnum] = colinput;
	direction[pushnum] = directioninput;
	count[pushnum] = countinput;

	pushnum++;
}

int* PangStack::pop() {

	row[pushnum] = '\0';
	col[pushnum] = '\0';
	direction[pushnum] = '\0';
	count[pushnum] = '\0';

	pushnum--;
}