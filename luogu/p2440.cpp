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
int n, k;
int a[100000 + 50];

bool func(ll x) {
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i] / x;
    }

    return ans >= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    ll left = 0, right = 100000001;
    while (left + 1 < right) {
        ll mid = left + (right - left) / 2;
        if (func(mid)) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout<<left<<endl;
    return 0;
}