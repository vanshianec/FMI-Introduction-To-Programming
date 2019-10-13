
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, a, b, sum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		cin >> b;
		sum += a * b;
	}

	cout << sum;
}
