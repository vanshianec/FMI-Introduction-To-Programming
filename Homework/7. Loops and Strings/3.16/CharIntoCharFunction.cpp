
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	char x[26] = {};
	int index;

	cin >> str1 >> str2;

	bool forEveryXExsistsY = true;

	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == '\0')
		{
			break;
		}

		index = str1[i] - 97;

		if (x[index] == '\0')
		{
			x[index] = str2[i];
		}
		else if (x[index] != str2[i])
		{
			forEveryXExsistsY = false;
		}
	}

	cout << forEveryXExsistsY << endl;

}
