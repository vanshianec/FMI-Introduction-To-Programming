#include <iostream>
#include <cmath>
 
using namespace std;
 
int main ()
{
 
    int n;
    double x;
    cin >> n >> x;
    double sum = 1;
 
    double current_power_of_x = x;
    int current_factorial = 1;
 
    for (int i = 1; i <= n; i++)
    {
        sum += current_power_of_x / current_factorial;
        current_power_of_x *= x;
        current_factorial *= (i + 1);
    }
 
    cout << sum << endl;
   
 
    return 0;
}
 
 