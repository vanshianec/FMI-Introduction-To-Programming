
#include "pch.h"
#include <iostream>

void insertionSort(int arr[10])
{
	for (int i = 1; i < 10; i++)
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

using namespace std;

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	insertionSort(arr);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " " << endl;
	}
}
