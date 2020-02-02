
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	bool containsSeven = false;

	while (number > 0)
	{
		int lastDigit = number % 10;
		if (lastDigit == 7)
		{
			containsSeven = true;
			break;
		}
		number /= 10;
	}

	cout << containsSeven << endl;
}
