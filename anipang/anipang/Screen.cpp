#include"Screen.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Screen::Screen(Ani_Pang *a)
{
	this->sample = a;
}//Heart_Pang�� ����

void Screen::Prn_Time_Score() {
	cout << "�����ð�:" << this->sample->getGametime() << "\t" << "���� ���ھ�:" << this->sample->getScore() << endl;//�ð� ���ھ� ���
}

void Screen::Prn_Game_Screen() {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), this->sample->AniPang[row][col].getColor());//�ؽ�Ʈ ���� �ٲ�
			cout << sample->AniPang[row][col].getShape() << "\t";//ȭ�� ���
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0007);//�ؽ�Ʈ ���� ������� ����
		}
		cout << endl << endl;
	}
}

void Screen::Game_Over()
{
	system("cls");
	cout << "�ð��� ����Ǿ����ϴ�. ����� ������" << this->sample->getScore() << "�Դϴ�." << endl;
}//���� ����� ȭ��

