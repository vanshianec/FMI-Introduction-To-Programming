
#include "pch.h"
#include <iostream>

using namespace std;

double sum(int n)
{
	double s;
	cin >> s;
	if (n == 1)
	{
		return s;
	}

	return s + sum(n - 1);
}

int main()
{
	int n;
	cin >> n;

	cout << sum(n) << endl;;
}

