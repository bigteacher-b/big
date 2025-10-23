#include <iostream>
using namespace std;

int main()
{
    int a[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 2 - i; k++) 
        {
            if(a[k] > a[k + 1])
            {
                int t = a[k];
                a[k] = a[k + 1];
                a[k + 1] = t;
            } 
        }
    }
    for(int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
     
    return 0;
}