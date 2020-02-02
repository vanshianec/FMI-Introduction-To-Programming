
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int firstCell, secondCell, thirdCell, forthCell, fifthCell;
	cin >> firstCell >> secondCell;

	for (int i = 0; i < 11; i++)
	{
		if (i == 0)
		{
			thirdCell = 0;
		}
		else if (i == 1)
		{
			fifthCell = 0;
		}
		else if (i == 2)
		{
			forthCell = 0;
		}
		else if (i == 3)
		{
			if (forthCell == firstCell)
			{
				//break;
				i = 11;
			}
		}
		else if (i == 4)
		{
			if (secondCell == fifthCell)
			{
				//break;
				i = 11;
			}
		}
		else if (i == 5)
		{
			forthCell++;
		}
		else if (i == 6)
		{
			thirdCell++;
		}
		else if (i == 7)
		{
			if (firstCell == forthCell)
			{
				i = 8;
			}
		}
		else if (i == 8)
		{
			i = 4;
		}
		else if (i == 9)
		{
			fifthCell++;
		}
		else if (i == 10)
		{
			i = 1;
		}
	}

	cout << thirdCell << endl;

}
