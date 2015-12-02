#pragma once
#include"Block.h"
#include<iostream>


class Screen { // 창욱 화면 출력을 담당한다
public:
	void Prn_Time_Score(int Time_Prn, int Score); // 시간과 점수 출력
	void Prn_Game_Screen(Block AniPang[9][9]); // 게임화면 즉 에니팡 화면을 출력한다.
											   //	void Color_Item(); // 이미 Block으로 색상 속성을 넣었기 떄문에 사용이 필요할 지는 의문이다.
	void Game_Over(); // timer 가 0이 되어 게임이 종료되었을때 화면의 출력부분
};

void Screen::Prn_Time_Score(int Time_Prn, int Score) {
	std::cout << "남은시간:" << Time_Prn << "\t" << "현재 스코어:" << Score << std::endl;
}

void Screen::Prn_Game_Screen(Block AniPang[9][9]) {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			std::cout << AniPang[row][col].Shape << "   ";
		}
		std:: cout << std :: endl << std::endl;
	}
}

