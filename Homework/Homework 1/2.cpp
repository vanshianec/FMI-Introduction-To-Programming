
#include <iostream>

using namespace std;

void readPolynomial(int polynomial[], int n)
{
	for (int i = 0; i < n + 1; i++)
	{
		cin >> polynomial[i];
	}
}

void printResultPolynomial(int maxIndex, int coefficients[])
{
	for (int i = maxIndex; i >= 0; i--)
	{
		cout << coefficients[i] << " ";
	}
}

int main()
{
	int coefficients[20000] = { 0 };
	int p[10000];
	int q[10000];
	int n, m;
	int maxIndex = 0;

	cin >> n;
	readPolynomial(p, n);
	cin >> m;
	readPolynomial(q, m);

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			int coefficient = p[i] * q[j];

			int power = n - i + m - j;
			coefficients[power] += coefficient;
			if (power > maxIndex)
			{
				maxIndex = power;
			}
		}
	}

	printResultPolynomial(maxIndex, coefficients);

	cout << endl;
	
	return 0;

}


