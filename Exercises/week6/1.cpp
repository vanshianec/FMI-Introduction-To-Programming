
#include <iostream>

using namespace std;

void printTopLeftDiagonal(int arr[20][20], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][i] << " ";
    }

}

void printTopRightDiagonal(int arr[20][20], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i][n - i - 1] << " ";
    }

}

int main ()
{
    int arr[20][20];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;

    printTopLeftDiagonal(arr, n);

    cout << endl;

    printTopRightDiagonal(arr, n);

    return 0;
}

