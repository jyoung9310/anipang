#pragma once

class Block {
private:
	int Color; // Block의 색
	char Shape; //Block의 모양
	int type; // Item 인지 아닌지와 어떤 Item인지를 나타내는 변수이다.
public:
	int getColor();//색 호출 함수
	char getShape();//모양 호출 함수
	int getType();//타입 호출 함수
	void setType(int sample);//타입 변경 함수
	void setBlock(int index);//블록 색 모양 설정 함수
	void setShape(char sample);//모양 바꾸는 함수
	Block();//블록 타입 초기화
};