#include <iostream>
#include <cmath>
 
using namespace std;
 
void insertionSort(int arr[100], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i;
        while(--j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = current;
    }
}
 
int main ()
{
 
   int n;
   cin >> n;
 
   int arr[100];
 
   for (int i = 0; i < n; i++)
   {
       cin >> arr[i];
   }
 
   insertionSort(arr, n);
 
   for (int i = 0 ; i < n; i++)
   {
       cout << arr [i] << " ";
   }
 
   cout << endl;
 
    return 0;
}
 
 
 
 