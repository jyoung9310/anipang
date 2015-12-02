#pragma once
#include"Block.h"
#include<ctime>
#include<iostream>

class Deploy {
public:
	void Whole_Deploy(Block AniPang[9][9]);
	void Pang_Deploy();
};

void Deploy::Whole_Deploy(Block AniPang[9][9]) {
	srand((unsigned int)time(NULL));
	char random_char[4] = { '@','#','$','&' };
	for (int a = 0; a < 9; a++) {
		for (int b = 0; b < 9; b++) {
			AniPang[a][b].Shape = random_char[rand() % 4];
			AniPang[a][b].Block_Color_type();
		}
	}


}

void Deploy::Pang_Deploy() {
	srand((unsigned int)time(NULL));
	char random_char[4] = { '@','#','$','&' };
}
