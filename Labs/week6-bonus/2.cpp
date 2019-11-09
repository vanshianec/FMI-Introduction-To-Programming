
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	char symbol;
	cin >> n >> symbol;

	if (n <= 2)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << symbol;
			}
			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << symbol;
		}
		cout << endl;

		for (int i = 1; i < n - 1; i++)
		{
			cout << symbol;
			for (int j = 1; j < n - 1; j++)
			{
				cout << " ";
			}
			cout << symbol;
			cout << endl;
		}

		for (int i = 0; i < n; i++)
		{
			cout << symbol;
		}
		cout << endl;

	}
	return 0;
}




