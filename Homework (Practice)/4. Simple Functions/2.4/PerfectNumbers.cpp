
#include "pch.h"
#include <iostream>

using namespace std;

void printPerfectNumbers(int n)
{
	for (int num = 1; num <= n; num++)
	{
		int sum = 0;
		for (int i = 1; i < num; i++)
		{
			if (num % i == 0)
			{
				sum += i;
			}
		}

		if (sum == num)
		{
			cout << num << endl;
		}
	}

}

int main()
{
	int n;
	cin >> n;

	printPerfectNumbers(n);

}