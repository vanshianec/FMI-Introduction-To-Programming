#include <iostream>
#include <cmath>
 
using namespace std;
 
void readInput(int arr[10], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
 
void insertionSort(int arr[10], int n)
{
    for (int i = 1; i < n; i ++)
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
 
   int arr1[10], arr2[10];
 
   
    readInput(arr1, n);
    readInput(arr2, n);
 
    insertionSort(arr1, n);
    insertionSort(arr2, n);
 
    int left_index = 0, right_index = 0;
 
    while(left_index < n && right_index < n)
    {
        if(arr1[left_index] < arr2[right_index])
        {
            cout << arr1[left_index++] << " ";
        }
        else
        {
            cout << arr2[right_index++] << " ";
        }
    }
 
    while(left_index < n)
    {
        cout << arr1[left_index++] << " ";
    }
     while(right_index < n)
    {
        cout << arr2[right_index++] << " ";
    }
 
 
 
    return 0;
}