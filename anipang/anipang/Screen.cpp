#include"Screen.h"
#include <iostream>

using namespace std;

Screen::Screen(Ani_Pang *a)
{
	this->sample = a;
}//Heart_Pang�� ����

void Screen::Prn_Time_Score() {
	std::cout << "�����ð�:" << this->sample->Game_time << "\t" << "���� ���ھ�:" << this->sample->Score << std::endl;
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
	cout << "�ð��� ����Ǿ����ϴ�. ����� ������" << this->sample->Score << "�Դϴ�." << endl;
}

