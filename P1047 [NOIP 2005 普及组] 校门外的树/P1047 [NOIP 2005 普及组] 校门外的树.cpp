#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,m;
    cin >> l >> m;
    bool a[l+5];
    for (int i = 0;i <= l;i++){
        a[i] = true;
    }
    for (int i = 1;i <= m;i++){
        int u,v;
        cin >> u >> v;
        for (int j = u;j <= v;j++){
            if (a[j] == true){
                a[j] = false;
            }
        }
    }
    int num = 0;
    for (int i = 0;i <= l;i++){
        if (a[i] == true){
            num++;
        }
    }
    cout << num;
    return 0;
}