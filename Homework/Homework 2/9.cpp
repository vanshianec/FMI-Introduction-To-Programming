
#include <iostream>
#include <algorithm>

using namespace std;

void readMatrix(int matrix[10][10], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

bool isMaxInRow(int matrix[10][10], int i, int j, int elementsInCurrentRow)
{
	int maxElement = matrix[i][j];

	for (int col = 0; col < elementsInCurrentRow; col++)
	{
		if (matrix[i][col] >= maxElement && col != j)
		{
			return false;
		}
	}

	return true;
}

bool isMinInCol(int matrix[10][10], int i, int j, int elementsInCurrentCol)
{
	int minElement = matrix[i][j];

	for (int row = 0; row < elementsInCurrentCol; row++)
	{
		if (matrix[row][j] <= minElement && row != i)
		{
			return false;
		}
	}

	return true;
}

bool isSaddlePoint(int matrix[10][10], int i, int j, int n, int m)
{
	return isMaxInRow(matrix, i, j, m) && isMinInCol(matrix, i, j, n);
}

int main()
{
	bool foundSaddlePoint = false;
	int n, m, matrix[10][10];
	cin >> n >> m;

	readMatrix(matrix, n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (isSaddlePoint(matrix, i, j, n, m))
			{
				cout << i << ", " << j << endl;
				foundSaddlePoint = true;
			}
		}
	}

	if (!foundSaddlePoint)
	{
		cout << "This matrix does not have a saddle point" << endl;
	}
	
	return 0;
}


