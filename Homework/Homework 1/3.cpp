
#include <iostream>

using namespace std;

void insertionSort(int allNums[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int current = allNums[i];
		int j = i;
		while (--j >= 0 && allNums[j] > current)
		{
			allNums[j + 1] = allNums[j];
		}
		allNums[j + 1] = current;
	}
}

int getDigitsCount(int x)
{
	int count = 1;
	while (x > 9)
	{
		x /= 10;
		count++;
	}
	return count;
}

void printNumbersInRange(int allNums[], int count, int a, int b)
{
	for (int i = 0; i < count; i++)
	{
		int num = allNums[i];
		if (num >= a && num <= b)
		{
			cout << num << " ";
		}
	}

	cout << endl;
}

int main()
{
	int a, b, n;
	cin >> a >> b;
	cin >> n;
	int allNums[100000];
	int index = 0;
	int digitsCountUpperBound = getDigitsCount(b);

	while (index < n)
	{
		cin >> allNums[index++];
	}

	//sort the digits the user entered so all the numbers we form with the digits will be in increasing order
	insertionSort(allNums, n);

	int combinationsWithCurrentDigit = n;
	int multiplier = 10;
	int count = n;

	for (int cycle = 1; cycle < digitsCountUpperBound; cycle++)
	{
		int currentCombinations = combinationsWithCurrentDigit;
		for (int i = 0; i < n; i++)
		{
			int digit = allNums[i];
			//a number can't start with zero
			if (digit != 0)
			{
				for (int j = 0; j < combinationsWithCurrentDigit; j++)
				{
					int number = digit * multiplier + allNums[index - currentCombinations];
					allNums[index] = number;
					index++;
					count++;
				}
				currentCombinations += combinationsWithCurrentDigit;
			}

		}

		combinationsWithCurrentDigit *= n;
		multiplier *= 10;
	}

	printNumbersInRange(allNums, count, a, b);
	
	return 0;

}


