#include <iostream>
using namespace std;
#include<vector>
int main()
{
    int a,b;
    cin >> a;
    vector<int> sum(a, 0);
    for(int i = 0; i < a; i++) {
        cin>> sum[i];
    }
    b=sum[0];
       for(int j =0; j < a; j++)
        {
            if(sum[j]<b) {
                b = sum[j];
            }
        }  
    cout << b<< endl;
     cout << endl;
    cin.ignore(); 
    cin.get();  
    return 0;
}