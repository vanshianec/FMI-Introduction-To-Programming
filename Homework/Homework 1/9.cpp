
#include <iostream>

using namespace std;

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

bool isImperialUnit(char c1, char c2)
{
	//in, ft, yd, mi, oz, lb
	return (c1 == 'i' && c2 == 'n') || (c1 == 'f' && c2 == 't') || (c1 == 'y' && c2 == 'd')
		|| (c1 == 'm' && c2 == 'i') || (c1 == 'o' && c2 == 'z') || (c1 == 'l' && c2 == 'b');
}

bool isNumberWithUnitAtTheEnd(char arr[], int index, int n)
{
	bool isNumber = isDigit(arr[index]);

	while (isDigit(arr[index]))
	{
		index++;
	}

	return (index < n - 1) && (isNumber && isImperialUnit(arr[index], arr[index + 1]));
}

void setNumberValueAndLength(char arr[], int index, int *value, int *length)
{
	int result = 0, multiplier = 10, startIndex = index;

	while (isDigit(arr[index]))
	{
		int digit = arr[index] - '0';
		result = result * multiplier + digit;
		index++;
	}

	*value = result;
	*length = index - startIndex;
}

void printBiggestPossibleWeightUnit(double kgs)
{
	double tons = kgs / 1000;
	double grams = kgs * 1000;

	if (tons >= 0.5)
	{
		cout << tons << "t";
	}
	else if (kgs >= 0.5)
	{
		cout << kgs << "kg";
	}
	else
	{
		cout << grams << "g";
	}
}

void printBiggestPossibleDistanceUnit(double centimeters)
{
	double meters = centimeters / 100;
	double kilometers = meters / 1000;

	if (kilometers >= 0.5)
	{
		cout << kilometers << "km";
	}
	else if (meters >= 0.5)
	{
		cout << meters << "m";
	}
	else
	{
		cout << centimeters << "cm";
	}
}

void printValueInMetric(int value, char c1, char c2)
{
	//c1 - firstImperialLetter, c2 - secondImperialLetter, Example : in, ft, lb...
	if (c1 == 'l' && c2 == 'b')
	{
		double kgs = value * 0.45359237;
		printBiggestPossibleWeightUnit(kgs);
	}
	else if (c1 == 'o' && c2 == 'z')
	{
		double kgs = value * 0.0283495231;
		printBiggestPossibleWeightUnit(kgs);
	}
	else if (c1 == 'i' && c2 == 'n')
	{
		double centimeters = value * 2.54;
		printBiggestPossibleDistanceUnit(centimeters);
	}
	else if (c1 == 'f' && c2 == 't')
	{
		double centimeters = value * 30.48;
		printBiggestPossibleDistanceUnit(centimeters);
	}
	else if (c1 == 'y' && c2 == 'd')
	{
		double centimeters = value * 91.44;
		printBiggestPossibleDistanceUnit(centimeters);
	}
	else if (c1 == 'm' && c2 == 'i')
	{
		double centimeters = value * 160934.4;
		printBiggestPossibleDistanceUnit(centimeters);
	}
}

int main()
{
	//1000 elements + '\0' = 1001
	char arr[1001];
	cin.getline(arr, 1001);

	int n = stringLength(arr);

	for (int i = 0; i < n; i++)
	{
		if (isNumberWithUnitAtTheEnd(arr, i, n))
		{
			int value, length;
			setNumberValueAndLength(arr, i, &value, &length);
			printValueInMetric(value, arr[i + length], arr[i + length + 1]);
			//skip the currently converted and printed imperial unit
			i += length + 1;
		}
		else
		{
			cout << arr[i];
		}
	}

	return 0;

}


