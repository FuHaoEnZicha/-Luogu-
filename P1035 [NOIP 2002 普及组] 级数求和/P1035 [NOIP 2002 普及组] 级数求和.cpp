#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    double sum = 1;
    int n = 1;
    while(sum <= k){
        n++;
        sum += 1.0/n;
    }
    cout << n;
    return 0;
}