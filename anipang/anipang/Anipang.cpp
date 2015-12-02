#include"AniPang.h"

void Ani_Pang::Timer() {
	static int time_now = time(NULL);

	Game_time = 120 - time(NULL) + time_now + Bonus_time;

	Bonus_time = 0;
}