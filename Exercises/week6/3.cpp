
#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int matrix[20][20];
	int rows, cols, col_index = 0, row_index = 0;

	cin >> rows >> cols;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << endl;

	int current_cells_count = 0;

	while (current_cells_count < cols * rows)
	{
		for (int i = col_index; i < cols - col_index; i++)
		{
			cout << matrix[row_index][i] << " ";
			current_cells_count++;
		}

		for (int i = 1 + row_index; i < rows - row_index; i++)
		{
			cout << matrix[i][cols - 1 - col_index] << " ";
			current_cells_count++;
		}

		for (int i = cols - 2 - col_index; i >= col_index; i--)
		{
			cout << matrix[rows - 1 - row_index][i] << " ";
			current_cells_count++;
		}

		for (int i = rows - 2 - row_index; i >= row_index + 1; i--)
		{
			cout << matrix[i][col_index] << " ";
			current_cells_count++;
		}

		row_index++;
		col_index++;
	}
}
