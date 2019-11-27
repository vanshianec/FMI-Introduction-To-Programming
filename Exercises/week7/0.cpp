
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	int *ptX = &x;
	int *ptY = &y;

	cout << *ptX << endl;
	cout << *ptY << endl;
	cout << *ptX + *ptY << endl;

}


