#pragma once
#include<windows.h>
#include"Block.h"
#include<iostream>


class Mouse_Input {
	int input_num = 0;
	HWND GameScreen; // 콘솔화면의 크기를 잡기위한 윈도우 핸들러
public:
	void Mouse_Click_InitSetting();
	void Mouse_Click(); // Drag&Drop으로 좌표를 받아서
	int Position[2][2]; // 에니팡에서의 좌표 
	void Block_Changer(Block AniPang[9][9]);

};