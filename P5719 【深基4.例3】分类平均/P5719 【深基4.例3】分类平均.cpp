#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main(){
    int n,k;
    double num1 = 0,num2 = 0,pos1=0,pos2=0;
    cin >> n >> k;
    for (int i = 1;i <= n;i++){
        if (i % k == 0){
            num1+=i;
            pos1++;
        }
        else{
            num2+=i;
            pos2++;
        }
    }
    printf("%.1lf %.1lf",num1/pos1,num2/pos2);
    return 0;
}