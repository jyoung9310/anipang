#pragma once

class Block {
private:
	int Color; // Block�� ��
	char Shape; //Block�� ���
	int type; // Item ���� �ƴ����� � Item������ ��Ÿ���� �����̴�.
public:
	int getColor();//�� ȣ�� �Լ�
	char getShape();//��� ȣ�� �Լ�
	int getType();//Ÿ�� ȣ�� �Լ�
	void setType(int sample);//Ÿ�� ���� �Լ�
	void setBlock(int index);//��� �� ��� ���� �Լ�
	void setShape(char sample);//��� �ٲٴ� �Լ�
	Block();//��� Ÿ�� �ʱ�ȭ
};