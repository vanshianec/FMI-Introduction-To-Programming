
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char str[100];
	int length = 0;
	cin >> str;

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		length++;
	}

	bool isSymmetric = true;

	for (int i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i - 1])
		{
			isSymmetric = false;
			break;
		}
	}

	cout << isSymmetric << endl;
}

