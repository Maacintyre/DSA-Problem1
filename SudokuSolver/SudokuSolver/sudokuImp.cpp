
#include <iostream>
#include "sudoku.h"

using namespace std;

sudoku::sudoku()
{
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			grid[row][col] = 0;
		
}

sudoku::sudoku(int g[][9])
{
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
			grid[row][col] = g[row][col];
}

void sudoku::initializeSudokuGrid()
{
	int tempArray[9][9];
	int userinput;
	bool valid = false;
	for (int row = 0; row < 9; row++)
		for (int col = 0; col < 9; col++)
		{
			while (!valid)
			{
				cout << "Enter the number for grid slot: " << row << ", " << col << endl;
				cin >> userinput;
				if (userinput < 10 && userinput > 0)
				{
					valid = true;
				}
				else
				{
					cout << "Input not valid: " << endl;
				}
			}
		}
}
/*
void sudoku::initializeSudokuGrid(int g[][9])
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}
*/
void sudoku::printSudokuGrid()
{
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
			cout << '[' << grid[row][col] << ']';
		cout << endl;
	}
}
/*
bool sudoku::solveSudoku()
{
    int row, col;

    if (findEmptyGridSlot(row, col)) 
    {   
        for (int num = 1; num <= 9; num++)  
        {             
            if (canPlaceNum(row, col, num)) 
            { 
                grid[row][col] = num; 
                if (solveSudoku()) //recursive call
                    return true;
                grid[row][col] = 0; //backtrack
            }
        }
        return false; 
    }
    else
        return true; //there are no empty slots
}

bool sudoku::findEmptyGridSlot(int &row, int &col)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::canPlaceNum(int row, int col, int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInRow(int row, int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInCol(int col, int num)
{
   cout << "Write the definition. See Programming Exercise 18."
         << endl;
}

bool sudoku::numAlreadyInBox(int smallGridRow, int smallGridCol, 
                             int num)
{
    cout << "Write the definition. See Programming Exercise 18."
         << endl;
}
*/

