#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long r[n];
    long long sum = 0;
    long double square = 0;
    for(long long i = 0; i < n; i++) cin >> r[i];

    sort(r, r+n, greater<long long>());
    //for(long long i = 0; i < n; i++) printf("%lld\n", r[i]);
    for(long long i = 0; i < n; i++){
        if(i % 2 == 0){
            if(i == n-1) square += M_PI *(long double)(r[i]*r[i]);
            else square += M_PI *(long double)(r[i]*r[i] - r[i+1]*r[i+1]);
        }
    }

    printf("%.10Lf\n", square);
    return 0;
}