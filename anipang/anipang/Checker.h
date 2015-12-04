#pragma once
#include "AniPang.h"
#include "PangStack.h"

class Checker {
	Ani_Pang *sample;//Heart_Pang을 받는 클래스 포인터
	bool rowCheck();
	bool colCheck();
public:
	PangStack pangStack;
	Checker(Ani_Pang *a);//Heart_Pang과 연결하기 위한 생성자
	bool pangCheck(); //화면 전체에서 터질수 있는 것을 찾아서 stack에 저장 / stack저장될경우=1, 안될경우=0
	bool wholeCheck(); // 돌릴 수 있는 것 체크 수정할 예정 좀 더 세분화 할 것
};
