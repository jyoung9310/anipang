#pragma once
#include"AniPang.h"

class Pang {
private:
	Ani_Pang *sample;//Heart_Pang�� �޴� Ŭ���� ������
	void Row_Pang(); // Row���� ��Ʈ�� �� ������ ��Ʈ����
	void Col_Pang();  // Col���� ��Ʈ�� �� ������ ��Ʈ����
	void Item_Pang(); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
public:
	Pang(Ani_Pang *a);//Heart_Pang�� �����ϱ� ���� ������
	void Pang_Pang(); // private ��ü�� Row_Pang, Col_Pang, Item_Pang�� �ҷ��ͼ� ��Ʈ���� ���� ��ü ó���Ѵ�.

};
