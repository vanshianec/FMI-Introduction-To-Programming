
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, num, prevNum, bestSum, sum = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (i == 0)
		{
			prevNum = num;
			bestSum = 1;
			continue;
		}

		if (num >= prevNum)
		{
			sum++;

			if (sum > bestSum)
			{
				bestSum = sum;
			}
		}
		else
		{
			sum = 1;
		}

		prevNum = num;
	}

	cout << bestSum << endl;
}

