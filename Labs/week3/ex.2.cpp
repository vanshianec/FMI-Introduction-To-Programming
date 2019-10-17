#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
 
{
    int  a, b;
    cin >> a >> b;
 
    for (int n = a; n <= b; n++)
    {
        if (n < 2)
        {
            cout << n <<  " -> Not prime " << endl;        
        }
        else
        {
            bool prime = true;
 
            for (int i = 2; i <= sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    prime = false;
                    break;
                }
            }
 
            if (prime)
            {
                cout << n << " -> Prime " << endl;
            }
            else
            {
                cout << n << " -> Not prime" << endl;
            }
        }
    }
 
    return 0;
}
 