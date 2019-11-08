
#include "pch.h"

#include <iostream>
#include <algorithm>

using namespace std;

void readArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	int n, same_consecutive_numbers_count = 1, total_count = 0;
	cin >> n;
	int left_index = -1, right_index = -1;
	int arr[100];

	readArray(arr, n);

	for (int i = 0; i < n - 1; i++)
	{
		if (i == left_index || i + 1 == left_index)
		{
			if (left_index > 0 && right_index + 1 < n)
			{
				if (arr[left_index - 1] == arr[right_index + 1])
				{
					same_consecutive_numbers_count++;
				}
			}

			i = right_index;
		}
		else if (arr[i] == arr[i + 1])
		{
			same_consecutive_numbers_count++;
		}
		else if (same_consecutive_numbers_count >= 3)
		{
			total_count += same_consecutive_numbers_count;
			if (left_index != -1)
			{
				left_index = i - same_consecutive_numbers_count - (right_index - left_index);
			}
			else
			{
				left_index = i - same_consecutive_numbers_count + 1;
			}
			right_index = i;
			same_consecutive_numbers_count = 1;
			i = -1;
		}
		else
		{
			same_consecutive_numbers_count = 1;
		}
	}

	if (same_consecutive_numbers_count >= 3)
	{
		total_count += same_consecutive_numbers_count;
	}

	cout << total_count << endl;

	return 0;
}
