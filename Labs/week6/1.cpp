
#include "pch.h"
#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void reverseArray(int arr[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = temp;
	}
}

void cycleArray(int arr[], int n)
{
	int k;
	cin >> k;

	for (int i = 0; i < k - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
}


int main()

{
	int n;
	int arr[100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	printArray(arr, n);
	cout << endl;
	reverseArray(arr, n);
	printArray(arr, n);
	cout << endl;
	reverseArray(arr, n);
	cycleArray(arr, n);
	printArray(arr, n);

	return 0;
}