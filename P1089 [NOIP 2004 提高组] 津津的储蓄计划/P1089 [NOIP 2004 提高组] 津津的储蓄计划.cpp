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
    int msum=0,jsum = 0;
    int a[15];
    for (int i = 1;i <= 12;i++){
        cin >> a[i];
    }
    for (int i = 1;i <= 12;i++){
        jsum += 300 - a[i];
        if (jsum < 0){
            cout << "-" << i;
            return 0;
        }else{
            msum += jsum / 100 * 100;
            jsum -= jsum / 100 * 100;
        }
    }
    cout << msum + (msum * 0.2) + jsum;
    return 0;
}