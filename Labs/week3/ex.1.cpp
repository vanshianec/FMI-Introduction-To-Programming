#include <iostream>
#include <cmath>
 
using namespace std;
 
int main ()
 
{
    int num, digits_count = 0, sum = 0, digits_frequency[10] = {};
 
    cin >> num;
 
    while(num > 0)
    {
        int digit = num % 10;
        digits_frequency[digit]++;
        sum += digit;
        digits_count++;
        num /= 10;
    }
 
    cout << "Digits count : " << endl;
 
    cout << digits_count << endl;
 
    cout << "Sum : " << endl;
 
    cout << sum << endl;
   
    cout << "Digits frequency : " << endl;
 
    for (int i = 0; i < 10; i ++)
    {
        cout << i << " -> " << digits_frequency[i] << endl;
    }
 
    return 0;
}
 