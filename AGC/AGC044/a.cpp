#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long t, n, a, b, c, d;

    cin >> n >> a >> b >> c >> d;

    vector<long long> dp(n+1, 0);
    dp[1] = d;

    for(long long i = 2; i <= n; i++){
        long long minv = dp[i-1] + d;
        if(i%2 == 0){
            minv = min(minv, dp[i/2]+a);
        }
        if(i%3 == 0){
            minv = min(minv, dp[i/3]+b);
        }
        if(i%5 == 0){
            minv = min(minv, dp[i/5]+c);
        }

        dp[i] = min(minv,  dp[i+1]+d);
    }

 
    cout << dp[n] << endl;

    return 0;
}