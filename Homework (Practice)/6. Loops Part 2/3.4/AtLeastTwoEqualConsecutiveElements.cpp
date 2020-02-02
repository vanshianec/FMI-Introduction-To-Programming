
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, num, prevNum = 0;
	bool equalConsecutive = false;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (i == 0)
		{
			prevNum = num;
			continue;
		}

		if (num == prevNum)
		{
			equalConsecutive = true;
			break;
		}

		prevNum = num;
	}

	cout << equalConsecutive << endl;

}
