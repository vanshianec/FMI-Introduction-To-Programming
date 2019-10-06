
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cin >> name;
	
	for (int i = 0; i < name.length(); i++)
	{
		cout << (int) name[i];
	}

	cout << endl;
}
