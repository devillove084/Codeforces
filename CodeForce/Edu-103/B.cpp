#include <iostream>

using namespace std;
typedef long long ll;
#define forn(i,x,n) for(int i = x;i <= n;++i)	

const int N = 105;
ll p[N];

int main() 
{
	int T;cin>>T;
	while(T--)
	{
		int n,k;
        cin>>n>>k;
		forn(i,0,n - 1)	cin>>p[i];
		
		ll sum = p[0],res = 0;
		forn(i,1,n - 1)
		{
			if(100 * p[i] > k * sum)
			{
				ll delta = (100 * p[i] - k * sum + k - 1) / k;
				res += delta;
				sum += delta;
			}
			sum += p[i];
		}
		cout<<res<<endl;
	}
	return 0;
}