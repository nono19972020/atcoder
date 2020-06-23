#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;

    long double s = abs(xb*yc - yb*xc)/2;
    printf("%.10Lf\n", s);
    return 0;
}