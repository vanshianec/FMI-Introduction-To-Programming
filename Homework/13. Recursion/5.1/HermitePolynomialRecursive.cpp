
#include "pch.h"
#include <iostream>

using namespace std;

double h(double x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 2 * x;
	}

	return 2 * x * h(x, n - 1) - 2 * (n - 1) * h(x, n - 2);
}

int main()
{
	int n;
	double x;
	cin >> n >> x;

	cout << h(x, n) << endl;


}

