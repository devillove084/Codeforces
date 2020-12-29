#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int t;
    cin>>t;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int f = 0, s = 0, flag = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            else {
                if (a[i] + a[j] == t) {
                    flag = 1;
                    f = a[j];s = a[i];
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        dp[i] = max()
    }

    if (f == 0) {
        cout<<"Not found"<<endl;
    } else {
        cout<<f<<" "<<s<<endl;
    }

    return 0;
}