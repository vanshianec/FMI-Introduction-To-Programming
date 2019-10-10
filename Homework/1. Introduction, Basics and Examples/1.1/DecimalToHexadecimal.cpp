
#include "pch.h"
#include <iostream>
using namespace std;

char getHexFormat(int hex_number)
{
	return hex_number <= 9 ? hex_number + 48 : hex_number + 55;
}

int main()
{
	int decimal;
	char arr[32];

	cin >> decimal;

	int i = 0;

	while (decimal > 0)
	{
		arr[i] = getHexFormat(decimal % 16);
		decimal /= 16;
		i++;
	}

	for (int j = i - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
}
