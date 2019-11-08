
#include "pch.h"

#include <iostream>

using namespace std;

void readArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void merge(int arr1[], int arr2[], int result[], int n, int m)
{
	int i = 0;
	int j = 0;

	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			result[i + j] = arr1[i++];
		}
		else
		{
			result[i + j] = arr2[j++];
		}
	}

	while (i < n)
	{
		result[i + j] = arr1[i++];
	}

	while (j < m)
	{
		result[i + j] = arr2[j++];
	}

}

void printArray(int  result[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n, m;
	int arr1[100];
	int arr2[100];
	int result[200] = {};

	cout << "Enter first array size : " << endl;
	cin >> n;
	cout << "Enter array elements(sorted) : " << endl;
	readArray(arr1, n);

	cout << "Enter second array size : " << endl;
	cin >> m;
	cout << "Enter array elements(sorted) : " << endl;
	readArray(arr2, m);

	merge(arr1, arr2, result, n, m);

	printArray(result, m + n);

	return 0;
}