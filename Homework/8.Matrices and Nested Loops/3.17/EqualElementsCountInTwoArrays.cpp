
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, count = 0;
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

	// search for equal ai = aj

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])
			{
				count++;
			}
		}
	}

	cout << count << endl;



}

