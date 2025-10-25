#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = 1;
    for (int i = n;i >= 1;i--){
        for (int j = 1;j <= i;j++){
            if (num < 10){
                cout << "0" << num;
            }else{
                cout << num;
            }
            num++;
        }
        cout << endl;
    }
    return 0;
}