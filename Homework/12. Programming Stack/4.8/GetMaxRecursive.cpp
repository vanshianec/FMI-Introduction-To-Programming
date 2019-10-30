
#include "pch.h"
#include <iostream>

using namespace std;

void getMax(long *max, int n)
{
	int num;
	cin >> num;

	if (num > *max)
	{
		*max = num;
	}

	if (n == 1)
	{
		return;
	}
	getMax(max, n - 1);
}

int main()
{
	long max = -1;
	getMax(&max, 5);
	cout << max;
}
