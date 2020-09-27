#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

long long mod = 1e9 + 7;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<bool> broken(n+1, false);

    for(long long i = 0; i < m; i++){
        long long a;
        cin >> a;
        broken[a] = true;
    }

    vector<long long> dp(n+1, 0);
    dp[0] = 1;

    for(long long i = 0; i <= n; i++){
        dp[i] %= mod;
        if(broken[i] == true) continue;

        if(i-1 >= 0) dp[i] += dp[i-1];
        if(i-2 >= 0) dp[i] += dp[i-2];

        dp[i] %= mod;
    }

    cout << dp[n] << endl;
    return 0;
}