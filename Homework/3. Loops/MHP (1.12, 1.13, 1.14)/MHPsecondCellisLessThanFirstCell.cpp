
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int firstCell, secondCell, thirdCell;
	cin >> firstCell >> secondCell;

	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			thirdCell = 0;
		}
		else if (i == 1)
		{
			if (firstCell == secondCell)
			{
				i = 5;
			}
		}
		else if (i == 2)
		{
			if (firstCell == thirdCell)
			{
				i = 5;
			}
		}
		else if (i == 3)
		{
			if (secondCell == thirdCell)
			{
				i = 7;
			}
		}
		else if (i == 4)
		{
			thirdCell++;
		}
		else if (i == 5)
		{
			i = 1;
		}
		else if (i == 6)
		{
			thirdCell = 0;
		}
		else if (i == 7)
		{
			i = 10;
		}
		else if (i == 8)
		{
			thirdCell = 0;
		}
		else if (i == 9)
		{
			thirdCell++;
		}
	}
	
	cout << thirdCell << endl; 

}
