#pragma once
#include<windows.h>
#include"Block.h"
#include<iostream>
#include"AniPang.h"
#include"Pang.h"
#include"Checker.h"

class Mouse{
	Ani_Pang *sample;
	Checker *check;
	Pang *ClickPang;
	int input_num = 0;
	HWND GameScreen; // 콘솔화면의 크기를 잡기위한 윈도우 핸들러
public:
	Mouse(Ani_Pang *a, Pang *b, Checker *checker) {
		this->sample = a;
		this->ClickPang = b;
		this->check = checker;

	}
	void Mouse_Click_InitSetting();
	void Mouse_Click(); // Click 으로 좌표를 받아서
	int Position[2][2]; // 에니팡에서의 좌표 
	void Block_Changer();

};