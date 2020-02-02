
#include <iostream>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n, arr[1000], maxVolume = 0, width = 1;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int currentVolume = width * min(arr[i], arr[j]) * (j - i);
			if (currentVolume > maxVolume)
			{
				maxVolume = currentVolume;
			}
		}
	}

	cout << maxVolume * 1000 << endl;
	
	return 0;

}


