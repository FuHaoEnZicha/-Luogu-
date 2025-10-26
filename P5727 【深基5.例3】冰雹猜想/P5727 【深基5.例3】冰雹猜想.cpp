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
    int s = n;
    int num,ans[10005];
    while(n > 1){
        if (n % 2 == 1){
            n *= 3;
            n += 1;
        }else{n /= 2;}
        num++;
        ans[num] = n;
    }
    for (int i = num;i >= 1;i--){
        cout << ans[i] << " ";
    }
    cout << s;
    return 0;
}