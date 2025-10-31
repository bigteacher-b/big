#include <iostream>
using namespace std;

int main() {
    long long n; 
    cin >> n;
    
    long long sequence[1000];
    int count = 0;

    while (n != 1) {
        sequence[count++] = n;
         if (n % 2 == 1) {
            n = n * 3 + 1; 
        } else {
            n = n / 2;
        }
    }
    sequence[count++] = 1;
    
     for (int i = count - 1; i >= 0; i--) {
        cout << sequence[i] << " ";
    }
    cout << endl;
    
    return 0;
}