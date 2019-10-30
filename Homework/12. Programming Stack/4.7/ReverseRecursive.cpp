
#include "pch.h"
#include <iostream>

using namespace std;

void reverse(int n)
{
	int num;
	cin >> num;
	if (n == 1)
	{
		cout << num;
		return;
	}
	reverse(n - 1);
	cout << num;
}

int main()
{
	int n;
	cin >> n;
	reverse(n);
}