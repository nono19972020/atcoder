#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double sx, sy;
    cin >> sx >> sy;

    long long n;
    cin >> n;

    long double x[n];
    long double y[n];

    for(long long i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    long double minv = 1e9;
    for(long long i = 0; i < n; i++){
        long double l;
        long double a, b, c;
        if(i != n-1){
            if(x[i] == x[i+1]){
                c = x[i];
                a = 1;
                b = 0;
            }
            else{
                a = (y[i+1] - y[i])/(x[i+1] - x[i]);
                b = -1;
                c = y[i] - a*x[i];
            }
        }
        else{
            if(x[i] == x[0]){
                c = x[i];
                a = 1;
                b = 0;
            }
            else{
                a = (y[0] - y[i])/(x[0] - x[i]);
                b = -1;
                c = y[i] - a*x[i];
            }
        }
        l = abs(a*sx + b*sy + c)/sqrt(a*a + b * b);
        minv = min(minv, l);
    }

    printf("%.10Lf\n", minv);
    return 0;
}