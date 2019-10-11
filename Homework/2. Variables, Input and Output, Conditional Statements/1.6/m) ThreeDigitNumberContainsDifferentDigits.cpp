
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	bool hasDifferentDigits = number % 10 != number / 10 % 10 && number % 10 != number / 100 % 10
		&& number / 10 % 10 != number / 100 % 10;

	cout << hasDifferentDigits << endl;


}
