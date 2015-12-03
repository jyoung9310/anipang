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
	int returnValue[4];
	pushnum--;
	returnValue[0] = row[pushnum];
	returnValue[1] = col[pushnum];
	returnValue[2] = direction[pushnum];
	returnValue[3] = count[pushnum];
	return returnValue;


}