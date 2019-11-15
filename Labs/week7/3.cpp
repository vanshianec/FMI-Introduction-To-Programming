#include <iostream>
#include <algorithm>
 
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
 
int stringCompare(char str1[], char str2[])
{
   int s1 = stringLen(str1);
   int s2 = stringLen(str2);
 
   for (int i = 0; i < min(s1, s2); i++)
   {
       if(str1[i] < str2[i])
       {
           return - 1;
       }
       else if (str1[i] > str2[i])
       {
           return 1;
       }
   }
 
    if(s1 == s2)
    {
        return 0;
    }
 
   return s1 > s2 ? 1 : -1;
 
}
 
int main ()
{
   
    char str1[100];
    char str2[100];
 
    cin.getline(str1, 100);
    cin.getline(str2, 100);
 
    cout << stringCompare(str1, str2) << endl;
 
    return 0;
}