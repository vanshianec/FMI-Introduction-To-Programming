
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k, i = 1, res = 0;
	cin >> n >> k;

	while (n > 0)
	{
		int remainder = n % k;
		res += remainder * i;
		n /= k;
		i *= 10;
	}

	cout << res << endl;
}

