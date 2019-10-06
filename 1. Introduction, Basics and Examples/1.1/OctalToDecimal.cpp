
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int octal;
	cin >> octal;

	int number_length = 0;
	int copy = octal;
	while (copy > 0)
	{
		number_length++;
		copy /= 10;
	}

	int decimal = 0;
	for (int i = 0; i < number_length; i++)
	{
		int current_digit = octal % 10;
		decimal += current_digit * pow(8, i);
		octal /= 10;
	}

	cout << decimal;
}
