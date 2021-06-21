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

int mdf[12][4] = {0};
int st;
int que[1<<24], dp[1<<24], fr[1<<24], opt[1<<24],he,ta;
int t, nxt;
int p1, s;
int sol[1<<24],c;

void bit(int n) {
    for (int i = 0; i < 12; ++i) {
        cout<<((n&(3<<(i*2)))>>(i*2));
    }
}

int nx(int st, int p) {
    int t=((st&(3<<(p*2)))>>(p*2));
	st=(st^(t<<(p*2)));
	t++;
	t&=3;
	st=(st^(t<<(p*2)));
	return st;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i=0;i<12;i++){
		cin>>t;
		t--;
		st|=(t<<(i*2));
		for(int j=0;j<4;j++){
			cin>>t;
			t--;
			mdf[i][j]=t;
		}
	}

    s=st;
	dp[st]=1;
	que[he++]=st;
	while(he!=ta){
		st=que[ta++];
		if(st==0)break;
		for(int i=0;i<12;i++){
			t=((st&(3<<(i*2)))>>(i*2));
			p1=nx(st,i);
			nxt=nx(p1,mdf[i][t]);
			if(!dp[nxt]){
				dp[nxt]=1;
				fr[nxt]=st;
				opt[nxt]=i;
				que[he++]=nxt;
			}
		}
	}

    if(dp[0]){
		for(int i=0;i!=s;i=fr[i]){
			sol[c++]=opt[i]+1;
		}
		cout<<c<<endl;
		for(int i=c-1;i>=0;i--)cout<<sol[i]<<" ";
	}else{
		cout<<"0"<<endl;
	}
    
    return 0;
}