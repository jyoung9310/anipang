#pragma once
#include "Block.h"

class Checker {
	void Row_Checker(Block input[9][9]);
	void Col_Checker(Block input[9][9]);
	void Pang_Position_init();
	int Pang_Position[9][9];
public:
	void Check(Block input[9][9]); //Row_Checker 와 Col_Checker를 this-> 로 사용한다.
	void Whole_Checker(); // 돌릴 수 있는 것 체크 수정할 예정 좀 더 세분화 할 것
	int Pang_Pang_Position[20][2];
	int Pang_Counter[20];
	void Pang_Position_Checker();

};
void Checker::Pang_Position_Checker() {
	int a = 0, b = 0;
	bool check = false;

	for (int d = 0; d < 20; d++) {
		Pang_Pang_Position[d][0] = 0;
		Pang_Pang_Position[d][1] = 0;
	}

	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			if ((Pang_Position[row][col] == 1) && (check == false)) {
				Pang_Pang_Position[a][0] = row;
				Pang_Pang_Position[a][1] = col;
				Pang_Counter[b] = 0;
				a++;
				//		cout << Pang_Pang_Position[a][0] << "   " << Pang_Pang_Position[a][1] << "\t";
				//		cout << row << "   " << col << "\t";
				check = true;

			}
			if ((Pang_Position[row][col] == 1) && (check == true)) {
				Pang_Counter[b]++;
			}

			if ((Pang_Position[row][col - 1] == 1) && (Pang_Position[row][col] == 0)) {
				b++;
				check = false;
			}

		}
	}
	for (int a = 0; a < 20; a++) {
//		cout << Pang_Pang_Position[a][0] << "   " << Pang_Pang_Position[a][1] << "\t";
//		cout << Pang_Counter[a] << endl;
	}


}

void Checker::Pang_Position_init() {
	for (int row = 0; row < 9; row++) {

		for (int col = 0; col < 9; col++) {
			Pang_Position[row][col] = 0;
		}
	}
}

void Checker::Row_Checker(Block input[9][9]) {
	int count;

	for (int row = 0; row < 9; row++) {
		count = 0;
		for (int col = 0; col < 8; col++) {
			if (input[row][col].Shape == input[row][col + 1].Shape) {
				count++;
				if (count >= 2) {
					Pang_Position[row][col - 1] = 1;
					Pang_Position[row][col] = 1;
					Pang_Position[row][col + 1] = 1;
				}
			}
			else {
				count = 0;
			}
		}
	}
}
void Checker::Col_Checker(Block input[9][9]) {
	int count;

	for (int col = 0; col < 9; col++) {
		count = 0;
		for (int row = 0; row < 8; row++) {

			if (input[row][col].Shape == input[row + 1][col].Shape) {
				count++;
				if (count >= 2) {
					Pang_Position[row - 1][col] = 1;
					Pang_Position[row][col] = 1;
					Pang_Position[row + 1][col] = 1;
				}
			}
			else {
				count = 0;
			}
		}
	}
}
void Checker::Check(Block input[9][9]) {
	this->Pang_Position_init();
	this->Row_Checker(input);
	this->Col_Checker(input);
	//this->Pang_Position_Checker();
	

}
void Checker::Whole_Checker() {

}

