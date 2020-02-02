
#include <iostream>

using namespace std;

void addAllDivisorsOfNum(int divisors[], int n, int *index)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisors[(*index)++] = i;
		}
	}
}

int main()
{
	int n;
	int m = 1, p = 1, q = 1;
	int index = 0, minSum = INT_MAX;
	int divisors[100000];

	cin >> n;

	addAllDivisorsOfNum(divisors, n, &index);

	//Note : index is now the length of the divisors array

	for (int i = 0; i < index; i++)
	{
		for (int j = 0; j < index; j++)
		{
			for (int k = 0; k < index; k++)
			{
				int firstDivisor = divisors[i];
				int secondDivisor = divisors[j];
				int thirdDivisor = divisors[k];
				int currentSum = firstDivisor + secondDivisor + thirdDivisor;

				if (firstDivisor * secondDivisor * thirdDivisor == n && currentSum < minSum)
				{
					m = firstDivisor;
					p = secondDivisor;
					q = thirdDivisor;
					minSum = currentSum;
				}
			}
		}
	}

	cout << m << " " << p << " " << q << endl;
	
	return 0;
}


