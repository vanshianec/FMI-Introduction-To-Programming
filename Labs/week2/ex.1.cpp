#include <iostream>
using namespace std;
 
int main ()
 
{
    int x1, y1, x2, y2;
    cout << "Enter first point coordinates : " << endl;
    cin >> x1 >> y1;
    cout << "Enter second point coordinates : " << endl;
    cin >> x2 >> y2;
 
    cout << "Distance between the two points : " << sqrt(pow(x1 - x2, 2) + pow (y1 - y2, 2));
 
    return 0;
}