
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y, reversedY = 0;
	cin >> x >> y;

	while (y > 0)
	{
		int lastDigit = y % 10;
		reversedY = reversedY * 10 + lastDigit;
		y /= 10;
	}

	bool areSymmetric = x == reversedY;

	cout << areSymmetric << endl;
}

