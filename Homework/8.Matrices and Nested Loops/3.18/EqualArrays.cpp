
#include "pch.h"
#include <iostream>

using namespace std;

void sort(int arr[], int n)
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

int main()
{
	int n;
	cin >> n;
	int arr1[50];
	int arr2[50];

	cout << "First array : " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	cout << endl;

	cout << "Second array : " << endl;

	for (int i = 0; i < n; i++)
	{
		cin >> arr2[i];
	}

	sort(arr1, n);
	sort(arr2, n);

	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
		{
			cout << "Not equal" << endl;
			return 0;
		}
	}

	cout << "Equal" << endl;

}
