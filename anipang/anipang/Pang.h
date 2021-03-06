#pragma once
#include"AniPang.h"
#include"Checker.h"

class Pang {
private:
	Checker *csample;//checker를 받는 클래스 포인터
	Ani_Pang *asample;//Heart_Pang을 받는 클래스 포인터
	void rowPang(); // Row에서 터트릴 수 있을때 터트린다
	void colPang();  // Col에서 터트릴 수 있을때 터트린다
	//void itemPang(int row, int col); // Drag_Drop_Position에서 입력받은 좌표의 값이 Item일때 처리부분
public:
	Pang(Ani_Pang *a,Checker *b);//Heart_Pang과 연결하기 위한 생성자
	void itemPang(int row, int col); // Drag_Drop_Position에서 입력받은 좌표의 값이 Item일때 처리부분
	void PangPang(); // private 객체인 Row_Pang, Col_Pang, Item_Pang을 불러와서 터트리는 것을 전체 처리한다.

};
