#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double a, b;
    int h, m;
    cin >> a >> b >> h >> m;
    double theta;

    if(m == 0){
        theta = abs(30*(h) - 6*m);  
    }
    else{
        theta = abs(30*(h) + 30*m/60 - 6*m);    
    }

    double o = min(theta, 360 - theta);
    if(o == 0){
        printf("%f\n", abs(a-b));
        return 0;
    }
    double c = sqrt(a*a + b*b - 2*a*b*cos(2*M_PI*o/360));

    printf("%f\n", c);

    return 0;

}