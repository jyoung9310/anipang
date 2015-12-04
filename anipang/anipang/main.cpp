
#include<windows.h>
#include"AniPang.h"
#include"Screen.h"
#include"Mouse.h"
#include"Checker.h"
#include"Pang.h"

using namespace std;
//asdasd


void main()
{
	
	Ani_Pang Heart_Pang;
	Screen screenPrn(&Heart_Pang);
	Checker checker(&Heart_Pang);
	Pang pang(&Heart_Pang,&checker);
	Mouse input_mouse(&Heart_Pang, &pang , &checker);
	
	
	input_mouse.Mouse_Click_InitSetting();
//	screenPrn.Prn_Time_Score(Heart_Pang.Game_time, Heart_Pang.Score);
//	screenPrn.Prn_Game_Screen(Heart_Pang.AniPang);
	while (1) {
		
		system("CLS");
		checker.wholeCheck();
		Heart_Pang.Timer();
		screenPrn.Prn_Time_Score();
		screenPrn.Prn_Game_Screen();
		
		
		input_mouse.Mouse_Click();
		input_mouse.Block_Changer();
	/*//	Sleep(200);
		checker.Check(Heart_Pang.AniPang);
		checker.Pang_Position_Checker();
	//	Sleep(400);
	//	system("pause");
	//	pang.Pang_Pang();

		if (Heart_Pang.Game_time == 0) {
	//		screenPrn.Game_Over();
		}*/
		
	}

	
}