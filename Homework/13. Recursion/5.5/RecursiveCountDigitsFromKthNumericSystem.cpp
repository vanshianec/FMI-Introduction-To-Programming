
#include "pch.h"
#include <iostream>

using namespace std;

int sumOfKthNumericSystemDigits(int num, int k)
{
	if (num == 0)
	{
		return 0;
	}

	return num % k + sumOfKthNumericSystemDigits(num / k, k);
}

int main()
{
	int num, k;
	cin >> num >> k;

	cout << sumOfKthNumericSystemDigits(num, k);

}
