#pragma once

void setup(char(&gameboard)[9][9], int, int);
void displayBoard(char(&gameboard)[9][9]);
int move(char(&gameboard)[9][9], int&, char, int, int);
bool isvalid(char(&gameboard)[9][9], int);
bool isopen(char(&gameboard)[9][9], int currentsector, int choice);