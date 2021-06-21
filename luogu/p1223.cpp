#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin>>n;
    double sum = 0.0f;
    vector<pair<int, int>> res(n);
    for (int i = 0; i < n; ++i) {
        cin>>res[i].first;
        res[i].second = i+1;
    }

    sort(res.begin(), res.end());

    for (int i = 0; i < n; ++i) {
        sum += res[i].first * (n - i - 1);
        cout<<res[i].second<<" ";
    }
    cout<<endl;
    printf("%.2f", sum / n);
    return 0;
}