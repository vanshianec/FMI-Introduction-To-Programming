
#include <iostream>

using namespace std;

void readArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

int main()
{
	int n, arr[100000], x, count = 0;
	cin >> n;

	readArray(arr, n);

	cin >> x;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] + arr[j] == x)
			{
				count++;
			}
		}
	}

	cout << count << endl;
	
	return 0;

}


