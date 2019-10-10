
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	bool isTriangle = (a + b) > c || (a + c) > b || (b + c) > a;
	cout << isTriangle << endl;
}

