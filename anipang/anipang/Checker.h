#pragma once
#include "AniPang.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang을 받는 클래스 포인터
	void Row_Checker();
	void Col_Checker();
	void Pang_Position_init();
	int Pang_Position[9][9];
public:
	Checker(Ani_Pang *a);//Heart_Pang과 연결하기 위한 생성자
	void Check(); //Row_Checker 와 Col_Checker를 this-> 로 사용한다.
	void Whole_Checker(); // 돌릴 수 있는 것 체크 수정할 예정 좀 더 세분화 할 것
	int Pang_Pang_Position[20][2];
	int Pang_Counter[20];
	void Pang_Position_Checker();

};
