
#include <iostream>
 
using namespace std;
 
void readArray(int arr[100], int n)
{
   for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
 
int main ()
{
    int n;
    cin >> n;
    int arr[100];
 
    readArray(arr, n);
 
    for (int i = 0; i < n - 2; i++)
    {
        if(!((arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2]) || (arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2])))
        {
            cout << "False" << endl;
            return 0;
        }
    }
 
    cout << "True" << endl;
 
    return 0;
}