
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int binary;

	cin >> binary;

	int number_length = 0;
	int copy = binary;
	while (copy > 0) {
		copy /= 10;
		number_length++;
	}

	int decimal = 0;
	for (int i = 0; i < number_length; i++)
	{
		int current_digit = binary % 10;
		decimal += current_digit * pow(2, i);
		binary /= 10;
	}

	cout << decimal;

}

