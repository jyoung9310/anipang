#include"Block.h"

int Block::getColor()
{
	return this->Color;
}//�� ȣ�� �Լ�

char Block::getShape()
{
	return this->Shape;
}//��� ȣ�� �Լ�

char Block::getType()
{
	return this->type;
}//��� Ÿ�� ȣ�� �Լ�

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
		this->Color = 0x0001;//�Ķ�
		break;
	case 1:
		this->Shape = '@';
		this->Color = 0x0002;//�ʷ�
		break;
	case 2:
		this->Shape = '$';
		this->Color = 0x0003;//����
		break;
	case 3:
		this->Shape = '&';
		this->Color = 0x0006;//���
		break;
	}
}//��� ���� �� ���� �Լ�

void Block::setType(char sample)
{
	this->type = sample;
}