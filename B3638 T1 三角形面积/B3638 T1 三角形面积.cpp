#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    double c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double s = (a+b+c)/2;
    double sum = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%d",sum);
    return 0;
}