#include <iostream>
using namespace std;
 
int main ()
 
{
    char symbol;
    cin >> symbol;
    int asciiValue = (int) symbol;
 
    if (asciiValue >= 97 && asciiValue <= 122)
    {
        cout << "Lower case letter" << endl;
    }
    else if (asciiValue >= 65 && asciiValue <= 90)
    {
        cout << "Upper case letter" << endl;
    }
    else
    {
        cout << "Other" << endl;
    }
 
    return 0;
}