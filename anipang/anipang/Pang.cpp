#include"Pang.h"
#include <ctime>
#include <cstdlib>
#include <Windows.h>

Pang::Pang(Ani_Pang *a, Checker *b) {
	this->csample = b;
	this->asample = a;
}

void Pang::rowPang() //�� �Ͷ߸���
{
	/*do//pushnum�� 0�� �ɶ����� �ݺ�
	{
	int *sample = this->csample->pangStack.pop();

	if (sample[3] == 3)//���� ������ 3�ΰ��
	{
	for (int i = 0; i < 3; i++)
	{
	this->asample->AniPang[sample[0]][sample[1] + i].setShape('x');//3���� �Ͷ߸���.
	}


	for (int i = sample[1]; i < (sample[1] + 3); i++)
	{
	for (int j = sample[0]; j < 1; j--)
	{
	this->asample->AniPang[i][j] = this->asample->AniPang[i][j - 1];//���� �� ������

	if (j == 1)
	{
	srand((unsigned int)time(NULL));
	this->asample->AniPang[i][0].setBlock(rand() % 4);//���� ��ĭ ���� �迭
	}
	}
	}//���� ���� ä���

	}

	} while (this->csample->pangStack.pushnum == 0);*/
}
void Pang::colPang()//�� �Ͷ߸���
{
	/*do//pushnum�� 0�� �ɶ����� �ݺ�
	{
	int *sample = this->csample->pangStack.pop();

	if (sample[3] == 3)//���� ������ 3�ΰ��
	{
	for (int i = 0; i < 3; i++)
	this->asample->AniPang[sample[0] + i][sample[1]].setShape('x');//3���� �Ͷ߸���.

	for (int i = sample[1]; i < sample[1] + 3; i++)
	{
	for (int j = sample[0]; j < 1; j--)
	{
	this->asample->AniPang[i][j] = this->asample->AniPang[i][j - 1];//���� �� ������

	if (j == 1)
	{
	srand((unsigned int)time(NULL));
	this->asample->AniPang[i][0].setBlock(rand() % 4);//���� ��ĭ ���� �迭
	}
	}
	}//���� ���� ä���

	}

	} while (this->csample->pangStack.pushnum == 0);*/

}
void Pang::itemPang(int row, int col) {

}

void Pang::PangPang() {
	this->rowPang();
	this->colPang();
}