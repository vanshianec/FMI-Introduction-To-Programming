#include <iostream>
 
using namespace std;
 
void readMatrix(int matrix[30][30], int n)
{
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
}
 
bool hasEqualElements(int matrix[30][30], int x, int y, int w, int h)
{
    int expectedElement = matrix[x][y];
 
    for (int row = x; row < x + w; row++)
    {
        for (int col = y; col < y + h; col++)
        {
            if(matrix[row][col] != expectedElement)
            {
                return false;
            }
        }
    }
 
    return true;
}
 
void setXandY(int matrix[30][30], int n, int *maxX, int *maxY)
{
    int maxArea = 0;
 
    for (int x = 0; x < n; x ++)
    {
        for (int y = 0; y < n; y++)
        {      
           for (int width = 1; width < n + 1; width++)
           {
               for (int height = 1; height < n + 1; height++)
               {
                   if(hasEqualElements(matrix, x, y, width, height))
                   {
                      if(width * height > maxArea)
                      {
                          maxArea = width * height;
                          *maxX = x;
                          *maxY = y;
                      }
                   }
 
               }
           }
        }
    }
}
 
int main ()
{
    int matrix[30][30];
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
 
    readMatrix(matrix, n);
    setXandY(matrix, n, &x, &y);
 
    cout << x << " " << y;
 
    return 0;
}