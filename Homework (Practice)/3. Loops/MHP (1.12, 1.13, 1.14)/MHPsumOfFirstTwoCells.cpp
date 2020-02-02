
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int firstCell, secondCell, thirdCell, forthCell;
	cin >> firstCell >> secondCell;

	for (int i = 0; i < 6; i++)
	{
		if (i == 0)
		{
			thirdCell = firstCell;
		}
		else if (i == 1)
		{
			forthCell = 0;
		}
		else if (i == 2)
		{
			if (secondCell == forthCell)
			{
				//break;
				i = 6;
			}
		}
		else if (i == 3)
		{
			thirdCell++;
		}
		else if (i == 4)
		{
			forthCell++;
		}
		else if (i == 5)
		{
			i = 1;
		}
	}

	cout << thirdCell << endl;

}
