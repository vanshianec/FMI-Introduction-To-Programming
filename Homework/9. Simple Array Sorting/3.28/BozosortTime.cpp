
#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

bool isSorted(int arr[10])
{
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			return false;
		}
	}
	return true;
}

void bozosort(int arr[10])
{
	srand(time(NULL));
	bool sorted = isSorted(arr);
	while (!sorted)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;
		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
		sorted = isSorted(arr);
	}
}

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
	}

	clock_t start = clock();
	bozosort(arr);
	clock_t end = clock();

	long milliseconds = (double)(end - start) / (CLOCKS_PER_SEC / 1000.0);

	cout << milliseconds << endl;
}
