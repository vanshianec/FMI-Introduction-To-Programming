#include <iostream>
using namespace std;
 
int main ()
 
{
    int number, arr[3], sum;
    cin >> number;
 
    int copy = number;
    while (copy > 0)
    {
        sum += copy % 10;
        copy /= 10;
    }
 
    cout << "Sum : " << sum << endl;
 
    if (number % 10 > number / 10 % 10  && number / 10 % 10 > number / 100 % 10)
    {
        cout << "Increasing" << endl;
        return 0;
    }
    if (number % 10 < number / 10 % 10 && number / 10 % 10 < number / 100 % 10)
    {
        cout << "Decreasing" << endl;
        return 0;
    }
 
    cout << "Normal" << endl;
 
    return 0;
 
 
}