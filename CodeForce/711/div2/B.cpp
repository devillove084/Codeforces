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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while (n--) {
        ll n, w;
        vector<ll> res(n);
        for (ll i = 0; i < n; ++i) {
            cin>>res[i];
        }

        sort(res.rbegin(), res.rend());
        ll sum = 0;
        int ans = 0;
        for (ll i = 0; i < n; ++i) {
            sum = max(sum, sum + res[i]);
            
        }
        

    }
    
    return 0;
}