#pragma once
#include "AniPang.h"
#include "PangStack.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
	bool rowCheck();
	bool colCheck();
public:
	PangStack pangStack;
	Checker(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	bool pangCheck(); //ȭ�� ��ü���� ������ �ִ� ���� ã�Ƽ� stack�� ���� / stack����ɰ��=1, �ȵɰ��=0
	bool wholeCheck(); // ���� �� �ִ� �� üũ ������ ���� �� �� ����ȭ �� ��
};
