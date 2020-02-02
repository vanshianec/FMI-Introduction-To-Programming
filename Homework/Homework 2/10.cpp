
#include <iostream>

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

void printMatrix(int matrix[10][10], int n)
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
	int n;
	cin >> n >> n;
	int matrix[10][10];

	readMatrix(matrix, n);

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (matrix[i][j] < matrix[j][i])
			{
				int temp = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = temp;
			}
		}
	}

	cout << endl;
	printMatrix(matrix, n);
	
	return 0;

}



