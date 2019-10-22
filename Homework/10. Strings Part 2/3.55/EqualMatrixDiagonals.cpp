
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string matrix[30][30];
	string first_sentence = "";
	string second_sentence = "";
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		first_sentence += matrix[i][i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		second_sentence += matrix[i][n - i - 1];
	}

	bool equal = first_sentence == second_sentence;
	cout << equal << endl;

}

