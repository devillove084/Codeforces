#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Tree{
    char lc;
    char rc;
}lt[130];

void sm(char x) {
    if (x != '*') {
        cout<<x;
        sm(lt[x].lc);
        sm(lt[x].rc);
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    char t;
    cin>>t;
    cin>>lt[t].lc;
    cin>>lt[t].rc;
    return 0;
}