#include<iostream>
#include <windows.h>
using namespace std;
int main(void)
{
    int homework, xiaoce, qimo, tota;  
    cout << "依次输入作业成绩，小测成绩，期末考试成绩" << endl;
    cin >> homework >> xiaoce >> qimo;
    tota = homework*0.2 + xiaoce*0.3 + qimo*0.5;
    cout << tota << endl;
    return 0;
}
