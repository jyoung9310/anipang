#pragma once
#include"Block.h"
#include"Deploy.h"
#include "PangStack.h"
#include<time.h>

class Ani_Pang {
public:
	Block AniPang[9][9];
	PangStack pangStack;
	void Timer();
	int Game_time;
	int Score;
	int Bonus_time = 0;
	//Deploy Deploy_Pang;
	
	Ani_Pang() {

		//Deploy_Pang.Whole_Deploy(AniPang);
	}

};
