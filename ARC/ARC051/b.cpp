#include <iostream>
#include <cstdio>
using namespace std;
long long dp[10000001];

long long f(long long n){
    dp[0] = 0;
    dp[1] = 1;
    for(long long i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){
    long long n;
    cin >> n;
    printf("%lld %lld\n", 2*f(n+2), 2*f(n+1));
    
    return 0;
}