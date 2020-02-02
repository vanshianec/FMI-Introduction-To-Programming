
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num, sum = 0;
	cin >> num;

	for (int i = 2; i <= num; i += 3)
	{
		sum += i;
	}

	cout << sum << endl;
}
