#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    long double a, b, w;
    cin >> a >> b >> w;
    w *= 1000;

    long double bottom = w / b;
    long double top = w / a;

    long double minv = ceil(bottom);
    long double maxv = floor(top);

    if(minv > maxv) printf("UNSATISFIABLE\n");
    else printf("%lld %lld\n", (long long) minv, (long long) maxv);
    
    return 0;
}