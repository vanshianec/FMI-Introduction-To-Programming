
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int arr[10000])
{
	int n = 10000;
	for (int i = 0; i < n - 1; i++)
	{
		bool sorted = true;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				sorted = false;
			}
		}
		if (sorted)
		{
			break;
		}
	}
}

int main()
{
	int arr[10000];
	
	for (int i = 0; i < 10000; i++)
	{
		arr[i] = rand();
	}



	clock_t start = clock();
	bubbleSort(arr);
	clock_t end = clock();

	long milliseconds = (double)(end - start) / (CLOCKS_PER_SEC / 1000.0);

	cout << milliseconds << endl;
}
