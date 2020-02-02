
#include "pch.h"
#include <iostream>

using namespace std;

bool containsDigit(int num, int digit)
{
	if (num == 0)
	{
		return false;
	}
	if (num % 10 == digit)
	{
		return true;
	}

	return containsDigit(num / 10, digit);
}

int main()

{
	int num, search;
	cin >> num >> search;

	if (num == 0 && search == 0)
	{
		cout << true;
		return 0;
	}
	cout << containsDigit(num, search);
}
