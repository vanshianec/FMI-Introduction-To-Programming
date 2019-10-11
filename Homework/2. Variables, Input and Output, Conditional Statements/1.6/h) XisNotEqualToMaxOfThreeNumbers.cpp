
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, a, b, c;
	cin >> x >> a >> b >> c;

	bool notEqualToMax = false;

	if (a >= b && a >= c && a != x)
	{
		notEqualToMax = true;
	}
	else if (b >= a && b >= c && b != x)
	{
		notEqualToMax = true;
	}
	else if (c >= a && c >= b && c != x)
	{
		notEqualToMax = true;
	}

	cout << notEqualToMax << endl;

}
