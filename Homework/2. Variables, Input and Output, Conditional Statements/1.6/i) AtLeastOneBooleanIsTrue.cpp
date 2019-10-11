
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	bool x, y;
	cin >> x >> y;

	bool atLeastOneIsTrue = x || y;

	cout << atLeastOneIsTrue << endl;
}
