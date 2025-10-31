#include <iostream>
using namespace std;

struct yu {
    int degree[200];
    int l[200];
};  

int main() {
    int a;
    yu b;
    cin >> a;
    for(int i = 0; i < a; i++) {
        b.l[i] = 0; 
    }
    for(int i = 0; i < a; i++) {
        cin >> b.degree[i];
    }
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < i; j++) {
            if(b.degree[i] > b.degree[j]) {
                b.l[i]++;
            }
        }
    }
    for(int i = 0; i < a; i++) {
        cout << b.l[i] << " ";
    }
        cin.ignore(); 
    cin.get(); 
    return 0;
}