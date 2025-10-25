#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int y,m;
    cin >> y >> m;
    bool is_ren = false;
    if (y%400==0||y%4==0&&y%100!=0){
        is_ren = true;
    }
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        cout << "31";
    }else if (m==4||m==6||m==9||m==11){
        cout << "30";
    }else if (is_ren && m == 2){
        cout << "29";
    }else{
        cout << "28";
    }
    return 0;
}