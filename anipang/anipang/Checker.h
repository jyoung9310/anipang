#pragma once
#include "AniPang.h"
#include "PangStack.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang을 받는 클래스 포인터
	PangStack pangStack;
	bool rowCheck();
	bool colCheck();
	//void Pang_Position_init();
	//int Pang_Position[9][9];
public:
	Checker(Ani_Pang *a);//Heart_Pang과 연결하기 위한 생성자
	bool pangCheck(); //화면 전체에서 터질수 있는 것을 찾아서 stack에 저장 / stack저장될경우=1, 안될경우=0
	bool wholeCheck(Block input[9][9]); // 돌릴 수 있는 것 체크 수정할 예정 좀 더 세분화 할 것
	//int Pang_Pang_Position[20][2];
	//int Pang_Counter[20];
	//void Pang_Position_Checker();

};
