
#include "pch.h"
#include <iostream>
#include <algorithm>
#include "MatrixMultiplication.h"

using namespace std;


int getMultiplicationResult(int matrix1[10][10], int matrix2[10][10], int i, int m, int j)
{
	int result = 0;

	for (int k = 0; k < m; k++)
	{
		result += matrix1[i][k] * matrix2[k][j];
	}

	return result;
}

int main()
{
	int matrix1[10][10];
	int matrix2[10][10];
	int result_matrix[10][10];

	int n, m, res_length;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix1[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			cout << getMultiplicationResult(matrix1, matrix2, i, m, j) << " ";
		}
		cout << endl;
	}

}

