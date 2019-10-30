﻿
#include "pch.h"
#include <iostream>

using namespace std;

//(a, b) => (b, a % b)

int gcd(int a, int b)
{
	if (b != 0)
	{
		return gcd(b, a % b);
	}
	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << gcd(a, b) << endl;

}

