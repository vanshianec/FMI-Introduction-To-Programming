
#include <iostream>
#include <cmath>

using namespace std;

void readMatrix(int matrix[23][23], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

bool isDiagonalDominant(int matrix[23][23], int n)
{
	for (int i = 0; i < n; i++)
	{
		int currentRowSum = 0;
		int currentDiagonalElement = abs(matrix[i][i]);
		for (int j = 0; j < n; j++)
		{
			currentRowSum += abs(matrix[i][j]);
		}

		if (currentDiagonalElement < currentRowSum - currentDiagonalElement)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	cin >> n;
	int matrix[23][23];

	readMatrix(matrix, n);

	if (isDiagonalDominant(matrix, n))
	{
		cout << "True";
	}
	else
	{
		cout << "False ";
	}

	cout << endl;
	
	return 0;
}



