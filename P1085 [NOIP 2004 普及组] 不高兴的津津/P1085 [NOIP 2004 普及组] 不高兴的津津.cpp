#include <bits/stdc++.h>
using namespace std;
int num[10];
int main(){
    int a[10],b[10];
    for (int i = 1;i <= 7;i++){
        cin >> a[i] >> b[i];
    }
    for (int i = 1;i <= 7;i++){
        if (a[i] + b[i] > 8){
            num[i] = a[i]+b[i]-8;
        }
    }
    int maxn = -1e+5;
    int pos;
    for (int i = 1;i <= 7;i++){
        if (num[i] != 0){
            if (num[i] > maxn){
                maxn = num[i];
                pos = i;
            }
        }
    }
    cout << pos;
    return 0;
}