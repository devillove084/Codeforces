#include <iostream>
using namespace std;//头文件略去
int a[10001][5];//定义一个二维数组
int main()
{
    int al,b,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4];
        a[i][3]+=a[i][1];
        a[i][4]+=a[i][2];
    }//至此看出，a数组作用为：a[i][1]：第i张地毯起始点的x轴......a[i][2]：第i张地毯起始点的y轴......a[i][3]：第i张地毯终点的x轴a[i][4]：第i张         //地毯终点的x轴
    cin>>al>>b;
    for(int i=n;i>=1;i--)
    {
        if(a[i][1]<=al&&a[i][2]<=b&&a[i][3]>=al&&a[i][4]>=b) {cout<<i<<endl; return 0;}//判断第i张地毯是否覆盖（a，b）。若覆盖，输       //出并结束。
    }
    cout<<-1<<endl;//没搜到输出-1.
    return 0;
}