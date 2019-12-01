
#include "pch.h"
#include <iostream>

using namespace std;

void printTransponseMatrix(int matrix[20][20], int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[j][i] << " ";
		}

		cout << endl;
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	int matrix[20][20];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printTransponseMatrix(matrix, n, m);
}


