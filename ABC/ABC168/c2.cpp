#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    int h, m;
    cin >> a >> b >> h >> m;
    long double theta;

   
    //theta = 2.0*M_PI*((long double)h/12.0 + ((long double)m/60.0)/12.0 - (long double)m/60.0);
    long double arg = abs(30.0*(long double)h + 30.0*(long double) m/60.0 - 6.0*(long double)m);
    theta = min(arg, 360-arg);
    
    long double c = sqrtl((long double)(a*a + b*b) - (long double)(2.0*a*b)*cosl(2*M_PI*theta/360.0));

    printf("%.10Lf\n", c);
    //cout << c << endl;

    return 0;

}