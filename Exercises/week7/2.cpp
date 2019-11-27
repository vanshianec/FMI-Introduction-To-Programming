
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int *endPointer = arr + n - 1;

	for (int *iterator = endPointer; iterator >= arr; iterator--)
	{
		cout << *iterator << " ";
	}

	cout << endl;

}


