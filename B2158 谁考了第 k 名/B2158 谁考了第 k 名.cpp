#include <iostream>
#include <algorithm>
using namespace std;
struct Student{
    int id;
    double sum;
}a[105];
bool cmp(Student x, Student y)
{
    return x.sum > y.sum;
}
int n, k;
int main()
{
    cin >> n >> k;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i].id >> a[i].sum;
    }
    sort(a+1,a+n+1,cmp);
    cout << a[k].id << " " << a[k].sum << endl;
    return 0;
}