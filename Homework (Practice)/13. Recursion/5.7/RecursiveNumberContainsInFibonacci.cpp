
#include "pch.h"
#include <iostream>

using namespace std;

bool containsInFibonacci(int previous, int current, int search)
{
	if (search == current)
	{
		return true;
	}
	if (search < current)
	{
		return false;
	}

	containsInFibonacci(current, current + previous, search);
}

int main()

{
	int search_num;
	cin >> search_num;

	cout << containsInFibonacci(1, 1, search_num) << endl;;

}
