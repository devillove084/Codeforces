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

int Reversort(vector<int>& res) {
    int n = res.size();
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        int j = distance(res.begin()+i, min_element(res.begin()+i, res.end()));
        cout<<j<<endl;
        if (is_sorted(res.begin(), res.end())) {
            return ans;
        } else {
            ans++;
            reverse(res.begin() + i, res.begin() + j);
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    for (int t = 1; t <= n; t++) {
        int m;cin>>m;
        vector<int> res(m);
        for (int i = 0; i < m; ++i) {
            cin>>res[i];
        }

        int ans = Reversort(res);
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
    
    
    return 0;
}