
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string matrix[20][20];
	int n, cycles;
	cin >> n;
	int left_col = 0, right_col = n - 1, start_row = 0, end_row = n - 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	if (n % 2 == 0)
	{
		cycles = n / 2;
	}
	else
	{
		cycles = n / 2 + 1;
	}

	cout << endl;

	for (int c = 0; c < cycles; c++)
	{
		for (int i = left_col; i <= right_col; i++)
		{
			cout << matrix[start_row][i] << " ";
		}

		start_row++;

		for (int i = start_row; i < n - start_row + 1; i++)
		{
			cout << matrix[i][right_col] << " ";
		}

		right_col--;

		for (int i = right_col; i >= left_col; i--)
		{
			cout << matrix[end_row][i] << " ";
		}

		end_row--;

		for (int i = end_row; i >= start_row; i--)
		{
			cout << matrix[i][left_col] << " ";
		}

		left_col++;

	}
}
