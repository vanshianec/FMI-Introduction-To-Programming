#include <iostream>
#include <cmath>
 
using namespace std;
 
 
 
int main ()
{
    int n, num;
    cin >> n;
    double result, s, s_numerator, result_numerator;
 
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        s_numerator += num;
        result_numerator += pow(num , 2);
    }
 
    s = s_numerator / n;
 
    result = sqrt((n * pow(s, 2) + result_numerator - 2 * s * (s_numerator))/ n - 1);
 
 
    cout << result << endl;
 
   
    return 0;
}