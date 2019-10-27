
#include "pch.h"
#include <iostream>

using namespace std;

// (a, b) = > (b, a % b);
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}

	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;
}

