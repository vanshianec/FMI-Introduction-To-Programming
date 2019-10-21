
#include "pch.h"
#include <iostream>

using namespace std;

void printSumBelowDiagonal(int matrix[50][50], int n)
{
	int sum = 0;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int num = matrix[i][j];
			if (num % 2 != 0)
			{
				sum += num;
			}
		}
	}

	cout << sum << endl;
}

int main()
{
	int n;
	cin >> n;

	int matrix[50][50];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printSumBelowDiagonal(matrix, n);

}
