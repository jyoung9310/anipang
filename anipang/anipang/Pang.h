#pragma once
#include"Deploy.h"

class Pang {
private:
	Deploy Pang_Deploy;
	void Row_Pang(); // Row���� ��Ʈ�� �� ������ ��Ʈ����
	void Col_Pang();  // Col���� ��Ʈ�� �� ������ ��Ʈ����
	void Item_Pang(); // Drag_Drop_Position���� �Է¹��� ��ǥ�� ���� Item�϶� ó���κ�
public:
	void Pang_Pang(); // private ��ü�� Row_Pang, Col_Pang, Item_Pang�� �ҷ��ͼ� ��Ʈ���� ���� ��ü ó���Ѵ�.

};
