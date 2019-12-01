
#include "pch.h"
#include <iostream>

using namespace std;

void printFirstDiagonal(int matrix[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << matrix[i][i] << " ";
	}
	
	cout << endl;
}

void printSecondDiagonal(int matrix[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << matrix[n - 1 - i][i] << " ";
	}

	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	int matrix[20][20];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printFirstDiagonal(matrix, n);
	printSecondDiagonal(matrix, n);


	
}


