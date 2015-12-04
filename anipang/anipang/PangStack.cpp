#pragma once
#include "PangStack.h"	


void PangStack::push(int rowinput, int colinput, int directioninput, int countinput) {
	this->row[pushnum] = rowinput;
	this->col[pushnum] = colinput;
	this->direction[pushnum] = directioninput;
	this->count[pushnum] = countinput;

	this->pushnum++;
}

int* PangStack::pop() {
	int returnValue[4];
	this->pushnum--;
	returnValue[0] = this->row[pushnum];//����ǥ
	returnValue[1] = this->col[pushnum];//����ǥ
	returnValue[2] = this->direction[pushnum];//����
	returnValue[3] = this->count[pushnum];//����
	return returnValue;
}