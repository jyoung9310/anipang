#include"Pang.h"

Pang::Pang(Ani_Pang *a,Checker *b) {
	this->csample = b;
	this->asample = a;
}

void Pang::rowPang() 
{
	do//pushnum이 0이 될때까지 반복
	{
		int *sample = this->csample->pangStack.pop();

		if (sample[3] == 3)//같은 개수가 3인경우
		{
			for (int i = 0; i < 3; i++)
				this->asample->AniPang[sample[0]][sample[1] + i].setShape('x');//3개를 터뜨린다.
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