
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int firstDigit = number % 10;
	int secondDigit = number / 10 % 10;
	int thirdDigit = number / 100 % 10;

	bool atLeastTwoDigitsAreEqual = firstDigit == secondDigit || firstDigit == thirdDigit
		|| secondDigit == thirdDigit;

	cout << atLeastTwoDigitsAreEqual << endl;
}
