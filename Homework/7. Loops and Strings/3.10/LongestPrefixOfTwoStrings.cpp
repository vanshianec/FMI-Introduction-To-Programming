
#include "pch.h"
#include <iostream>

using namespace std;

int getLongestPrefix(char str1[], char str2[])
{
	int count = 0;
	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == str2[i])
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return count;
}

int main()
{
	char str1[100];
	char str2[100];

	cin >> str1;
	cin >> str2;

	int longestPrefixCount = getLongestPrefix(str1, str2);

	cout << longestPrefixCount << endl;
}
