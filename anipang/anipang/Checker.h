#pragma once
#include "Block.h"

class Checker {
	void Row_Checker(Block input[9][9]);
	void Col_Checker(Block input[9][9]);
	void Pang_Position_init();
	int Pang_Position[9][9];
public:
	void Check(Block input[9][9]); //Row_Checker �� Col_Checker�� this-> �� ����Ѵ�.
	void Whole_Checker(); // ���� �� �ִ� �� üũ ������ ���� �� �� ����ȭ �� ��
	int Pang_Pang_Position[20][2];
	int Pang_Counter[20];
	void Pang_Position_Checker();

};
