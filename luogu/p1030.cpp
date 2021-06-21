#include <iostream>

using namespace std;

void dfs(string in, string after) {
    if (in.size() > 0) {
        char ch = after[after.size() - 1];
        cout<<ch;
        int k = in.find(ch);
        dfs(in.substr(0, k), after.substr(0, k));
        dfs(in.substr(k+1), after.substr(k, in.size() - k - 1));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string pre, after;
    cin>>pre>>after;
    dfs(pre, after);
    return 0;
}