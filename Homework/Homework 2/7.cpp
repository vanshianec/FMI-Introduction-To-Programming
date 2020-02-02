
#include <iostream>
#include <cstring>

using namespace std;

void printArray(char str[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << str[i];
	}

	cout << endl;
}

void printSubstrings(char str[], int n, int steps, int k)
{
	if (steps > n)
	{
		return;
	}

	if (strlen(str) < steps)
	{
		printSubstrings(str - (n - steps + 1), n, steps + k, k);
	}
	else
	{
		printArray(str, steps);
		printSubstrings(str + 1, n, steps, k);
	}

}

int main()
{
	char str[1001];
	int k;
	cin >> str;
	cin >> k;

	int n = strlen(str);

	printSubstrings(str, n, k, k);
	
	return 0;
}



