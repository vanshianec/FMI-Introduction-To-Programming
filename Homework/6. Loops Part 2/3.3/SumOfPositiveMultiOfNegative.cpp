
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, num, sum = 0, multiplication = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num > 0)
		{
			sum += num;
		}
		else if (num < 0)
		{
			multiplication *= num;
		}
	}

	cout << sum << endl;
	cout << multiplication << endl;
}

