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


ll a[301], n, ans;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for (int i = 1; i <= n; ++i) cin>>a[i];
    sort(a, a + n + 1);
    ll p = 0, q = n;
    while (p < q) {
        ans += pow((a[q] - a[p]), 2);
        p++;
        ans += pow((a[p] - a[q]), 2);
        q--;
    }
    cout<<ans<<endl;

    
    return 0;
}