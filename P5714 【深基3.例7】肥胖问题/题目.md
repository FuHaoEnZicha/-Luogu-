#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
void BMI(double BMI){
    if (BMI < 18.5){
        cout << "Underweight";
    }else if (BMI >= 18.5 && BMI < 24){
        cout << "Normal";
    }else{
        cout << BMI << endl << "Overweight";
    }
}
int main(){
    double m,h;
    cin >> m >> h;
    BMI(m/(h*h));
    return 0;
}