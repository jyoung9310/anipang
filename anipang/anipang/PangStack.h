#pragma once

#define SIZEOFSTACK 100
class PangStack {
	int row[SIZEOFSTACK];
	int col[SIZEOFSTACK];
	int direction[SIZEOFSTACK];
	int count[SIZEOFSTACK];
public:
	void push(int, int, int, int);
	int* pop();
};