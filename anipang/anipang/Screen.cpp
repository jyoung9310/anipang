#include"Screen.h"

void Screen::Prn_Time_Score(int Time_Prn, int Score) {
	std::cout << "�����ð�:" << Time_Prn << "\t" << "���� ���ھ�:" << Score << std::endl;
}

void Screen::Prn_Game_Screen(Block AniPang[9][9]) {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			std::cout << AniPang[row][col].Shape << "   ";
		}
		std::cout << std::endl << std::endl;
	}
}

