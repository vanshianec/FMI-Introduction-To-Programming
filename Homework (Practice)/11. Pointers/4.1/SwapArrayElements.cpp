
#include "pch.h"
#include <iostream>

using namespace std;

void readArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}

void swapElements(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int temp = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = temp;
	}
}

int main()
{

	int a[10], b[10], n;
	cin >> n;

	readArray(a, n);
	readArray(b, n);
	cout << endl;
	printArray(a, n);
	printArray(b, n);

	swapElements(a, b, n);
	printArray(a, n);
	printArray(b, n);

}


