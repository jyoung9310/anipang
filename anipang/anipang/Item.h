#pragma once
#include "AniPang.h"


class Item { //����  Block �Ӽ��� ����Ͽ� Block���� Type�� �����Ѵ�. 
private:
	Ani_Pang *sample;
	void Row_4_Pang();// ��
	void Col_4_Pang(); // ��
	void Heart_5_Pang(); // ��
public:
	Item(Ani_Pang *a);
	//	int Item_Pang_Value(); // ��θ� �޾� ���ڸ� � Item���� int������ �ݳ��̾����� Block�� ����ؼ� ����� ������
	// ���� �ʿ��� ���������� �ǹ��̴�. ������ Block���� type�Ӽ��� ����ؼ� ��ü �� �� ���� �� ����.
};
