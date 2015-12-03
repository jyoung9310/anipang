#pragma once

#define SIZEOFSTACK 100
class PangStack {
	int row[SIZEOFSTACK];
	int col[SIZEOFSTACK];
	int direction[SIZEOFSTACK];
	int count[SIZEOFSTACK];
	
public:
	void push(int rowinput, int colinput, int directioninput, int countinput);
	int* pop();
	int pushnum = 0;
};
