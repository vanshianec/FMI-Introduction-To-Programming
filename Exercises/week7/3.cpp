
#include "pch.h"
#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int x, y;
	cin >> x >> y;

	cout << x << " " << y;
	cout << endl;

	swap(&x, &y);

	cout << x << " " << y;

}


