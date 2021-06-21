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
#define re register

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;
int n, s, a, b;
vector<pair<int, int>> res(n);


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>s>>a>>b;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin>>x>>y;
        res.emplace_back(make_pair(x, y));
    }

    

    for (int i = 0; i < n; ++i) {
        cout<<res[i].first<<" "<<res[i].second<<endl;
    }

    
    return 0;
}