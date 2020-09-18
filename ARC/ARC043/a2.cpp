#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long double a, b;
    cin >> a >> b;

    long double s[n];
    long double maxv = 0;
    long double minv = 1e12;
    long double sum = 0;
    for(long long i = 0; i < n; i++){
        cin >> s[i];
        maxv = max(maxv, s[i]);
        minv = min(minv, s[i]);
        sum += (long double)s[i];
    }

    long double delta = maxv - minv;
    if(delta == 0){
        printf("-1\n");
        return 0;
    }

    long double p = b/delta;
    long double q = a - p*sum/((long double) n);

    printf("%.10Lf %.10Lf\n", p, q);
    return 0;
}