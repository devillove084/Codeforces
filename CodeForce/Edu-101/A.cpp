#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if (s.size() % 2 == 0 && s[0] != ')' && s.back() != '(') {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}