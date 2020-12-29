#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    vector<int> a, b;
    int temp;
    for (int i = 0; i < t; ++i) {
        cin>>temp;
        a.emplace_back(temp);
    }
    int size = a.size();
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (a[i] == 0) {
            count++;
            for (int j = i + 1; j < size; j++) {
                a[j-1] = a[j];
            }
            i--;
            size--;
        }
    }

    for (int i = 0; i < a.size(); ++i) {
        cout<<a[i]<<" ";
    }
    for (int i = 0; i < count; ++i) {
        cout<<0<<" ";
    }

    cout<<endl;


    return 0;
}