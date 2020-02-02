
#include <iostream>

using namespace std;

int rowCount;
int colCount;

void deleteMatrix(int n, bool** matrix)
{
	for (int i = 0; i < n; i++)
	{
		delete matrix[i];
	}

	delete[] matrix;
}

void turnLightsOn(bool** lights, int* row, int col, bool isReversing);

void switchLight(bool** lights, int* row, int col, bool areLightsTurningOff)
{
	if (*row >= 1)
	{
		for (int j = 0; j < colCount; j++)
		{
			lights[*row][j] = lights[*row - 1][j];
		}
	}

	lights[*row][col] = !lights[*row][col];

	if (!areLightsTurningOff)
	{
		if (lights[*row][col])
		{
			cout << "+";
		}
		else
		{
			cout << "-";
		}
		cout << col + 1 << endl;
	}
}

void copyLightsValuesToNextRows(int* row, int rowSize, bool** lights)
{
	for (int i = *row; i < *row + rowSize; i++)
	{
		for (int j = 0; j < colCount; j++)
		{
			lights[i][j] = lights[i - 1][j];
		}
	}
}

int getSize(int n)
{
	if (n < 1)
	{
		return 0;
	}

	if (n == 1)
	{
		return 1;
	}

	return getSize(n - 1) + getSize(n - 2) + 1 + getSize(n - 2);
}

void printLightsInReverse(bool areLightsTurningOff, int rowSize, bool* switchedLights, int* switchedLightsIndeces)
{
	if (!areLightsTurningOff)
	{
		for (int i = 0; i < rowSize; i++)
		{
			if (switchedLights[i])
			{
				cout << "+";
			}
			else
			{
				cout << "-";
			}
			cout << switchedLightsIndeces[i] + 1 << endl;
		}
	}
}

void turnLightsInReverse(bool** lights, int* row, int col, bool areLightsTurningOff)
{
	if (col <= 0)
	{
		return;
	}

	int rowSize = getSize(col);

	if (*row >= 1)
	{
		copyLightsValuesToNextRows(row, rowSize, lights);
	}

	bool* switchedLights = new bool[rowSize];
	int* switchedLightsIndeces = new int[rowSize];

	bool** previousLights = new bool* [rowSize];
	for (int i = 0; i < rowSize; i++)
	{
		previousLights[i] = new bool[col]();
	}

	int startRow = 0;
	int oldColCount = colCount;
	colCount = col;
	turnLightsOn(previousLights, &startRow, col, true);

	for (int i = rowSize - 2; i >= 0; i--)
	{
		for (int j = 0; j < col; j++)
		{
			if (lights[*row][j] != previousLights[i][j])
			{
				switchedLights[rowSize - i - 2] = previousLights[i][j];
				switchedLightsIndeces[rowSize - i - 2] = j;
			}
			lights[*row][j] = previousLights[i][j];
			lights[*row + 1][j] = previousLights[i][j];

		}
		(*row)++;
	}

	for (int j = 0; j < col; j++)
	{
		lights[*row][j] = false;
	}

	for (int j = 0; j < col; j++)
	{
		if (lights[*row - 1][j])
		{
			switchedLights[rowSize - 1] = false;
			switchedLightsIndeces[rowSize - 1] = j;
		}
	}

	(*row)++;
	colCount = oldColCount;

	printLightsInReverse(areLightsTurningOff, rowSize, switchedLights, switchedLightsIndeces);
	
	deleteMatrix(rowSize, previousLights);
	delete[]switchedLights;
	delete[]switchedLightsIndeces;
}

void turnLightsOn(bool** lights, int* row, int col, bool isReversing)
{
	if (col <= 0)
	{
		return;
	}

	turnLightsOn(lights, row, col - 1, isReversing);
	turnLightsInReverse(lights, row, col - 2, isReversing);
	switchLight(lights, row, col - 1, isReversing);
	(*row)++;
	turnLightsOn(lights, row, col - 2, isReversing);
}

int main()
{
	int n;
	cin >> n;
	rowCount = getSize(n);
	colCount = n;

	bool** lights = new bool* [rowCount];
	for (int i = 0; i < rowCount; i++)
	{
		lights[i] = new bool[n]();
	}

	int startRow = 0;
	turnLightsOn(lights, &startRow, n, false);

	deleteMatrix(rowCount, lights);

	return 0;

}

