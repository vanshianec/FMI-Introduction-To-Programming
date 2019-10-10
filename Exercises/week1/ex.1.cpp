
#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

void calculateSquareArea()
{
	int a;
	cin >> a;
	cout << "Square area : " << a * a << endl;
}

void calculateRectangleArea()
{
	int a, b;
	cin >> a >> b;
	cout << "Rectangle area : " << a * b << endl;
}

void calculateCircleArea()
{
	int r;
	cin >> r;
	cout << "Circle area : " << M_PI * r * r << endl;
}


int main()
{
	int input;
	cin >> input;

	switch (input)
	{
	case 0:
		calculateSquareArea();
		break;
	case 1:
		calculateRectangleArea();
		break;
	case 2:
		calculateCircleArea();
		break;
	default:
		cout << "Invalid input" << endl;
		break;
	}
}

