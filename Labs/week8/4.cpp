#include <iostream>
#include <algorithm>
 
using namespace std;
 
void setCurrentValue(int matrix[30][30], int i, int j, int n)
{
    for (int row = max(0, i - 1); row <= min(n - 1, i + 1); row++)
    {
        for (int col = max(0, j - 1); col <= min(n - 1, j + 1); col++)
        {
            if(matrix[row][col] == -1)
            {
                matrix[i][j]++;
            }
        }
    }
}
 
void printMatrix(int matrix[30][30], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
 
        cout << endl;
    }
}
 
int main ()
{
    int matrix[30][30] = {};
 
    int n, k;
    cin >> n >> k;
 
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        matrix[x][y] = -1;
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j] != - 1)
            {
                setCurrentValue(matrix, i, j, n);
            }
        }
    }
 
    printMatrix(matrix, n);
 
    return 0;
}
 