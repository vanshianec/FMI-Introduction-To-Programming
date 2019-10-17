#include <iostream>
#include <cmath>
 
using namespace std;
 
int main ()
 
{
    int max_num = INT_MIN, sum = 0, odd_count = 0, abs_max = INT_MIN, n, num;
 
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> num;
 
        if(num > max_num)
        {
            max_num = num;
        }
        if(num % 2 != 0)
        {
            odd_count++;
        }
        if(abs(num) > abs_max)
        {
            abs_max = abs(num);
        }
        sum += num;
    }
 
    cout << sum << endl;
    cout << max_num << endl;
    cout << odd_count << endl;
    cout << abs_max << endl;
 
 
 
    return 0;
}
 