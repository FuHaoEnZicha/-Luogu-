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
    double a[50];
    a[1] = 1.00;
    a[2] = 1.00;
    for (int i = 3;i <= 48;i++){
        a[i] = a[i-1] + a[i-2];
    }
    printf("%.2f\n",a[n]);
    return 0;
}