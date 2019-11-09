
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, start_num = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * n - 1 - 2 * i; j++)
		{
			cout << start_num + j;
		}

		start_num++;
		cout << endl;
	}


	return 0;
}




