
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int letters[26] = {};
	char str[100];

	cin >> str;

	for (int i = 0; i < 100; i++)
	{
		int asciiValue = str[i];
		int letterIndex = asciiValue - 97;
		letters[letterIndex]++;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 97) << " -> " << letters[i] << endl;
	}
}

