
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, i = 1, res = 0;
	cin >> n;

	while (n > 0)
	{
		int remainder = n % 2;
		res += remainder * i;
		n /= 2;
		i *= 10;
	}

	cout << res << endl;
}

