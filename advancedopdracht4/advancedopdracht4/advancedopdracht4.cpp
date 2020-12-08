
//regels 1 if a cell is alive it will look around in al directions if there are less than 2 it wil die from underpopuletion more than 3 die from overpopulation
// 2 or 3 it wil live
//dead cells look around check alive neigbours if there are exactly 3 it wil become alive
#include <iostream>
#include "windows.h"
#include "time.h"
#include <stdio.h>
#include <conio.h>
using namespace std;

void gotoxy(int x ,int y) {
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
int main() {

	cout << "hello welcome to game of life" << endl;

	int i ;
	int j ;
	int around;
	int** datay = new int* [83];
	for (int i = 0; i < 83; ++i) {
		datay[i] = new int[60];
	}
	int** nexty = new int* [83];
	for (int i = 0; i < 83; ++i) {
		nexty[i] = new int[60];
	}
	srand(time(NULL));
	for (i = 0; i <= 79; i++)
		for (j = 0; j <= 56; j++) {

			datay[i][j] = 0;

			if (i > 1 && i < 79 && j > 1 && j < 55)
				if (rand() % 6 == 1) {
					datay[i][j] = 1;
				}

		}

		while (1) 
		{
			for (i = 2; i <= 77; i++)
				for (j = 02; j <= 54; j++) {
					gotoxy(i,j);
					if (datay[i][j]) cout << "\2"; else cout << " ";
				}

			for (i = 2; i <= 77; i++) 
				for (j = 02; j <= 54; j++) {

					nexty[i][j] = datay[i][j];
					around = datay[i - 1][j - 1] + datay[i][j - 1] + datay[i + 1][j - 1] + datay[i - 1][j] + datay[i + 1][j] +
						datay[i - 1][j + 1] + datay[i][j + 1] + datay[i + 1][j + 1];
					if (datay[i][j]==1) {
						if (around < 2 || around>3)nexty[i][j] = 0; else nexty[i][j] = 1;

					}
					else {

						if (around == 3) nexty[i][j] = 1;
					}
				}

				for (i = 2; i <= 77; i++)
					for (j = 02; j <= 54; j++) {
						datay[i][j] = nexty[i][j];
					}
				//_getch();// handmatige update
			}


	return 0;
}
