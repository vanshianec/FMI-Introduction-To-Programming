#include <iostream>
 
using namespace std;
 
int main ()
{
    double a, b;
    char op;
 
    cin >> a >> b;
    cin >> op;
 
    switch(op)
    {
        case '+':
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '/':
        cout << a / b;
        break;
        case '*':
        cout << a * b;
        break;
    }
   
    cout << endl;    
}
