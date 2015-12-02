#pragma once

class Block {
public:
	int Color; // Block의 색
	char Shape; //Block의 모양
	char type; // Item 인지 아닌지와 어떤 Item인지를 나타내는 변수이다.
	void Block_Color_type();
};
void Block::Block_Color_type() {
	if (Shape == '@') {
		Color = 1;
		type = '1';
	}
	else if (Shape == '#') {
		Color = 2;
		type = '2';
	}
	else if (Shape == '$') {
		Color = 3;
		type = '3';
	}
	else if (Shape == '&') {
		Color = 4;
		type = '4';
	}
}