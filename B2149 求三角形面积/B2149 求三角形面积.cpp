#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    long double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        double s = (a+b+c)/2;
        double sum = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.2lf",sum);
    }
    else
    {
        printf("No solution.");
    }
    return 0;
}