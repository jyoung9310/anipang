#pragma once
#include"AniPang.h"
#include<iostream>


class Screen { // â�� ȭ�� ����� ����Ѵ�
private:
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
public:
	Screen(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	void Prn_Time_Score(); // �ð��� ���� ���
	void Prn_Game_Screen(); // ����ȭ�� �� ������ ȭ���� ����Ѵ�.
	void Game_Over(); // timer �� 0�� �Ǿ� ������ ����Ǿ����� ȭ���� ��ºκ�
};



