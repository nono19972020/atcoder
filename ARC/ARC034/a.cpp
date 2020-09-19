#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long double maxv = 0;

    for(long long i = 0; i < n; i++){
        long double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        long double point = a + b + c + d + (e * 110)/900;
        maxv = max(maxv, point);
    }

    printf("%.10Lf\n", maxv);
    return 0;
}