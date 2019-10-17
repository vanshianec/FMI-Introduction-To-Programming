#include <iostream>
 
using namespace std;
 
int main ()
{
    int num, total_sum = 45;
 
    for (int i = 0; i < 8; i++)
    {
        cin >> num;
        total_sum -=num;
    }
 
    cout << total_sum << endl;
}
 