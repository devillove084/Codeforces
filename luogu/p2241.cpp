#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    long long matrix = 0, squrel = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == j) matrix += (n-i)*(m-j);
            else if (i > j || j > i) squrel += (n-i)*(m-j);
        }
    }
    cout<<matrix<<" "<<squrel<<endl;
    return 0;
}