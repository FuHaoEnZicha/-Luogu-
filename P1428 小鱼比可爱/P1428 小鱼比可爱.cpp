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
    int a[105];
    for (int i = 1;i <= n;i++){
        cin >> a[i];
    }
    for (int i = 1;i <= n;i++){
        int num = 0;
        for (int j = 1;j <= i;j++){
            if (a[i] > a[j]){
                num++;
            }
        }
        cout << num << " ";
    }
    return 0;
}