#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    int a;
    cin >> a;
    int num = 0;
    while (a > 1){
        a = floor(a/2);
        num++;
    }
    cout << num + 1 << endl;
    return 0;
}