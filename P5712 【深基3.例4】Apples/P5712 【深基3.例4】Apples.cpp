#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    long long x;
    cin >> x;
    if (x == 1 || x == 0){
        cout << "Today, I ate " << x << " apple.";
    }else{
        cout << "Today, I ate " << x << " apples.";
    }
    return 0;
}