
#include "pch.h"
#include <iostream>
using namespace std;

//Program that converts year to days, hours, minutes and seconds

int main()
{
	int year;
	cin >> year;

	cout << "Days" << endl;
	cout << year * 365 << endl;
	cout << "Hours" << endl;
	cout << year * 365 * 24 << endl;
	cout << "Minutes" << endl;
	cout << year * 365 * 24 * 60 << endl;
	cout << "Seconds" << endl;
	cout << year * 365 * 24 * 60 * 60 << endl;
}

