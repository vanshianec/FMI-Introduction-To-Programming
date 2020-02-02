
#include "pch.h"
#include <iostream>

using namespace std;

bool isDigitsSumDivisibleByThree(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}

	return sum % 3 == 0;
}

int main()
{
	int num;
	cin >> num;

	cout << isDigitsSumDivisibleByThree(num) << endl;

}

