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
    double s;
    cin >> s;
    double h = 2;
    int num = 0;
    while (s > 0){
        num+=1;
        s -= h;
        h *= 0.98;
    }
    cout << num;
    return 0;
}