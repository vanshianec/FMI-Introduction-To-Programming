
#include "pch.h"
#include <iostream>

using namespace std;

int multiplication(int n, int k)
{
	if (n <= 1)
	{
		return 1;
	}
	
	return n * multiplication(n - k, k);
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << multiplication(n, k);
}
