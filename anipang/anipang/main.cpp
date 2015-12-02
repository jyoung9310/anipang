
#include<windows.h>
#include"Block.h"
#include"AniPang.h"
#include"Screen.h"
#include"Mouse.h"
#include"Checker.h"
#include"Pang.h"

using namespace std;



void main()
{
	
	Ani_Pang Heart_Pang;
	Screen screenPrn;
	Mouse_Input input_mouse;
	Checker checker;
	Pang pang;
	input_mouse.Mouse_Click_InitSetting();
	Heart_Pang.Score = 0;
//	screenPrn.Prn_Time_Score(Heart_Pang.Game_time, Heart_Pang.Score);
//	screenPrn.Prn_Game_Screen(Heart_Pang.AniPang);
	while (1) {
		
		//system("CLS");
		checker.Whole_Checker();
		Heart_Pang.Timer();
		screenPrn.Prn_Time_Score(Heart_Pang.Game_time, Heart_Pang.Score);
		screenPrn.Prn_Game_Screen(Heart_Pang.AniPang);
		
		
		input_mouse.Mouse_Click();
		input_mouse.Block_Changer(Heart_Pang.AniPang);
	//	Sleep(200);
		checker.Check(Heart_Pang.AniPang);
		checker.Pang_Position_Checker();
	//	Sleep(400);
	//	system("pause");
	//	pang.Pang_Pang();

		if (Heart_Pang.Game_time == 0) {
	//		screenPrn.Game_Over();
		}
		
	}

	
}