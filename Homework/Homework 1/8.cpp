
#include <iostream>

int stringLength(char arr[])
{
	int index = 0;

	while (arr[index] != '\0')
	{
		index++;
	}

	return index;
}

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

using namespace std;

int main()
{
	//1000 elements + '\0' = 1001
	char arr[1001];

	cin.getline(arr, 1001);

	int n = stringLength(arr);
	int maxNum = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (isDigit(arr[i]))
		{
			int multiplier = 10;
			//convert the character to digit
			int number = arr[i] - '0';
			while (isDigit(arr[++i]))
			{
				int nextDigit = arr[i] - '0';
				number = number * multiplier + nextDigit;
			}

			if (number > maxNum)
			{
				maxNum = number;
			}
		}
	}

	cout << maxNum << endl;
	
	return 0;
}


