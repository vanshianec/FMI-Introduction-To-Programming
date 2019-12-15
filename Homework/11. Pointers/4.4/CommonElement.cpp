
#include "pch.h"
#include <iostream>

using namespace std;

int getSmallestArrayIndex(int arrLengths[], int n)
{
	int minIndex = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (arrLengths[i] < arrLengths[i + 1])
		{
			minIndex = i;
		}
	}

	return minIndex;
}

bool commonElement(int *arrays[], int nPointers, int arrLengths[])
{
	int index = getSmallestArrayIndex(arrLengths, nPointers);
	int *smallestArray = arrays[index];

	for (int i = 0; i < arrLengths[index]; i++)
	{
		int currentElement = *(smallestArray + i);
		bool containsInAll = true;
		for (int j = 0; j < nPointers; j++)
		{
			if (j != index)
			{
				int *currentArray = arrays[j];
				bool containsElement = false;
				for (int k = 0; k < arrLengths[j]; k++)
				{
					if (currentElement == *(currentArray + k))
					{
						containsElement = true;
						break;
					}
				}

				if (!containsElement)
				{
					containsInAll = false;
					break;
				}
			}
		}

		if (containsInAll)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	int arr1[4] = { 3, 54, 2, 9 };
	int arr2[3] = { 9, 4, 1 };
	int arr3[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arrLengths[3] = { 4, 3, 9 };

	int *pointers[3];

	pointers[0] = arr1;
	pointers[1] = arr2;
	pointers[2] = arr3;

	cout << commonElement(pointers, 3, arrLengths) << endl;

}


