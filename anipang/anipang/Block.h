#pragma once

class Block {
private:
	int Color; // Block�� ��
	char Shape; //Block�� ���
	char type; // Item ���� �ƴ����� � Item������ ��Ÿ���� �����̴�.
public:
	int getColor();//�� ȣ�� �Լ�
	char getShape();//��� ȣ�� �Լ�
	char getType();//Ÿ�� ȣ�� �Լ�
	void setType(char sample);//Ÿ�� ���� �Լ�
	void setBlock(int index);//��� �� ��� ���� �Լ�
	Block();//��� Ÿ�� �ʱ�ȭ
};