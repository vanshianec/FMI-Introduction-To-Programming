
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	if (n < k)
	{
		cout << "N should be equal or greater than K" << endl;
		return 0;
	}

	bool isPower = true;

	while (n != 1)
	{
		if (n % k != 0)
		{
			isPower = false;
			break;
		}
		n /= k;
	}

	cout << isPower << endl;



}

