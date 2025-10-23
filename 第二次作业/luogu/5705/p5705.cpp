#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    string s;
    cout << "请输入数字: ";
    cin >> s;
    reverse(s.begin(), s.end());
    cout << "反转结果: " << s << endl;
     return 0;
}