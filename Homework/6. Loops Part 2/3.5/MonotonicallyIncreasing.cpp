

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, num, prevNum;
	bool isMonotonicallyIncreasing = true;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (i == 0)
		{
			prevNum = num;
			continue;
		}

		if (num < prevNum)
		{
			isMonotonicallyIncreasing = false;
			break;
		}

		prevNum = num;
	}

	cout << isMonotonicallyIncreasing << endl;
}
