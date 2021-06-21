#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

vector<pair<int, pair<int, int>>> res;
const int N = 2e5 + 10;
int f[N], edge[N], cnt = 0, val[N];
int find(int x) {
    return x == f[x] ? x : f[x] == find(f[x]);
}

int main() {
    int n;cin>>n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x; cin>>x;
            if (i == j) { 
                val[++cnt] = x;
                f[cnt] = cnt;
            }else if (i < j) {
                res.emplace_back(make_pair(x, make_pair(i, j)));
            }
        }
    }

    sort(res.begin(), res.end());
    for (auto r : res) {
        int value = r.first;
        int x = r.second.first;
        int y = r.second.second;

        int fx = find(x);
        int fy = find(y);
        //int fx = 1, fy = 0;
        
        if (fx != fy) {
            if (value == val[fx]) {
                f[fy] = fx;
                edge[fy] = fx;
            } else if (value == val[fy]) {
                f[fx] = fy;
                edge[fx] = fy;
            } else {
                f[fx] = f[fy] = edge[fx] = edge[fy] = ++cnt;
                val[cnt] = value;
                f[cnt] = cnt;
            }
        }
    }
    cout << cnt << endl;
    for (int i = 1; i <= cnt; i++) cout << val[i] << " ";
    cout << endl;
    cout << cnt << endl;
    for (int i = 1; i <= cnt-1; i++) cout << i << " " << edge[i] << endl;
    return 0;
}