
#include <iostream>
#include <cstring>

using namespace std;

int indexOfKeyWord(char str[], int index, char keys[100][30], int stringLength)
{
	for (int i = 0; i < 100; i++)
	{
		int keyWordLength = strlen(keys[i]);
		if (keyWordLength <= stringLength - index)
		{
			bool areEqual = true;

			for (int j = 0; j < keyWordLength; j++)
			{
				if (str[index + j] != keys[i][j])
				{
					areEqual = false;
					break;
				}
			}

			if (areEqual)
			{
				return i;
			}
		}
	}

	return -1;
}

int main()
{
	int n;
	char keys[100][30];
	char values[100][30];
	char str[4097];

	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		cin.getline(keys[i], 30);
		cin.getline(values[i], 30);
	}

	cin.getline(str, 4097);
	int stringLength = strlen(str);

	cout << endl;

	for (int i = 0; i < stringLength; i++)
	{
		int index = indexOfKeyWord(str, i, keys, stringLength);
		if (index != -1)
		{
			cout << values[index];
			i += (strlen(keys[index]) - 1);
		}
		else
		{
			cout << str[i];
		}
	}
	
	return 0;

}



