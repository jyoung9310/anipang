#include"Mouse.h"

void Mouse::Block_Changer() {
	Block Temp;
	if ((abs(Position[0][0] - Position[1][0]) == 1 && abs(Position[0][1] - Position[1][1]) == 0) || (abs(Position[0][0] - Position[1][0]) == 0 && abs(Position[0][1] - Position[1][1]) == 1)) {
		Temp = this->sample->AniPang[this->Position[0][0]][this->Position[0][1]];
		this->sample->AniPang[this->Position[0][0]][this->Position[0][1]] = this->sample->AniPang[this->Position[1][0]][this->Position[1][1]];
		this->sample->AniPang[this->Position[1][0]][this->Position[1][1]] = Temp;
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

			
			ScreenToClient(GameScreen, &Mouse_Position[input_num]);
			


			if ((GetKeyState(VK_LBUTTON) & 0x100) == 0) { // 마우스 뗐을때
				GetCursorPos(&Mouse_Position[input_num]);

				ScreenToClient(GameScreen, &Mouse_Position[input_num]);

				if (Mouse_Position[input_num].x > 0 && Mouse_Position[input_num].y > 17 && Mouse_Position[input_num].x < 280 && Mouse_Position[input_num].y < 297) {
					Position[input_num][1] = (Mouse_Position[input_num].x) / 30;
					Position[input_num][0] = (Mouse_Position[input_num].y - 17) / 30;
				}
				if (this->sample->AniPang[Position[0][1]][Position[0][0]].type != 0) {
					input_num = 2;
					this->ClickPang->itemPang(Position[0][1], Position[0][0]);
				}
				
				input_num++;
			}
		}
	}
	input_num = 0;

	
}