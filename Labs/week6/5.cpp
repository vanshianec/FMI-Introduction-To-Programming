
#include "pch.h"

#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int current = arr[i];
		int j = i;
		while (--j >= 0 && arr[j] > current)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = current;
	}
}

bool contains(int arr[], int num, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			return true;
		}
	}
	return false;
}

int readDistinctArray(int arr[], int n)
{
	int distinct_elements_count = 0;
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (!contains(arr, num, n))
		{
			arr[index++] = num;
			distinct_elements_count++;
		}
	}

	return distinct_elements_count;
}

int main()
{
	int n, m;
	int arr1[100];
	int arr2[100];

	cout << "Enter first array size : " << endl;
	cin >> n;
	cout << "Enter array elements : " << endl;
	n = readDistinctArray(arr1, n);

	cout << "Enter second array size : " << endl;
	cin >> m;
	cout << "Enter array elements : " << endl;
	m = readDistinctArray(arr2, m);

	insertionSort(arr1, n);
	insertionSort(arr2, m);

	if (n != m)
	{
		cout << "False" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
		{
			cout << "False" << endl;
			return 0;
		}
	}

	cout << "True" << endl;
	return 0;
}




