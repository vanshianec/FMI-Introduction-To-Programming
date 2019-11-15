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
 
void concatStrings(char str1[], char str2[], char result[])
{
    int index = 0;
    int firstLength = stringLen(str1);
    int secondLength = stringLen(str2);
 
    while(index < firstLength)
    {
        result[index] = str1[index];
        index++;
    }
 
    index = 0;
 
    while(index < secondLength)
    {
        result[index + firstLength] = str2[index];
        index++;
    }
}
 
int main ()
{
   
    char str1[100], str2[100], str[200] = {};
 
    cin.getline(str1, 100);
    cin.getline(str2, 100);
 
    concatStrings(str1, str2, str);
 
    cout << str;
 
    return 0;
}