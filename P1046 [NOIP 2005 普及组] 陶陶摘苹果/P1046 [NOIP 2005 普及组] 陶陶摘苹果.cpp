#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h[15];
    for (int i = 1;i <= 10;i++){
        cin >> h[i];
    }
    int a;
    cin >> a;
    int num = 0;
    for (int i = 1;i <= 10;i++){
        if (30+a >= h[i]){
            num++;
        }
    }
    cout << num;
    return 0;
}