#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long h[n];
    for(long long i = 0; i < n; i++) cin >> h[i];

    vector<long long> dp(n, 1e9);
    dp[0] = 0;
    for(long long i = 0; i < n; i++){
        if(i == 1) dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        else if(i > 1){
            dp[i] = min(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
            dp[i] = min(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
        }
    }

    cout << dp[n-1] << endl;

    return 0;
}