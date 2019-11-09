
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, symbol_count = 1, current_num = 1;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < symbol_count; j++)
		{
			cout << current_num++;
		}

		symbol_count += 2;
		cout << endl;
	}


	return 0;
}




