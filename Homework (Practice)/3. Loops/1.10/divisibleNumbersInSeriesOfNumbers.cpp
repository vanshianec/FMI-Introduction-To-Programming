
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int num = pow(i, 3) + 13 * i * n + pow(n, 3);
		if (num % 5 == 0)
		{
			count++;
		}
		if (num % 9 == 0)
		{
			count++;
		}
	}

	cout << count << endl;
}
