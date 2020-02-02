/* 用二维数组实现矩阵的转置 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define ROW 3
#define COL 4

int main()
{
	int matrixA[ROW][COL], matrixB[COL][ROW];

	system("cls");
	cout << "Enter elements of the matrixA,";
	cout <<  ROW << "*" << COL << ":" << "\n";

	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			cin >> matrixA[row][col];
		}
	}

	cout << "MatrixA:";
	cout << ROW << "*" << COL << ":" << "\n";
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			cout << ' ' << setw(8);
			cout << matrixA[row][col];
		}
		cout << endl;
	}

	cout << "MatrixB:";
	cout << COL << "*" << ROW << ":" << "\n";

	for (int col = 0; col < COL; col++)
	{
		for (int row = 0; row < ROW; row++)
		{
			cout << ' ' << setw(8);
			cout << matrixA[row][col];
		}
		cout << endl;
	}

	system("pause");
	return 1;
}
