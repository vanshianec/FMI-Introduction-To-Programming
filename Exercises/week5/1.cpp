#include <iostream>
#include <cmath>
 
using namespace std;
 
int main ()
{
 
    int e;
    double x;
    cin >> e >> x;
    double sum = 1;
 
    double current_power_of_x = x;
    int current_factorial = 1;
    int i = 1;
 
    while((current_power_of_x / current_factorial) >= e)
    {
        sum +=current_power_of_x / current_factorial;
        current_power_of_x *= x;
        i++;
        current_factorial *= i;
    }
 
    cout << sum << endl;
   
 
    return 0;
}
 