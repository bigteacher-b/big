#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int x;
    while (cin >> x && x != 0) {
        a.push_back(x);
    }
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i] << ' ';
    }
    cout << endl;
    cin.ignore(); 
    cin.get();  
    return 0;
}