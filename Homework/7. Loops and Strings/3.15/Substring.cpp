
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

bool isSubstring(char str1[], char str2[])
{
	// check if str2 is substring of str1

	int subLength = 0;

	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == str2[subLength] && str1[i] != '\0')
		{
			subLength++;
		}
		else if (subLength >= 1)
		{
			//if the current elements are not equal and we already counted the previous ones
			//the substring counting ends
			break;
		}
	}

	int stringLength = getLength(str2);

	return subLength == stringLength ? true : false;
}

int main()
{
	char str1[100];
	char str2[100];

	cin >> str1 >> str2;

	bool substring = isSubstring(str1, str2);

	cout << substring << endl;
}
