#include <iostream>
using namespace std;
int main()
{ 
    int n=0,k,sum=0;
    cin>>k;
    int i=0;
    for(i=1;n+i<k;i++)
    {
        n+=i;
    }
    for(int j=1;j<=i;j++)
    {
        sum+=j*j;
    }
    if(k-n-i!=0){

            sum+=(k-n-i)*i;
        }
    cout<<sum<<endl;
cin.ignore(); 
    cin.get();  
    return 0;


}