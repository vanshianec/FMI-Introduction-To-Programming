
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter x, y coordinates :" << endl;
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0)
	{
		cout << "Point is in first quadrant" << endl;
	}
	else if (x < 0 && y > 0)
	{
		cout << "Point is in second quadrant" << endl;
	}
	else if (x < 0 && y < 0)
	{
		cout << "Point is in third quadrant" << endl;
	}
	else if (x > 0 && y < 0)
	{
		cout << "Point is in forth quadrant" << endl;
	}
	else
	{
		cout << "Point is not in any of the quadrants" << endl;
	}
}