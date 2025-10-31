#include <iostream>
using namespace std;
int main()
{ 
    int k=0;
    cin>>k;
    int n[20][20]={0};
    for(int i=0;i<k;i++)
    {
        for(int b=0;b<i+1;b++)
        {   if(i==0)
            {
             n[i][b]=1;
            }
            else if(b==0)
            {
                n[i][b]=1;
            }
            else if(b==i)
            {
                 n[i][b]=1;
            }
            else n[i][b]=n[i-1][b-1]+n[i-1][b];
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int b=0;b<i+1;b++)
        {   
            cout<<n[i][b]<<" ";
        }
        cout<<endl;
    }
cin.ignore(); 
    cin.get();  
    return 0;


}