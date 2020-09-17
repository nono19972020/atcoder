#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    long long k;
    cin >> k;

    long long f[101];

    f[0] = 1;
    f[1] = 1;

    for(long long i = 0; i <= 100; i++){
        if(i - 2 >= 0) f[i] = f[i-1] + f[i-2];
    }

    printf("%lld %lld\n", f[k+1], f[k]);
    return 0;
}