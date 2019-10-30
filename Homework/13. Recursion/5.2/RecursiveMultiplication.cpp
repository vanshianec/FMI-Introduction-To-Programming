
#include "pch.h"
#include <iostream>

using namespace std;

int mult(int n, int m)
{
	if (n == 1)
	{
		return m;
	}

	return m + mult(m, n - 1);
}

int main()
{
	int m, n;
	cin >> m >> n;

	cout << mult(n, m) << endl;
}
