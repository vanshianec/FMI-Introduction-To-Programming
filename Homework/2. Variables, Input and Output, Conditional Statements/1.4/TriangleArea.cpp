
#include "pch.h"
#include <iostream>
#include "TriangleArea.h"
#include <cmath>
using namespace std;

double calculateWithHeronFormula(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	cout << "Type '1' for side by height and '2' for three sides" << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1:
		double side, h;
		cout << "Enter side and height :" << endl;
		cin >> side >> h;
		cout << (side * h) / 2;
		break;

	case 2:
		double a, b, c;
		cin >> a >> b >> c;
		cout << "Enter three sides :" << endl;
		cout << calculateWithHeronFormula(a, b, c);
		break;

	default:
		cout << "Invalid input";
		break;
	}
}
