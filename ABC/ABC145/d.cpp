#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

long long mod = 1e9+7;

long long modpow(long long x, long long n) {
    x = x%mod;
    if(n == 0){
        return 1;
    }
    else if(n%2 == 1){
        return(x*modpow(x, n-1))%mod;
    }
    else{
        return modpow((x*x)%mod, n/2)%mod;
    }
}

long long comb(long long n, long long k){
    long long x = 1;

    for(long long i = n-k+1; i <= n; i++){
        x = x*(i%mod);
        x = x%mod;
    }
    long long y = 1;
    for(long long i = 1; i <= k; i++){
        y = y*(i%mod);
        y = y%mod;
    }

    y = modpow(y, mod-2);

    return x*y%mod;
}

int main(){
    long long x, y;
    cin >> x >> y;

    if((x+y) % 3 != 0){
        printf("0\n");
        return 0;
    }

    long long n = (x+y)/3;
    long long k = (abs(x-2*n) + abs(y-n))/2;

    if(n <= x and x <= 2*n and n <= y and y <= 2*n){
        cout << comb(n, k) << endl;
    }
    else{
        printf("0\n");
    }

    
    return 0;
}