
#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int sum(int arr[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

void countVectors(int arr[], int n, int k, int index, int *count)
{
	if (index == n)
	{
		if (sum(arr, n) == k)
		{
			(*count)++;
		}
		return;
	}

	for (int i = 1; i >= 0; i--)
	{
		arr[index] = i;
		countVectors(arr, n, k, index + 1, count);
	}

}

void printVectors(int arr[], int n, int k, int index)
{
	if (index == n)
	{
		if (sum(arr, n) == k)
		{
			printArray(arr, n);
		}
		return;
	}

	for (int i = 1; i >= 0; i--)
	{
		arr[index] = i;
		printVectors(arr, n, k, index + 1);
	}
}

int main()
{
	int arr[10] = { 0 };
	int n, k;
	int count = 0;
	cin >> n >> k;
	countVectors(arr, n, k, 0, &count);
	cout << count << endl;
	printVectors(arr, n, k, 0);

	return 0;
}


