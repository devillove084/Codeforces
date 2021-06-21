#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    vector<int> res(t);
    string ans = "";
    
    for (int i = 0; i < t+1; ++i) {
        cin>>res[i];
    }
    for (int i = 0; i < t+1; ++i) {
        if (res[i] == 0) {
            continue;
        } else if ((res[i] > 1 || res[i] < -1) && i < t) {
            cout<<to_string(res[i])<<'x'<<'^'<<to_string(t - i);
        } else if (res[i] == 1 && i < t) {
            cout<<"+x"<<'^'<<to_string(t - i);
        } else if (res[i] == -1 && i < t) {
            cout<<"-x"<<'^'<<to_string(t - i);
        } else if (i == t) {
            if (res[i] > 0) cout<<'+'<<to_string(res[i]);
            else if (res[i] < 0) cout<<'-'<<to_string(res[i]); 
        }
        //if (res[i] > 0 && i < (t-1)) cout<<'+';

    }

    
    //cout<<ans<<endl;
    
    return 0;
}