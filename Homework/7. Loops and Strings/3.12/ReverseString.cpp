
#include "pch.h"
#include <iostream>

using namespace std;

int getLength(char str[])
{
	int length = 0;
	for (int i = 0; i < 100; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		length++;
	}

	return length;
}

void reverse(char str[])
{
	int length = getLength(str);

	for (int i = 0; i < length / 2; i++)
	{
		int temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}

int main()
{
	char str[100];
	cin >> str;

	reverse(str);

	cout << str;
}
