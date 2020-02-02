
#include "pch.h"
#include <iostream>

using namespace std;

void insertSorted(long x, long arr[], long n)
{
	if (n == 0)
	{
		arr[0] = x;
		return;
	}
	else if (arr[n - 1] <= x)
	{
		arr[n] = x;
		return;
	}
	else
	{
		arr[n] = arr[n - 1];
		insertSorted(x, arr, n - 1);
	}
}

int main()
{
	long n, num, arr[100];
	cin >> n >> num;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	insertSorted(num, arr, n);

	for (int i = 0; i < n + 1; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}




