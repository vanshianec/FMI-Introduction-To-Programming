
#include <iostream>

using namespace std;

void readIntervals(int startTimes[], int endTimes[], int n)
{
	int startTime, endTime;

	for (int i = 0; i < n; i++)
	{
		cin >> startTime >> endTime;
		startTimes[i] = startTime;
		endTimes[i] = endTime;
	}
}

void sortByEndTime(int startTimes[], int endTimes[], int n)
{
	//insertion sort
	for (int i = 1; i < n; i++)
	{
		int currentEndTime = endTimes[i];
		int currentStartTime = startTimes[i];
		int j = i;
		while (--j >= 0 && endTimes[j] > currentEndTime)
		{
			endTimes[j + 1] = endTimes[j];
			startTimes[j + 1] = startTimes[j];
		}
		endTimes[j + 1] = currentEndTime;
		startTimes[j + 1] = currentStartTime;
	}
}

int main()
{
	int n;
	cin >> n;
	int* startTimes = new int[n];
	int* endTimes = new int[n];

	readIntervals(startTimes, endTimes, n);

	sortByEndTime(startTimes, endTimes, n);

	int count = 1, j = 0;

	for (int i = 1; i < n; i++)
	{
		if (startTimes[i] >= endTimes[j])
		{
			count++;
			j = i;
		}
	}

	cout << count << endl;

	delete[] startTimes;
	delete[] endTimes;

	return 0;

}

