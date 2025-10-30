#include <iostream>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1;i <= n;i++){
        int num = 1;
        for (int j = 1;j <= i;j++){
            num = num * j;
        }
        sum += num;
    }
    cout << sum << endl;
}