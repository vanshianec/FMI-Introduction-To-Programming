
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool isLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

bool isValidDate(int day, int month, int year)
{
	int maxDay = 0;

	if (month <= 7)
	{
		if (month == 2)
		{
			if (isLeapYear(year))
			{
				maxDay = 29;
			}
			else
			{
				maxDay = 28;
			}
		}
		else
		{
			maxDay = month % 2 == 0 ? 30 : 31;
		}
	}
	else
	{
		maxDay = month % 2 == 0 ? 31 : 30;
	}

	bool isValid = (day >= 1 && day <= maxDay) && (month >= 1 && month <= 12) && year >= 0;

	return isValid;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;
	bool isValid = isValidDate(day, month, year);
	cout << isValid << endl;
}

