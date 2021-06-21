#include <iostream>
#include <algorithm>

using namespace std;

int ae[5], e = 3;

int main () {
    for (int i = 0; i < 4; ++i) {
        cin>>ae[i];
    }

    sort(ae, ae+4);
    for (int i = 1; i < 4; ++i) {
        if (ae[i] != ae[i-1]) {
            e--;
        }
    }
    cout<<e<<endl;
}