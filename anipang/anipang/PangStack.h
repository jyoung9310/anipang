#pragma once

class PangStack {
	int row;
	int col;
	int direction;
	int count;
public:
	void push(int, int, int, int);
	int* pop();
};