#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    vector<long long> pre(n);
    for (int i = 0; i < n; ++i) {
        cin>>pre[i];
    }

    vector<long long> aft(m);
    for (int i = 0; i < m; ++i) {
        cin>>aft[i];
    }

    long long g = 0;
    for (int i = 0; i < n; ++i) {
        g = __gcd(g, abs(pre[i] - pre[0]));
    }

    for (int i = 0; i < m; ++i) {
        if (i > 0) {
            cout<<" ";
        }
        cout<<__gcd(g, pre[0]+aft[i]);
    }
    cout<<endl;
}