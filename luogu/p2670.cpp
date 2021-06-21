#include <iostream>

using namespace std;

char a[101][101];
int b[101][101];

int main() {
    int n, m;
    cin>>n>>m;
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            b[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
            if (a[i][j] == '*') {
                b[i+1][j+1]++;
                b[i+1][j-1]++;
                b[i+1][j]++;
                b[i][j+1]++;
                b[i][j-1]++;
                b[i-1][j]++;
                b[i-1][j+1]++;
                b[i-1][j-1]++;//相邻的八个格子都+1
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == '*') {
                cout<<'*';
            }else {
                cout<<b[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}