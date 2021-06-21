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
int n;
int check(int x) {
    return (x >= 0 && x <= n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;
    while (t--) {
        int flag = 0;
        int U, R, L, D;
        cin>>n>>U>>R>>L>>D;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 2; ++k) {
                    for (int t = 0; t < 2; ++t) {
                        int r1 = U - i - j;
                        int r2 = R - j - k;
                        int r3 = D - k - t;
                        int r4 = L - t - i;
                        if (check(r1)&& check(r2) && check(r3) && check(r4)) flag = 1; break;
                    }
                }
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }



    return 0;
}

