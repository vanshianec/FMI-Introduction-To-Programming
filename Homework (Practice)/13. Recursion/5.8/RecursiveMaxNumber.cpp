
#include "pch.h"
#include <iostream>

using namespace std;

int max(int arr[], int current_max, int i)
{
	if (i == -1)
	{
		return INT_MIN;
	}

	int next_num = max(arr, arr[i - 1], i - 1);
	return current_max > next_num ? current_max : next_num;

}

int main()
{
	int n, arr[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << max(arr, arr[n - 1], n - 1);

	return 0;
}




