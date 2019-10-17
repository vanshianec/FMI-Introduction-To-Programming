#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int z = 1; z <= n; z++)
	{
		for (int i = 1; i <= 2 * z; i++)
		{
			for (int k = 0; k < 2 * n - i; k++)
			{
				cout << " ";
			}

			for (int j = 1; j <= i; j++)
			{
				cout << "* ";
			}

			cout << endl;
		}

	}
}