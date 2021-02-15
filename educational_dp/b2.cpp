#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long h[n];
    for(long long i = 0; i < n; i++) cin >> h[i];

    vector<long long> dp(n, 1e9);
    dp[0] = 0;
    for(long long i = 0; i < n; i++){
        for(long long j = 1; j <= k; j++){
            if(i - j >= 0) dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
        }
        //printf("i %lld dp %lld\n", i, dp[i]);
    }

    cout << dp[n-1] << endl;

    return 0;
}