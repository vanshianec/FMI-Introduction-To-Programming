﻿
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, num, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (num / 2 % 2 != 0)
		{
			sum += num;
		}

	}

	cout << sum;

}
