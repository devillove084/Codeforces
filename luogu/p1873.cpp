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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n, m, longest, left, mid, sum;
    ll tree[1000008] = {0};
    cin>>n>>m;
    
    for (int i = 1; i <= n; i++) {
        cin>>tree[i];
        longest = max(longest, tree[i]);
    }
    
    while (left <= longest) {
        mid = (left + longest) / 2;
        sum = 0;
        for (int i = 1; i <= n; ++i) {
            if (tree[i] > mid) {
                sum += tree[i] - mid;
            }
        }
        if (sum < m) { //木材不足
            longest = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout<<left - 1<<endl;

    
    return 0;
}

