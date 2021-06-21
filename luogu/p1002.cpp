#include <iostream>
#define ull unsigned long long

using namespace std;
const int x[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int y[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

int main() {
    int b1, b2, h1, h2;
    cin>>b1>>b2>>h1>>h2;
    b1 += 2; b2 += 2; h1 += 2; h2 += 2;
    

    ull f[40] = {0};
    bool ss[40][40] = {false};
    ss[h1][h2] = true;
    f[2] = 1;
    for (int i = 1; i <= 8; ++i) {
        ss[h1 + x[i]][h2 + y[i]] = 1;
    }
    for (int i = 2; i <= b1; i++) {
        for (int j = 2; j <= b2; ++j) {
            if(ss[i][j]){
                f[j] = 0;
                continue;
            }
            //f[i][j] = max(f[i-1][j] + f[i][j-1], f[i][j]);
            f[j] += f[j-1];
        }
    }
    cout<<f[b2]<<endl;
    return 0;
}