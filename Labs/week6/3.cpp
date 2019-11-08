 
#include <iostream>
#include <cmath>
 
using namespace std;
 
double calculatePolynomial(double x)
{
    int n;
    cout << "Enter polynomial 'n'" << endl;
    cin >> n;
    double sum = 0;
 
    for (int i = 0; i <= n; i++)
    {
        double num;
        cout << "Enter constant : " << endl;
        cin >> num;
        sum += num * pow(x, i);
    }
 
    return sum;
}
 
int main ()
{
   
    int x;
    cout << "Enter x : " << endl;
    cin >> x;
 
    double first_polynomial_sum = calculatePolynomial(x);
    double second_polynomial_sum = calculatePolynomial(x);
 
    cout << first_polynomial_sum + second_polynomial_sum;
 
    return 0;
}
 
 
 