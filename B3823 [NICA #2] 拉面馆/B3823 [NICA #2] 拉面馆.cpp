#include <iostream>
using namespace std;
int main()
{
    long long a,b,k,r,c;
    cin >> a >> b >> k >> r >> c;
    long long sum = (b-a)*((r-c)*k);
    cout << sum;
    return 0;
}