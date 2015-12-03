#include "Checker.h"

Checker::Checker(Ani_Pang *a)
{
	this->sample = a;
}

bool Checker::rowCheck() {
	int pang = 0;
	for (int row = 0; row < 9; row++) {
		int count = 0;
		for (int col = 0; col < 8; col++) {
			if (this->sample->AniPang[row][col].Shape == this->sample->AniPang[row][col + 1].Shape) {
				count++;
			}
			else if (count >= 2){
				pangStack.push(row, col-count, 1, count+1);
				pang++;
				count = 0;
			}
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
		for (int row = 0; row < 8; row++){
			if (this->sample->AniPang[row][col].Shape == this->sample->AniPang[row][col].Shape) {
				count++;
			}
			else if (count >= 2){
				pangStack.push(row-count, col, 2, count + 1);
				pang++;
				count = 0;
			}
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
	return (this->rowCheck() && this->colCheck());
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
				けけ..け
				*/

			}
			else if ((input[i][j].Shape == input[i][j + 2].Shape) &&
				(input[i][j].Shape == input[i][j + 3].Shape) &&
				(j < 5)
				) {
				return 1;
				/*
				け..けけ
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j].Shape) &&
				(input[i][j].Shape == input[i + 3][j].Shape) &&
				(i < 5)
				) {
				return 1;
				/*
				け
				け
				..
				け
				*/
			}
			else if ((input[i][j].Shape == input[i + 2][j].Shape) &&
				(input[i][j].Shape == input[i + 3][j].Shape) &&
				(i < 5)
				) {
				return 1;
				/*
				け
				..
				け
				け
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j<6)
				) {
				return 1;
				/*
				..け..
				け..け
				*/
			}
			else if ((input[i][j].Shape == input[i][j + 2].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				け..け
				..け..
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				け..
				..け
				け..
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j + 2].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..け
				け..
				..け
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j].Shape) &&
				(input[i][j].Shape == input[i + 2][j + 1].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				け..
				け..
				..け
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..け
				..け
				け..
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 2][j + 1].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				け..
				..け
				..け
				*/
			}
			else if ((input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 1].Shape == input[i + 2][j].Shape) &&
				(i < 6) && (j < 7)
				) {
				return 1;
				/*
				..け
				け..
				け..
				*/
			}
			else if ((input[i][j].Shape == input[i][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				けけ..
				....け
				*/
			}
			else if ((input[i][j + 1].Shape == input[i][j + 2].Shape) &&
				(input[i][j + 1].Shape == input[i + 1][j].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				..けけ
				け....
				*/
			}
			else if ((input[i][j].Shape == input[i + 1][j + 1].Shape) &&
				(input[i][j].Shape == input[i + 1][j + 2].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				け....
				..けけ
				*/
			}
			else if ((input[i][j + 2].Shape == input[i + 1][j].Shape) &&
				(input[i][j + 2].Shape == input[i + 1][j + 1].Shape) &&
				(i < 7) && (j < 6)
				) {
				return 1;
				/*
				....け
				けけ..
				*/
			}
			else if (input[i][j].type != 0){
				return 1;
				// item 食採 端滴
			}
		}
	}
	return 0;
}