#pragma once
#include "AniPang.h"
#include "PangStack.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
	PangStack pangStack;
	bool rowCheck();
	bool colCheck();
	//void Pang_Position_init();
	//int Pang_Position[9][9];
public:
	Checker(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	bool pangCheck(); //ȭ�� ��ü���� ������ �ִ� ���� ã�Ƽ� stack�� ���� / stack����ɰ��=1, �ȵɰ��=0
	bool wholeCheck(Block input[9][9]); // ���� �� �ִ� �� üũ ������ ���� �� �� ����ȭ �� ��
	//int Pang_Pang_Position[20][2];
	//int Pang_Counter[20];
	//void Pang_Position_Checker();

};
