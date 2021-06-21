#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int px, py;
        cin>>px>>py;
        string s;
        cin>>s;
        int lx=0,rx=0;
        int ly=0,ry=0;
        
        for (int i = 0; i < s.size(); ++i){
            if(s[i]=='R')rx++;
            else if(s[i]=='L')lx--;
            else if(s[i]=='U')ry++;
            else if(s[i]=='D')ly--;
        }
        if(px<=rx&&px>=lx&&py<=ry&&py>=ly){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}