#include <iostream>

using namespace std;
int w[62500];
int c, l;
int main() {
    char s;
    for (int i = 0; cin>>s&&s != 'E'; ++i) {
        if (s == 'W') w[i] = 1;
        else w[i] = 2;
    }//循环读入

    for (int i = 0; 1; i++) {
        if (w[i] == 1) c++;
        else if (w[i] == 2) l++;
        else if (w[i] == 0) {
            cout<<c<<":"<<l<<endl;
            break;
        }

        if (c - l >= 2 || l - c >= 2) {
            if (c >= 11 || l >= 11) {
                cout<<c<<":"<<l<<endl;
                c=l=0;
            }
        }
    }
    cout<<endl;
    c=l=0;
    for (int i = 0; 1; ++i) {
        if (w[i] == 1) c++;
        else if (w[i] == 2) l++;
        else if (w[i] == 0) {
            cout<<c<<":"<<l<<endl;
            break;
        }

        if (c - l >= 2 || l - c >= 2) {
            if (c >= 21 || l >= 21) {
                cout<<c<<":"<<l<<endl;
                c = 0;
                l = 0;
            }
        }
    }
    return 0;
}