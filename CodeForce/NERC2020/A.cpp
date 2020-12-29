#include <bits/stdc++.h>

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N, M;
    cin>>N>>M;
    vector<vector<int>> one(N, vector<int> (2));
    vector<vector<int>> two(M, vector<int> (2));
    vector<int> temp(2);
    int tmp;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>tmp;
            temp.emplace_back(temp);
        }
        one.emplace_back(temp);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin>>tmp;
            temp.emplace_back(tmp);
        }
        two.emplace_back(temp);
    }

    

    return 0;
}