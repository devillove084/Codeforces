#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <numeric>
#include <cstdio>
#include <cstdlib>
  
const long long INF = 9223372036854775807;
const long long MOD = 1e9 + 7;

#define ll long long
#define l long
#define ull unsigned long long
#define re register

#ifdef FAST_EXECUTION
#pragma GCC optimize("O3")
#pragma comment(linker, "/stack:247474112")
#endif

using namespace std;
ll gcd(ll x, ll y) {
	return y == 0 ? x : gcd(y, x % y);
}
 
ll getSum(ll x) {
	ll s = 0;
	while(x > 0) {
		s += x % 10;
		x /= 10;
	}
	return s;
}
 
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
 
	int t;
	scanf("%d", &t);
	while(t--) {
		ll x;
		scanf("%lld", &x);
		while(gcd(x, getSum(x)) == 1) x++;
		printf("%lld\n", x);
	}
 
	return 0;
}