#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    int n;
    int a[1005];
    cin >> n;
    for (int i = 1;i <= n;i++){
        cin >> a[i];
    }
    bool flag = false;
    for (int i = 1;i < n;i++){
        flag = false;
        for (int j = 1;j <= n-1;j++){
            if (abs(a[i]-a[i+1]) == j){
                flag = true;
            }
        }
        if (flag == false){
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly"<<endl;
    return 0;
}