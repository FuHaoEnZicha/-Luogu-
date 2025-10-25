#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
namespace maths{ //数学命名空间
    #define PI 3.1415926
    long long max(long long a,long long b){
        if(a>b){return a;}
        return b;}
    long long min(long long a,long long b){
        if (a<b){return a;}
        return b;}
}
using namespace maths;
using namespace std;
int main()        //主函数
{
    int n;
    cin >> n;
    int a[1005];
    double sum = 0;
    int maxn = -1;
    int minn = 11;
    for (int i = 1;i <= n;i++){
        cin >> a[i];
        if (a[i] > maxn){
            maxn = a[i];
        }
        if (a[i] < minn){
            minn = a[i];
        }
        sum += a[i];
    }
    sum = (sum-(maxn + minn))/(n-2);//求平均值
    printf("%.2lf",sum);
    return 0;
}