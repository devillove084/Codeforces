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
    string s;
    int k;
    cin>>s>>k;
    int n = s.size();
    vector<int> dp(0, n+1);
    dp[0] = s[0];
    for (int i = 1; i < n; ++i) {
        dp[i] = min(dp[i-1], dp[i] + s[i]);
    }
    
    return 0;
}

