
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double x;
	cin >> x;

	if (x >= 0 && x <= 1)
	{
		cout << "Is between 0 and 1" << endl;
	}
	else
	{
		cout << "Is not between 0 and 1" << endl;
	}
}
