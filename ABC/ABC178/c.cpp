#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 1e9 + 7;

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

int main(){
    long long n;
    cin >> n;

    long long ans;
    ans = modpow(10, n) % mod;
    //ans %= mod;
    ans -= modpow(9, n) % mod;
    ans += mod;
    ans %= mod;
    ans -= modpow(9, n) % mod;
    ans += mod;
    ans %= mod;
    ans += modpow(8, n) % mod;
    ans += mod;
    ans %= mod;
    printf("%lld\n", ans);
    
    return 0;
}