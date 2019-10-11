
#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

void swapRectangles(int &x1, int &x2, int &y1, int &y2, int &w1, int &w2, int &h1, int &h2)
{
	int temp = x1;
	x1 = x2;
	x2 = temp;

	temp = y1;
	y1 = y2;
	y2 = temp;

	temp = w1;
	w1 = w2;
	w2 = temp;

	temp = h1;
	h1 = h2;
	h2 = temp;
}

int main()
{
	int x1, y1, w1, h1, x2, y2, w2, h2;
	cin >> x1 >> y1 >> w1 >> h1 >> x2 >> y2 >> w2 >> h2;

	if (x1 > x2)
	{
		swapRectangles(x1, x2, y1, y2, w1, w2, h1, h2);
	}

	if (x1 <= x2 && x2 <= x1 + w1)
	{
		int x0 = x2;
		int y0 = 0;
		int w0 = 0;
		int h0 = 0;
		bool intersects = false;

		if (y1 <= y2 && y2 <= y1 + h1)
		{
			y0 = y2;
			intersects = true;
		}
		else if (y2 <= y1 && y1 <= y2 + h2)
		{
			y0 = y1;
			intersects = true;
		}

		if (intersects)
		{
			h0 = min(y1 + h1 - y0, y2 + h2 - y0);
			w0 = min(x1 + w1 - x0, x2 + w2 - x0);
			cout << x0 << " " << y0 << " " << w0 << " " << h0 << endl;
		}
		else
		{
			cout << "No intersections found" << endl;
		}
	}
}


