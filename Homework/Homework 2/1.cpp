
#include <iostream>
#include <cstring>

using namespace std;

void insertionSort(char str[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int current = str[i];
		int j = i;
		while (--j >= 0 && str[j] > current)
		{
			str[j + 1] = str[j];
		}
		str[j + 1] = current;
	}
}

void toLowerCase(char str[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
	}
}

void mergeSorted(char str1[], int n1, char str2[], int n2, char result[])
{
	int i = 0, j = 0;

	while (i < n1 && j < n2)
	{
		if (str1[i] < str2[j])
		{
			result[i + j] = str1[i];
			i++;
		}
		else
		{
			result[i + j] = str2[j];
			j++;
		}
	}

	while (i < n1)
	{
		result[i + j] = str1[i];
		i++;
	}

	while (j < n2)
	{
		result[i + j] = str2[j];
		j++;
	}
}

bool areEqual(char result[], char str[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (str[i] != result[i])
		{
			return false;
		}
	}

	return true;
}

bool canCreateThirdFromFirstTwo(char str1[], int n1, char str2[], int n2, char str3[], int n3)
{
	if (n1 + n2 != n3)
	{
		return false;
	}
	else
	{
		insertionSort(str1, n1);
		insertionSort(str2, n2);
		insertionSort(str3, n3);

		char result[511] = {};
		mergeSorted(str1, n1, str2, n2, result);

		return areEqual(result, str3, n3);
	}
}

int main()
{
	char str1[256];
	char str2[256];
	char str3[511];

	cin >> str1 >> str2 >> str3;

	int n1 = strlen(str1);
	int n2 = strlen(str2);
	int n3 = strlen(str3);

	toLowerCase(str1, n1);
	toLowerCase(str2, n2);
	toLowerCase(str3, n3);

	cout << endl;

	if (canCreateThirdFromFirstTwo(str1, n1, str2, n2, str3, n3))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	return 0;
}

