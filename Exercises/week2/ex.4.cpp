#include <iostream>
using namespace std;
 
int main ()
 
{
    int num, arr[32], copyLength, length = 0;
    cin >> num;
    copyLength = num;
 
    while(copyLength > 0)
    {
        length++;
        copyLength /= 10;
    }
 
    for (int i = 0; i < length  ; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }
 
 
    bool palindrom = true;
    for (int i = 0; i < length / 2; i++)
    {
        if (arr[i] != arr[length - i  - 1])
        {
            palindrom = false;
            break;
        }
    }
 
    if(palindrom)
    {
            cout<< "Is palindrom" << endl;
    }
    else
    {
       cout << "Not palindrom" << endl;
    }
   
    return 0;
 
}