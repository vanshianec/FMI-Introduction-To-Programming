
#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Program that checks if chosen point is inside a pre-declared circle

int main()
{
	double circleX = 0;
	double circleY = 1;
	double circleRadius = 5;

	cout << "Enter point coordinates :" << endl;
	double x, y;
	cin >> x >> y;

	double distance = sqrt(pow(x - circleX, 2) + pow(y - circleY, 2));
	string insideOrNot = distance <= 5 ? "True" : "False";
	cout << "Point is inside circle : ";
	cout << insideOrNot << endl;
}

