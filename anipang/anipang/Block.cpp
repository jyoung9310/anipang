#include"Block.h"

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