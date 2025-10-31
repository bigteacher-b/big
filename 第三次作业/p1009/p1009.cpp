#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int>& c, int b) {
    int t = 0;
    for(int i = 0; i < c.size() || t; i++) {
        if(i < c.size()) 
            t += c[i] * b;
        
        if(i < c.size())
            c[i] = t % 10;
        else
            c.push_back(t % 10);
        
        t /= 10;
    }
}

void add(vector<int>& a, vector<int>& b) {
    int t = 0;
    for(int i = 0; i < a.size() || i < b.size() || t; i++) {
        if(i < a.size()) t += a[i];
        if(i < b.size()) t += b[i];
        
        if(i < a.size())
            a[i] = t % 10;
        else
            a.push_back(t % 10);
        
        t /= 10;
    }
}

int main() {
    int n;
    vector<int> factorial = {1}, sum = {0};
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        multiply(factorial, i);
        add(sum, factorial);
    }
    
    for(int i = sum.size()-1; i >= 0; i--) {
        cout << sum[i];
    }
    cout << endl;
    cin.ignore(); 
    cin.get();    
    
    return 0;
}