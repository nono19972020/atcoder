#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long double n;
    cin >> n;

    long double ans = 32 + (9*n) / 5;

    printf("%.10Lf\n", ans);

    return 0;
}