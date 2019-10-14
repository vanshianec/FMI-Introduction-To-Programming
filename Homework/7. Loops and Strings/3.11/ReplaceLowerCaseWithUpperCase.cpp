
#include "pch.h"
#include <iostream>

using namespace std;

void replaceLowerToUpper(char str[])
{
	int asciiValue;

	for (int i = 0; i < 100; i++)
	{
		asciiValue = str[i];
		if (asciiValue >= 97 && asciiValue <= 122)
		{
			str[i] = asciiValue - 32;
		}
	}
}

int main()
{
	char str[100];
	int asciiValue;
	cin >> str;

	replaceLowerToUpper(str);

	cout << str;
}