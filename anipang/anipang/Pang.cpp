#include"Pang.h"

Pang::Pang(Ani_Pang *a,Checker *b) {
	this->csample = b;
	this->asample = a;
}

void Pang::rowPang() 
{
	do//pushnum�� 0�� �ɶ����� �ݺ�
	{
		int *sample = this->csample->pangStack.pop();

		if (sample[3] == 3)//���� ������ 3�ΰ��
		{
			for (int i = 0; i < 3; i++)
				this->asample->AniPang[sample[0]][sample[1] + i].setShape('x');//3���� �Ͷ߸���.
		}

	} while (this->csample->pangStack.pushnum == 0);
}
void Pang::colPang()
{

}
void Pang::itemPang(int row, int col){
	
}

void Pang::PangPang() {
	this->rowPang();
	this->colPang();
}