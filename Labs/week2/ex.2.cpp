#include <iostream>
using namespace std;
 
int main ()
 
{
    int n, m, k;
    cin >> n >> m >> k;
 
    if (k <= n * m && (k % n == 0 || k % m == 0))
    {
        cout << "Can" << endl;
    }
    else
    {
        cout << "Can't" << endl;
    }
}