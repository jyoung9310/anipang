#pragma once
#include"AniPang.h"
#include"Pangstack.h"
#include"Mouse.h"

class Pang {
private:
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
	void rowPang(); // Row���� ��Ʈ�� �� ������ ��Ʈ����
	void colPang();  // Col���� ��Ʈ�� �� ������ ��Ʈ����
	//void itemPang(int row, int col); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
public:
	Pang(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	void itemPang(int row, int col); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
	void PangPang(); // private ��ü�� Row_Pang, Col_Pang, Item_Pang�� �ҷ��ͼ� ��Ʈ���� ���� ��ü ó���Ѵ�.

};
