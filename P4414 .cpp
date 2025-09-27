#include<iostream>
using namespace std;
int main(void)
{
    int a[3];
    int temp[3]={0,1,2};
    char str[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> str;
    for(int i = 0;i<2;i++)
    {
        if(a[i]>a[i+1])
        {
            int b;
            b = a[i];
            a[i] = a[i+1];
            a[i+1] = b;
        }
    }
    for (int c = 0; c < 2; c++)
    {
         if(str[c]>str[c+1])
        {
            int b;
            b = temp[c];
            temp[c] = temp[c+1];
            temp[c+1] =b ;
        }
    }
    cout << a[temp[0]] << " " << a[temp[1]] << " " << a[temp[2]] << endl;
    
    return 0;
}
