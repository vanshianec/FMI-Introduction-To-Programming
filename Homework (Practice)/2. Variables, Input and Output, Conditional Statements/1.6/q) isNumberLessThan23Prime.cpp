
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	//NOTE : 
	//this solution is bad it's just required to be solved for numbers less than 23 and without loops

	int num;
	cin >> num;

	bool isPrime = num == 2 || num == 3 || num == 5 || num == 7 || num == 11
		|| num == 13 || num == 17 || num == 19;

	cout << isPrime << endl;


}

