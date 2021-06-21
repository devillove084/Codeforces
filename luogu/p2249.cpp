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

int a[1000020] = {0};

int findp(int pos[], int left, int right, int k) {
    if (left == right) {
        if (pos[left] == k) return left;
        else return -1;
    }

    int mid = left + right / 2;
    if (k <= pos[mid]) findp(pos, left, mid, k);
    else findp(pos, mid+1, right, k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i];
    }
    int k;
    while(m--) {
        cin>>k;
        cout<<findp(a, 1, n, k)<<" ";
    }
    return 0;
}

