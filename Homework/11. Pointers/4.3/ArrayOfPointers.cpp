
#include "pch.h"
#include <iostream>

using namespace std;

void readArray(long arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

bool duplicates(long *pointers[100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (*pointers[i] == *pointers[j])
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	int n;
	cin >> n;

	long arr[100];
	long *pointers[100];

	readArray(arr, n);

	for (int i = 0; i < n; i++)
	{
		pointers[i] = &arr[i];
	}

	cout << duplicates(pointers, n);


}


