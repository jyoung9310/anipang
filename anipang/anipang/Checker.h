#pragma once
#include "AniPang.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
	void Row_Checker();
	void Col_Checker();
	void Pang_Position_init();
	int Pang_Position[9][9];
public:
	Checker(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	void Check(); //Row_Checker �� Col_Checker�� this-> �� ����Ѵ�.
	void Whole_Checker(); // ���� �� �ִ� �� üũ ������ ���� �� �� ����ȭ �� ��
	int Pang_Pang_Position[20][2];
	int Pang_Counter[20];
	void Pang_Position_Checker();

};
