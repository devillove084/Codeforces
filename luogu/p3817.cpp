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
    cin>>n>>x;
    ll ans = 0;
    vector<ll> res(n + 1);
    cin>>res[1];
    
    if (res[1] > x) {
        ans += res[1] - x;
        res[1] = x;
    }

    for (int i = 2; i <= n; ++i) {
        cin>>res[i];
        if (res[i] + res[i-1] > x) {
            ans += (res[i] + res[i-1]) - x;
            res[i] = x - res[i-1];
        }
    }
    cout<<ans<<endl;
    
    
    return 0;
}

