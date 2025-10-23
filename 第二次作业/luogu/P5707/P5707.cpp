#include <iostream>
using namespace std;

int main()
{
    int a, b, c, e,f,x;
    int d=1920;
    cin >> a >> b;
    c=a/b+10;
     if (a%b!=0)
    {
      c++;
    }
    x=d-c;
    e=x/60;
    if (x%60!=0)
    {
      c++;
    }
    f=x%60;
    if(32>=e&&e>=24){
        e=e-24;
        if(f<10)
        {
            cout <<"0"<< e <<":"<<"0"<<f;
        }
        else
        {
            cout <<"0"<< e <<":"<<f;
        }
    }
    else if(24>e&&e>0){
        if(f<10)
        {
            cout << e <<":"<<"0"<<f;
        }
        else
        {
            cout << e <<":"<<f;
        }
    }
system("pause");
return 0;
}