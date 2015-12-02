#pragma once
#include"Block.h"
#include<iostream>


class Screen { // â�� ȭ�� ����� ����Ѵ�
public:
	void Prn_Time_Score(int Time_Prn, int Score); // �ð��� ���� ���
	void Prn_Game_Screen(Block AniPang[9][9]); // ����ȭ�� �� ������ ȭ���� ����Ѵ�.
											   //	void Color_Item(); // �̹� Block���� ���� �Ӽ��� �־��� ������ ����� �ʿ��� ���� �ǹ��̴�.
	void Game_Over(); // timer �� 0�� �Ǿ� ������ ����Ǿ����� ȭ���� ��ºκ�
};

void Screen::Prn_Time_Score(int Time_Prn, int Score) {
	std::cout << "�����ð�:" << Time_Prn << "\t" << "���� ���ھ�:" << Score << std::endl;
}

void Screen::Prn_Game_Screen(Block AniPang[9][9]) {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			std::cout << AniPang[row][col].Shape << "   ";
		}
		std:: cout << std :: endl << std::endl;
	}
}

