
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, k;
	cin >> x >> k;

	int kthDigit = -1;

	while (k > 0)
	{
		kthDigit = x % 10;
		x /= 10;
		k--;
	}

	cout << kthDigit << endl;
}
