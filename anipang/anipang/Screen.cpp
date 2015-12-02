#include"Screen.h"
#include <iostream>

using namespace std;

Screen::Screen(Ani_Pang *a)
{
	this->sample = a;
}//Heart_Pang과 연결

void Screen::Prn_Time_Score() {
	std::cout << "남은시간:" << this->sample->Game_time << "\t" << "현재 스코어:" << this->sample->Score << std::endl;
}

void Screen::Prn_Game_Screen() {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			std::cout << sample->AniPang[row][col].Shape << "   ";
		}
		std::cout << std::endl << std::endl;
	}
}

void Screen::Game_Over()
{
	system("cls");
	cout << "시간이 종료되었습니다. 당신의 점수는" << this->sample->Score << "입니다." << endl;
}

