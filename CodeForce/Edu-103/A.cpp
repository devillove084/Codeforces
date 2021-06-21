#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        int s=((-n)%k+k)%k;
        cout<<1+(s+n-1)/n<<endl;
    }
    return 0;
}