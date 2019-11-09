
#include "pch.h"
#include <iostream>

using namespace std;

void printMatrix(int matrix[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n, start_num = 1, col = 0, row = 0;
	cin >> n;
	int matrix[20][20];

	while (start_num <= n * n)
	{
		for (int i = col; i < n - col; i++)
		{
			matrix[row][i] = start_num++;
		}

		for (int i = row + 1; i < n - row; i++)
		{
			matrix[i][n - 1 - col] = start_num++;
		}

		for (int i = n - 2 - col; i >= col; i--)
		{
			matrix[n - 1 - row][i] = start_num++;
		}

		for (int i = n - 2 - row; i >= row + 1; i--)
		{
			matrix[i][col] = start_num++;
		}

		row++;
		col++;
	}

	printMatrix(matrix, n);


	return 0;
}




