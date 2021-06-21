#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <stack>
#include <queue>
  
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;

#define ll long long
#define l long
#define ull unsigned long long

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;
int n, sum = 0, ans[14] = {0}, check[3][28] = {0};
void dfs(int line) {
    if (line > n) {
        sum++;
        if (sum > 3) return;
        else {
            for (int i = 1; i <= n; ++i) {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            return;
        }
    }
    for (int i = 1; i <=n; ++i) {
        if ( (!check[0][i]) && (!check[1][line+i]) && (!check[2][line-i+n]) ) {
            ans[line] = i;
            check[0][i] = 1; check[1][line + i] = 1; check[2][line - i + n] = 1;
            dfs(line+1);
            check[0][i] = 0; check[1][line + i] = 0; check[2][line - i + n] = 0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    dfs(1);
    cout<<sum<<endl;
    return 0;
}

