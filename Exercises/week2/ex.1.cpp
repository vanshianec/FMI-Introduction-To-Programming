
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num < 2)
		{
			cout << "Not prime" << endl;
			continue;
		}

		bool prime = true;

		for (int j = 2; j <= sqrt(num); j++)
		{
			if (num % j == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
		{
			cout << "Prime" << endl;
		}
		else
		{
			cout << "Not prime" << endl;
		}
	}
}

