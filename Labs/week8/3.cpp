
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int j = 0;

	//first cell is always zero
	cout << j << " ";

	for (int i = 1; i < n * n; i++)
	{
		if (i % n == 0)
		{
			j++;
			cout << endl;
		}

		cout << (i % n) * j << " ";
	}
}


