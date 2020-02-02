
#include <iostream>

using namespace std;

void readArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int getNextBiggestWall(int walls[], int n, int i)
{
	int maxWallIndex = i + 1;

	for (int j = i + 2; j < n; j++)
	{
		if (walls[j] > walls[maxWallIndex])
		{
			maxWallIndex = j;
		}
	}

	return maxWallIndex;
}

int main()
{
	int n, walls[1000], liters = 0;
	cin >> n;

	readArray(walls, n);

	for (int i = 0; i < n - 1; i++)
	{
		bool foundBiggerWallThanCurrent = false;

		for (int j = i + 1; j < n; j++)
		{
			if (walls[j] >= walls[i])
			{
				liters += walls[i] * (j - i);
				i += (j - i) - 1;
				foundBiggerWallThanCurrent = true;
				break;
			}
		}

		if (!foundBiggerWallThanCurrent)
		{
			//find the biggest wall after the current one
			int maxWallIndex = getNextBiggestWall(walls, n, i);
			liters += walls[maxWallIndex] * (maxWallIndex - i);
			i += (maxWallIndex - i) - 1;
		}
	}

	cout << liters << endl;
	
	return 0;

}


