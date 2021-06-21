#include <iostream>
#define ll unsigned long long
using namespace std;

int ans = 0;
ll f[20][20] = {0};
ll dfs(int i, int j) {
    if (f[i][j]) return f[i][j];
    if (i == 0) return 1;
    if (j > 0) f[i][j] += dfs(i, j-1);
    f[i][j] += dfs(i-1, j-1);
    return f[i][j];
}

int main() {
    int n;
    cin>>n;
    cout<<dfs(n, 0)<<endl;
    return 0;
}