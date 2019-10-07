
#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Program that checks if chosen point is inside circle and third quadrant at the same time

int main()
{
	double circleX, circleY;
	circleX = circleY = 0;
	double circleRadius = 5;
	double x, y;
	cout << "Enter point coordinates: " << endl;
	cin >> x >> y;
	double distance = sqrt(pow(circleX - x, 2) + pow(circleY - y, 2));
	string insideCircleAndThirdQuadrantOrNot = distance <= circleRadius && x < 0 && y < 0 ? "True" : "False";
	cout << "Point is inside circle and third quadrant : ";
	cout << insideCircleAndThirdQuadrantOrNot << endl;

}

