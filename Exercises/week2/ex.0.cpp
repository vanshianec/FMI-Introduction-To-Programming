#include <iostream>
#include <cmath>
using namespace std;
 
int main ()
 
{
    cout << "Enter 2 for area by three sides or 1 for area by side by height :" << endl;
   
    int input;
    cin >> input;
 
    switch(input)
    {
        case 1:
        double side, height;
        cin >> side, height;
        cout << "Area : " << (side * height) / 2 << endl;
        break;
        case 2:
        double a, b, c;
        cin >> a >> b >> c;
        double p = (a + b + c) / 2;
        cout << "Area : " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
        break;
        deafult:
        cout << "Invalid input";
        break;
    }
 
 
 
 
    return 0;
}