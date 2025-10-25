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
    int a[105],num=0;
    for (int i = 1;i <= 100;i++){
        num++;
        cin >> a[i];
        if (a[i] == 0){
            break;
        }
    }
    for(int i = num-1;i >= 1;i--){
        cout << a[i] << " ";
    }
    return 0;
}