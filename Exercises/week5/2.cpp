#include <iostream>
#include <cmath>
 
using namespace std;
 
int main ()
{
 
   int n;
   cin >> n;
 
   int arr[101] = {};
 
   for (int i = 0; i < n; i++)
   {
       int num;
       cin >> num;
       if(arr[num] == 1)
       {
           cout << "Has duplicates" << endl;
           return 0;
       }
 
       arr[num]++;
   }
   
   cout << "Has no duplicates" << endl;
 
    return 0;
}