#pragma once

#define SIZEOFSTACK 100
class PangStack {
	int row[SIZEOFSTACK];
	int col[SIZEOFSTACK];
	int direction[SIZEOFSTACK];
	int count[SIZEOFSTACK];
public:
	void push(int rowinput, int colinput, int direcioninput, int countinput);//row, col, dir, count
	int* pop();//int[4]->row, col, dir ,count
	int pushnum = 0;
};
