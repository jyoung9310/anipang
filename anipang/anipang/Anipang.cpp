#include"AniPang.h"

void Ani_Pang::Timer() {
	static int time_now = time(NULL);

	Game_time = 120 - time(NULL) + time_now + Bonus_time;

	Bonus_time = 0;
}

Ani_Pang:: Ani_Pang() {
	srand((unsigned int)time(NULL));
	int a = std::rand() % 4;
	char shape[4] = { '@','#','$','&' };
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			a = std::rand() % 4;
			AniPang[row][col].Shape = shape[a];
		}
	}

}