
#include "pch.h"
#include <iostream>

using namespace std;

bool isSubArray(int a[], int b[], int aLength, int bLength)
{
	return a >= b && (a + aLength) <= (b + bLength);
}

bool subArrays(int *arrays[], int nPointers, int arrLengths[])
{
	for (int i = 0; i < nPointers - 1; i++)
	{
		for (int j = i + 1; j < nPointers; j++)
		{
			return isSubArray(arrays[i], arrays[j], arrLengths[i], arrLengths[j]) ||
				isSubArray(arrays[j], arrays[i], arrLengths[j], arrLengths[i]);
		}
	}

	return true;
}

int main()
{
	int a[] = { 99, 2 ,4 ,56 ,8 };
	int *b = a + 2;
	int *pointers[] = { a, b};
	int arrLengths[] = { 6, 4};
	cout << subArrays(pointers, 2, arrLengths) << endl;

}


