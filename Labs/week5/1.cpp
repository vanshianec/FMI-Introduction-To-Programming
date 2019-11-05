#include <iostream>
 
using namespace std;
 
int main ()
{
 
    int n, local_mins_count = 0, first_num, second_num;
    cin >> n;
 
    if(n >= 3)
    {
        cin >> first_num >> second_num;
 
        for (int i = 0; i < n - 2; i++)
        {
            int next;
            cin >> next;
            if(first_num > second_num && second_num < next)
            {
                local_mins_count++;
            }
            int temp = second_num;
            second_num = next;
            first_num = temp;
        }
    }
 
   
    cout << local_mins_count << endl;
 
    return 0;
}
 
 