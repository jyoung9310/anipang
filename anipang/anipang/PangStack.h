#pragma once

#define SIZEOFSTACK 100
class PangStack {
	int row[SIZEOFSTACK];//ÇàÁÂÇ¥
	int col[SIZEOFSTACK];//¿­ÁÂÇ¥
	int direction[SIZEOFSTACK];//¹æÇâ
	int count[SIZEOFSTACK];//°³¼ö
public:
	void push(int rowinput, int colinput, int direcioninput, int countinput);//row, col, dir, count
	int* pop();//int[4]->row, col, dir ,count
	int pushnum = 0;

};
