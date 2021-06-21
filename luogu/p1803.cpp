#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

struct score {
    int a; int b;
}res[1000000 + 10];
bool visit[1000000 + 10] = {false};

inline bool cmp(score aa, score bb) {
    return aa.b <= bb.b;
}
using namespace std;

int main() {
    int n;cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>res[i].a>>res[i].b;
    }

    sort(res, res+n, cmp);
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (!visit[i]) {
            ans++;
            visit[i] = true;
            for (int j = i+1; j < n; ++j) {
                if (res[i].b > res[j].a) {
                    visit[j] = 1;
                }
            }
        }
    }

    cout<<ans<<endl;
    return 0;
    

}