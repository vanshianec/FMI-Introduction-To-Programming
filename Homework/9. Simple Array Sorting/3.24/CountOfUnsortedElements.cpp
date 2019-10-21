

#include "pch.h"
#include <iostream>

using namespace std;

int unsortedness(int arr[100], int n)
{
	int unsorted_count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				unsorted_count++;
				break;
			}
		}
	}

	return unsorted_count;
}

int main()
{
	int arr[100], n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << unsortedness(arr, n) << endl;

}
