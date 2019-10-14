
#include "pch.h"
#include <iostream>

using namespace std;

void toUpperCase(char str[])
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

void toLowerCase(char str[])
{
	int asciiValue;
	for (int i = 0; i < 100; i++)
	{
		asciiValue = str[i];
		if (asciiValue >= 65 && asciiValue <= 90)
		{
			str[i] = asciiValue + 32;
		}
	}
}

void replaceLowerOrUpper(char str[])
{
	int lowerCount = 0, upperCount = 0, asciiValue;

	for (int i = 0; i < 100; i++)
	{
		asciiValue = str[i];
		//lower case letters
		if (asciiValue >= 97 && asciiValue <= 122)
		{
			lowerCount++;
		}
		//upper case letters
		else if (asciiValue >= 65 && asciiValue <= 90)
		{
			upperCount++;
		}
	}

	if (upperCount > lowerCount)
	{
		toUpperCase(str);
	}
	else if (upperCount < lowerCount)
	{
		toLowerCase(str);
	}
}

int main()
{
	char str[100];
	cin >> str;

	replaceLowerOrUpper(str);

	cout << str;
}
