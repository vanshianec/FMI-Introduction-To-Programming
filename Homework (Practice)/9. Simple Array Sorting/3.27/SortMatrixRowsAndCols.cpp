

#include "pch.h"
#include <iostream>

void bubbleSort(int arr[10], int m)
{
	for (int i = 0; i < m - 1; i++)
	{
		bool sorted = true;
		for (int j = 0; j < m - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				sorted = false;
			}
		}
		if (sorted)
		{
			break;
		}
	}
}

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int matrix[10][10];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Sorted rows : " << endl;
	for (int i = 0; i < n; i++)
	{
		bubbleSort(matrix[i], m);
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}

		cout << endl;
	}

	cout << "Sorted cols : " << endl;

	for (int i = 0; i < m; i++)
	{
		int column[10];
		for (int j = 0; j < n; j++)
		{
			column[j] = matrix[j][i];
		}

		bubbleSort(column, n);

		for (int j = 0; j < n; j++)
		{
			cout << column[j] << " ";
		}

		cout << endl;
	}

}
