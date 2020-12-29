#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        std::cin >> n;
        int mx0 = 0, mx1 = 0, s = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            std::cin >> x;
            s += x;
            mx0 = std::max(mx0, s);
        }
        s = 0;
        int m;
        std::cin >> m;
        for (int i = 0; i < m; ++i) {
            int x;
            std::cin >> x;
            s += x;
            mx1 = std::max(mx1, s);
        }
        std::cout << mx0 + mx1 << endl;
        
    }

    return 0;
}