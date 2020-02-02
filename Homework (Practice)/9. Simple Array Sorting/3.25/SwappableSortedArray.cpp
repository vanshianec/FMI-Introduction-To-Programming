
#include "pch.h"
#include <iostream>

using namespace std;

bool swappable(int arr[100], int n)
{
	int sorted[100], index = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			for (int j = i + 1; j < n; j++)
			{
				sorted[index++] = arr[j];
			}
			for (int j = 0; j < i + 1; j++)
			{
				sorted[index++] = arr[j];
			}

			break;
		}
	}

	if (index == 0)
	{
		return false;
	}

	bool swappable = true;

	for (int i = 0; i < n - 1; i++)
	{
		if (sorted[i] > sorted[i + 1])
		{
			swappable = false;
			break;
		}
	}

	return swappable;
}

int main()
{
	int arr[100], n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << swappable(arr, n) << endl;
}

