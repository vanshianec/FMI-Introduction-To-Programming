#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
 
{
    int n;
    bool first = true;
    cin >> n;
 
    while (n > 0)
    {
        int digit = n % 10;
 
        if(digit == 0 && first == true)
        {
            n/=10;
            continue;
        }
 
        cout << digit;
        first = false;
 
        n/=10;
    }
 
    return 0;
}
 