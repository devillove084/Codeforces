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

struct edge {
    int u, v;
};
vector<int> e[100001];
vector<edge> s;
bool vis1[100001]={0},vis2[100001]={0};
bool cmp(edge a, edge b) {
    if (a.v == b.v) {
        return a.u < b.u;
    } else {
        return a.v < b.v;
    }
}

void dfs(int x) {
    vis1[x] = 1;
    cout<<x<<" ";
    for (int i = 0; i < e[x].size(); ++i) {
        int point = s[e[x][i]].v;
        if (!vis1[point]) {
            dfs(point);
        }
    }
}

void bfs(int x) {
    queue<int> res;
    res.push(x);
    cout<<x<<" ";
    vis2[x] = 1;
    while (!res.empty()) {
        int fro = res.front();
        for (int i = 0; i < e[fro].size(); ++i) {
            int point = s[e[fro][i]].v;
            if (!vis2[point]) {
                res.push(point);
                cout<<point<<" ";
                vis2[point] = 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int uu, vv;
        cin>>uu>>vv;
        s.emplace_back((edge){uu, vv});
    }
    sort(s.begin(), s.end(), cmp);
    for(int i = 0; i < m; ++i) {
        e[s[i].u].emplace_back(i);
    }
    dfs(1);
    cout<<endl;
    bfs(1);
    return 0;
}