#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double p;
    cin >> p;

    if(2 * log(2) * p < 3){
        printf("%.10Lf\n", p);
    }
    else{
        //long double x =  3*log(2*log(2)*p/3)/(2*log(2));
        long double ans = 3*(log(2*log(2)*p/3)+1)/(2*log(2));
        printf("%.10Lf\n", ans);
    }
    return 0;
}