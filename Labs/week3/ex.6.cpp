#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
 
{
    int n, first = 1, second = 1;
    cin >> n;
 
    //1 1 2 3 5 8
 
    for (int i = 3; i <= n; i++)
    {
        int next = first + second;
        int temp = second;
        second = next;
        first = temp;
    }
 
    cout << second << endl;
 
    return 0;
}