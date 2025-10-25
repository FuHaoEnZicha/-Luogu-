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
    //打印正方形
    int num = 1;
    for (int i = 1;i <= n;i++){
        for (int j = 1;j <= n;j++){
            if (num < 10){cout << "0" << num;}
            else{cout << num;}
            num++;
        }
        cout << endl;
    }
    /****/
    cout << endl;
    //打印三角形
    num = 1;
    int r = n*2;
    for (int i = 1;i <= n;i++){
        r-=2;
        for (int j = 1;j <= r;j++){
            cout << " ";
        }
        for (int j = 1;j <= i;j++){
            if (num < 10){
                cout << "0" << num;
            }else{cout << num;}
            num++;
        }
        cout << endl;
    }
    return 0;
}