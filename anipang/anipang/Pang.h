#pragma once
#include"AniPang.h"
#include"Checker.h"

class Pang {
private:
	Checker *csample;//checker�� �޴� Ŭ���� ������
	Ani_Pang *asample;//Heart_Pang�� �޴� Ŭ���� ������
	void rowPang(); // Row���� ��Ʈ�� �� ������ ��Ʈ����
	void colPang();  // Col���� ��Ʈ�� �� ������ ��Ʈ����
	//void itemPang(int row, int col); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
public:
	Pang(Ani_Pang *a,Checker *b);//Heart_Pang�� �����ϱ� ���� ������
	void itemPang(int row, int col); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
	void PangPang(); // private ��ü�� Row_Pang, Col_Pang, Item_Pang�� �ҷ��ͼ� ��Ʈ���� ���� ��ü ó���Ѵ�.

};
