#include <iostream>
 
using namespace std;
 
bool sumOfTwoEqualsThird(int num)
{
    return num % 10 + num / 100 % 10 == num / 10 % 10 || num % 10 + num / 10 % 10 == num / 100 % 10 || num / 10 % 10 + num / 100 % 10 == num % 10;
}
 
int main ()
{
    int three_digit_num;
    cin >> three_digit_num;
 
    bool result = sumOfTwoEqualsThird(three_digit_num);
 
    cout << result << endl;
 
    return 0;
}
 