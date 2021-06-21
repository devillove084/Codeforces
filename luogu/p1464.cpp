#include<iostream>

#define WE_MEM(x, y, z) (w_mem[x][y][z] ? w_mem[x][y][z] : w_mem[x][y][z] = w(x, y, z))

using namespace std;

int w_mem[25][25][25];

int w(int x, int y, int z) {
    if (x <= 0 || y <= 0 || z <= 0) return 1;
    if (x > 20 || y > 20 || z > 20) return WE_MEM(20, 20, 20);
    if (x < y && y < z) return WE_MEM(x,y,z-1)+WE_MEM(x,y-1,z-1) - WE_MEM(x,y-1,z);
    return WE_MEM(x-1, y, z) + WE_MEM(x-1, y-1, z) + WE_MEM(x-1, y, z-1) - WE_MEM(x-1, y-1, z-1);
}

using namespace std;

int main() {
    int a, b, c;
    while(1){
        cin>>a>>b>>c;
        if (a ==-1 && b == -1 && c==-1) break;
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a, b, c)<<endl;
    }
    return 0;
}
