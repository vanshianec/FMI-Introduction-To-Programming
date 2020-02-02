
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char symbols[100], asciiValue;
	cin >> symbols;

	cout << "Numbers : " << endl;

	for (int i = 0; i < 100; i++)
	{
		asciiValue = symbols[i];
		if (asciiValue >= 48 && asciiValue <= 57)
		{
			cout << symbols[i];
		}
	}

	cout << endl;

	cout << "Lower case letters : " << endl;

	for (int i = 0; i < 100; i++)
	{
		asciiValue = symbols[i];
		if (asciiValue >= 97 && asciiValue <= 122)
		{
			cout << symbols[i];
		}
	}

	cout << endl;

	cout << "Other symbols : " << endl;

	for (int i = 0; i < 100; i++)
	{
		asciiValue = symbols[i];
		//-52 value means default array value
		if (!(asciiValue >= 97 && asciiValue <= 122) && !(asciiValue >= 48 && asciiValue <= 57)
			&& asciiValue != -52)
		{
			cout << symbols[i];
		}
	}

}

