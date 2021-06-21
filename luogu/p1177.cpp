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

void qsort(int left, int right, vector<int>& res) {
    int mid = res[left + (right - left) / 2];
    int i = left;
    int j = right;
    while(i <= j) {
        while(res[i] < mid) i++;
        while(res[j] > mid) j--;
        if (i <= j) {
            swap(res[i], res[j]);
            i++;j--;
        }
    }
    if (left < j) qsort(left, j, res);
    if (i < right) qsort(i, right, res);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> res(n);
    for (int i = 0; i < n; ++i) {
        cin>>res[i];
    }

    qsort(0, n - 1, res);
    for (int i = 0; i < n; ++i) {
        cout<<res[i]<<" ";
    }


    
    
    
    return 0;
}