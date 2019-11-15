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
 
int main ()
{
   
    char str[100];
 
    cin.getline(str, 100);
 
    cout << stringLen(str);
 
    return 0;
}