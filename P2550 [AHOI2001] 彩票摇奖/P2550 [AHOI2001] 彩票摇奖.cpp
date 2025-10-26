#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
namespace maths{ //数学命名空间
    #define PI 3.1415926
    long long max(long long a,long long b){
        if(a>b){return a;}
        return b;}
    long long min(long long a,long long b){
        if (a<b){return a;}
        return b;}
}
using namespace maths;
using namespace std;
int main()        //主函数
{
	int n;
	cin >> n;
	int zhong[10];
	int hao[1005][8];
	for (int i = 1;i <= 7;i++){
		cin >> zhong[i];
	}
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= 7;j++){
			cin >> hao[i][j];
		}
	}
	int ans[15];
	for (int i = 1;i <= n;i++){
		int num = 0;
		for (int j = 1;j <= 7;j++){
			for (int k = 1;k <= 7;k++){
				if (hao[i][j] == zhong[k]){
					num++;
					break;
				}
			}
		}
		if (num != 0){
			ans[num]++;
		}
	}
	for (int i = 7;i >= 1;i--){
		cout << ans[i] << " ";
	}
    return 0;
}