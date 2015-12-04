#include"Pang.h"
#include <ctime>
#include <cstdlib>
#include <Windows.h>

Pang::Pang(Ani_Pang *a, Checker *b) {
	this->csample = b;
	this->asample = a;
}

void Pang::rowPang() //행 터뜨리기
{
	/*do//pushnum이 0이 될때까지 반복
	{
	int *sample = this->csample->pangStack.pop();

	if (sample[3] == 3)//같은 개수가 3인경우
	{
	for (int i = 0; i < 3; i++)
	{
	this->asample->AniPang[sample[0]][sample[1] + i].setShape('x');//3개를 터뜨린다.
	}


	for (int i = sample[1]; i < (sample[1] + 3); i++)
	{
	for (int j = sample[0]; j < 1; j--)
	{
	this->asample->AniPang[i][j] = this->asample->AniPang[i][j - 1];//한줄 씩 내리기

	if (j == 1)
	{
	srand((unsigned int)time(NULL));
	this->asample->AniPang[i][0].setBlock(rand() % 4);//제일 윗칸 랜덤 배열
	}
	}
	}//터진 공간 채우기

	}

	} while (this->csample->pangStack.pushnum == 0);*/
}
void Pang::colPang()//열 터뜨리기
{
	/*do//pushnum이 0이 될때까지 반복
	{
	int *sample = this->csample->pangStack.pop();

	if (sample[3] == 3)//같은 개수가 3인경우
	{
	for (int i = 0; i < 3; i++)
	this->asample->AniPang[sample[0] + i][sample[1]].setShape('x');//3개를 터뜨린다.

	for (int i = sample[1]; i < sample[1] + 3; i++)
	{
	for (int j = sample[0]; j < 1; j--)
	{
	this->asample->AniPang[i][j] = this->asample->AniPang[i][j - 1];//한줄 씩 내리기

	if (j == 1)
	{
	srand((unsigned int)time(NULL));
	this->asample->AniPang[i][0].setBlock(rand() % 4);//제일 윗칸 랜덤 배열
	}
	}
	}//터진 공간 채우기

	}

	} while (this->csample->pangStack.pushnum == 0);*/

}
void Pang::itemPang(int row, int col) {

}

void Pang::PangPang() {
	this->rowPang();
	this->colPang();
}