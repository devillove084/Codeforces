#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct node {
    double a;
    double b;
    double c;
}aa[105];

inline bool cmp(node a, node b) {
    return a.c > b.c;
}

int main() {
    int n;
    double t;
    cin>>n>>t;
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin>>aa[i].a>>aa[i].b;
        aa[i].c = aa[i].b / aa[i].a;
    }

    sort(aa+1, aa+n+1, cmp);

    for (int i = 1; i <= n; ++i) {
        if (t >= aa[i].a) {
            sum += aa[i].b;
            t -= aa[i].a;
        } else {
            sum += t * aa[i].c;
            break;
        }
    }
    printf("%.2f", sum);
    return 0;
}