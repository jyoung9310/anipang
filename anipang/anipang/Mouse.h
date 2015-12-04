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
	HWND GameScreen; // �ܼ�ȭ���� ũ�⸦ ������� ������ �ڵ鷯
public:
	Mouse(Ani_Pang *a, Pang *b, Checker *checker) {
		this->sample = a;
		this->ClickPang = b;
		this->check = checker;

	}
	void Mouse_Click_InitSetting();
	void Mouse_Click(); // Click ���� ��ǥ�� �޾Ƽ�
	int Position[2][2]; // �����ο����� ��ǥ 
	void Block_Changer();

};