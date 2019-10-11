
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y, r1 = 5, r2 = 10;
	cin >> x >> y;

	double distance = sqrt(pow(x, 2) + pow(y, 2));

	if (distance >= r1 && distance <= r2)
	{
		cout << "Is inside" << endl;
	}
	else
	{
		cout << "Is outside" << endl;
	}

}
