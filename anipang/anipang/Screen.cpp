#include"Screen.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Screen::Screen(Ani_Pang *a)
{
	this->sample = a;
}//Heart_Pang과 연결

void Screen::Prn_Time_Score() {
	cout << "남은시간:" << this->sample->getGametime() << "\t" << "현재 스코어:" << this->sample->getScore() << endl;//시간 스코어 출력
}

void Screen::Prn_Game_Screen() {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), this->sample->AniPang[row][col].getColor());//텍스트 색상 바꿈
			cout << sample->AniPang[row][col].getShape() << "\t";//화면 출력
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0007);//텍스트 색상 원래대로 돌림
		}
		cout << endl << endl;
	}
}

void Screen::Game_Over()
{
	system("cls");
	cout << "시간이 종료되었습니다. 당신의 점수는" << this->sample->getScore() << "입니다." << endl;
}//게임 종료시 화면

