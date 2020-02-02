
#include "pch.h"
#include <iostream>

using namespace std;

bool isMinInRow(int matrix[20][30], int i, int j, int m)
{
	int min_num = INT_MAX;

	for (int col = 0; col < m; col++)
	{
		if (matrix[i][col] < min_num)
		{
			min_num = matrix[i][col];
		}
	}

	return matrix[i][j] == min_num;
}

bool isMaxInCol(int matrix[20][30], int i, int j, int n)
{
	int max_num = INT_MIN;

	for (int row = 0; row < n; row++)
	{
		if (matrix[row][j] > max_num)
		{
			max_num = matrix[row][j];
		}
	}

	return matrix[i][j] == max_num;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int matrix[20][30];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (isMinInRow(matrix, i, j, m) && isMaxInCol(matrix, i, j, n))
			{
				cout << matrix[i][j] << endl;
			}
		}
	}
}
