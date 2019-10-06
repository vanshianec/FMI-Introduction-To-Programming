
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int decimal, arr[32];

	cin >> decimal;

	int i = 0;
	while (decimal > 0)
	{
		arr[i] = decimal % 2;
		decimal /= 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		cout << arr[j];
	}


}

