
#include <iostream>

using namespace std;

int pow(int num, int power)
{
	int result = 1;

	for (int i = 0; i < power; i++)
	{
		result *= num;
	}

	return result;
}

int fromBaseTenToBaseK(int n, int k)
{
	int multiplier = 1, result = 0;

	while (n > 0)
	{
		result = result + n % k * multiplier;
		multiplier *= 10;
		n /= k;
	}

	return result;
}

int fromBaseKToBaseTen(int n, int k)
{
	int power = 0, result = 0;

	while (n > 0)
	{
		result = result + n % 10 * pow(k, power);
		power++;
		n /= 10;
	}

	return result;
}

int fromBaseOneToBaseTen(int n)
{
	//Examples : 1 -> 1, 11 -> 2, 111 -> 3, 1111 -> 4 ...

	int digitsCount = 0;

	while (n > 0)
	{
		digitsCount++;
		n /= 10;
	}

	return digitsCount;
}

int fromBaseTenToBaseOne(int n)
{
	int result = 0;
	int multiplier = 10;

	for (int i = 0; i < n; i++)
	{
		result = result * multiplier + 1;
	}

	return result;
}

void printInBaseOne(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "1";
	}
}

int main()
{
	int number, currentSystem, wantedSystem;

	cin >> number >> currentSystem >> wantedSystem;

	if (currentSystem == 1)
	{
		number = fromBaseOneToBaseTen(number);
	}

	if (currentSystem != 10)
	{
		number = fromBaseKToBaseTen(number, currentSystem);
	}

	if (wantedSystem == 1)
	{
		printInBaseOne(number);
		//cout << fromBaseTenToBaseOne(number);
	}
	else
	{
		cout << fromBaseTenToBaseK(number, wantedSystem) << endl;
	}
	
	return 0;
}


