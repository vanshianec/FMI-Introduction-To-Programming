
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

// Program that checks if quadratic equation has any solutions or not when a != 0

int main()
{
	cout << "Enter 'a', 'b' and 'c' " << endl;
	double a, b, c;
	cin >> a >> b >> c;
	double D = b * b - 4 * a * c;
	bool hasSolution = D >= 0;
	string result = hasSolution ? "True" : "False";

	cout << result << endl;

}
