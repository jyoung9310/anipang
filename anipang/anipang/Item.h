#pragma once
#include "AniPang.h"


class Item { //연주  Block 속성을 상속하여 Block에서 Type을 결정한다. 
private:
	Ani_Pang *sample;
	void Row_4_Pang();// ↔
	void Col_4_Pang(); // ↕
	void Heart_5_Pang(); // ♥
public:
	Item(Ani_Pang *a);
	//	int Item_Pang_Value(); // 경로를 받아 숫자를 어떤 Item인지 int값으로 반납이었으나 Block을 상속해서 만들기 때문에
	// 굳이 필요한 변수인지는 의문이다. 위에서 Block에서 type속성을 사용해서 대체 할 수 있을 것 같다.
};
