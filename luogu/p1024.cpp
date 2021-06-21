#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <stack>
  
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;

#define ll long long
#define l long
#define ull unsigned long long

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;

double a, b, c, d;
double fc(double x) {
    return a*x*x*x + b*x*x + c*x +d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double left, right, m, x1, x2;
    int s = 0;
    cin>>a>>b>>c>>d;
    for (int i = -100; i < 100; i++) {
        left = i; right = i + 1;
        x1 = fc(left);
        x2 = fc(right);
        if (!x1) {
            cout<<fixed<<setprecision(2)<<left<<" ";
            s++;
        }
        if (x1 * x2 < 0) {
            while (right - left >= 0.001) {
                m = (left + right) / 2;
                if (fc(m) * fc(right) <= 0) {
                    left = m;
                } else {
                    right = m;
                }
            }
            cout<<fixed<<setprecision(2)<<right<<" ";
            s++;
        }
        
        if (s > 3) break;
    }
    
    return 0;
}

