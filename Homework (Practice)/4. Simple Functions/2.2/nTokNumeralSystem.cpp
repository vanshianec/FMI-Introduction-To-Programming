
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

char getCharacter(int number)
{
	return number <= 9 ? number + 48 : number + 55;
}

void printNtoKBase(int n, int k)
{
	string result = "";
	while (n > 0)
	{
		result += getCharacter(n % k);
		n /= k;
	}

	for (int i = result.length() - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	cout << endl;
}

int main()
{
	int n, k;

	cin >> n >> k;

	printNtoKBase(n, k);
}
