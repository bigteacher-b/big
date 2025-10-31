#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int n[10][10] = {0};
    
    int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    int next = 0;
    
    int x = 0, y = 0;
    
    for(int i = 1; i <= k*k; i++) {
        n[x][y] = i;
        int new_x = x + dir[next][0];
        int new_y = y + dir[next][1];
        if(new_x < 0 || new_x >= k || new_y < 0 || new_y >= k || n[new_x][new_y] != 0) {
            next = (next + 1) % 4;
            new_x = x + dir[next][0];
            new_y = y + dir[next][1];
        }
        
        x = new_x;
        y = new_y;
    }
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < k; j++) {
            if (n[i][j] < 10)
            {
                cout <<' '<< n[i][j]<<' ';
            }
            else
            {
                cout << n[i][j]<<' ';
            }
            
        }
        cout << endl;
    }
    cin.ignore(); 
    cin.get(); 
    return 0;
}