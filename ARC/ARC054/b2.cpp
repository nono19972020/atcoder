#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double p;
    cin >> p;

    long double ans;
    long double x = 3 * (1 + log2(p) - log2(3) + log2(log(2))) / 2;

    if(x <= 0) ans = p;
    else ans =  x + 3/(2 * log(2));

    printf("%.10Lf\n", ans);
    return 0;
}