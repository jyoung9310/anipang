#pragma once
#include"Block.h"

class Ani_Pang {
private:
	int Game_time;//게임 전체 시간
	int Score;//점수
	int Bonus_time;//보너스 시간
public:
	Block AniPang[9][9];//애니팡 배열 선언
	int getGametime();//게임 전체 시간 호출 함수
	int getScore();//점수 호출 함수
	void setScore(int sample);//점수 입력 함수
	void setBonustime(int sample);//보너스 시간 입력 함수
	void Timer();//타이머
	Ani_Pang();//시간 및 점수 초기화 및 애니팡 모양 및 색 초기화
};
