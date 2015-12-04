#include"AniPang.h"
#include<ctime>
#include<cstdlib>

void Ani_Pang::Timer() {
	static int time_now = time(NULL);

	this->Game_time = 120 - time(NULL) + time_now + this->Bonus_time;

	this->Bonus_time = 0;
}

int Ani_Pang::getGametime()
{
	return this->Game_time;
}

int Ani_Pang::getScore()
{
	return this->Score;
}

void Ani_Pang::setBonustime(int sample)
{
	this->Bonus_time = sample;
}

void Ani_Pang::setScore(int sample)
{
	this->Score += sample;
}

Ani_Pang::Ani_Pang()
{
	srand((unsigned int)time(NULL));

	this->Bonus_time = 0;
	this->Score = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			this->AniPang[i][j].setBlock(rand() % 4);
		}
	}
}