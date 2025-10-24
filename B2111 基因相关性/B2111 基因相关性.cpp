#include <iostream>
using namespace std;
int main()
{
    double n;
    string a,b;
    cin >> n >> a >> b;
    double num = 0.0;
    for (int i = 0;i < a.length();i++)
    {
        if (a[i] == b[i]){
            num++;
        }
    }
    if (num / a.length() >= n){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}