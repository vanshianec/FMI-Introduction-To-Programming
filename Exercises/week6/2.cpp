
#include "pch.h"
#include <iostream>

using namespace std;

void printMatrixDiagonally(int matrix[20][20], int n)
{
	int halve_diagonals_count = (2 * n - 1) / 2;

	for (int i = halve_diagonals_count; i >= 0; i--)
	{
		for (int j = 0; j < halve_diagonals_count - i + 1; j++)
		{
			cout << matrix[i + j][j] << " ";
		}

		cout << endl;
	}

	for (int i = 0; i < halve_diagonals_count; i++)
	{
		for (int j = 1; j < halve_diagonals_count - i + 1; j++)
		{
			cout << matrix[j - 1][j + i] << " ";
		}

		cout << endl;
	}
}

int main()
{
	int matrix[20][20];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printMatrixDiagonally(matrix, n);
}
