
#include "pch.h"
#include <iostream>

using namespace std;

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
	int numbers[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			cout << "GCD of " << numbers[i] << " and " << numbers[j] << " : " << gcd(numbers[i], numbers[j]) << endl;
		}
	}

}
