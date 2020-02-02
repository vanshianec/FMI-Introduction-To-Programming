
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int firstDigit = num % 10;
	int secondDigit = num / 10 % 10;
	int thirdDigit = num / 100 % 10;

	bool digitsAreIncreasingOrDecreasing = (firstDigit < secondDigit && secondDigit < thirdDigit)
		|| (firstDigit > secondDigit && secondDigit > thirdDigit);

	cout << digitsAreIncreasingOrDecreasing << endl;
}
