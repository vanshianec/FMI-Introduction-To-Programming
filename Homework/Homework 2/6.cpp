
#include <iostream>
#include <algorithm>

using namespace std;

void readMatrix(int matrix[10][10], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int findBiggestSquareWithZeroes(int matrix[10][10], int startRow, int startCol, int n)
{
	int subMatrixLength = min(n - startRow, n - startCol);

	for (int cycles = 1; cycles <= subMatrixLength; cycles++)
	{
		for (int i = startRow; i < startRow + cycles; i++)
		{
			for (int j = startCol; j < startCol + cycles; j++)
			{
				if (matrix[i][j] != 0)
				{
					return cycles - 1;
				}
			}
		}
	}

	return subMatrixLength;
}

int main()
{
	int n, matrix[10][10], maxLength = 0;
	cin >> n;

	readMatrix(matrix, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int length = findBiggestSquareWithZeroes(matrix, i, j, n);
			if (length > maxLength)
			{
				maxLength = length;
			}
		}
	}

	cout << maxLength * maxLength << endl;
	
	return 0;
}


