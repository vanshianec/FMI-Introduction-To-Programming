#include <iostream>
 
using namespace std;
 
int main ()
{
    int x1, x2, a1, a2;
    cin >> x1 >> x2 >> a1 >> b1;
 
    if((x1 <= x2 && x2 <= x1 + a1) || (x2 <= x1 && x1 <= x2 + a2))
    {
        cout << "Intersects" << endl;
    }
    else
    {
        cout << "No intersection!" << endl;
    }
 
 
}