// TicTac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

using namespace std;

void setup(char (&gameboard)[9][9], int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			gameboard[i][j] = ' ';
		}
	}

}

void displayBoard(char (&gameboard)[9][9]){
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[0][0] << "  |  " << gameboard[0][1] << "  |  " << gameboard[0][2] << "  " << "  |  " "  " << gameboard[1][0] << "  |  " << gameboard[1][1] << "  |  " << gameboard[1][2] << "    |  " << "  " << gameboard[2][0] << "  |  " << gameboard[2][1] << "  |  " << gameboard[2][2] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[0][3] << "  |  " << gameboard[0][4] << "  |  " << gameboard[0][5] << "  " << "  |  " "  " << gameboard[1][3] << "  |  " << gameboard[1][4] << "  |  " << gameboard[1][5] << "    |  " << "  " << gameboard[2][3] << "  |  " << gameboard[2][4] << "  |  " << gameboard[2][5] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[0][6] << "  |  " << gameboard[0][7] << "  |  " << gameboard[0][8] << "  " << "  |  " "  " << gameboard[1][6] << "  |  " << gameboard[1][7] << "  |  " << gameboard[1][8] << "    |  " << "  " << gameboard[2][6] << "  |  " << gameboard[2][7] << "  |  " << gameboard[2][8] << "  " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
	cout << "_________________" << "__|__" << "_________________" << "__|__" << "_________________" << endl;
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[3][0] << "  |  " << gameboard[3][1] << "  |  " << gameboard[3][2] << "  " << "  |  " "  " << gameboard[4][0] << "  |  " << gameboard[4][1] << "  |  " << gameboard[4][2] << "    |  " << "  " << gameboard[5][0] << "  |  " << gameboard[5][1] << "  |  " << gameboard[5][2] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[3][3] << "  |  " << gameboard[3][4] << "  |  " << gameboard[3][5] << "  " << "  |  " "  " << gameboard[4][3] << "  |  " << gameboard[4][4] << "  |  " << gameboard[4][5] << "    |  " << "  " << gameboard[5][3] << "  |  " << gameboard[5][4] << "  |  " << gameboard[5][5] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[3][6] << "  |  " << gameboard[3][7] << "  |  " << gameboard[3][8] << "  " << "  |  " "  " << gameboard[4][6] << "  |  " << gameboard[4][7] << "  |  " << gameboard[4][8] << "    |  " << "  " << gameboard[5][6] << "  |  " << gameboard[5][7] << "  |  " << gameboard[5][8] << "  " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
	cout << "_________________" << "__|__" << "_________________" << "__|__" << "_________________" << endl;
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[6][0] << "  |  " << gameboard[6][1] << "  |  " << gameboard[6][2] << "  " << "  |  " "  " << gameboard[7][0] << "  |  " << gameboard[7][1] << "  |  " << gameboard[7][2] << "    |  " << "  " << gameboard[8][0] << "  |  " << gameboard[8][1] << "  |  " << gameboard[8][2] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[6][3] << "  |  " << gameboard[6][4] << "  |  " << gameboard[6][5] << "  " << "  |  " "  " << gameboard[7][3] << "  |  " << gameboard[7][4] << "  |  " << gameboard[7][5] << "    |  " << "  " << gameboard[8][3] << "  |  " << gameboard[8][4] << "  |  " << gameboard[8][5] << "  " << endl;
	cout << "_____|_____|_____" << "  |  " << "_____|_____|_____" << "  |  " << "_____|_____|_____" << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "  " << gameboard[6][6] << "  |  " << gameboard[6][7] << "  |  " << gameboard[6][8] << "  " << "  |  " "  " << gameboard[7][6] << "  |  " << gameboard[7][7] << "  |  " << gameboard[7][8] << "    |  " << "  " << gameboard[8][6] << "  |  " << gameboard[8][7] << "  |  " << gameboard[8][8] << "  " << endl;
	cout << "     |     |     " << "  |  " << "     |     |     " << "  |  " << "     |     |     " << endl;
	cout << "                 " << "  |  " << "                 " << "  |  " << "                 " << endl;
};

int move(char(&gameboard)[9][9], int &turn, char currentplayer, int nextsector, int choice) {
	int currentsector = nextsector;
	if (turn == 1) {
		cout << endl << endl << endl;
		cout << "Which sector do you want to start in ?" << endl;
		cout << "     |     |    " << endl;
		cout << "  1  |  2  |  3 " << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |    " << endl;
		cout << "  4  |  5  |  6 " << endl;
		cout << "_____|_____|_____" << endl;
		cout << "     |     |    " << endl;
		cout << "  7  |  8  |  9 " << endl;
		cout << "     |     |    " << endl << endl;
		cin >> choice;

		if (isvalid(gameboard, choice) == true) {
			turn++;
			currentsector = choice;
		}
		else {
			cout << "INVALID CHOICE, TRY AGAIN" << endl;
			move(gameboard, turn, currentplayer, nextsector, choice);
			};

	}
	
	cout << "CURRENT SECTOR: " << currentsector << endl << "CURRENT PLAYER: " << currentplayer << endl << endl;
	cout << "Which square would you like to occupy ? " << endl;
	cin >> choice;
	if (isvalid(gameboard, choice) == true && isopen(gameboard, currentsector, choice) == true) {
		gameboard[currentsector][choice] = currentplayer;
		cout << "Valid and open" << endl;
		nextsector = choice;
		turn++;
	}
	cout << "Not valid or not open" << endl;
	return choice;
};

bool isvalid(char(&gameboard)[9][9], int choice) {
	if (choice >= 1 && choice <= 9) {
		return true;
	}
	else {
		return false;
	}
};

bool isopen(char(&gameboard)[9][9], int currentsector, int choice) {
	if (gameboard[currentsector][choice] == ' ') {
		return true;
	}
	else {
		return false;
	}
};

int main()
{
	bool running = true;
	int choice = 0;
	const int x = 9;
	const int y = 9;
	int turn = 1;
	char currentplayer = 'X';
	int nextsector = 0;
	char gameboard[x][y];

	setup(gameboard, x, y);
	
	while (running == true) {
		displayBoard(gameboard);
		cout << "TURN #" << turn << endl;
		move(gameboard, turn, currentplayer, nextsector, choice);
		if (currentplayer == 'X') {
			currentplayer = 'O';
		}
		else {
			currentplayer = 'X';
		}
	}


}

