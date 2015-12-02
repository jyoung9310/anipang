#pragma once
#include"AniPang.h"

class Pang {
private:
	Ani_Pang *sample;//Heart_Pang을 받는 클래스 포인터
	void Row_Pang(); // Row에서 터트릴 수 있을때 터트린다
	void Col_Pang();  // Col에서 터트릴 수 있을때 터트린다
	void Item_Pang(); // Drag_Drop_Position에서 입력받은 좌표의 값이 Item일때 처리부분
public:
	Pang(Ani_Pang *a);//Heart_Pang과 연결하기 위한 생성자
	void Pang_Pang(); // private 객체인 Row_Pang, Col_Pang, Item_Pang을 불러와서 터트리는 것을 전체 처리한다.

};
