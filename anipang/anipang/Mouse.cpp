#include"Mouse.h"

void Mouse::Block_Changer(Block AniPang[9][9]) {
	Block Temp;
	if ((abs(Position[0][0] - Position[1][0]) == 1 && abs(Position[0][1] - Position[1][1]) == 0) || (abs(Position[0][0] - Position[1][0]) == 0 && abs(Position[0][1] - Position[1][1]) == 1)) {
		Temp = AniPang[this->Position[0][0]][this->Position[0][1]];
		AniPang[this->Position[0][0]][this->Position[0][1]] = AniPang[this->Position[1][0]][this->Position[1][1]];
		AniPang[this->Position[1][0]][this->Position[1][1]] = Temp;
	}
}

void Mouse::Mouse_Click_InitSetting() {
	SetConsoleTitle(L"mouse");
	LPCWSTR a;
	GameScreen = FindWindow(NULL, TEXT("mouse"));
}
void Mouse::Mouse_Click() {
	int count = 0;
	POINT Mouse_Position[2]; // 화면에서 마우스의 실제 좌표값
	while (input_num < 2) {

		if ((GetKeyState(VK_LBUTTON) & 0x100) != 0) { // 마우스 눌렀을때

			GetCursorPos(&Mouse_Position[input_num]);
			ScreenToClient(GameScreen, &Mouse_Position[input_num]);

			if (count == 0) {
				ScreenToClient(GameScreen, &Mouse_Position[input_num]);

				//	Sleep(100);
				count = 1;
			}

			if ((GetKeyState(VK_LBUTTON) & 0x100) == 0) { // 마우스 뗐을때
				input_num++;
				count = 0;
			}
		}
	}
	if (input_num == 2) {
		for (int a = 0; a < 2; a++) {
			input_num = 0;
			if (Mouse_Position[a].x > 0 && Mouse_Position[a].y > 17 && Mouse_Position[a].x < 280 && Mouse_Position[a].y < 297) {
				Position[a][1] = (Mouse_Position[a].x) / 30;
				Position[a][0] = (Mouse_Position[a].y - 17) / 30;
			}
			//		cout << a << "    " << Mouse_Position[a].x << "   " << Mouse_Position[a].y << endl;
			//	cout << Position[a][0] << "   " << Position[a][1] << endl;
			//	Sleep(300);
		}
	}
}