#include "Checker.h"

Checker::Checker(Ani_Pang *a)
{
	this->sample = a;
}
/*
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
*/
/*
void Checker::Pang_Position_init() {
	for (int row = 0; row < 9; row++) {

		for (int col = 0; col < 9; col++) {
			Pang_Position[row][col] = 0;
		}
	}
}
*/
bool Checker::rowCheck() {
	// ������ �� ��ġ�� ����
	// return int[n][3] r= { x��ǥ, y��ǥ, ���� }

	/*
		class PangStack {
			int stack[40][3];
			void push(int r, int c, int cnt, int dir);
			int[3] pop();
		}
	*/
	int pang = 0;
	for (int row = 0; row < 9; row++) {
		int count = 0;
		int stackCol = 0;
		for (int col = 0; col < 8; col++) {
			if (this->sample->AniPang[row][col].Shape == this->sample->AniPang[row][col + 1].Shape) {
				count++;
				/*
				if (count >= 2) {
					Pang_Position[row][col - 1] = 1;
					Pang_Position[row][col] = 1;
					Pang_Position[row][col + 1] = 1;
				}
				*/
			}
			if (count == 2){
				stackCol = col - 1;
			}
		}
		if (count >= 2){
			pangStack.push(row, stackCol, 1 , count + 1);
		}
	}
	if (pang == 0){
		return false;
	}
	else {
		return true;
	}
}
bool Checker::colCheck() {
	int pang = 0;
	for (int col = 0; col < 9; col++) {
		int count = 0;
		int stackRow = 0;
		for (int row = 0; row < 8; row++){
			if (this->sample->AniPang[row][col].Shape == this->sample->AniPang[row][col].Shape) {
				count++;
				/*
				if (count >= 2) {
				Pang_Position[row - 1][col] = 1;
				Pang_Position[row][col] = 1;
				Pang_Position[row + 1][col] = 1;
				}
				*/
			}
			if (count == 2){
				stackRow = row - 1;
			}
		}

		if (count >= 2){
			pangStack.push(stackRow, col, 2, count);
			pang++;
		}
	}
	if (pang == 0){
		return false;
	}
	else {
		return true;
	}
}
bool Checker::pangCheck() {
	//this->Pang_Position_init();
	return (this->rowCheck() && this->colCheck());
	//this->Pang_Position_Checker();
}

bool Checker::wholeCheck(Block input[9][9]) {
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if ((input[i][j].Shape == input[i][j + 1].Shape) &&
				(input[i][j].Shape == input[i][j + 3].Shape) &&
				(j < 5)
				) {
				return 1;
				/*
				����..��
				*/

			}
			else if ((input[i][j].Shape == input[i][j + 2].Shape) &&
				(input[i][j].Shape == input[i][j + 3].Shape) &&
				(j < 5)
				) {
				return 1;
				/*
				��..����
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j].Shape) &&
				(input[i][j].Shape == input[i + 3][j].Shape) &&
				(i < 5)
				) {
				return 1;
				/*
				��
				��
				..
				��
				*/
			}
			else if ((input[i][j].Shape == input[i + 2][j].Shape) &&
				(input[i][j].Shape == input[i + 3][j].Shape) &&
				(i < 5)
				) {
				return 1;
				/*
				��
				..
				��
				��
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j<6)
				) {
				return 1;
				/*
				..��..
				��..��
				*/
			}
			else if ((input[i][j].Shape == input[i][j + 2].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				��..��
				..��..
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				��..
				..��
				��..
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j + 2].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..��
				��..
				..��
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j].Shape) &&
				(input[i][j].Shape == input[i + 2][j + 1].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				��..
				��..
				..��
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..��
				..��
				��..
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 2][j + 1].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				��..
				..��
				..��
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..��
				��..
				��..
				*/
			}
			else if ((input[i][j].Shape == input[i][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				����..
				....��
				*/
			}
			else if ((input[i][j + 1].Shape == input[i][j + 2].Shape) &&
				(input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				..����
				��....
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				��....
				..����
				*/
			}
			else if ((input[i][j + 2].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 2].Shape == input[i + 1][j + 1].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				....��
				����..
				*/
			}
			else if (input[i][j].type != 0){
				return 1;
				// item ���� üũ
			}
		}
	}
	return 0;
}