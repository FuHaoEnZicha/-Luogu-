#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum1=0,sum2=0;
    for (int i = 1;i <= n;i++){
        if (i % 2 == 1){
            sum1+=i;
        }
        else
        {
            sum2+=i;
        }
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}