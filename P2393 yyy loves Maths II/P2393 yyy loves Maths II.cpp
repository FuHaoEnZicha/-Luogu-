#include <iostream>
#include <cstdio>
#include <stdio.h>
#define ll long long
#define endl "\n"
using namespace std;
int main()
{
    long double x;
    long double sum = 0;
    while (scanf("%Lf",&x) != -1)
    {
        sum += x*1000000;
    }
    printf ("%.5Lf", sum/1000000);
    return 0;
}