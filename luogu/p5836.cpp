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
#include <numeric>
  
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;

#define ll long long
#define l long
#define ull unsigned long long
#define re register

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;

// int fa[100010],ans[100010],m,n;
// char col[100010];

// int find(int x) {
//     if (fa[x] == x) {
//         return x;
//     }
//     return fa[x] = find(fa[x]);
// }

// void merge(int x, int y) {
//     fa[find(x)] = find(y);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int cnt = 0;
//     cin>>n>>m;
//     for (int i = 1; i <= n; ++i) {
//         fa[i] = i;
//         cin>>col[i];
//     }

//     for (int i = 1; i <= n - 1; ++i) {
//         int x, y;
//         cin>>x>>y;
//         if (col[x] == col[y]) {
//             merge(x, y);
//         }
//     }
//     for (int i = 1; i <= m; ++i) {
//         int a;int b;char c;
//         cin>>a>>b>>c;
//         if (find(a) == find(b) && col[a] != c) ans[++cnt] = 0;
//         else {
//             ans[++cnt] = 1;
//         }
//     }

//     for (int i= 1; i <= cnt; ++i) {
//         cout<<ans[i];
//     }
//     return 0;
// }

//下面是O(n)的大常数解法

int n, m;
char col[100010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for (int i = 1; i <= n; ++i) {
        cin>>col[i];
    }

    int x, y;
    for (int i = 1; i <= n-1; ++i) {
        cin>>x>>y;
        
    }


    return 0;
}