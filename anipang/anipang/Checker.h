#pragma once
#include "Block.h"

class Checker {
	void Row_Checker(Block input[9][9]);
	void Col_Checker(Block input[9][9]);
	void Pang_Position_init();
	int Pang_Position[9][9];
public:
	void Check(Block input[9][9]); //Row_Checker 와 Col_Checker를 this-> 로 사용한다.
	void Whole_Checker(); // 돌릴 수 있는 것 체크 수정할 예정 좀 더 세분화 할 것
	int Pang_Pang_Position[20][2];
	int Pang_Counter[20];
	void Pang_Position_Checker();

};
