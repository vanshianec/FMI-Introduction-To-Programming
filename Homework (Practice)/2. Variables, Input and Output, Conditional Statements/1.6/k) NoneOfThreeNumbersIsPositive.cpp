
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	bool noneIsPositive = a < 0 && b < 0 && c < 0;

	cout << noneIsPositive << endl; 
}
