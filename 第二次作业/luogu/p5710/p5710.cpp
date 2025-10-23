#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    bool p1 = (x % 2 == 0);           // 性质1：是偶数
    bool p2 = (x > 4 && x <= 12);     // 性质2：大于4且不大于12
    
    // 小A：两个性质同时成立
    cout << (p1 && p2) << " ";
    // Uim：至少符合一个性质
    cout << (p1 || p2) << " ";
    // 小B：刚好符合一个性质
    cout << (p1 != p2) << " ";
    // 正妹：两个性质都不成立
    cout << (!p1 && !p2) << endl;
    
    return 0;
}