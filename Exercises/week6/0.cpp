#include <iostream>

using namespace std;

readVector(int v[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void printMultiplication(int v1[100], int v2[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " [ " << v1[i] * v2[i] << " ] " << endl;
    }
}

int main ()
{
    int v1[100];
    int v2[100];

    int n;
    cin >> n;

    readVector(v1, n);
    readVector(v2, n);

    printMultiplication(v1, v2, n);

    return 0;
}

