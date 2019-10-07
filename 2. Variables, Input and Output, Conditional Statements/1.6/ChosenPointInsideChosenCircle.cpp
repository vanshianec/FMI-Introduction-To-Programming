
#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// Program that checks if chosen point is inside chosen circle

int main()
{
	double circleX, circleY, circleRadius, x, y;
	cout << "Enter circle center coordinates: " << endl;
	cin >> circleX >> circleY;
	cout << "Enter circle radius: " << endl;
	cin >> circleRadius;
	cout << "Enter point coordinates: " << endl;
	cin >> x >> y;
	double distance = sqrt(pow(circleX - x, 2) + pow(circleY - y, 2));
	string insideOrNot = distance <= circleRadius ? "True" : "False";
	cout << "Point is inside circle : ";
	cout << insideOrNot << endl;
}