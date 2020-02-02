
#include <iostream>
#include <cstring>

using namespace std;

int indexOfSpace(int startIndex, char sentence[100], int n)
{
	for (int i = startIndex; i < n; i++)
	{
		if (sentence[i] == ' ')
		{
			return i;
		}
	}

	return -1;
}

bool containsInCols(char word[20], char matrix[20][20], int n, int m, int wordLength)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + wordLength > n)
			{
				break;
			}

			bool found = true;

			for (int k = j; k < wordLength + j; k++)
			{
				if (word[k - j] != matrix[k][i])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				return true;
			}
		}
	}

	return false;
}


bool containsInRows(char word[20], char matrix[20][20], int n, int m, int wordLength)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j + wordLength > m)
			{
				break;
			}

			bool found = true;

			for (int k = j; k < wordLength + j; k++)
			{
				if (word[k - j] != matrix[i][k])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				return true;
			}
		}
	}

	return false;
}

bool containsWord(char word[20], char matrix[20][20], int n, int m)
{
	int wordLength = strlen(word);

	return containsInRows(word, matrix, n, m, wordLength) || containsInCols(word, matrix, n, m, wordLength);
}

void readMatrix(char matrix[20][20], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int main()
{
	char sentence[100];
	char matrix[20][20] = {};

	int n, m;

	cin.getline(sentence, 100);

	cin >> n >> m;

	readMatrix(matrix, n, m);

	int length = strlen(sentence);

	int index = indexOfSpace(0, sentence, length);
	int currentIndex = 0;
	bool containsAllWords = true;

	while (index != -1)
	{
		char word[100] = {};
		for (int i = currentIndex; i < index; i++)
		{
			word[i - currentIndex] = sentence[i];
		}

		if (!containsWord(word, matrix, n, m))
		{
			cout << "Matrix does not contain the word : " << word << endl;
			containsAllWords = false;
		}

		currentIndex = index + 1;
		index = indexOfSpace(currentIndex, sentence, length);
	}

	char word[100] = {};

	//NOTE : length - 1, because we want to ignore the dot at the end of the sentence
	for (int i = currentIndex; i < length - 1; i++)
	{
		word[i - currentIndex] = sentence[i];
	}

	if (!containsWord(word, matrix, n, m))
	{
		cout << "Matrix does not contain the word : " << word << endl;
	}
	else if (containsAllWords)
	{
		cout << "All words are found." << endl;
	}

	return 0;
}

