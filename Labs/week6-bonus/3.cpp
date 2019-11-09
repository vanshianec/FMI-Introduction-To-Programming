
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, current_num = 1;
	cin >> n;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * n - 1 - i * 2; j++)
		{
			cout << current_num++;
		}

		cout << endl;
	}


	return 0;
}




