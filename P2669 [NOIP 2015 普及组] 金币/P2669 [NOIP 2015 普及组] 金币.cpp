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
    int k;
    cin >> k;
    int sum = 0,num = 0,n=0;
    for (int i = 1;i <= k;i++){
        
        if (n == num){
            num++;
            n=0;
        }
        n++;
        sum += num;
    }
    cout << sum;
    return 0;
}