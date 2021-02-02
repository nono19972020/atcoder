#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    long double ans = sx + sy*(gx - sx)/(gy + sy);

    printf("%.10Lf\n", ans);
    return 0;
}