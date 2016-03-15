
#include <iostream>
#include <cmath>
#include "sudoku.h"
#include <string>
#include <fstream>

using namespace std;

bool tfunc(int &);

int main()
{
	string holdOpen;
	/*
	int newInt = 2;
	cout << newInt << " ";
	cout << tfunc(newInt);
	cout << " " << newInt << endl;
	*/
	
	ifstream myfile;
	myfile.open("sudokuProblems.txt");
	int myarray[9][9];
	
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			myarray[i][j] = (int)myfile.get() - 48; //(i + j + 1) % 9;
	
	myfile.close();
	sudoku myGrid(myarray);
	myGrid.printSudokuGrid();
	myGrid.solveSudoku();
	cout << endl;
	myGrid.printSudokuGrid();
	/**/
	cin >> holdOpen;
	return 0;
}

bool tfunc(int &myInt)
{
	myInt = 6;
	return true;
}