#include"Block.h"

int Block::getColor()
{
	return this->Color;
}//색 호출 함수

char Block::getShape()
{
	return this->Shape;
}//모양 호출 함수

char Block::getType()
{
	return this->type;
}//블록 타입 호출 함수

Block::Block()
{
	this->type = 0;
}

void Block::setBlock(int index)
{
	switch (index)
	{
	case 0:
		this->Shape = '#';
		this->Color = 0x0001;//파랑
		break;
	case 1:
		this->Shape = '@';
		this->Color = 0x0002;//초록
		break;
	case 2:
		this->Shape = '$';
		this->Color = 0x0003;//옥색
		break;
	case 3:
		this->Shape = '&';
		this->Color = 0x0006;//노랑
		break;
	}
}//블록 모양과 색 지정 함수

void Block::setType(char sample)
{
	this->type = sample;
}