
#include <iostream>
#include <cmath>
#include "sudoku.h"
#include <string>

using namespace std;

int main()
{
	string holdOpen;
	int myarray[9][9];
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			myarray[i][j] = (i + j + 1) % 9;
	sudoku myGrid(myarray);
	myGrid.printSudokuGrid();
	cin >> holdOpen;
	return 0;
}    