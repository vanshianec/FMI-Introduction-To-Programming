
#include "pch.h"
#include <iostream>
using namespace std;

void swapElements(int arr1[10], int arr2[10])
{
	for (int i = 0; i < 10; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main()
{
	int arr1[10], arr2[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
		cin >> arr2[i];
	}

	swapElements(arr1, arr2);

	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << " ";
	}
}

