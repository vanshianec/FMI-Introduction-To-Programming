#include <iostream>
using namespace std;
 
int main ()
 
{
    int k, m, n, minutes = 0;
    cin >> k >> m >> n;
 
    while (n > 0)
    {
        minutes += m * 2;
        n-=k;
    }
 
    cout << "Total minutes : " << minutes << endl;
 
    return 0;
}