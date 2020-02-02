
#include "pch.h"
#include <iostream>

using namespace std;

void bubbleSort(int arr[100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		bool sorted = true;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				sorted = false;
			}
		}
		if (sorted)
		{
			break;
		}
	}
}

int main()
{
	int arr[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	bubbleSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

