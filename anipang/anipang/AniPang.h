#pragma once
#include"Block.h"

class Ani_Pang {
private:
	int Game_time;//���� ��ü �ð�
	int Score;//����
	int Bonus_time;//���ʽ� �ð�
public:
	Block AniPang[9][9];//�ִ��� �迭 ����
	int getGametime();//���� ��ü �ð� ȣ�� �Լ�
	int getScore();//���� ȣ�� �Լ�
	void setScore(int sample);//���� �Է� �Լ�
	void setBonustime(int sample);//���ʽ� �ð� �Է� �Լ�
	void Timer();//Ÿ�̸�
	Ani_Pang();//�ð� �� ���� �ʱ�ȭ �� �ִ��� ��� �� �� �ʱ�ȭ
};
