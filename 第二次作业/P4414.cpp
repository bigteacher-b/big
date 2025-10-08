#include<iostream>
using namespace std;

int main(void)
{
    int a[3];
    int temp[3];
    char str[4];
    cin >> a[0] >> a[1] >> a[2];
    cin >> str;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - i; j++) {
            if(a[j] > a[j+1]) {
                int b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - i; j++) {
            if(str[j] > str[j+1]) {
                int b = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = b;
            }
        }
    }
     cout << a[temp[0]] << " " << a[temp[1]] << " " << a[temp[2]] << endl;