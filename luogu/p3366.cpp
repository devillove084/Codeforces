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
#define inf 123456789

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;

const int MAXM = 20000 + 5;
const int MAXN = 5000 + 5;
struct edge {
    int v, w, next;
}e[MAXM << 1];

int head[MAXN],dis[MAXN],cnt,n,m,tot,now=1,ans;
bool vis[MAXN];

void add(int u, int v, int w) {
    e[++cnt].v = v;
    e[cnt].w = w;
    e[cnt].next = head[u];
    head[u] = cnt;
}

void init() {
    cin>>n>>m;
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin>>u>>v>>w;
        add(u, v, w);
        add(v, u, w);
    }
}

int prim() {
    for (int i = 2; i <= n; ++i) {
        dis[i] = inf;
    }

    for (int i = head[1]; i; i = e[i].next) {
        dis[e[i].v] = min(dis[e[i].v], e[i].w);
    }

    while (++tot < n) {
        int minn = inf;
        vis[now] = 1;

        for (int i = 1; i <= n; ++i) {
            if (!vis[i] && minn > dis[i]) {
                minn = dis[i];
                now = i;
            }
        }

        ans += minn;

        for (int i = head[now]; i; i = e[i].next) {
            int v = e[i].v;
            if (dis[v] > e[i].w && !vis[v]) {
                dis[v] = e[i].w;
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    init();
    cout<<prim()<<endl;

    return 0;
}