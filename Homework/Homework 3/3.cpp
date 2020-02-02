
#include <iostream>
#include <cstring>

using namespace std;

int indexOf(char source[], char word[], int startIndex)
{
	int index = -1;
	int sourceLength = strlen(source);
	int wordLength = strlen(word);

	for (int i = startIndex; i < sourceLength - wordLength + 1; i++)
	{
		int wordIndex = 0;
		int j = i;
		while (source[j] == word[wordIndex] && wordIndex != wordLength)
		{
			j++;
			wordIndex++;
		}

		if (wordIndex == wordLength)
		{
			return i;
		}
	}

	return index;
}

bool containsIndex(int indeces[], int n, int j)
{
	for (int i = 0; i < n; i++)
	{
		if (indeces[i] == j)
		{
			return true;
		}
	}

	return false;
}

void printArray(char arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
	}

	cout << endl;
}

void createNewArray(int& index, int* indeces, int& wordIndex, int& length, int wordLength, int newWordLength, char* source, char* word, char*& result)
{
	while (index != -1)
	{
		indeces[wordIndex] = index;
		wordIndex++;
		length -= wordLength;
		length += newWordLength;
		index = indexOf(source, word, index + 1);
	}

	result = new char[length + 1];
	result[length] = '\0';
}

char* remove(char source[], char word[])
{
	char* result;
	int length = strlen(source);
	int wordLength = strlen(word);
	int* indeces = new int[length];

	int index = indexOf(source, word, 0);
	int wordIndex = 0;

	createNewArray(index, indeces, wordIndex, length, wordLength, 0, source, word, result);

	int j = 0;

	for (int i = 0; i < length; i++)
	{
		if (containsIndex(indeces, wordIndex, j))
		{
			if (j > 0 && source[j - 1] == ' ' && source[j + wordLength] == ' ')
			{
				j++;
			}
			j += wordLength;
		}

		result[i] = source[j];
		j++;
	}

	delete[] indeces;

	return result;
}

char* replace(char source[], char oldWord[], char newWord[])
{
	char* result;
	int length = strlen(source);
	int wordLength = strlen(oldWord);
	int newWordLength = strlen(newWord);
	int* indeces = new int[length];

	int index = indexOf(source, oldWord, 0);
	int wordIndex = 0;

	createNewArray(index, indeces, wordIndex, length, wordLength, newWordLength, source, oldWord, result);

	int j = 0;

	for (int i = 0; i < length; i++)
	{
		if (containsIndex(indeces, wordIndex, j))
		{
			for (int k = 0; k < newWordLength; k++)
			{
				result[i] = newWord[k];
				i++;
			}

			j += wordLength;
		}

		result[i] = source[j];
		j++;
	}

	delete[] indeces;

	return result;
}


int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	//increment so we can have one more cell for the terminating zero ('\0')
	n++, m++, k++;
	char* source = new char[n];
	char* word = new char[m];
	char* newWord = new char[k];

	cin.ignore();
	cin.getline(source, n);
	cin.getline(word, m);
	cin.getline(newWord, k);

	char* result1 = replace(source, word, newWord);
	char* result2 = remove(source, word);
	printArray(result1, strlen(result1));
	printArray(result2, strlen(result2));

	delete[] source;
	delete[] word;
	delete[] newWord;

	return 0;
}

