#pragma once
#include<windows.h>
#include"Block.h"
#include<iostream>


class Mouse_Input {
	int input_num = 0;
	HWND GameScreen; // �ܼ�ȭ���� ũ�⸦ ������� ������ �ڵ鷯
public:
	void Mouse_Click_InitSetting();
	void Mouse_Click(); // Drag&Drop���� ��ǥ�� �޾Ƽ�
	int Position[2][2]; // �����ο����� ��ǥ 
	void Block_Changer(Block AniPang[9][9]);

};