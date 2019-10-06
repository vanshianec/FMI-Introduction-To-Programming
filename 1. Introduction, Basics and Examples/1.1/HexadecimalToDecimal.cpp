
#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int getCharValue(char character)
{
	int asciiValue = (int)character;
	// if the ascii value is between 48 and 57 that means the character is a digit else it is a letter
	return asciiValue >= 48 && asciiValue <= 57 ? asciiValue - 48 : asciiValue - 55;
}

int main()
{
	string input;
	cin >> input;
	int hexLength = input.length();
	char hexadecimal[32];

	for (int i = 0; i < hexLength; i++)
	{
		hexadecimal[i] = input[i];
	}

	int decimal = 0;
	int power = hexLength;

	for (int i = 0; i < hexLength; i++)
	{
		int char_value = getCharValue(hexadecimal[i]);
		decimal += char_value * pow(16, --power);
	}

	cout << decimal;

}

