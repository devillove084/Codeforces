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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        q.push(x);
    }
    int ans = 0;
    while (q.size() >= 2) {
        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        ans += a + b;
        q.push(ans);
    }
    cout<<ans<<endl;
    
    return 0;
}

