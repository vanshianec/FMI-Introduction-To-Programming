
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, a, b, c;
	cin >> x >> a >> b >> c;

	bool equalToMax = false;

	if (a >= b && a >= c && a == x)
	{
		equalToMax = true;
	}
	else if (b >= a && b >= c && b == x)
	{
		equalToMax = true;
	}
	else if (c >= a && c >= b && c == x)
	{
		equalToMax = true;
	}

	cout << equalToMax << endl;

}
