#pragma once
#include"AniPang.h"
#include<iostream>


class Screen { // 창욱 화면 출력을 담당한다
private:
	Ani_Pang *sample;//Heart_Pang을 받는 클래스 포인터
public:
	Screen(Ani_Pang *a);//Heart_Pang과 연결하기 위한 생성자
	void Prn_Time_Score(); // 시간과 점수 출력
	void Prn_Game_Screen(); // 게임화면 즉 에니팡 화면을 출력한다.
	void Game_Over(); // timer 가 0이 되어 게임이 종료되었을때 화면의 출력부분
};



