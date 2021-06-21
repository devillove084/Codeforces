// #include <algorithm>
// #include <cmath>
// #include <cstdio>
// #include <iostream>
// #include <iomanip>
// #include <map>
// #include <string>
// #include <unordered_map>
// #include <unordered_set>
// #include <set>
// #include <vector>
// #include <stack>
// #include <queue>
  
// const long long INF = 9223372036854775807;
// const long long MOD = 1e9 + 7;

// #define ll long long
// #define l long
// #define ull unsigned long long
// #define re register

// #ifdef FAST_EXECUTION
// #pragma GCC optimize("O3")
// #pragma comment(linker, "/stack:247474112")
// #endif

// using namespace std;
// const int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
// const int dy[8] = {2, 1, -1, -2, 2, 1, -1, -2};
// bool vis[500][500];
// int step[500][500];
// queue<pair<int, int>> q;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int n, m, x, y;
//     cin>>n>>m>>x>>y;
//     memset(step, -1, sizeof(step));
//     memset(vis, false, sizeof(vis));

//     step[x][y] = 0;
//     vis[x][y] = false;
//     q.push(make_pair(x, y));

//     while(!q.empty()) {
//         int xx = q.front().first;
//         int yy = q.front().second;
//         q.pop();
//         for (int i = 0; i < 8; ++i) {
//             int u = xx + dx[i];
//             int v = yy + dy[i];

//             if (vis[u][v] ||  u < 1 || u > n || v < 1 || v > m) {
//                 vis[u][v] = true;
//                 q.push(make_pair(u, v));
//                 step[u][v] = step[xx][yy] + 1;
//             }
//         }
//     }
    
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= m; ++j) {
//             cout<<"     "<<step[i][j];
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

#include<iostream>//P1443
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;
const int dx[8]={-1,-2,-2,-1,1,2,2,1};
const int dy[8]={2,1,-1,-2,2,1,-1,-2};//8个方向
queue<pair<int,int> > q;
int f[500][500];//存步数
bool vis[500][500];//走没走过
int main()
{
	int n,m,x,y;
	memset(f,-1,sizeof(f));memset(vis,false,sizeof(vis));
	cin>>n>>m>>x>>y;
	f[x][y]=0;vis[x][y]=true;q.push(make_pair(x,y));
	while(!q.empty())
	{
		int xx=q.front().first,yy=q.front().second;q.pop();//取队首并出队
		for(int i=0;i<8;i++)
		{
			int u=xx+dx[i],v=yy+dy[i];
			if(u<1||u>n||v<1||v>m||vis[u][v])continue;//出界或走过就不走
		    vis[u][v]=true;q.push(make_pair(u,v));f[u][v]=f[xx][yy]+1;
		}
	}
	for(int i=1;i<=n;i++)
	 {for(int j=1;j<=m;j++)printf("%-5d",f[i][j]);printf("\n");}//注意场宽！！
	return 0;
}