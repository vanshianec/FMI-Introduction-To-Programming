
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number;
	cin >> number;

	cout << "Divisble by four or seven : ";
	bool divisible = number % 4 == 0 || number % 7 == 0;
	string result = divisible ? "True" : "False";
	cout << result << endl;
}

