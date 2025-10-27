#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    long long num = 0,sum = 0;
    while(n >= 1){
        n -= 1;
        num++;
        if (num >= k){
            num = 0;
            n++;
        }
        sum++;
    }
    cout << sum;
    return 0;
}