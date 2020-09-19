#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 998244353;

int main(){
    long long n, k;
    cin >> n >> k;

    vector<long long> l(k);
    vector<long long> r(k);
    for(long long i = 0; i < k; i++) cin >> l[i] >> r[i];

    vector<long long> dp(n, 0);
    dp[0] = 1;
    dp[1] = -1;

    for(long long i = 0; i < n; i++){
        if(i > 0) dp[i] += dp[i-1];
        dp[i] %= mod;
        for(long long j = 0; j < k; j++){
            if(i+l[j] < n){
                dp[i+l[j]] += dp[i];
                dp[i+l[j]] %= mod;
            }

            if(i+r[j] + 1 < n){
                dp[i+r[j]+1] -= dp[i];
                dp[i+r[j]+1] += mod;
                dp[i+r[j]+1] %= mod;
            }
        }
    }

    cout << dp[n-1] << endl;
    return 0;
}