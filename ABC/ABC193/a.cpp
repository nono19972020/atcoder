#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long double a, b, c;
    cin >> a >> b;
    c = a - b;

    long double ans = (c * 100) / a;

    printf("%.10Lf\n", ans);
    return 0;
}