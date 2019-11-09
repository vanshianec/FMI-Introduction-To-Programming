
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	char symbol;
	cin >> n >> symbol;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << symbol;
		}
		cout << endl;
	}

	return 0;
}




