#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <stack>
  
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
ll a[200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    ll c;
    map<ll, ll> s;
    cin>>n>>c;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        s[a[i]]++;
        a[i] -= c;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += s[a[i]];
    }

    cout<<ans<<endl;
    
    return 0;
}

