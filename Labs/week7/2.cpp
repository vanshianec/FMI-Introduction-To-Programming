#include <iostream>
 
using namespace std;
 
int stringLen(char str[])
{
    int index = 0;
    while(str[index] != '\0')
    {
        index++;
    }
 
    return index;
}
 
void reverseString(char str[])
{
    int n = stringLen(str);
 
    for (int i = 0; i < n / 2; i++)
    {
        int temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
}
 
int main ()
{
   
    char str[100];
 
    cin.getline(str, 100);
    reverseString(str);
 
    cout << str;
 
    return 0;
}
 