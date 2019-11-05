#include <iostream>
 
using namespace std;
 
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
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
    int n, arr[100];
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    insertionSort(arr, n);
 
    int max_occurences = 0, current_occurences = 1, most_common_num;
 
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            current_occurences++;
            if(current_occurences > max_occurences)
            {
                max_occurences = current_occurences;
                most_common_num = arr[i];
            }
        }
        else
        {
            current_occurences = 1;
        }
    }  
 
    if(max_occurences > n - max_occurences)
    {
        cout << most_common_num;
    }
 
    return 0;
}